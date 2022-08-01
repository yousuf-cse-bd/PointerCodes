/**
 * @file Pointer13.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Pointer and dynamic memory allocation
 * @version 0.1
 * @date 2022-07-31
 * @since Sunday; 11:00 AM
 * @copyright Copyright (c) 2022
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int a; //Goes on stack
    int *p;//Goes on stack
    p = (int*) malloc(sizeof(int)); //Goes on heap
    int value  = 10;
    *p = value;
    printf("%d\n", *p);
    free(p);
    value = 120;
    *p = value;
    printf("%d\n", *p);
    free(p);

    p = (int*)malloc(10 * sizeof(int));

    free(p);


    return 0;
}

