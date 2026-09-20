#include <iostream>
using namespace std;

class Student
{
private:
    int roll;
    string name;
    string branch;

public:
    void input()
    {
        cout << "Enter Roll Number: ";
        cin >> roll;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Branch: ";
        getline(cin, branch);
    }

    void display()
    {
        cout << "\n----- Student Details -----" << endl;
        cout << "Roll Number : " << roll << endl;
        cout << "Name        : " << name << endl;
        cout << "Branch      : " << branch << endl;
    }
};

int main()
{
    Student s1, s2;

    cout << "Enter details of Student 1:" << endl;
    s1.input();

    cout << "\nEnter details of Student 2:" << endl;
    s2.input();

    s1.display();
    s2.display();

    return 0;
}