#include <iostream>
#include <string>

using namespace std;
string password = "rintoh40";
string input;
string var1;
int var2;
double var3;

void passwordInp() {
    cout << "Please enter the password: ";
    cin >> input;
}
void passCheck() {
    cout << "Incorrect password, Access denied." << endl; 
    passwordInp();
}

int main() {
  passwordInp();
  while (input != password) {
    passCheck();
  }
  if (input == password) {
    cout << "Access granted. Please enter your variables: " << endl;
    
    cout << "Account: \n";
    cin >> var1;
    cout << "Deposit: \n";
    cin >> var2;
    cout << "?Security?: \n";
    cin >> var3;

    cout << "Deposit made successfully" << endl;
  } 
  return 0;
}
