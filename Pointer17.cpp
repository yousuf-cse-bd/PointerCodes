/**
 * @file Pointer17.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Function Pointers in C/C++
 * @version 0.1
 * @date 2022-08-02
 * @since TuesDay, 11:13 AM
 * @copyright Copyright (c) 2022
 */

#include <iostream>
using namespace std;
int add(int num1, int num2){
    return (num1 + num2);
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int sum;
    /*Pointer to function that should take (int, int)
    as argument/parametr and return int*/
    int (*p)(int, int);
    p = &add;
    sum = (*p)(2, 3); // De-referencing and executing the function
    cout<<sum<<endl;
    return 0;
}
