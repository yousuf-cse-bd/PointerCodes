/**
 * @file Pointer1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Dereferencing
 * @version 0.1
 * @date 2022-07-26
 * @since Tuesday, 5:07 PM
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
    p = &a;
    a = 10;
    cout<<"Before modification, a = "<<a<<endl;

    *p = 20;
    cout<<"After modification, a = "<<a<<endl;
    return 0;
}
