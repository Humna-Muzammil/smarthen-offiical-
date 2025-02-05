#include <iostream>
using namespace std;

string checkPassFail(int marks) {
    if (marks > 50)
        return "You are Pass "   " marks";
    else
        return "You are Fail  "   " marks";
}

int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;
    cout << checkPassFail(marks) << endl;
    return 0;
}
