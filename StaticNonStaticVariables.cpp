/**
 * @file StaticNonStaticVariables.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Static variables go to lower memory bound, normal variables go to upper memory bound
 * @version 0.1
 * @date 2022-09-22
 * @since ThursDay; 11:05 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    cout<<"\tStatic Variables:"<<endl;
    static int num1, num2;
    printf("Address of num1: %d\n", &num1);
    printf("Address of num2: %d\n", &num2);
    
    cout<<"\tNormal Variable:"<<endl;
    int n1, n2;
    printf("Address of n1: %d\n", &n1);
    printf("Address of n2: %d\n", &n2);

    return 0;
}
