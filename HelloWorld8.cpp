#include <iostream>
using namespace std;

// Base Class
class Vehicle {
public:
    string brand = "Ford";
    void honk() {
        cout << "Tuut, tuut! \n";
    }
};
// Derived Class using :
class Car: public Vehicle {
public:
    string model = "Mustang";
};

// Base Class (parent)
class MyClass {
public:
    void myFunction() {
    cout << "Some content in parent class." << endl;
    }
};
// Derived Class (child)
class MyChild: public MyClass {};
// Derived Class (GrandChild)
class MyGrandChild: public MyChild {};

// Multiple inehrence
class SomeClass: public MyGrandChild, public Car {};

int main() {
    Car myCar;
    myCar.honk();
    cout << myCar.brand + ' ' + myCar.model << endl;

    MyGrandChild myObj;
    myObj.myFunction();

    SomeClass someObj;
    someObj.honk();
    someObj.myFunction();
    return 0;
}
