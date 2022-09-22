/**
 * @file FunctionPointer3.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Function pointer as parameter
 * @version 0.1
 * @date 2022-09-22
 * @since ThursDay; 07:52 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;

void function1(void){
    cout<<"This is function 1"<<endl;
}

void function2(void){
    cout<<"This is function 2"<<endl;
}
/*A function that receives a simple function as parameter and calls the function*/
void wrapperFunction(void(*functionPointer)()){
    functionPointer();
}
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    wrapperFunction(function1);
    wrapperFunction(function2);
    return 0;
}
