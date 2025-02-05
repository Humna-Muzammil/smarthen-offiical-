#include <iostream>
using namespace std;

void printUpperPart(int n) {
    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        
        cout << endl;
    }
}

void printLowerPart(int m) {
    for (int i = m - 1; i >= 1; i--) {
        
        for (int h = 1; h <= m - i;h++) {
            cout << " ";
        }
        
        for (int H = 1; H <= 2 * i - 1; H++) {
            cout << "*";
        }
        
        cout << endl;
    }
}

int main() {
    int n, m;


    cout << "Enter the number of asterisks for the upper part: ";
    cin >> n;
    cout << "Enter the number of asterisks for the lower part: ";
    cin >> m;
    printUpperPart(n);
    printLowerPart(m);

    return 0;
}
