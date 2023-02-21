#include <iostream>
using namespace std;

class Employee {
private:
    // Private attribute
    int salary;

public:
    // Setter
    void setSalary(int s) {salary = s;};

    // Getter
    int getSalary() {return salary;};
};

int main() {
    Employee Leo;
    Leo.setSalary(50000);
    cout << Leo.getSalary();
    return 0;
}

/* Why encapsulation ?
-A good practice to declare class attributes as private
therefore ensures better control of data 'cause individual can
change one part of the code without affecting other parts
-Increased security data
*/
