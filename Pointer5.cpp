/**
 * @file Pointer5.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Void pointer - generic pointer
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
    int a = 2025;
    int *p;
    p = &a;
    cout<<"Size of integer is: "<<sizeof(int)<<endl;
    printf("Address: %d\tValue: %d\n", p, *p);
    /*Void pointer - Generic pointer*/
    void *p0;
    p0 = p;
    printf("Address: %d\n", p0);
    return 0;
}
