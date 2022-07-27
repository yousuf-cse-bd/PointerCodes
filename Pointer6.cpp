/**
 * @file Pointer6.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Pointer to pointer
 * @version 0.1
 * @date 2022-07-27
 * @copyright Copyright (c) 2022
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    system("cls");
    int x = 5;
    int *p = &x;
    *p = 6;
    int **q = &p;
    int ***r = &q;
    printf("Value at: %d\n", x); // 6
    printf("Address: %d\n", &x); //8125972
    printf("Address: %d\n", p); //8125972
    printf("Value at: %d\n", *p); // 6
    printf("Address: %d\n", *q); //8125972
    printf("Value at: %d\n", *(*q)); //6
    printf("Address: %d\n", *(*r)); //8125972  
    printf("Value at: %d\n", *(*(*r))); //6
    ***r = 10;
    printf("Value at: %d\n", x); // 10
    **q = *p + ***r; // 10 + 10
    printf("Value at: %d\n", x); // 20
    return 0;
}
