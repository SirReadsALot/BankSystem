#include <iostream>
#include <string>
using namespace std;

string password = "rintoh40";
string input;
int op;
int wA;
int dA;
int balance;
int u = 0;

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
      cout << "Enter an option.\n1-Deposit\n2-Withdraw\n3-Check Balance\n4-Exit";
      while (u == 0) {   
          if (op == 1) {
              cout << 'Enter amount to deposit:\n';
              cin >> dA;
          } else if (op == 2) {
            cout << 'Enter amount to withdraw:\n';
            cin >> wA;
            if (wA <= balance) {
                balance += wA;
            } 
          } else if (op == 3) {
              cout << balance;
          } else if (op == 4) {
              u++;
          } else {
              cout << "Enter valid option.\n";
          }
      }
  } 
  return 0;
}
