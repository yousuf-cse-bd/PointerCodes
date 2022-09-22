/**
 * @file FunctionPointerQuickSort.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Function pointer as a example quick-sort
 * @version 0.1
 * @date 2022-09-22
 * @since ThursDay; 09:00 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
#include <ctime>
using namespace std;
/*Descending order*/
int compare(const void *a, const void *b){
    return (*(int*)b - *(int*)a );
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    srand(time(0));
    int n = 20, randomElement;
    int Array[n];
    cout<<"Before sorting: ";
    for(register unsigned short int i = 0; i<n; i++){
        randomElement = rand() % n;
        *(Array+i) = randomElement;
        cout<<*(Array+i)<<" ";
    }
    qsort(Array, n, sizeof(int), compare);
    cout<<"\nAfter sorting: ";
    for(register unsigned int i = 0; i<n; i++){
        cout<<*(Array+i)<<" ";
    }
    cout<<endl;
    return 0;
}
