/**
 * @file Pointer19.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Function Pointers and callbacks
 * @version 0.1
 * @date 2022-08-02
 * @since Tuesday; 5:38 AM
 * @copyright Copyright (c) 2022
 */

#include <iostream>
using namespace std;
/*Normal function with parameter*/
void printHello(const char *name){
    cout<<"Hello, I'm"<<endl;
    cout<<name<<endl;
}
/*Function pointer as argument*/
void  argsFunction(void (*ptr)(const char *)){ //This is one kind of prototype
    /*Call-back function that "ptr" points to*/
    ptr("Md Yousuf Ali");
}

/*Normal function without parameter*/
void educationQualification(){
    cout<<"Bachelor of Computer Science and Engineering"<<endl;
}
void degree(void (*ptr)()){
    ptr();
}
int main(int argc, char const *argv[])
{
    /* code */
    system("cls");
    // void (*p)() = printHello;
    // argsFunction(p);
    argsFunction(printHello);
    degree(educationQualification);
    return 0;
}
