#include <iostream>
using namespace std;

bool parityAnalysis(int num) {
    int sum = 0, temp = num;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    return (sum % 2 == num % 2);
}

int main() {
    int num;
    cout << "Enter a three-digit number: ";
    cin >> num;
    cout << (parityAnalysis(num) ? "True!!" : "False!!") << endl;
    return 0;
}
