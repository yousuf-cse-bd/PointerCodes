/**
 * @file SmartPointerChallenge17.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Complicated smart pointer challenge
 * @version 0.1
 * @date 2023-03-06
 * @since MonDay; 05:55 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <vector>
#include <memory>
#pragma pack(1)
using namespace std;

class Test{
private:
	int data{};
public:
	Test(void):data{0}{
		cout<<"\tTest Constructor: ("<<data<<")"<<endl;
	}
	Test(const int &data):data{data}{
		cout<<"\tTest Constructor: ("<<data<<")"<<endl;
	}
	int getData(void) const {
		return data;
	}
	~Test(void){
		cout<<"\t~Test Destructor: ("<<data<<")"<<endl;
	}
};

auto make(void){ /*unique_ptr<vector <shared_ptr<Test>>>*/
	return make_unique<vector<shared_ptr<Test>>>();
}

void fill(vector <shared_ptr<Test>> &vecPtr, const int &size){
	int temp{};
	for(int i{0}; i < size; i++){
		cout<<"Enter data point["<<i<<"]: ";
		cin>>temp;
		vecPtr.push_back(make_shared<Test>(temp));
	}
}

const void display(const vector <shared_ptr<Test>> &vecPtr){
	cout<<"\tDisplay vector data"<<endl;
	cout<<"---------------------------------------"<<endl;
	for(const auto &ptr: vecPtr){
		cout<<ptr->getData()<<endl;
	}
	cout<<"---------------------------------------"<<endl;
}

int main(int argc, const char *const argv[]){
	cout.precision(2);cout<<fixed;
	unique_ptr <vector <shared_ptr <Test>>> vecPtr(make());
	
	int size{0};
	cout<<"How mamy data points do you want to enter: ";
	cin>>size;
	fill(*vecPtr, size);
	display(*vecPtr);
	cout<<"\t\t\tHappyEnding...!"<<endl;
	return 0;
}
