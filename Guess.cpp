#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    // declare variables
    int rightAnswer, userAnswer;

    // determine rightAnswer
    bool (time(NULL));
    rightAnswer = (rand() % 100) + 1;

    // begin the game
    cout << "I'm thinking of a number between 1-100!" << endl;
    do{
        // collect data
        cout << "Guess: ";
        cin >> userAnswer;

        // if else statements to determine correctness
        if (userAnswer < 1 || userAnswer > 100)
            cout << "The number is in the range 1-100. Try again!" << endl;
        else if (userAnswer > rightAnswer)
            cout << "Too high! Try again!" << endl;
        else if (userAnswer < rightAnswer)
            cout << "Too low! Try again!" << endl;
        else
            cout << "Good Work" << endl << ":)";


    } while (userAnswer != rightAnswer);
    return 0;
}