#include <iostream>
using namespace std;

int main() {
    cout << "Hello world !" << "\n\n" << "Well.. Again !" << endl;      // endl and \n\n are the same

    int var = 15;
    cout << var << endl;

    double floaT = 1.89;
    floaT = 4.87995;
    cout << floaT << endl;

    char charactere;            // Simple quote for char : 'char'
    charactere = 'x';
    cout << charactere << endl;

    string text = "Hello";      // Double quote for string : "string"
    cout << text << endl;

    bool boolean = false;
    cout << boolean << endl;

    double sum = var + floaT;
    cout << sum << endl;

    int sumInt = var + floaT;
    cout << sumInt << endl;

    int x, y, z = 8;
    x = y = z = 50;
    cout << x + y + z << endl;

    const int minutesPerHour = 60;
    // minutesPerHour = 10;              // Will throw an error : read-only variable
    cout << minutesPerHour << endl;

    int xa;
    cout << "Type a number : ";
    cin >> xa;
    cout << "Your number is : " << xa << endl;

    // display char w/ ASCII values (should search for ASCII Table Reference)
    char a = 78;
    cout << a << endl;

    string firstName = "John";
    string lastName = "Deer";
    string fullName = firstName + " " + lastName;
    cout << fullName << endl;
    cout << firstName.append(" "+lastName) << endl;

    string txt = "MLKJKLJLKJMLJLKJLKPOIP";
    cout << txt.length() << endl;

    cout << fullName[0] << endl;
    fullName[0] = 'M';
    cout << fullName[0] << endl;

    string in;
    cout << "Enter a phrase : " << endl;
    cin >> in;
    cout << in << endl ;            // Print only the first word

    // So we use getline
    string in2;
    cout << "Enter a phrase : \n";
    getline(cin, in2);
    cout << in << endl ;            // Print everything

    int b = 8, n = 89;
    cout << max(b, n) << endl;
    cout << min(b, n) << endl;
    // Boolean Expression
    cout << (b > n) << endl;

    return 0;
}
/* Remember :
The compiler ignores white spaces.
However, multiple lines makes the code more readable.

Size of basic Data types:
    boolean : 1 byte
    char : 1 byte       (Store a single character/letter/number or ASCII values surrounded by single quotes)
    int : 2 or 4 bytes
    float : 4 bytes     (sufficient for 7 decimal digits)
    double : 8 bytes    (sufficient for 15 decimal digits and safer to use for calculations)
    (double and float can store scientific number : 35e3 / 12E4)
*/
