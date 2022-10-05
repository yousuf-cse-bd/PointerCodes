/**
 * @file FindMaxMinUsingPointer.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Find max and min element using pointer
 * @version 0.1
 * @date 2022-10-05
 * @since WednesDay; 05:00 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;
/*Find max and min element using pointer*/
void findMaxMin(int *numberList, unsigned int size, int *maxValue,  int *minValue){
    *maxValue = *minValue = *numberList;
    for(unsigned int i = 1; i<size; i++){
        if(*maxValue < *(numberList+i)){
            *maxValue = *(numberList+i);
        }
        if(*minValue > *(numberList+i)){
            *minValue = *(numberList+i);
        }
    }
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    unsigned int size = 5;
    int numberList[size];
    for(unsigned int i = 0; i < size; i++){
        cout<<"Index["<<i<<"]: Element = ";
        cin>>*(numberList+i);
    }
    int maxValue, minValue;
    findMaxMin(numberList, size, &maxValue, &minValue);
    cout<<"Max Value: "<<maxValue<<endl;
    cout<<"Min Value: "<<minValue<<endl;
    return 0;
}
