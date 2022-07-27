/**
 * @file Pointer7.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Pointer as function arguments - call by reference
 * @version 0.1
 * @date 2022-07-27
 * @since Wednesday, 9:33 AM
 * @copyright Copyright (c) 2022
 */

#include <iostream>
using namespace std;

void increament(int * n){
    ++*n;
}

int main(int argc, char const *argv[])
{
    /* code */
    system("cls");
    int n = 10;
    increament(&n);
    cout<<n<<endl;
    return 0;
}
