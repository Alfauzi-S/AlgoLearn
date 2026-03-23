#ifndef MENU_H
#define MENU_H

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

void tampilMenuUtama() {
    cout << "=========================================\n";
    cout << "           APLIKASI PEMBELAJARAN         \n";
    cout << "                ALGOLEARN                \n";
    cout << "=========================================\n";
    cout << "1. Array & Array Multi Dimensi\n";
    cout << "2. Pointer & Struct\n";
    cout << "3. Procedure & Fungsi\n";
    cout << "4. Sorting\n";
    cout << "5. Searching\n";
    cout << "0. Keluar\n";
    cout << "=========================================\n";
    cout << "Pilih menu: " << endl;
}
# endif