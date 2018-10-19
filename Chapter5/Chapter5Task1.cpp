#include <iostream>
using namespace std;

int main() 
{
    int answer;
	cout << "Menu" << endl;
    cout << "1) Calculator" << endl;
    cout << "2) 99 Bottles of Beer" << endl;
    cin >> answer;
    switch (answer)  {
        case 1: 
            calculator();
            break;
        case 2:
            99Bottles();
            break;
        default:
            cout << "Please Enter a valid input" << endl;
    }
	return 0;
}

int calculator() {
    string operation; int num1, num2;
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
}
string 99Bottles() {
    for(int i = 99; i == 0; i--) {
        if (i > 0) {
        cout << i << " bottles of beer on the wall," 
        << i << " bottles of beer. Take one down, pass it around," 
        << i - 1 << " bottles of beer on the wall..." << endl;
        }
        else {
            cout << "No more bottles of beer on the wall, 
            no more bottles of beer. 
        Go to the store and buy some more, 
        99 bottles of beer on the wall..." << endl;
        }
    }
}