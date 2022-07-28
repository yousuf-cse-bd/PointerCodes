/**
 * @file Pointer10.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Character arrays and pointers
 * @version 0.1
 * @date 2022-07-28
 * @since Thursday; 6:31 AM
 * @copyright Copyright (c) 2022
 */

#include <iostream>
using namespace std;
/*Character array traverse without extra variable with pointer*/
void print(char * name){
    while(* name != '\0'){
        cout<<*name;
        name++;
    }
    cout<<endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    char name[] = "YOUSUF";
    print(name);
    return 0;
}
