#include <iostream>
using namespace std;
int main()
{
int y = 40;
int &ref = y;
cout << "Original value's y: " << y << endl;
ref = 50; 
cout << "Modified value 's y: " << y << endl;
return 0; }