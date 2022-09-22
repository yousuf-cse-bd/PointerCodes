/**
 * @file FunctionPointer1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Application: function pointer for eliminate switch-case statement (Array notation)
 * @version 0.1
 * @date 2022-09-22
 * @since ThursDay; 05:34 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

double summation(double num1, double num2){
    return (num1 + num2);
}
double subtraction(double num1, double num2){
    return (num1 - num2);
}
double multiplication(double num1, double num2){
    return (num1 * num2);
}
double division(double num1, double num2){
    if(num2 == 0.0){
        cout<<"Infinty..."<<endl;
        exit(0);
    }
    return (num1 / num2);
}
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int option;
    double num1, num2;

    do{
        cout<<"0 for Sum:"<<endl;
        cout<<"1 for Sub:"<<endl;
        cout<<"2 for Mult:"<<endl;
        cout<<"3 for Div:"<<endl;
        cout<<"-1 for Exit:"<<endl;
        
        cin>>option;
        /*Controlling array index out of bounds*/
        if(option < 0 || option > 3){
            cout<<"\tArray Index out of Bounds...!"<<endl;
            exit(0);
        }
        cout<<"Enter num1 here: ";
        cin>>num1;
        cout<<"Enter num2 here: ";
        cin>>num2;
        /*Function pointer with initialized elements as functions*/
        double (*result[])(double, double) = {summation, subtraction, multiplication, division};
        /*Calling a function using array notation*/
        cout<<"\tResult: "<<(result[option])(num1, num2)<<endl;
    }while(true);
    return 0;
}
