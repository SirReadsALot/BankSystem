#include <iostream>
#include <fstream>
#include <time.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
using namespace std;

int main() {
    int passwords[5] = { 124816, 123456,  10101, 90909, 123};
    // create account stuff
    int createPassword[0];
    string createUsername;

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
            cout << "You have successfully logged in!" << "\n";
            ofstream Credentials("credentials.txt");
            // declaring argument of time()
            time_t my_time = time(NULL);
  
            // ctime() used to give the present time
            //printf("%s", ctime(&my_time));
            return 0;
            Credentials << "Account Name: " + accName << "\n" << "Password: " + password;
            Credentials.close();

            Sleep(5000);
            break;
        } 
    }
}
