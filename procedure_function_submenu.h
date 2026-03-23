#ifndef PROCEDURE_FUNCTION_SUBMENU_H
#define PROCEDURE_FUNCTION_SUBMENU_H

#include <iostream>
#include "menu.h"
#include <string>

using namespace std;

void tampilSubMenuProcedureFungsi() {
    cout << "\n--- Procedure & Fungsi ---\n";
    cout << "1. Procedure\n";
    cout << "2. Fungsi\n";
    cout << "3. Parameter\n";
    cout << "4. Variabel Lokal & Global\n";
    cout << "5. Variabel Static\n";
    cout << "6. Fungsi Rekursif\n";
    cout << "0. Kembali ke Menu Utama\n";
    cout << "Pilih submenu: ";
}

void cetakPesan() {
    cout << "Hello World!" << endl;
}

void tampilProcedure() {
    cls();
    cout << "=== PROCEDURE ===\n\n";
    cout << "Pengertian:\n";
    cout << "Procedure adalah fungsi yang tidak mengembalikan nilai (void).\n\n";
    
    cout << "Langkah-langkah:\n";
    cout << "1. Definisikan procedure dengan keyword void\n";
    cout << "2. Beri nama procedure\n";
    cout << "3. Tambahkan parameter jika diperlukan\n";
    cout << "4. Implementasikan logika dalam procedure\n\n";
    
    cout << "Contoh Implementasi:\n";
    cout << "void cetakPesan() {\n";
    cout << "    cout << \"Hello World!\";\n";
    cout << "}\n\n";
    
    cout << "Output dari pemanggilan fungsi cetakPesan():\n";
    cetakPesan();
    
    cout << "\nImplementasi Kode:\n";
    cout << "void cetakPesan() {\n";
    cout << "    cout << \"Hello World!\";\n";
    cout << "}\n\n";
    
    pause();
}

int tambah(int a, int b) {
    return a + b;
}

void tampilFungsi() {
    cls();
    cout << "=== FUNGSI ===\n\n";
    cout << "Pengertian:\n";
    cout << "Fungsi adalah blok kode yang mengembalikan nilai setelah melakukan proses.\n\n";
    
    cout << "Langkah-langkah:\n";
    cout << "1. Definisikan fungsi dengan tipe kembalian\n";
    cout << "2. Beri nama fungsi\n";
    cout << "3. Tambahkan parameter jika diperlukan\n";
    cout << "4. Implementasikan logika dalam fungsi\n";
    cout << "5. Kembalikan nilai menggunakan return\n\n";
    
    cout << "Contoh Implementasi:\n";
    cout << "int tambah(int a, int b) {\n";
    cout << "    return a + b;\n";
    cout << "}\n\n";
    
    int hasil = tambah(5, 7);
    cout << "Output dari pemanggilan fungsi tambah(5, 7): " << hasil << endl;
    
    cout << "\nImplementasi Kode:\n";
    cout << "int tambah(int a, int b) {\n";
    cout << "    return a + b;\n";
    cout << "}\n\n";
    
    pause();
}

void sapa(string nama) {
    cout << "Halo " << nama << endl;
}

void tampilParameter() {
    cls();
    cout << "=== PARAMETER ===\n\n";
    cout << "Pengertian:\n";
    cout << "Parameter adalah variabel yang diterima oleh fungsi/procedure saat dipanggil.\n\n";
    
    cout << "Langkah-langkah:\n";
    cout << "1. Definisikan parameter dalam deklarasi fungsi\n";
    cout << "2. Gunakan parameter dalam tubuh fungsi\n";
    cout << "3. Kirim argumen saat memanggil fungsi\n\n";
    
    cout << "Contoh Implementasi:\n";
    cout << "void sapa(string nama) {\n";
    cout << "    cout << \"Halo \" << nama;\n";
    cout << "}\n";
    cout << "sapa(\"AlgoLearn\");\n\n";
    
    cout << "Output dari pemanggilan fungsi sapa(\"AlgoLearn\"):\n";
    sapa("AlgoLearn");
    
    cout << "\nImplementasi Kode:\n";
    cout << "void sapa(string nama) {\n";
    cout << "    cout << \"Halo \" << nama;\n";
    cout << "}\n\n";
    
    pause();
}

int globalVar = 10; // Variabel global

void fungsi() {
    int localVar = 20; // Variabel lokal
    cout << "Dalam fungsi(): globalVar = " << globalVar << endl;
    cout << "Dalam fungsi(): localVar = " << localVar << endl;
}

void tampilVariabelLokalGlobal() {
    cls();
    cout << "=== VARIABEL LOKAL & GLOBAL ===\n\n";
    cout << "Pengertian:\n";
    cout << "Variabel lokal adalah variabel yang hanya bisa diakses dalam fungsi tempat ia didefinisikan.\n";
    cout << "Variabel global adalah variabel yang bisa diakses dari mana saja dalam program.\n\n";
    
    cout << "Langkah-langkah:\n";
    cout << "1. Deklarasikan variabel global di luar fungsi\n";
    cout << "2. Dekabel lokal di dalam fungsi\n";
    cout << "3. Akses variabel global dari fungsi mana saja\n";
    cout << "4. Akses variabel lokal hanya dalam fungsi tempat ia didefinisikan\n\n";
    
    cout << "Contoh Implementasi:\n";
    cout << "int globalVar = 10; // Variabel global\n";
    cout << "void fungsi() {\n";
    cout << "    int localVar = 20; // Variabel lokal\n";
    cout << "    cout << \"globalVar = \" << globalVar << endl;\n";
    cout << "    cout << \"localVar = \" << localVar << endl;\n";
    cout << "}\n\n";
    
    cout << "Output dari pemanggilan fungsi():\n";
    fungsi();
    cout << "Dalam main(): globalVar = " << globalVar << endl;
    
    cout << "\nImplementasi Kode:\n";
    cout << "int globalVar = 10; // Variabel global\n";
    cout << "void fungsi() {\n";
    cout << "    int localVar = 20; // Variabel lokal\n";
    cout << "    cout << \"Dalam fungsi(): globalVar = \" << globalVar << endl;\n";
    cout << "    cout << \"Dalam fungsi(): localVar = \" << localVar << endl;\n";
    cout << "}\n\n";
    
    pause();
}

void fungsiStatic() {
    static int counter = 0;
    counter++;
    cout << "Counter = " << counter << endl;
}

void tampilVariabelStatic() {
    cls();
    cout << "=== VARIABEL STATIC ===\n\n";
    cout << "Pengertian:\n";
    cout << "Variabel static adalah variabel yang nilainya tetap antara pemanggilan fungsi.\n\n";
    
    cout << "Langkah-langkah:\n";
    cout << "1. Deklarasikan variabel dengan keyword static\n";
    cout << "2. Variabel ini akan menyimpan nilai antara pemanggilan fungsi\n\n";
    
    cout << "Contoh Implementasi:\n";
    cout << "void fungsiStatic() {\n";
    cout << "    static int counter = 0;\n";
    cout << "    counter++;\n";
    cout << "    cout << \"Counter = \" << counter << endl;\n";
    cout << "}\n\n";
    
    cout << "Output dari pemanggilan fungsiStatic() beberapa kali:\n";
    cout << "Pemanggilan pertama: ";
    fungsiStatic();
    cout << "Pemanggilan kedua: ";
    fungsiStatic();
    cout << "Pemanggilan ketiga: ";
    fungsiStatic();
    
    cout << "\nImplementasi Kode:\n";
    cout << "void fungsiStatic() {\n";
    cout << "    static int counter = 0;\n";
    cout << "    counter++;\n";
    cout << "    cout << \"Counter = \" << counter << endl;\n";
    cout << "}\n\n";
    
    pause();
}

int faktorial(int n) {
    if(n <= 1) return 1; // Base case
    return n * faktorial(n-1); // Recursive call
}

void tampilFungsiRekursif() {
    cls();
    cout << "=== FUNGSI REKURSIF ===\n\n";
    cout << "Pengertian:\n";
    cout << "Fungsi rekursif adalah fungsi yang memanggil dirinya sendiri.\n\n";
    
    cout << "Langkah-langkah:\n";
    cout << "1. Definisikan kondisi dasar (base case) untuk menghentikan rekursi\n";
    cout << "2. Implementasikan logika rekursif\n";
    cout << "3. Panggil fungsi dari dalam fungsi itu sendiri\n\n";
    
    cout << "Contoh Implementasi:\n";
    cout << "int faktorial(int n) {\n";
    cout << "    if(n <= 1) return 1; // Base case\n";
    cout << "    return n * faktorial(n-1); // Recursive call\n";
    cout << "}\n\n";
    
    cout << "Output dari pemanggilan fungsi faktorial(5):\n";
    int hasil = faktorial(5);
    cout << "faktorial(5) = " << hasil << endl;
    
    cout << "\nIterasi Fungsi Rekursif faktorial(5):\n";
    cout << "faktorial(5) = 5 * faktorial(4)\n";
    cout << "faktorial(4) = 4 * faktorial(3)\n";
    cout << "faktorial(3) = 3 * faktorial(2)\n";
    cout << "faktorial(2) = 2 * faktorial(1)\n";
    cout << "faktorial(1) = 1 (base case)\n";
    cout << "Sehingga: 5 * 4 * 3 * 2 * 1 = " << hasil << endl;
    
    cout << "\nImplementasi Kode:\n";
    cout << "int faktorial(int n) {\n";
    cout << "    if(n <= 1) return 1; // Base case\n";
    cout << "    return n * faktorial(n-1); // Recursive call\n";
    cout << "}\n\n";
    
    pause();
}

#endif