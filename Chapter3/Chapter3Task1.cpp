#include <iostream>
using namespace std;

int main() 
{
    int person1Age, person2Age;
	cout << "Please enter the age of the first person" << endl;
    cin >> person1Age;
    cout << "Please enter the age of the second person" << endl;
    cin >> person2Age;

    if(person1Age > person2Age && person1Age < 100) {
        cout << "The first person is older than the second one!\n";
    } else if (person1Age < person2Age && person2Age < 100) {
        cout << "The first person is younger than the second one!\n";
    } else if (person1Age == person2Age) {
        cout << "Both people are the same age!\n";
    } else {
        cout << "Congrats on being over 100!\n";
    }

	return 0;
}