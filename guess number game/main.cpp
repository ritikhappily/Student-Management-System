#include <iostream>
#include <cstdlib>      // For rand() and srand()
#include <ctime>        // For time() using namespace std;
int main() {
    int number, guess, attempts = 0;     char choice;     do {
        srand(time(0));            // Seed random number generator         number = rand() % 100 + 1; // Random number between 
1 and 100
        attempts = 0;
        cout << 
"\n======================================\n";
        cout << "         GUESS THE NUMBER GAME        \n";         cout << 
"======================================\n";
        cout << "I have selected a number between 1 and 
100.\n";         cout << "Can you guess what it is?\n";
        do {
            cout << "\nEnter your guess: ";
            cin >> guess;             attempts++;
            if (guess > number)
                cout << "Too high! Try again.\n";             else if (guess < number)                 cout << "Too low! Try again.\n";             else
                cout << "🎉 Congratulations! You guessed the number in "
                     << attempts << " attempts.\n";
        } while (guess != number);         cout << "\nDo you want to play again? (y/n): ";         cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    cout << "Thanks for playing! Goodbye!\n";    
    return 0; 
}

