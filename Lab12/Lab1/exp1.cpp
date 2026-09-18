#include <iostream>
using namespace std;

int main()
{
    string name1, name2;
    int roll1, roll2;
    string branch1, branch2;

    // Student 1
    cout << "Enter details of Student 1:" << endl;
    cout << "Name: ";
    getline(cin, name1);

    cout << "Roll Number: ";
    cin >> roll1;
    cin.ignore();

    cout << "Branch: ";
    getline(cin, branch1);

    // Student 2
    cout << "\nEnter details of Student 2:" << endl;
    cout << "Name: ";
    getline(cin, name2);

    cout << "Roll Number: ";
    cin >> roll2;
    cin.ignore();

    cout << "Branch: ";
    getline(cin, branch2);

    // Display details
    cout << "\n----- Student Details -----" << endl;

    cout << "\nStudent 1" << endl;
    cout << "Name   : " << name1 << endl;
    cout << "Roll   : " << roll1 << endl;
    cout << "Branch : " << branch1 << endl;

    cout << "\nStudent 2" << endl;
    cout << "Name   : " << name2 << endl;
    cout << "Roll   : " << roll2 << endl;
    cout << "Branch : " << branch2 << endl;

    return 0;
}
