#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cmath>

#ifdef _WIN32
#include <windows.h>
#else
#include <cstdlib>
#include <unistd.h>
#endif

using namespace std;

void cls() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void pause() {
#ifdef _WIN32
    system("pause");
#else
    cout << "Press Enter to continue...";
    cin.ignore();
    cin.get();
#endif
}




int main() {
    
    return 0;
}