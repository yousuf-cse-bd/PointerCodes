/**
 * @file SmartPointer3.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Complicated smart pointers
 * @version 0.1
 * @date 2023-03-06
 * @since MonDay; 05:16 PM
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

unique_ptr <vector <shared_ptr <Test>>> make(void){
	return make_unique<vector<shared_ptr<Test>>>();
}

void fill(vector <shared_ptr <Test>> &vec,const int &num){
	int temp{};
	for(int i{0}; i < num; i++){
		cout<<"Enter data point["<<i<<"]: ";
		cin>>temp;
		shared_ptr <Test> tPtr = make_shared<Test>(temp);
		vec.push_back(tPtr); /*make_shared<Test>(temp)*/
	}
}

void display(const vector <shared_ptr <Test>> &vec){
	cout<<"\nDisplay vector data"<<endl;
	cout<<"--------------------------------------------"<<endl;
	for(const auto &x: vec){
		cout<<x->getData()<<endl;
	}
	cout<<"--------------------------------------------"<<endl;
}

int main(int argc, const char *const argv[]){
	cout.precision(2);cout<<fixed;
	unique_ptr <vector <shared_ptr <Test>>> vecPtr;
	vecPtr = make();
	
	int num{0};
	cout<<"How mamy data points do you want to enter: ";
	cin>>num;
	fill(*vecPtr, num);
	display(*vecPtr);
	cout<<"\t\t\tHappyEnding...!"<<endl;
	return 0;
}
