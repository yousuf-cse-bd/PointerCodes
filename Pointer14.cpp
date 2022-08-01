/**
 * @file Pointer14.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Dynamic memory allocation in C - malloc calloc realloc free
 * @version 0.1
 * @date 2022-08-02
 * @since Tuesday; 12: 19 AM
 * @copyright Copyright (c) 2022
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    int n;
    cout<<"Enter nth value here: ";
    cin>>n;
    n = (n < 0)? n*(-1):n;
    int *A = (int*) calloc(n,sizeof(int));
    for(unsigned int i = 0; i<n; i++){
        A[i] = i+1;
    }
    int *B = (int*)realloc(A, 2*n*sizeof(int));
    printf("Previous block address = %d, new address = %d\n", A,B);
    for(unsigned int i = 0; i<2*n; i++){
        cout<<"["<<i<<"] = "<<B[i]<<endl;
    }
    free(A);
    free(B);
    return 0;
}
