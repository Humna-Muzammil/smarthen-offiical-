#include <iostream>
using namespace std;

int main() {
    int arr[5];
    cout << "Enter 5 elements: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    cout << "2nd element: " << arr[1] << endl;
    cout << "4th element: " << arr[3] << endl;

    return 0;
}
