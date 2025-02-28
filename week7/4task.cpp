#include <iostream>
using namespace std;
void modifyWithPointer(int *p)
{
*p = 89;
}
void modifyWithReference(int &r) {
r = 800;
}
int main() {
int a = 10, b = 20;
modifyWithPointer(&a);
modifyWithReference(b);
cout << "Value of a after pointer modification: " << a << endl;
cout << "Value of b after reference modification: " << b <<
endl;
return 0;
}