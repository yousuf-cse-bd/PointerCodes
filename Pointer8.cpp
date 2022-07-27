/**
 * @file Pointer8.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Array and pointer
 * @version 0.1
 * @date 2022-07-27
 * @since WednesDay, 10:15 AM
 * @copyright Copyright (c) 2022
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int A[5];
    for(unsigned int i = 0; i<5; i++){
        A[i] = i+1;
    }

    for(unsigned int i = 0; i<5; i++){
        printf("[]Array Syntax, Address: %d\tValue = %d\n", &A[i], A[i]);
        printf("*Pointer Syntax, Address : %d\tValue = %d\n", (A+i), *(A+i));

    }
    return 0;
}
