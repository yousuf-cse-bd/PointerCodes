/**
 * @file UniquePointer2.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Smart Pointer With Class
 * @version 0.1
 * @date 2022-10-06
 * @since ThursDay; 11:11 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <memory>
using namespace std;
#pragma pack(1)
class MyClass{
public:
    MyClass(){
        cout<<"Constructor Invoked."<<endl;
    }
    ~MyClass(){
        cout<<"Destructor Invoked."<<endl;
    }
};

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    /*If no block set then destructor calling after press eneter*/
    {
        unique_ptr <MyClass> unPtr = make_unique <MyClass>();
    }
    system("pause>0");
    return 0;
}
