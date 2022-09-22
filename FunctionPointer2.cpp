/**
 * @file FunctionPointer2.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Function Pointer: to poining a simple function and invocking too 
 * @version 0.1
 * @date 2022-09-22
 * @since ThursDay; 07:31 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

void normalFunction(int number){
    cout<<"The value of: "<<number<<endl;
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    /*To use '&' is optional*/
    void (*functionPointer)(int) = &normalFunction;
    /*Calling the funcion now '*' is also optional*/
    (*functionPointer)(101);
    return 0;
}
