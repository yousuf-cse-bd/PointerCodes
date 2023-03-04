/**
 * @file SmartPointer1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Unique pointer is not support copy constructor
 * @version 0.1
 * @date 2023-03-04
 * @since SaturDay; 04:30 PM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <memory>
#pragma pack(1)
using namespace std;

class Test{
private:
	string name{};
public:
	Test(void) = default;
	Test(const string_view &name):name{name}{
		cout<<"Constructor for: "<<name<<endl;
	}
	~Test(void){
		cout<<"~Destructor for: "<<name<<endl;
	}
};

int main(int argc, const char *const argv[]){
	cout.precision(2);cout<<fixed;
	unique_ptr <Test> t1 {new Test{"test1"}};
	
	unique_ptr <Test> t2 {new Test{"test2"}};
	
	unique_ptr <Test> t3 = make_unique<Test>("test3");
	
	unique_ptr <Test> t4;
//	t4 = t1; /*Copy constructor not allowed*/
	t4 = move(t1);
	
	cout<<"\t\t\tHappyEnding...!"<<endl;
	return 0;
}
