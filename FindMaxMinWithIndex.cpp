/**
 * @file FindMaxMinWithIndex.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Find max and min element with its index using pointer and reference variable
 * @version 0.1
 * @date 2022-10-05
 * @since WednesDay; 05:10 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;
/*Find max and min element using pointer and reference*/
void findMaxMin(int *numberList, unsigned int size, int *maxValue,  int *minValue, unsigned int &maxIndex, unsigned int &minIndex){
    *maxValue = *minValue = *numberList;
    for(unsigned int i = 1; i<size; i++){
        if(*maxValue < *(numberList+i)){
            *maxValue = *(numberList+i); /*Pointers for values*/
            maxIndex = i; /*Reference for index*/
        }
        if(*minValue > *(numberList+i)){
            *minValue = *(numberList+i);
            minIndex = i;
        }
    }
}
/*Driver code*/
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
    unsigned int maxIndex, minIndex;
    findMaxMin(numberList, size, &maxValue, &minValue, maxIndex, minIndex);
    cout<<"Max Value: "<<maxValue<<" Index: "<<maxIndex<<endl;
    cout<<"Min Value: "<<minValue<<" Index: "<<minIndex<<endl;
    return 0;
}