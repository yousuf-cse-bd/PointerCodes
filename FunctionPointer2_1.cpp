/**
 * @file FunctionPointer2_1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Function Pointer: to poining a simple (No extra symbol) 
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
    cout<<"No extra symbol..."<<endl;
    /*We can remove & at assignment section*/
    void (*functionPointer)(int) = normalFunction;
    /*We can remove * when calling the function*/
    (functionPointer)(101);
    return 0;
}
