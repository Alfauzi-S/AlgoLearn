#ifndef PROCEDURE_FUNCTION_SUBMENU_H
#define PROCEDURE_FUNCTION_SUBMENU_H

#include <iostream>
#include "menu.h"

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
    
    cout << "Contoh:\n";
    cout << "void cetakPesan() {\n";
    cout << "    cout << \"Hello World!\";\n";
    cout << "}\n\n";
    
    pause();
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
    
    cout << "Contoh:\n";
    cout << "int tambah(int a, int b) {\n";
    cout << "    return a + b;\n";
    cout << "}\n\n";
    
    pause();
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
    
    cout << "Contoh:\n";
    cout << "void sapa(string nama) {\n";
    cout << "    cout << \"Halo \" << nama;\n";
    cout << "}\n";
    cout << "sapa(\"AlgoLearn\");\n\n";
    
    pause();
}

void tampilVariabelLokalGlobal() {
    cls();
    cout << "=== VARIABEL LOKAL & GLOBAL ===\n\n";
    cout << "Pengertian:\n";
    cout << "Variabel lokal adalah variabel yang hanya bisa diakses dalam fungsi tempat ia didefinisikan.\n";
    cout << "Variabel global adalah variabel yang bisa diakses dari mana saja dalam program.\n\n";
    
    cout << "Langkah-langkah:\n";
    cout << "1. Deklarasikan variabel global di luar fungsi\n";
    cout << "2. Deklarasikan variabel lokal di dalam fungsi\n";
    cout << "3. Akses variabel global dari fungsi mana saja\n";
    cout << "4. Akses variabel lokal hanya dalam fungsi tempat ia didefinisikan\n\n";
    
    cout << "Contoh:\n";
    cout << "int globalVar = 10; // Variabel global\n";
    cout << "void fungsi() {\n";
    cout << "    int localVar = 20; // Variabel lokal\n";
    cout << "}\n\n";
    
    pause();
}

void tampilVariabelStatic() {
    cls();
    cout << "=== VARIABEL STATIC ===\n\n";
    cout << "Pengertian:\n";
    cout << "Variabel static adalah variabel yang nilainya tetap antara pemanggilan fungsi.\n\n";
    
    cout << "Langkah-langkah:\n";
    cout << "1. Deklarasikan variabel dengan keyword static\n";
    cout << "2. Variabel ini akan menyimpan nilai antara pemanggilan fungsi\n\n";
    
    cout << "Contoh:\n";
    cout << "void fungsi() {\n";
    cout << "    static int counter = 0;\n";
    cout << "    counter++;\n cout \n";    
    cout << "    counter;\n";
    cout << "}\n\n";
    
    pause();
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
    
    cout << "Contoh:\n";
    cout << "int faktorial(int n) {\n";
    cout << "    if(n <= 1) return 1; // Base case\n";
    cout << "    return n * faktorial(n-1); // Recursive call\n";
    cout << "}\n\n";
    
    pause();
}

#endif