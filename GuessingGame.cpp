#include <iostream>
#include <cmath>
#include <random>
/*              ***Last Update May 9th 2026***
FreeCodeCamp: https://www.youtube.com/watch?v=vLnPwxZdW4Y
   Github: https://github.com/CodeCamper999
   Random : https://cplusplus.com/reference/random/uniform_int_distribution/#google_vignette
*/



using namespace std;


int Guesser(int RealNumber, int UserGuess){
    // I've created a function which checks if the user has answered the question correctly. 


    
    int UsrTries = 0;
    int guesslimit = 5;
    int guesscount = 5;

    guesscount-=1;
   

   

    do{
        // This is a do while loop which only ends if a certain condition is met. 

        if(RealNumber == UserGuess){
            // If the user gets the number right the first time or a second time(or more) then execute.
            cout << "You have won the game" << endl;
            return 0;
            // Stops the while loop from continuing
        } 

        if(RealNumber != UserGuess && UsrTries >= guesslimit){
            cout << "You have ran out of guesses...";
            return 0;

            // ends program once user runs out of guesses. 
           
        }   

        
        cout << "[*** " << guesscount <<  " Guesses Left***]" << endl;
        // This lets the user know how many guesses they have. 
       

            
        UsrTries+=1;
        // This increase everytime the user tries to guess
        guesscount-=1;
        // This decrease showing the user how many guesses they have left(not really needed)
        cout << "What number would you like to guess?" << UsrTries << " : ";

        cin >> UserGuess;
        // this gets the User answer again and starts the loop over checking if they got the answer right first. 

        

    }while(UserGuess != RealNumber);
    // Execute this script while the User guess is not equal to the Real Number=
    cout << "You have won the game!! " << endl;

    return 0;

}

int main(){

   random_device rd;
   // I am making a variable using the random lib. 
   mt19937 gen(rd());
   // This is a Mersenne Twister random generator of 32-bit numbers 
   uniform_int_distribution<> dist(1,6);
   // This distribution produces random integers in the range we gave in the parameters. 
   // *** All Sources Are At Top Page ***
   


    int Number = dist(gen);
   
    // This is the actual number in order to test the code.

    int Guess;
    cout << "Test: " << Number << ":" << "What number would you like to guess?(You have 5 guesses) ";
    cin >> Guess;
    // This is the variable which gets the first user guess. 
    
    Guesser(Number, Guess);
    // I call the guesser function with two arguments."Number which is the number generated", "Guess" which is the number the user guessed    }
   

    return 0;
}
