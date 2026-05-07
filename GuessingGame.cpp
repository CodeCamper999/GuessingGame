#include <iostream>
#include <cmath>
#include <random>


using namespace std;


int Guesser(int RealNumber, int UserGuess){
    // I've created a function which checks if the user has answered the question correctly. 

    int infiniteTry;
    // This variable allows the user to try to guess as many times as they would like.
    int UsrTries = 0;
    // This Variable counts how many times it took the user to guess the number.
   

    do{
    // This is a do while loop which only ends if a certain condition is met. 
        
        

        if(RealNumber == UserGuess || infiniteTry == RealNumber){
            // If the user gets the number right the first time or a second time(or more) then execute.
            break;
            // Stops the while loop from continuing
        } else {
            UsrTries++;
            // if the user did not guess right, add 1 everytime this else statement is executed 
            char PlayAgain;
            // This is a variable which only holds one character, this is for the try again option. Giving the user a choice to continue or not. 
            cout << "You have lost. Play again[y, n]? " << endl;
            cin >> PlayAgain;
            // Allows cpp to store the user answer in the "PlayAgain" variable

            if(PlayAgain == 'y' && 'Y'){
                // If What the user inputted is a lowercase y or  upper case then give them another guess
                
                cout << "What number would you like to guess? [" << UsrTries << "]: "; 
                cin >> infiniteTry;
                
                
            } else{ 
                // else if any invalid characters then quit.
                exit(0);

                
            }

        }

        

    } while(infiniteTry != RealNumber);{
        // Execute this script while infiniteTry(This allows cpp to check if the user finally has got it right) is NOT equal to RealNumber(The actual Number)
        // I've added this because if the user has gotten the right number the first time this entire code would not run.
        cout << "You have won the game!! " << endl;
    };
        
    
 


    return 0;
}

int main(){

   random_device Guess;
   // I am making a variable using the random lib. 
   mt19937 gen(Guess());
   // This is a Mersenne Twister random generator of 32-bit numbers 
   uniform_int_distribution<> dist(1,6);
   // This distribution produces random integers in the range we gave in the parameters. 
   // *** All Sources Are At Top Page ***
   
   for (int Num = 0; Num < 1; ++Num){
    // I created another variable called "Num", I then said 
    // for num is equal to zero, check if num is less then 1, if so add 1 to num.
    // cout << dist(gen);


    int Number = dist(gen);
   
    // This is the actual number in order to test the code.

    int Guess;
    cout << "Test: " << Number << ":" << "What number would you like to guess? ";
    cin >> Guess;
    // This is the variable which gets the first user guess. 
    
    Guesser(Number, Guess);
    // I call the guesser function with two arguments."Number which is the number generated", "Guess" which is the number the user guessed    }
   }

    return 0;
}

