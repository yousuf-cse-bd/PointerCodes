/**
 * @file Pointer3.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Pointer arithmetic and increment or decrement supported
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
    int a = 10;
    int *p;
    p = &a;
    cout<<"Address p is: "<<p<<endl;
    cout<<"Value at address *p is: "<<*p<<endl;
    cout<<"Address ++p is: "<<--p<<endl;
    cout<<"Addres p+1 is: "<<p+2<<endl;
    cout<<"Addres at address *(p+2) is: "<<*(p+2)<<endl;
    return 0;
}
