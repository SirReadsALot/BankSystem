#include <iostream>
#include <fstream>
#include <time.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
using namespace std;

class Account {
    public:
        char name[10];
        int number;
        int deposit;
     
    void create_account();
    void deposit();
    void withdraw();
    void show_accData();
};

int main() {
    void Account::create_account() {
        cout << "\n";
    }
}
