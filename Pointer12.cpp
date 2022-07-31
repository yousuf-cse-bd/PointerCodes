/**
 * @file Pointer12.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Pointer and multi-dimentional arrays
 * @version 0.1
 * @date 2022-07-28
 * @since Thursday; 9:40 AM
 * @copyright Copyright (c) 2022
 */

#include <iostream>
using namespace std;

void function(int (*A)[2][2]){

}
int main(int argc, char const *argv[])
{
    /* code */
    system("cls");
    /*Three Matrix 2 rows and 2 columns*/
    int C[3][2][2] = {{{2, 5},{7, 9},},
                        {{3, 4}, {6, 1}},
                        {{0, 8}, {11, 13}}};

    /*for(unsigned int i = 0; i<3; i++){
        for(unsigned int j = 0; j<2; j++){
            for(unsigned int k = 0; k<2; k++){
                cout<<C[i][j][k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }*/
    int (*p)[2][2] = C;
    printf("Address of C = %d\n", C);
    printf("Address of p = %d\n", p);
    printf("Address of *C = %d\n", *C);
    printf("Address of C[0] = %d\n", C[0]);
    printf("Address of &C[0][0] = %d\n", &C[0][0]);

    function(C);
    return 0;
}
