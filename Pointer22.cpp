/**
 * @file Pointer22.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Function Pointers and callbacks with quick sort
 * @version 0.1
 * @date 2022-08-02
 * @since TuesDay; 10:10 PM
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;

int compare(const void * firstElement, const void * secondElement){
    /*Firstly type-casting void to int, then getting value or de-referencing*/
    int a = (*(int*)firstElement);
    int b = (*(int*)secondElement);
    return a - b; // Increasing order
    // return b - a; // Decreasing order
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int A[] = {-31, 22, -1, 50, -6 ,70, -4};
    unsigned int n = sizeof(A) / sizeof(int);
    qsort(A, n, sizeof(int), compare);
    for(unsigned int i = 0; i<n; i++){
        cout<<"["<<i<<"] = "<<A[i]<<endl;
    }
    return 0;
}
