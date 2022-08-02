/**
 * @file Pointer15.c
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Pointers as function returns not for GCC
 * @version 0.1
 * @date 2022-08-02
 * @since Tuesday; 10:08 AM
 * @copyright Copyright (c) 2022
 */

#include <stdio.h>
/*This compiler (GCC) does not support pointer as function returns*/
int *add(int *num1, int *num2){
    int c = (*num1) + (*num2);

    return &c;
}

int main(int argc, char const *argv[]){
    /* code */
    int num1 = 3, num2 = 2;
    int *ptrResult = add(&num1, &num2);
    printf("Sum of then: %d\n", *ptrResult);
    
    return 0;
}
