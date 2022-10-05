/**
 * @file MaxMinSingleFunction.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Finding max and min number from a single function using reference variable
 * @version 0.1
 * @date 2022-10-05
 * @since WednesDay; 09:23 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <ctime>
using namespace std;
/*Proper used of reference variable*/
void findMaxMin(int *luckyNumbers, const unsigned int n, int &maxNumber, int &minNumber){
    maxNumber = *luckyNumbers;
    minNumber = *luckyNumbers;

    for(unsigned int i = 1; i<n; i++){
        if(maxNumber < *(luckyNumbers+i)){
            maxNumber = *(luckyNumbers+i);
        }
        if(minNumber > *(luckyNumbers+i)){
            minNumber = *(luckyNumbers+i);
        }
    }
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    const unsigned int n = 10;
    int maxNumber, minNumber, luckyNumbers[n];

    srand(time(0));
    cout<<"Number Element Are: ";
    for(unsigned int i = 0; i<n ;i++){
        *(luckyNumbers+i) = rand() % n;
        cout<<*(luckyNumbers+i)<<" ";
    }
    cout<<endl;
    findMaxMin(luckyNumbers, n, maxNumber, minNumber); /*maxNumber, minNumber as used reference*/
    cout<<"Max Number: "<<maxNumber<<endl;
    cout<<"Min Number: "<<minNumber<<endl;
    return 0;
}
