#include <iostream>
using namespace std;

// Function declaration
void myFunction(string fName, string sName = "Smith");      // Void function return nothing
int sum(int a, int b);
void swapNum(int &a, int &b);
void printArray(int arrayNumber[5]);
// Demonstrate function overloading
int sumFunct(int x, int y);
float sumFunct(float x, float y);
double sumFunct(double x, double y);
// Recursion function (or making a function call itself)
int sum2(int k);


int main() {
    myFunction("Alex");       // Call the function
    myFunction("Samantha", "Brown");

    cout << sum(89, 98) << endl;
    int z = sum(56, 11);
    cout << z << endl;

    int a = 10, b = 67;
    cout << a << ' ' << b << endl;
    swapNum(a, b);
    cout << a << ' ' << b << endl;

    int passingArrayNumber[5] = {10, 20, 25, 45, 50};
    printArray(passingArrayNumber);

    // Function overloading
    cout << sumFunct(89, 78) << endl;
    cout << sumFunct(8.9, 7.9) << endl;
    cout << sumFunct(8.00000001, 1.000000009) << endl;

    // Recursion function example
    int result = sum2(10);      // 10+sum(9) ; 10+(9(sum(8)) ... : 10+9+8+7+6+5+4+3+2+1+sum(0) = 55
    cout << result << endl;

    return 0;
}

// Function definition
void myFunction(string fName, string sName) {
    cout << fName << ' ' << sName << endl;
}

int sum(int a, int b) {
    return a + b;
}

void swapNum(int &a, int &b) {      // Using reference
    int c = a;
    a = b;
    b = c;
}

void printArray(int arrayNumber[5]) {
    for (int i = 0; i<5; i++) {
        cout << arrayNumber[i] << endl;
    }
}

// Function overloading
int sumFunct(int x, int y) {
    cout << "Int : ";
    return x + y;
}

float sumFunct(float x, float y) {
    cout << "Float :";
    return x + y;
}


double sumFunct(double x, double y) {
    cout << "Double : ";
    return x + y;
}

int sum2(int k) {
    if (k > 0) {
        return k + sum2(k-1);
    } else {
        return 0;
    }
}
