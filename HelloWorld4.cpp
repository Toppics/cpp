#include <iostream>
using namespace std;

int main() {
    // Create structure
    struct {
        int num;
        string txt;
    } myStructure, myStructure1;
    // Assign values
    myStructure.num = 1;
    myStructure.txt = "Hello world !";
    cout << myStructure.num << endl;
    cout << myStructure.txt << endl;

    myStructure1.num = 14;
    myStructure1.txt = "Text";
    cout << myStructure1.num << endl;
    cout << myStructure1.txt << endl;


    // Named Structure == data type
    struct newDataType {
        int num;
        string txt;
    };
    // And use it like
    newDataType myVar;
    myVar.num = 56;
    myVar.txt = "Hello !";

    newDataType myVar2;
    myVar2.num = 90777;
    myVar2.txt = "World";



    // Creating reference with &
    string food = "Pizza";
    string &meal = food;        // Now we can use food or meal to refer to the variable food
    cout << food << endl;
    cout << meal << endl;

    // Memory Address
    string fruit = "Banana";
    cout << &fruit << endl;     // Output something like 0x7dfR9


    // Creating Pointers with *
    string cars = "BMW";
    cout << &cars << endl;

    string* ptr = &cars;        // Stores the memory address as its value
    cout << ptr << endl;

    // Dereference Operator with *
    cout << *ptr << endl;
    cout << *&cars << endl;     // Dumb but work

    *ptr = "VolksWagen";        // Change value
    cout << *ptr << endl;
    cout << ptr << endl;        // But doesn't affect memory address



    return 0;
}
