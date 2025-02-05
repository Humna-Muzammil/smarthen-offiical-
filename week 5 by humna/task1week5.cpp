#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of riws: ";
    cin >> rows;
    for (int i = 1; i <= rows; i++) {
        
        for (int h = 1; h <= i;h++) {
            cout << "*";
        }
        cout << endl; 
    }
    return 0;
}
