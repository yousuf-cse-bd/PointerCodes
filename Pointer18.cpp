/**
 * @file Pointer18.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Function Pointers in C/C++ (void)
 * @version 0.1
 * @date 2022-08-02
 * @since TuesDay, 5:27 AM
 * @copyright Copyright (c) 2022
 */

#include <iostream>
using namespace std;
void printHello(string name){
    cout<<"Hello"<<name<<endl;
}
/*Not support in G++*/
int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    void (*ptr)(string);
    ptr = printHello();
    ptr("Yousuf");
    return 0;
}
