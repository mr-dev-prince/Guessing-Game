#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));

    int guess;
    int noOfGuess = 0;
    int highScore;
    int secret = (rand() % 100) + 1;

    while (true)
    {

        cout << "Guess a number between 1-100:" << endl;
        cin >> guess;
        noOfGuess++;

        if (guess == secret)
        {
            cout << "You got it ! :)" << endl;
            cout << "You took " << noOfGuess << " chances to guess." << endl;
            break;
        }
        else if (guess < secret)
        {
            cout << "Enter a greater number" << endl;
        }
        else
        {
            cout << "Enter a smaller number" << endl;
        }
    }

    return 0;
}