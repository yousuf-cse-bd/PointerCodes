/**
 * @file Pointer23Game.cpp
 * @author Md. Yousuf Ali (yousuf.cse17@gmail.com)
 * @brief Simple betting game
 * @version 0.1
 * @date 2022-08-04
 * @since ThursDay, 10:55 AM
 * @copyright Copyright (c) 2022
 * @details Virtual simple betting game
 * "Jack, Queen, King" - computer suffles these cards
 * Player has to guess the position of QUEEN.
 * If he wins, he takes 3*bet.
 * If he loses, he loses  the be amount.
 * Player has 100$ initially
 */ 

#include <iostream>
#include <ctime>
using namespace std;

int cash = 100;

void playGame(int bet){
    // Jack, Queen, King
    char *cards = new (char);
    cards[0] = 'J';
    cards[1] = 'Q';
    cards[2] = 'K';
    cout<<"Suffling..."<<endl;
    /*srand(time(NULL)) -> every value will be change for each time run*/
    srand(time(NULL)); // Seeding random number generator
    for(unsigned int i = 0; i<5; i++){
        /*x,y will be is less than 3*/
        int x = rand() % 3;
        int y = rand() % 3;
        cout<<"X = "<<x<<"\tY = "<<y<<endl;
        // swap(cards[x], cards[y]);
        /*Swaps characters at position x and y*/
        int tmp = cards[x];
        cards[x] = cards[y];
        cards[y] = tmp;
    }
    int playerGuess;
    cout<<"What's the position of QUEEN - 1, 2, 3: ?";
    cin>>playerGuess;
    if(cards[playerGuess - 1] == 'Q'){
        cash += 3 * bet;
        cout<<"You win! Result = "<<cards[0]<<" "<<cards[1]<<" "<<cards[2]<<" Cash = "<<cash<<endl;
    }
    else{
        cash -= bet;
        cout<<"You lose! Result = "<<cards[0]<<" "<<cards[1]<<" "<<cards[2]<<" Cash = "<<cash<<endl;
    }
    delete(cards);
}
int main(int argc, char const *argv[]){
    /* code */
    system("cls");

    int bet;
    while(cash > 0){
        cout<<"What's your bet amount$: ?";
        cin>>bet;
        if(bet == 0 || bet > cash){
            break;
        }
        playGame(bet);
        cout<<"\n***************************************************"<<endl;
    }
    return 0;
}
