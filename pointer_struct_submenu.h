#ifndef POINTER_STRUCT_SUBMENU_H
#define POINTER_STRUCT_SUBMENU_H

#include <iostream>
#include "menu.h"
#include <string>
#include <cstring>

using namespace std;

void tampilSubMenuPointerStruct() {
    cout << "\n--- Pointer & Struct ---\n";
    cout << "1. Pointer\n";
    cout << "2. Struct\n";
    cout << "3. Array & Struct\n";
    cout << "4. Pointer & Struct\n";
    cout << "5. Union\n";
    cout << "0. Kembali ke Menu Utama\n";
    cout << "Pilih submenu: ";
}

void tampilPointer() {
    cls();
    cout << "=== POINTER ===\n\n";
    cout << "Pengertian:\n";
    cout << "Pointer adalah variabel yang menyimpan alamat memori dari variabel lain.\n\n";
    
    cout << "Langkah-langkah:\n";
    cout << "1. Deklarasikan pointer dengan tipe data dan operator *\n";
    cout << "2. Akses alamat variabel menggunakan operator &\n";
    cout << "3. Akses nilai melalui pointer menggunakan operator *\n\n";
    
    cout << "Contoh Implementasi:\n";
    cout << "int x = 10;\n";
    cout << "int *ptr = &x;\n";
    cout << "cout << *ptr; // Menampilkan nilai yang ditunjuk oleh ptr (10)\n\n";
    
    int x = 10;
    int *ptr = &x;
    
    cout << "Output dari contoh:\n";
    cout << "x = " << x << endl;
    cout << "&x = " << &x << endl;
    cout << "*ptr = " << *ptr << endl;
    cout << "ptr = " << ptr << endl;
    
    cout << "\nImplementasi Kode:\n";
    cout << "int x = 10;\n";
    cout << "int *ptr = &x;\n";
    cout << "cout << *ptr; // Menampilkan nilai yang ditunjuk oleh ptr (10)\n\n";
    
    pause();
}

struct Produk {
    string nama;
    int harga;
};

void tampilStruct() {
    cls();
    cout << "=== STRUCT ===\n\n";
    cout << "Pengertian:\n";
    cout << "Struct adalah tipe data bentukan yang dapat menyimpan beberapa variabel dengan tipe data yang berbeda.\n\n";
    
    cout << "Langkah-langkah:\n";
    cout << "1. Definisikan struct dengan keyword struct\n";
    cout << "2. Tentukan member-member struct\n";
    cout << "3. Deklarasikan variabel dengan tipe struct\n";
    cout << "4. Akses member struct menggunakan operator .\n\n";
    
    cout << "Contoh Implementasi:\n";
    cout << "struct Produk {\n";
    cout << "    string nama;\n";
    cout << "    int harga;\n";
    cout << "};\n";
    cout << "Produk barang;\n";
    cout << "barang.nama = \"AlgoLearn\";\n";
    cout << "barang.harga = 100000;\n\n";
    
    Produk barang;
    barang.nama = "AlgoLearn";
    barang.harga = 100000;
    
    cout << "Output dari contoh:\n";
    cout << "Nama produk: " << barang.nama << endl;
    cout << "Harga produk: " << barang.harga << endl;
    
    cout << "\nImplementasi Kode:\n";
    cout << "struct Produk {\n";
    cout << "    string nama;\n";
    cout << "    int harga;\n";
    cout << "};\n";
    cout << "Produk barang;\n";
    cout << "barang.nama = \"AlgoLearn\";\n";
    cout << "barang.harga = 100000;\n\n";
    
    pause();
}

void tampilArrayStruct() {
    cls();
    cout << "=== ARRAY & STRUCT ===\n\n";
    cout << "Pengertian:\n";
    cout << "Array struct adalah array yang elemen-elemennya adalah variabel bertipe struct.\n\n";
    
    cout << "Langkah-langkah:\n";
    cout << "1. Definisikan struct\n";
    cout << "2. Deklarasikan array dengan tipe struct\n";
    cout << "3. Akses elemen array dan member struct\n\n";
    
    cout << "Contoh Implementasi:\n";
    cout << "struct Produk {\n";
    cout << "    string nama;\n";
    cout << "    int harga;\n";
    cout << "};\n";
    cout << "Produk daftar[10];\n";
    cout << "daftar[0].nama = \"AlgoLearn\";\n";
    cout << "daftar[0].harga = 100000;\n\n";
    
    struct Produk daftar[3];
    daftar[0].nama = "AlgoLearn";
    daftar[0].harga = 100000;
    daftar[1].nama = "Product B";
    daftar[1].harga = 150000;
    daftar[2].nama = "Product C";
    daftar[2].harga = 200000;
    
    cout << "Output dari contoh:\n";
    for(int i = 0; i < 3; i++) {
        cout << "Produk ke-" << (i+1) << ": " << daftar[i].nama 
             << " - Harga: " << daftar[i].harga << endl;
    }
    
    cout << "\nImplementasi Kode:\n";
    cout << "struct Produk {\n";
    cout << "    string nama;\n";
    cout << "    int harga;\n";
    cout << "};\n";
    cout << "Produk daftar[10];\n";
    cout << "daftar[0].nama = \"AlgoLearn\";\n";
    cout << "daftar[0].harga = 100000;\n\n";
    
    pause();
}

void tampilPointerStruct() {
    cls();
    cout << "=== POINTER & STRUCT ===\n\n";
    cout << "Pengertian:\n";
    cout << "Pointer struct adalah pointer yang menunjuk ke variabel bertipe struct.\n\n";
    
    cout << "Langkah-langkah:\n";
    cout << "1. Definisikan struct\n";
    cout << "2. Deklarasikan pointer dengan tipe struct\n";
    cout << "3. Arahkan pointer ke alamat variabel struct\n";
    cout << "4. Akses member struct melalui pointer\n\n";
    
    cout << "Contoh Implementasi:\n";
    cout << "struct Produk {\n";
    cout << "    string nama;\n";
    cout << "    int harga;\n";
    cout << "};\n";
    cout << "Produk barang;\n";
    cout << "Produk *ptr = &barang;\n";
    cout << "ptr->nama = \"AlgoLearn\";\n";
    cout << "ptr->harga = 100000;\n\n";
    
    struct Produk barang;
    struct Produk *ptr = &barang;
    ptr->nama = "AlgoLearn";
    ptr->harga = 100000;
    
    cout << "Output dari contoh:\n";
    cout << "Nama produk: " << ptr->nama << endl;
    cout << "Harga produk: " << ptr->harga << endl;
    cout << "Alamat barang: " << &barang << endl;
    cout << "Nilai ptr: " << ptr << endl;
    
    cout << "\nImplementasi Kode:\n";
    cout << "struct Produk {\n";
    cout << "    string nama;\n";
    cout << "    int harga;\n";
    cout << "};\n";
    cout << "Produk barang;\n";
    cout << "Produk *ptr = &barang;\n";
    cout << "ptr->nama = \"AlgoLearn\";\n";
    cout << "ptr->harga = 100000;\n\n";
    
    pause();
}

void tampilUnion() {
    cls();
    cout << "=== UNION ===\n\n";
    cout << "Pengertian:\n";
    cout << "Union adalah tipe data bentukan seperti struct, tetapi semua member share lokasi memori yang sama.\n\n";
    
    cout << "Langkah-langkah:\n";
    cout << "1. Definisikan union dengan keyword union\n";
    cout << "2. Tentukan member-member union\n";
    cout << "3. Deklarasikan variabel dengan tipe union\n";
    cout << "4. Akses member union\n\n";
    
    cout << "Contoh Implementasi:\n";
    cout << "union Data {\n";
    cout << "    int i;\n";
    cout << "    float f;\n";
    cout << "    char str[20];\n";
    cout << "};\n";
    cout << "Data data;\n";
    cout << "data.i = 10;\n\n";
    
    union Data {
        int i;
        float f;
        char str[20];
    };
    
    union Data data;
    data.i = 10;
    cout << "Setelah data.i = 10: data.i = " << data.i << endl;
    
    data.f = 220.5;
    cout << "Setelah data.f = 220.5: data.f = " << data.f << endl;
    
    strcpy(data.str, "AlgoLearn");
    cout << "Setelah strcpy(data.str, \"AlgoLearn\"): data.str = " << data.str << endl;
    
    cout << "\nCatatan: Hanya nilai terakhir yang disimpan karena semua member share lokasi memori yang sama.\n";
    cout << "Jadi data.i = " << data.i << ", data.f = " << data.f << endl;
    
    cout << "\nImplementasi Kode:\n";
    cout << "union Data {\n";
    cout << "    int i;\n";
    cout << "    float f;\n";
    cout << "    char str[20];\n";
    cout << "};\n";
    cout << "Data data;\n";
    cout << "data.i = 10;\n\n";
    
    pause();
}

#endif