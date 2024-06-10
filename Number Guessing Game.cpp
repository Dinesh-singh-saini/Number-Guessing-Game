#include <iostream>
#include <ctime>
using namespace std;

int main() {
    unsigned int guess, num, chance = 3;
    srand(unsigned(time(NULL)));
    num = rand() % 10 + 1;

    do {
        cout << "You have " << chance << " chances left to win!" << endl;
        cout << "Guess a number between 1 to 10: " << endl;
        cin >> guess;

        if (num < guess)
            cout << "You guessed higher!" << endl << endl;
        else if (num > guess)
            cout << "You guessed lower!" << endl << endl;
        else {
            cout << "You won! Congratulations!" << endl;
            return 0;
        }
        chance--;
    } while (chance != 0);
    cout << "You lose! The correct number was " << num << "." << endl;

    return 0;
}
