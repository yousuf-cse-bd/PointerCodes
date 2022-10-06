/**
 * @file TwoD_DynamicArray.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief We can not declared constant variable as array size in dynamic array
 * @version 0.1
 * @date 2022-10-06
 * @since ThursDay; 09:04 AM
 * @copyright Copyright (c) 2022
 * Dept. of CSE, Varendra University, Rajshahi, Bangladesh
 */
#include <iostream>
using namespace std;

#pragma pack(1)

class TowD_DynamicArray{
private:
/*We can not declared constant variable as array size in dynamic array*/
    unsigned int rows, columns;
    int **table;
public:
    TowD_DynamicArray(unsigned int rows, unsigned int columns){
        this->rows = rows;
        this->columns = columns;
        table = new int*[rows];
        for(unsigned int i = 0; i<rows; i++){
            *(table+i) = new int[columns]; /*table[i] = new int[columns];*/
        }
    }
    void insertingElements(void);
    void showingElements(void);
    ~TowD_DynamicArray(){
        for(unsigned int i = 0; i<rows; i++){
            delete[] *(table+i); /*delete [] table[i]*/
        }
        delete[] table;
        table = nullptr;
    }
};

void TowD_DynamicArray :: showingElements(void){
    cout<<"Printing 2D Array:"<<endl;
    for(unsigned int i = 0; i<rows; i++){
        for(unsigned int j = 0; j < columns; j++){
            /*Pointer notation of the 2D array*/
            cout<<*(*(table+i)+j)<<"\t";
        }
        cout<<endl;
    } 
}

void TowD_DynamicArray :: insertingElements(void){
    cout<<"Inserting element:"<<rows<<"x"<<columns<<":"<<endl;
    for(unsigned int i = 0; i<rows; i++){
        for(unsigned int j = 0; j < columns; j++){
            /*Pointer notation of the 2D array*/
            cin>>*(*(table+i)+j);
        }
    }
}

int main(int argc, char const *argv[]){
    /* code */
    system("cls");
    unsigned int rows, columns;
    cout<<"Enter row here: ";
    cin>>rows;
    cout<<"Enter columns here: ";
    cin>>columns;

    TowD_DynamicArray *towD = new TowD_DynamicArray(rows, columns);
    towD->insertingElements();
    towD->showingElements();
    delete towD;
    towD = nullptr;
    return 0;
}



