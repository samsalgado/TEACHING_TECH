#include <iostream>

using namespace std;

int main()
{
    int numberOfAttempts = 0;
    int theNumberToGuess = 0;
    int currentGuess = 0;
    cout<<"Welcome to Game"<<endl<<endl;
    cout<<"Player 1: Select a number:"<<endl;
    cin>>theNumberToGuess;
    while(true){
        cout<<"Player 2, guess the number:"<<endl;
        cin>>currentGuess;
        if(currentGuess>theNumberToGuess){
            cout<<"Try again, number too high"<<endl;
        }
        else if(currentGuess<theNumberToGuess){
            cout<<"WRONG, number too low"<<endl;
        }
        else{
            cout<<"CORRECT";
            break;
        }
    }

}
