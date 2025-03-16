#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>  

using namespace std;

struct Product {
    string name;
    float price;
};

Product products[100];
int totalProducts = 0;

void AdminMenu();
void addProduct();
void changePrices();
void deliveryMenu();

void adminLogin() {
    string adminUsername = "admin";
    string adminPassword = "admin123";
    string username, password;

    cout << "WELCOME TO ONLINE SHOPPING BY HUMNA \n";
    cout << "\nAdmin Login\n";
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if (username == adminUsername && password == adminPassword) {
        cout << "Login successful! Welcome, Admin.\n";
        AdminMenu();
    } else {
        cout << "Invalid PASSWORD!\n";
    }
}

string generateOTP() {
    srand(time(0));  
    string otp = "";
    
    for (int i = 0; i < 4; i++) {
        otp += '0' + rand() % 10;  
    }
    
    return otp;
}  

void sendOTP(string otp) {
    cout << "Your OTP is: " << otp << " (Use this to log in)\n";
}

void otpLogin() {
    string generatedOTP = generateOTP();
    sendOTP(generatedOTP);

    string userOTP;
    cout << "Enter the OTP received: ";
    cin >> userOTP;

    if (userOTP == generatedOTP) {
        cout << "Login Successful! Welcome to your account.\n";
    } else {
        cout << "Invalid OTP! Please try again.\n";
    }
}

void userLogin() {
    string userUsername = "user";
    string userPassword = "user123";
    string username, password;

    cout << "WELCOME TO ONLINE SHOPPING BY HUMNA \n";
    cout << "\nUser Login\n";
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if (username == userUsername && password == userPassword) {
        cout << "Login successful! Welcome User\n";
    } else {
        cout << "Invalid login!\n";  
    }
}

void AdminMenu() {
    int option;
    do {
        cout << "\nWHAT WOULD YOU LIKE TO DO?\n";
        cout << "1- Add new product\n";
        cout << "2- Change prices\n";
        cout << "3- Delivery menu\n";
        cout << "4- Exit Admin Menu\n";
        cout << "Enter your choice: ";
        cin >> option;
        system("cls");

        switch (option) {
            case 1:
                addProduct();
                break;
            case 2:
                changePrices();
                break;
            case 3:
                deliveryMenu();
                break;
            case 4:
                cout << "Exiting Admin Menu.\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while (option != 4);
}

void addProduct() {
    if (totalProducts >= 100) {
        cout << "Product list is full! Error!\n";
        return;
    }

    cout << "Enter product name: ";
    cin >> products[totalProducts].name;
    cout << "Enter product price: ";
    cin >> products[totalProducts].price;

    totalProducts++;
    cout << "Product added successfully!\n";
}

void changePrices() {
    if (totalProducts == 0) {
        cout << "No products available to update!\n";
        return;
    }

    cout << "Available Products:\n";
    for (int i = 0; i < totalProducts; i++) {
        cout << i + 1 <<  products[i].name << products[i].price << "\n"; 
    }

    int choice;
    cout << "Enter the number to update price: ";
    cin >> choice;

    if (choice < 1 || choice > totalProducts) {
        cout << "Invalid choice!\n";
        return;
    }

    cout << "Enter new price for " << products[choice - 1].name << ": ";
    cin >> products[choice - 1].price;

    cout << "Price updated successfully!\n";
}

void deliveryMenu() {
    cout << "Delivery Options:\n";
    cout << "1. Home Delivery\n";
    cout << "2. Pickup from Store\n";
    cout << "Enter your choice: ";

    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "u selected Home Delivery!\n";
            cout << "u product will deliver on last day\n";
            break;
        case 2:
            cout << "u selected Pickup from Store!\n";
            cout << " pick up before it's misplaced.\n";
            break;
        default:
            cout << "Invalid choice!\n";
    }
}

int main() {
    int choice;

    cout << "Login System\n";
    cout << "1. ddmin Login\n";
    cout << "2. User Login\n";
    cout << "3. OTP Login\n";  
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            adminLogin();
            break;
        case 2:
            userLogin();
            break;
        case 3:
            otpLogin();
            break;
        default:
            cout << "Invalid choice!\n";
    }

    return 0;
}
