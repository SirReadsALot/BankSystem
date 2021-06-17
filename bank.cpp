#include <iostream>
using namespace std;

int main() {
    cout << "~~~~~~~~~~~~ BANK OF TRITON ~~~~~~~~~~~~ " << "\n";
    string accName;
    int password;
    cout << "Enter your account information" << "\n";
    cout << "Username: ";
    cin >> accName;
    cout << "Password: ";
    cin >> password;
    
    while (password != 124816) {
        cout << "Invalid Password" << "\n";
        cout << "Password: ";
        cin >> password;
        if (password == 124816) {
            cout << "You have successfully logged in!";
            break;
        } 
    }
}
