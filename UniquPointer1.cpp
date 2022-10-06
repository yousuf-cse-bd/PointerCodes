/**
 * @file UniquPointer1.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Smart Pointer One
 * @version 0.1
 * @date 2022-10-06
 * @since ThursDay; 10:55 PM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
#include <memory>
using namespace std;

int main(int argc, char const *argv[]){
    /* code */
    system("cls");

    unique_ptr <int> unPtr1 = make_unique <int> (101);
    cout<<*unPtr1<<endl;
    unique_ptr <int> unPtr2 = move(unPtr1);
    cout<<*unPtr2<<endl;
    // system("pause"); /*In console 'Press any key to continue . . .'*/
    system("pause>0"); /*Clear extra line and hold the window*/
    return 0;
}
