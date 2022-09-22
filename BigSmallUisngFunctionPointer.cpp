/**
 * @file BigSmallUisngFunctionPointer.cpp
 * @author your name (you@domain.com)
 * @brief Find big and small number using parameterized function pointer
 * @version 0.1
 * @date 2022-09-22
 * @since ThursDay; 08:14 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;

int findBigNumber(int num1, int num2){
    return ((num1 > num2)? num1: num2);
}

int findSmallNumber(int num1, int num2){
    return ((num1 < num2)? num1: num2);
}

int wrapperFunction(int num1, int num2, int (*functionPointer)(int, int)){
    return (*functionPointer)(num1, num2);
}
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    cout<<"The Big Number: "<<wrapperFunction(5, 6, &findBigNumber)<<endl;
    cout<<"The Small Number: "<<wrapperFunction(5, 6, &findSmallNumber)<<endl;
    return 0;
}
