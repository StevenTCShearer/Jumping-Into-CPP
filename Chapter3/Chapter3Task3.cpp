#include <iostream>
using namespace std;

int main() 
{   string operation; int num1, num2;
	cout << "Please Enter the Opertation you would like to do (+, -, /, *)" << endl;
    cin >> operation;
    cout << "Enter first number" << endl;
    cin  >> num1;
    cout << "Enter second number" << endl;
    cin  >> num2;

    if(operation == "+") {
        cout << num1 << " + " << num2 << " = " << num1+num2 << endl;
    } else if(operation == "/") {
        cout << num1 << " / " << num2 << " = " << num1/num2 << endl;
    } else if(operation == "-") {
        cout << num1 << " -" << num2 << " = " << num1-num2 << endl;
    } else if(operation == "*") {
        cout << num1 << " * " << num2 << " * " << num1/num2 << endl;
    } else {
        cout << "Please Enter Correct Input" << endl;
    }
	return 0;
}