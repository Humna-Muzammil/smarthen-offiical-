#include <iostream>
#include <conio.h>
using namespace std;

string emails[50], passwords[50];
bool isadmin[100] = {false}; 
int totalUsers = 0;

void Menu();
void signUp(string email, string password, bool admin);
bool signIn(string email, string password);
bool isUserPresent(string email);

int main()
{
    cout << "Welcome to the Sign In/Sign Up page!" << endl;

    int choice;
    do
    {
        Menu();
        cin >> choice;

        string email, password;
        bool admin = true;
        switch (choice)
        {
        case 1:
            
            cout << "Sign Up" << endl;
            cout << "Enter your email: ";
            cin >> email;
            cout << "Enter your password: ";
            cin >> password;
            
            if(isUserPresent(email))
            {
                cout << "User already exist s !!!" << endl;
                break;
            }
            
            if (email.find("admin") != string:: npos)
            {
                cout << "Admin account detected. Proceeding as admin." << endl;
                admin = true;
            }
            signUp(email, password, admin);
            break;
        case 2:
            
            cout << "Sign In" << endl;
            cout << "Enter your  admin admin email: ";
            cin >> email;
            cout << "Enter your admin password: ";
            cin >> password;

            signIn(email, password);
            choice = 3; 
            break;
        case 3:
            cout << "Exiting." << endl;
            break;
        default:
            cout << "Invalid " << endl;
        }
        getch();
        system("cls");
    } while(choice != 3);

    return 0;
}

void signUp(string email, string password, bool admin)
{
    emails[totalUsers] = email;
    passwords[totalUsers] = password;
    isadmin[totalUsers] = admin;
    totalUsers++;
    cout << "User register successfully!"<< endl;
}

bool signIn(string email, string password)
{
    for (int i = 0;i <totalUsers; i++)
    {
        if (emails[i] == email && passwords[i] == password)
        {
            if (isadmin[i])
            {
                cout << "Welcome Admin " << emails[i]  << endl;
            }
            else
            {
                cout << "Welcome " << emails[i]  << endl;
            }
            return true;
        }
    }
    cout << "Invalid email or password" << endl;
    return false;
}

bool isUserPresent(string email)
{
    for (int i =0; i<totalUsers; i++)
    {
        if (emails[i]==email)
        {
            return true;
        } 
    }
    return false;
}

void Menu()
{
    cout << "1. Sign Up" << endl;
    cout << "2. Sign In" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice: ";
}
