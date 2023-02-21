#include <iostream>
using namespace std;

// Create a class
class MyClass {
private:                                // Access Specifier
    int k;
public:                                 // Access Specifier
    MyClass();                          // The constructor : same name as Class; always in public; and no return value
    MyClass(string text);
    int myNum;
    string myString;
    void myMethod();
    int myFunction(int age);
};

MyClass::MyClass() {
    cout << "Start !" << endl;
}

MyClass::MyClass(string text) {
    cout << text << endl;
}

void MyClass::myMethod() {              // Use :: to define Method/function outside class
    cout << "Hello World!" << endl;
}

int MyClass::myFunction(int age) {
    return age;
}

int main() {
    MyClass myObj;                      // Create object
    myObj.myNum = 15;
    myObj.myString = "Text";

    myObj.myMethod();
    int &num = myObj.myNum;
    cout << num << endl;
    cout << myObj.myString << endl;
    cout << myObj.myFunction(103) << " ans" << endl;

    MyClass myObj2("Some constructor passed by here");
    myObj2.myNum = 67;
    int &num2 = myObj2.myNum;
    cout << num2 << endl;

    return 0;
}
