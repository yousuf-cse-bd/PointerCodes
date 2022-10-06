/**
 * @file PurposeOfFunctionPointer.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Optimul codes like custom sorting technique
 * @version 0.1
 * @date 2022-10-06
 * @since 07:38 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <ctime>
using namespace std;

bool ascendingCompare(unsigned int a, unsigned int b){
    return (a > b);
}
bool desscendingCompare(unsigned int a, unsigned int b){
    return (a < b);
}
/*This function performes as wrapper function, and to wrapping by function pointer*/
void bubbleSortWrapperFunction(unsigned int *arrayList, const unsigned int size, bool(*compare)(unsigned int, unsigned int)){
    for(register unsigned int i = 0; i < size-1; i++){
        for(register unsigned int j = i+1; j < size; j++){
            if(compare(*(arrayList+i), *(arrayList+j))){
                swap(*(arrayList+i), *(arrayList+j));
            }
        }
    }
}
void printSortedDatas(unsigned int *arrayList, const unsigned int size){
    cout<<"Sorted Elements: ";
    for(register unsigned int i = 0; i < size; i++){
        cout<<*(arrayList + i)<<" ";
    }
    cout<<endl;
}
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    const unsigned int size = 15;
    unsigned int arrayList[size];
    // = {2, 1, 5, 4, 3};
    cout<<"Inserting elements: ";
    srand(time(0)); /*Random number is changed each time*/
    for(register unsigned int i = 0; i < size; i++){
        // cout<<"Index["<<i<<"]: Element = ";
        // cin>>*(arrayList + i);
        *(arrayList+i) = rand() % size;
        cout<<*(arrayList+i)<<" ";
    }
    cout<<endl;
    bubbleSortWrapperFunction(arrayList, size, ascendingCompare);
    printSortedDatas(arrayList, size);
    bubbleSortWrapperFunction(arrayList, size, desscendingCompare);
    printSortedDatas(arrayList, size);
    return 0;
}
