#include <iostream>
using namespace std;


// main
int main() {
    // Actual program

    int a, b;
    cout << "Entrez un nombre entier A : " << endl;
    cin >> a;
    cout << "Entrez un nombre entier B : " << endl;
    cin >> b;

    // Basic if, elif, else
    if (a > b) {
        cout << "Le nombre A est superieur au nombre B !" << endl;
    } else if (a == b) {
        cout << "Les nombres A et B sont egaux !" << endl;
    } else {
        cout << "Le nombre B est superieur au nombre A !" << endl;
    }

    // Ternary operator
    int hour;
    cout << "Entrez un nombre entier : " << endl;
    cin >> hour;
    string result = ( hour > 18) ? "Il est au moins de 18h !" : "Il est moins de 18h !";
    cout << result << endl;

    // Use example of switch
    int day;
    cout << "Quel est le numero du jour ? " << endl;
    cin >> day;
    switch (day) {
        case 1 :
            cout << "Monday" << endl;
            break;
        case 2 :
            cout << "Tuesday" << endl;
            break;
        case 3 :
            cout << "Wednesday" << endl;
            break;
        case 4 :
            cout << "Thursday" << endl;
            break;
        case 5 :
            cout << "Friday" << endl;
            break;
        case 6 :
            cout << "Saturday" << endl;
            break;
        case 7 :
            cout << "Sunday" << endl;
            break;
        default :
            cout << "Invalid Number !" << endl;
            // default keyword must be used as the last in switch but don't required a break;
    }

    // Looop example
    int i = 0;
    while (i < 5) {
        cout << i << endl;
        i++;
    }

    // Do/While loop example
    int i1 = 0;
    do {
        cout << i1 << endl;
        i1++;
    }
    while (i1 < 5);

    // For loop example
    for (int i = 0; i < 5; i++) {
        cout << i << endl;
    }
    // Second example
    for (int i = 0; i<=10; i=i+2) {
        cout << i << endl;
    }

    // Could work with while

    // Example with break;
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            break;
        }
        cout << i << endl;
    }
    // And with continue; (Skip the iteration if a specified value occurs)
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            continue;       // will skip 4
        }
        cout << i << endl;
    }


    // End main
    return 0;
}
