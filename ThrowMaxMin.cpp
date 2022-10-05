/**
 * @file ThrowMaxMin.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Get max and min element using pointer function
 * @version 0.1
 * @date 2022-10-05
 * @since WednesDay; 04:33 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <ctime>
using namespace std;
/*Find max and min value using pointer function*/
int *throwMaxMin(int *luckynumber, const unsigned int size){
    int *getMaxMin = (int*) calloc(2,sizeof(int));
    *getMaxMin = *luckynumber; /*Contains max value*/
    *(getMaxMin+1) = *luckynumber; /*Contains min value*/

    for(unsigned int i = 1; i<size; i++){
        /*Find max value*/
        if(*getMaxMin < *(luckynumber+i)){
            *getMaxMin = *(luckynumber+i);
        }
        /*Find min value*/
        if(*(getMaxMin+1) > *(luckynumber+i)){
            *(getMaxMin+1) = *(luckynumber+i);
        }
    }
    return getMaxMin; /*Return an address*/
    free(getMaxMin);
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    const unsigned int size = 10;
    int luckyNumbers[size];

    srand(time(0));
    cout<<"Number Element Are: ";
    for(unsigned int i = 0; i<size ;i++){
        *(luckyNumbers+i) = rand() % size;
        cout<<*(luckyNumbers+i)<<" ";
    }
    int *getMaxMin = throwMaxMin(luckyNumbers, size);
    cout<<"\nMax Value: "<<*getMaxMin<<endl;
    cout<<"Min Value: "<<*(getMaxMin+1)<<endl;
}
