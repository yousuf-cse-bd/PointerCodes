/**
 * @file ArrayCopyHEAP1.js
 * @author: Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Create a copy of an array using heap memory with pointer notation
 * @version 0.1
 * @date 2023-05-16
 * @since TuesDay; 03:23 AM
 * @copyright Copyright (c) 2023
 * @institute: Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
#pragma pack(1)
using namespace std;

int *arrayCopy(const int *myArray, const size_t &size){
    int *copyArray {new int[size]};
    for(size_t i{0}; i < size; i++){
        *(copyArray+i) = *(myArray+i); /*Pointer notation*/
    }

    return copyArray;

    delete[] copyArray;
    copyArray = nullptr;
}

int main(int argc, const char *const argv[]){
    system("cls");
    
    int myArray[] {10, 20, 30, 40, 50};
    const size_t arraySize {size(myArray)};
    
    int *copyArray = arrayCopy(myArray, arraySize);
    for(size_t i{0}; i < arraySize; i++){
        cout<<*(copyArray + i)<<" ";
    }
    cout<<endl;
    return 0;
}