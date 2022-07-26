/**
 * @file Pointer4.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Memory value typecasting by character pointer
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
    int a = 1025; // 1KB + 1bit
    int *p;
    p = & a;
    cout<<"Size of integer is: "<<sizeof(int)<<endl;
    cout<<"Address of p: "<<p<<"\tAnd Value: "<<*p<<endl;
    cout<<"Address of p: "<<p+1<<"\tAnd Value: "<<*(p+1)<<endl;
    char *p0;
    p0 = (char*)p; //Typecasting
    cout<<"Size of char is: "<<sizeof(char)<<endl;
    cout<<"Address: "<<p0<<"\tValue: "<<*p0<<endl;
    // cout<<"Address: "<<p0+1<<"\tValue: "<<*(p0+1)<<endl;
    printf("Address:%d\tValue: %d\n", p0, *p0);
    printf("Address:%d\tValue: %d\n", p0+1, *(p0+1));
    // 1025 = 00000000 00000000 00000100 00000001
    return 0;
}
