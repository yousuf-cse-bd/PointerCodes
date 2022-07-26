/**
 * @file Pointer2.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Two variable single pointer
 * @version 0.1
 * @date 2022-07-26
 * @copyright Copyright (c) 2022
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    system("cls");
    int a;
    int *p;
    a = 10;
    p = &a; // &a = address of a
    
    cout<<"Address of p is: "<<p<<endl;
    cout<<"Value at p is: "<<*p<<endl;
    int b = 20;
    *p = b; //Will the address in p change to point b??
    cout<<"Address of p is: "<<p<<endl;
    cout<<"Value at p is: "<<*p<<endl;

    return 0;
}
