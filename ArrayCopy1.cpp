/**
 * @file ArrayCopy1.js
 * @author: Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Create a copy of an array using pointer variable 
 * @version 0.1
 * @date 2023-05-16
 * @since TuesDay; 03:09 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
#pragma pack(1)
using namespace std;

void display(const int *myArray, const size_t &size){
    for(size_t i{0}; i < size; i++){
        cout<<*(myArray + i)<<" ";
    }
    cout<<endl;
}

int main(int argc, const char *const argv[]){
    system("cls");
    
    int myArray[] {10, 20, 30, 40, 50};
    const size_t arraySize {size(myArray)};
    display(myArray, arraySize);

    int *copyArray {myArray};
    
    for(size_t i{0}; i < arraySize; i++){
        cout<<*(copyArray + i)<<" ";
    }
    cout<<endl;

    return 0;
}