
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name[3];
    int rollNumber[3];
    float gpa[3];

    for (int i = 0; i < 3; i++) {
        cout << "\nEnter information of student " << i + 1 << endl;

        cout << "Enter name: ";
        getline(cin >> ws, name[i]);

        cout << "Enter roll number: ";
        cin >> rollNumber[i];

        cout << "Enter GPA: ";
        cin >> gpa[i];
    }

    cout << "\n----- Student Records -----\n";

    for (int i = 0; i < 3; i++) {
        cout << "\nName: " << name[i] << endl;
        cout << "Roll Number: " << rollNumber[i] << endl;
        cout << "GPA: " << gpa[i] << endl;
    }

    return 0;
}

