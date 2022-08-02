/**
 * @file Pointer20.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Application of function pointers and callbacks
 * @version 0.1
 * @date 2022-08-02
 * @since TuesDay; 6:46 PM
 * @copyright Copyright (c) 2022
 */

#include <iostream>
using namespace std;
/*Callback function should compare two integers,
shuld return 1 if firs element is higer rank,
0 if elements are equal and -1 if second element has higher rank*/
/*Call-back function: int compare(int, int)*/
int compare(int firstElement, int secondElement){
    // static int counter;
    // cout<<counter++<<endl;
    if(firstElement > secondElement){
        return 1;
    }
    else{
        return -1;
    }
}
/*Bubble sort optimal solution*/
void bubbleSort(int * A, unsigned int *n, int (*compare)(int, int)){
    bool swappedStatus = true;
    for(unsigned int i = 0; i<*n-1 && swappedStatus == true; i++){
        swappedStatus = false;
        for(unsigned int j = 0; j<*n - (i+1); j++){
            if(compare(*(A+j) , *(A+j+1)) > 0){
                swap(*(A+j), *(A+j+1));
                swappedStatus = true;
            }
        }
    }
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int A[] = {3, 2, 1, 5, 6 ,7, 4};
    unsigned int n = sizeof(A) / sizeof(int);

    bubbleSort(A, &n, compare);
    for(unsigned int i = 0; i<n; i++){
        cout<<"["<<i<<"] = "<<A[i]<<endl;
    }
    return 0;
}
// unsigned int sum1(int *A, unsigned int *n){
//     unsigned int sum = 0;
//     for(unsigned int i = 0; i<*n; i++){
//         sum += *(A+i);
//     }
//     return sum;
// }
// unsigned int sum2(int A[], unsigned int n){
//     unsigned int sum = 0;
//     for(unsigned int i = 0; i<n; i++){
//         sum += A[i];
//     }
//     return sum;
// }
