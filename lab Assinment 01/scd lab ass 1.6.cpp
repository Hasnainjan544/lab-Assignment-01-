
#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int searchValue;
    int position = -1;

    cout << "Enter 10 array elements:\n";

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    cout << "Enter value to search: ";
    cin >> searchValue;

    for (int i = 0; i < 10; i++) {
        if (arr[i] == searchValue) {
            position = i;
            break;
        }
    }

    if (position != -1) {
        cout << "Value found at position: "
             << position + 1 << endl;
    }
    else {
        cout << "Value not found in the array." << endl;
    }

    return 0;
}

