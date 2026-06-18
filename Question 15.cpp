#include <iostream>
using namespace std;

int main() {
    float num1, num2, larger;
    
    cout << "Enter two floating-point numbers: ";
    cin >> num1 >> num2;

    // Syntax: condition ? value_if_true : value_if_false;
    larger = (num1 > num2) ? num1 : num2;

    cout << "The larger number is: " << larger << endl;
    return 0;
}