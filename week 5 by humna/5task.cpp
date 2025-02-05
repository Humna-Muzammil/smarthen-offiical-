#include <iostream>
using namespace std;
int triangularNumber(int n) {
    return (n * (n + 1)) / 2;
}

int main() {
    int n;
    std::cout << "Enter the triangle number: ";
    std::cin >> n;
    std::cout << "The number of dots in the " << n <<  triangularNumber(n) << std::endl;
    return 0;
}