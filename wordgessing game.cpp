#include <iostream>
#include <string>
#include <ctime>
#include<cstdlib>
using namespace std;
string chooseRandomWord();
int main() {
    srand(time(0));
    string secretWord = chooseRandomWord();
    string guessedWord(secretWord.length(), '_');
    int maxAttempts = 6;
    cout << "Welcome to Hangman!" << endl;
    while (maxAttempts > 0) {
        cout << "Attempts left: " << maxAttempts << endl;
        cout << "Current word: " << guessedWord << endl;
        cout << "Guess a letter: ";
        char guess;
        cin >> guess;
        int flag= 0;
        for (int i = 0; i < secretWord.length(); i++)
         {
            if (secretWord[i] == guess) 
            {
                guessedWord[i] = guess;
                flag= 1;
            }
        }
        if (!flag) 
        {
            cout << "Incorrect guess!" << endl;
            maxAttempts--;
        } else 
        {
            cout << "Correct guess!" << endl;
        }
        if (guessedWord == secretWord)
         {
            cout << "Congratulations! You guessed the word: " << secretWord << endl;
            break;
        }
    }
    if (maxAttempts == 0) 
    {
        cout << "Sorry, you ran out of attempts. The word was: " << secretWord << endl;
    }
    return 0;
}
string chooseRandomWord() 
{
    string Word[] = {"blade", "boxer", "bike", "Moter", "King","Zink","Cartoon","kiani"};
    int randomIndex = rand() % 5;
    return Word[randomIndex];
}


