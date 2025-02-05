#include <iostream>
using namespace std;

bool greaterNumber(int a, int b) {
    return a > b;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << (greaterNumber(num1, num2) ? "True!!!" : "False!!!") << endl;
    return 0;
}
