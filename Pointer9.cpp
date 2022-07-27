/**
 * @file Pointer9.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Arrays as function arguments
 * @version 0.1
 * @date 2022-07-27
 * @since WednesDay, 10:38 AM
 * @copyright Copyright (c) 2022
 */

#include <iostream>
using namespace std;
/*Sum of them, array style*/
unsigned int sumOfElements1(unsigned int  A[], unsigned int n){
    unsigned int sum = 0;
    for(unsigned int i = 0; i<n; i++){
        sum += A[i];
    }
    return sum;
}

/*Sum of them, pointer style*/
unsigned int sumOfElements2(unsigned int * A, unsigned int n){
    unsigned int sum = 0;
    for(unsigned int i = 0; i<n; i++){
        sum += *(A+i);
    }
    return sum;
}
/*make to double elements*/
void toDoubleElements(unsigned int * A, unsigned int n){
    for(unsigned int i = 0; i<n; i++){
        /*Left side POINTER style = Right side ARRAY style*/
        *(A+i) = 2*A[i];
    }
}
int main(int argc, char const *argv[])
{
    /* code */
    system("cls");
    unsigned int A[5];
    for(unsigned int i = 0; i<5; i++){
        *(A+i) = i+1;
    }
    unsigned int total = sumOfElements1(A, 5);
    cout<<"Sum of them1: "<<total<<endl;
    total = sumOfElements2(A, 5);
    cout<<"Sum of them2: "<<total<<endl;
    toDoubleElements(A, 5);
    for(auto x : A){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
