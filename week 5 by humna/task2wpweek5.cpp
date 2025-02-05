#include <iostream>
using namespace std;

void printFibonacci(int n) {
    int a = 1, b = 2, next;

    cout << "Fibonaci Series: ";
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            cout << a << " ";
        } else if (i == 2) {
            cout << b << " ";
        } else {
            next = a + b;
            a = b;
            b = next;
            cout << next << " ";
        }
    }
    cout << endl;
}

int main() {
    int length;

    
    cout << "Enter the length of the Fibonaci series: ";
    cin >> length;

    
    printFibonacci(length);

    return 0;
}