#include <iostream>
using namespace std;

int main() {
    // C++ Arrays (typically list in python but must specify type & size(not actually but better, else overwrite at every change))
    string cars[4] = {"PSA", "Renault", "DS", "Citroen"};
    cout << cars[3] << endl;

    int number[3] = {5, 10, 15};
    number[0] = 25;
    cout << number[0] << endl;

    for (int i; i < 4; i++) {
        cout << i << ": " << cars[i] << endl;
    }

    // can omit element 'cause space are reserved
    int bus[8] = {1, 2, 4, 5, 8};
    cout << bus[7] << endl;

    // Get the size of an array
    int myNumber[3] = {1, 2, 989789};
    cout << sizeof(myNumber) << endl;       // 3 int = 3*4 bites
    cout << "Number of elements : " << sizeof(myNumber)/sizeof(int) << endl;

    // Multidimensional array (array of arrays)
    char letters[2][5] = {
        {'A', 'B', 'C', 'D', 'E'},
        {'F', 'G', 'H', 'I', 'J'}
    };
    cout << letters[1][3] << endl;
    letters[1][3] = 'Z';
    cout << letters[1][3] << endl;

    char Letters[2][2][2] = {
        {
            {'A', 'B'},
            {'C', 'D'}
        },
        {
            {'E', 'F'},
            {'G', 'H'}
        }
    };
    cout << Letters[0][1][1] << endl;
    for (int i = 0; i < 2; i++) {
        for(int j=0; j<2; j++) {
            for(int k =0; k<2; k++) {
                cout << Letters[i][j][k];
            }
        }
    }

    // We put "1" to indicate there is a ship.
    bool ships[4][4] = {
      { 0, 1, 1, 0 },
      { 0, 0, 0, 0 },
      { 0, 0, 1, 0 },
      { 0, 0, 1, 0 }
    };

    // Keep track of how many hits the player has and how many turns they have played in these variables
    int hits = 0;
    int numberOfTurns = 0;

    // Allow the player to keep going until they have hit all four ships
    while (hits < 4) {
      int row, column;

      cout << "Selecting coordinates\n";

      // Ask the player for a row
      cout << "Choose a row number between 0 and 3: ";
      cin >> row;

      // Ask the player for a column
      cout << "Choose a column number between 0 and 3: ";
      cin >> column;

      // Check if a ship exists in those coordinates
      if (ships[row][column]) {
        // If the player hit a ship, remove it by setting the value to zero.
        ships[row][column] = 0;

        // Increase the hit counter
        hits++;

        // Tell the player that they have hit a ship and how many ships are left
        cout << "Hit! " << (4-hits) << " left.\n\n";
      } else {
        // Tell the player that they missed
        cout << "Miss\n\n";
      }

      // Count how many turns the player has taken
      numberOfTurns++;
    }

    cout << "Victory!\n";
    cout << "You won in " << numberOfTurns << " turns";

    return 0;
}
