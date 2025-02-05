#include <iostream>
using namespace std;

int main() {
    int rows;

   
    cout << "Enter the number of rows: ";
    cin >> rows;

    
    for (int i = rows; i > 0; i--) {
        
        for (int h = 0; h < i; h++) {
            cout << "*";
        }
        cout << endl; 
    }

    return 0;
}
