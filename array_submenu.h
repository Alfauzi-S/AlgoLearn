#ifndef ARRAY_SUBMENU_H
#define ARRAY_SUBMENU_H

#include <iostream>
#include "menu.h"
#include <string>
#include <vector>

using namespace std;

void tampilSubMenuArray() {
    cout << "\n--- Array & Array Multi Dimensi ---\n";
    cout << "1. String\n";
    cout << "2. Array Statis\n";
    cout << "3. Array Dinamis\n";
    cout << "4. Array 1 Dimensi\n";
    cout << "5. Array Multi Dimensi (2 Dimensi)\n";
    cout << "6. Array Multi Dimensi (3 Dimensi)\n";
    cout << "7. Penjumlahan Matriks\n";
    cout << "8. Pengurangan Matriks\n";
    cout << "9. Perkalian Matriks\n";
    cout << "10. Transpose Matriks\n";
    cout << "11. Invers Matriks\n";
    cout << "0. Kembali ke Menu Utama\n";
    cout << "Pilih submenu: ";
}

void tampilString() {
    cls();
    cout << "=== STRING ===\n\n";
    cout << "Pengertian:\n";
    cout << "String adalah kumpulan karakter yang disusun secara berurutan.\n";
    cout << "Di C++, string dapat dinyatakan dalam bentuk array char atau menggunakan kelas string.\n\n";
    
    cout << "Langkah-langkah:\n";
    cout << "1. Deklarasikan variabel string\n";
    cout << "2. Inisialisasi string dengan nilai awal\n";
    cout << "3. Manipulasi string sesuai kebutuhan\n";
    cout << "4. Tampilkan hasil manipulasi\n\n";
    
    cout << "Contoh Implementasi:\n";
    cout << "#include <string>\n";
    cout << "string nama = \"AlgoLearn\";\n";
    cout << "cout << \"Aplikasi pembelajaran \" << nama << endl;\n\n";
    
    string nama = "AlgoLearn";
    cout << "Output dari contoh:\n";
    cout << "Aplikasi pembelajaran " << nama << endl;
    
    cout << "\nImplementasi Kode:\n";
    cout << "string nama = \"AlgoLearn\";\n";
    cout << "cout << \"Aplikasi pembelajaran \" << nama << endl;\n\n";
    
    pause();
}

void tampilArrayStatis() {
    cls();
    cout << "=== ARRAY STATIS ===\n\n";
    cout << "Pengertian:\n";
    cout << "Array statis adalah array yang ukurannya ditentukan saat kompilasi dan tidak dapat berubah selama runtime.\n\n";
    
    cout << "Langkah-langkah:\n";
    cout << "1. Deklarasikan array dengan ukuran tetap\n";
    cout << "2. Inisialisasi elemen array jika diperlukan\n";
    cout << "3. Akses atau modifikasi elemen array\n";
    cout << "4. Gunakan array sesuai kebutuhan\n\n";
    
    cout << "Contoh Implementasi:\n";
    cout << "int arr[5] = {1, 2, 3, 4, 5}; // Array statis dengan 5 elemen\n";
    cout << "arr[0] = 10; // Mengubah nilai elemen pertama\n\n";
    
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Array sebelum dimodifikasi: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    arr[0] = 10;
    cout << "Array setelah arr[0] = 10: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout << "\nImplementasi Kode:\n";
    cout << "int arr[5] = {1, 2, 3, 4, 5};\n";
    cout << "arr[0] = 10;\n\n";
    
    pause();
}

void tampilArrayDinamis() {
    cls();
    cout << "=== ARRAY DINAMIS ===\n\n";
    cout << "Pengertian:\n";
    cout << "Array dinamis adalah array yang ukurannya dapat ditentukan saat runtime.\n";
    cout << "Ukuran array dapat diubah sesuai kebutuhan.\n\n";
    
    cout << "Langkah-langkah:\n";
    cout << "1. Deklarasikan pointer untuk menampung alamat array\n";
    cout << "2. Alokasikan memori menggunakan new\n";
    cout << "3. Gunakan array sesuai kebutuhan\n";
    cout << "4. Dealokasikan memori setelah selesai menggunakan delete[]\n\n";
    
    cout << "Contoh Implementasi:\n";
    cout << "int *arr = new int[5]; // Alokasi array dinamis dengan 5 elemen\n";
    cout << "arr[0] = 10; // Mengisi elemen pertama\n";
    cout << "delete[] arr; // Dealokasi memori\n\n";
    
    int *arr = new int[5];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    
    cout << "Output dari contoh:\n";
    cout << "Isi array dinamis: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    delete[] arr;
    cout << "Memori telah didealokasikan." << endl;
    
    cout << "\nImplementasi Kode:\n";
    cout << "int *arr = new int[5];\n";
    cout << "arr[0] = 10;\n";
    cout << "delete[] arr;\n\n";
    
    pause();
}

void tampilArray1Dimensi() {
    cls();
    cout << "=== ARRAY 1 DIMENSI ===\n\n";
    cout << "Pengertian:\n";
    cout << "Array 1 dimensi adalah array yang hanya memiliki satu indeks untuk mengakses elemen-elemennya.\n\n";
    
    cout << "Langkah-langkah:\n";
    cout << "1. Deklarasikan array 1 dimensi\n";
    cout << "2. Inisialisasi elemen array\n";
    cout << "3. Akses elemen array menggunakan indeks\n";
    cout << "4. Lakukan operasi sesuai kebutuhan\n\n";
    
    cout << "Contoh Implementasi:\n";
    cout << "int arr[5] = {10, 20, 30, 40, 50};\n";
    cout << "cout << arr[2]; // Menampilkan nilai elemen ketiga (30)\n\n";
    
    int arr[5] = {10, 20, 30, 40, 50};
    cout << "Output dari contoh:\n";
    cout << "Nilai arr[2]: " << arr[2] << endl;
    
    cout << "Semua elemen array: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout << "\nImplementasi Kode:\n";
    cout << "int arr[5] = {10, 20, 30, 40, 50};\n";
    cout << "cout << arr[2]; // Menampilkan nilai elemen ketiga (30)\n\n";
    
    pause();
}

void tampilArrayMulti2Dimensi() {
    cls();
    cout << "=== ARRAY MULTI DIMENSI (2 DIMENSI) ===\n\n";
    cout << "Pengertian:\n";
    cout << "Array 2 dimensi adalah array yang memiliki dua indeks, yaitu baris dan kolom.\n";
    cout << "Digunakan untuk merepresentasikan matriks.\n\n";
    
    cout << "Langkah-langkah:\n";
    cout << "1. Deklarasikan array 2 dimensi\n";
    cout << "2. Inisialisasi elemen array\n";
    cout << "3. Akses elemen array menggunakan dua indeks\n";
    cout << "4. Lakukan operasi sesuai kebutuhan\n\n";
    
    cout << "Contoh Implementasi:\n";
    cout << "int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};\n";
    cout << "cout << arr[1][2]; // Menampilkan nilai elemen baris 2 kolom 3 (6)\n\n";
    
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    cout << "Output dari contoh:\n";
    cout << "Nilai arr[1][2]: " << arr[1][2] << endl;
    
    cout << "Semua elemen array 2 dimensi:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "arr[" << i << "][" << j << "] = " << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "\nImplementasi Kode:\n";
    cout << "int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};\n";
    cout << "cout << arr[1][2]; // Menampilkan nilai elemen baris 2 kolom 3 (6)\n\n";
    
    pause();
}

void tampilArrayMulti3Dimensi() {
    cls();
    cout << "=== ARRAY MULTI DIMENSI (3 DIMENSI) ===\n\n";
    cout << "Pengertian:\n";
    cout << "Array 3 dimensi adalah array yang memiliki tiga indeks, biasanya digunakan untuk merepresentasikan data dalam ruang 3D.\n\n";
    
    cout << "Langkah-langkah:\n";
    cout << "1. Deklarasikan array 3 dimensi\n";
    cout << "2. Inisialisasi elemen array\n";
    cout << "3. Akses elemen array menggunakan tiga indeks\n";
    cout << "4. Lakukan operasi sesuai kebutuhan\n\n";
    
    cout << "Contoh Implementasi:\n";
    cout << "int arr[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};\n";
    cout << "cout << arr[1][0][1]; // Menampilkan nilai elemen (6)\n\n";
    
    int arr[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};
    cout << "Output dari contoh:\n";
    cout << "Nilai arr[1][0][1]: " << arr[1][0][1] << endl;
    
    cout << "Semua elemen array 3 dimensi:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                cout << "arr[" << i << "][" << j << "][" << k << "] = " << arr[i][j][k] << " ";
            }
            cout << endl;
        }
    }
    
    cout << "\nImplementasi Kode:\n";
    cout << "int arr[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};\n";
    cout << "cout << arr[1][0][1]; // Menampilkan nilai elemen (6)\n\n";
    
    pause();
}

void tampilPenjumlahanMatriks() {
    cls();
    cout << "=== PENJUMLAHAN MATRIKS ===\n\n";
    cout << "Pengertian:\n";
    cout << "Penjumlahan matriks adalah operasi matematika untuk menjumlahkan dua matriks yang memiliki ukuran yang sama.\n\n";
    
    cout << "Langkah-langkah:\n";
    cout << "1. Pastikan kedua matriks memiliki ukuran yang sama\n";
    cout << "2. Buat matriks hasil dengan ukuran yang sama\n";
    cout << "3. Jumlahkan setiap elemen matriks pada posisi yang sama\n";
    cout << "4. Simpan hasil ke dalam matriks hasil\n\n";
    
    cout << "Contoh Implementasi:\n";
    cout << "for(int i = 0; i < baris; i++) {\n";
    cout << "    for(int j = 0; j < kolom; j++) {\n";
    cout << "        hasil[i][j] = matriks1[i][j] + matriks2[i][j];\n";
    cout << "    }\n";
    cout << "}\n\n";
    
    int matriks1[2][2] = {{1, 2}, {3, 4}};
    int matriks2[2][2] = {{5, 6}, {7, 8}};
    int hasil[2][2];
    
    cout << "Output dari contoh:\n";
    cout << "Matriks 1:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << matriks1[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Matriks 2:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << matriks2[i][j] << " ";
        }
        cout << endl;
    }
    
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            hasil[i][j] = matriks1[i][j] + matriks2[i][j];
        }
    }
    
    cout << "Hasil penjumlahan matriks:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "\nImplementasi Kode:\n";
    cout << "for(int i = 0; i < baris; i++) {\n";
    cout << "    for(int j = 0; j < kolom; j++) {\n";
    cout << "        hasil[i][j] = matriks1[i][j] + matriks2[i][j];\n";
    cout << "    }\n";
    cout << "}\n\n";
    
    pause();
}

void tampilPenguranganMatriks() {
    cls();
    cout << "=== PENGURANGAN MATRIKS ===\n\n";
    cout << "Pengertian:\n";
    cout << "Pengurangan matriks adalah operasi matematika untuk mengurangi dua matriks yang memiliki ukuran yang sama.\n\n";
    
    cout << "Langkah-langkah:\n";
    cout << "1. Pastikan kedua matriks memiliki ukuran yang sama\n";
    cout << "2. Buat matriks hasil dengan ukuran yang sama\n";
    cout << "3. Kurangi setiap elemen matriks pada posisi yang sama\n";
    cout << "4. Simpan hasil ke dalam matriks hasil\n\n";
    
    cout << "Contoh Implementasi:\n";
    cout << "for(int i = 0; i < baris; i++) {\n";
    cout << "    for(int j = 0; j < kolom; j++) {\n";
    cout << "        hasil[i][j] = matriks1[i][j] - matriks2[i][j];\n";
    cout << "    }\n";
    cout << "}\n\n";
    
    int matriks1[2][2] = {{5, 6}, {7, 8}};
    int matriks2[2][2] = {{1, 2}, {3, 4}};
    int hasil[2][2];
    
    cout << "Output dari contoh:\n";
    cout << "Matriks 1:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << matriks1[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Matriks 2:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << matriks2[i][j] << " ";
        }
        cout << endl;
    }
    
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            hasil[i][j] = matriks1[i][j] - matriks2[i][j];
        }
    }
    
    cout << "Hasil pengurangan matriks:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "\nImplementasi Kode:\n";
    cout << "for(int i = 0; i < baris; i++) {\n";
    cout << "    for(int j = 0; j < kolom; j++) {\n";
    cout << "        hasil[i][j] = matriks1[i][j] - matriks2[i][j];\n";
    cout << "    }\n";
    cout << "}\n\n";
    
    pause();
}

void tampilPerkalianMatriks() {
    cls();
    cout << "=== PERKALIAN MATRIKS ===\n\n";
    cout << "Pengertian:\n";
    cout << "Perkalian matriks adalah operasi matematika untuk mengalikan dua matriks.\n";
    cout << "Jumlah kolom matriks pertama harus sama dengan jumlah baris matriks kedua.\n\n";
    
    cout << "Langkah-langkah:\n";
    cout << "1. Pastikan jumlah kolom matriks pertama sama dengan jumlah baris matriks kedua\n";
    cout << "2. Buat matriks hasil dengan ukuran baris matriks pertama dan kolom matriks kedua\n";
    cout << "3. Kalikan dan jumlahkan elemen-elemen matriks sesuai aturan perkalian matriks\n";
    cout << "4. Simpan hasil ke dalam matriks hasil\n\n";
    
    cout << "Contoh Implementasi:\n";
    cout << "for(int i = 0; i < baris1; i++) {\n";
    cout << "    for(int j = 0; j < kolom2; j++) {\n";
    cout << "        hasil[i][j] = 0;\n";
    cout << "        for(int k = 0; k < kolom1; k++) {\n";
    cout << "            hasil[i][j] += matriks1[i][k] * matriks2[k][j];\n";
    cout << "        }\n";
    cout << "    }\n";
    cout << "}\n\n";
    
    int matriks1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int matriks2[3][2] = {{7, 8}, {9, 10}, {11, 12}};
    int hasil[2][2] = {{0, 0}, {0, 0}};
    
    cout << "Output dari contoh:\n";
    cout << "Matriks 1 (2x3):\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matriks1[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Matriks 2 (3x2):\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            cout << matriks2[i][j] << " ";
        }
        cout << endl;
    }
    
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            hasil[i][j] = 0;
            for(int k = 0; k < 3; k++) {
                hasil[i][j] += matriks1[i][k] * matriks2[k][j];
            }
        }
    }
    
    cout << "Hasil perkalian matriks (2x2):\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "\nImplementasi Kode:\n";
    cout << "for(int i = 0; i < baris1; i++) {\n";
    cout << "    for(int j = 0; j < kolom2; j++) {\n";
    cout << "        hasil[i][j] = 0;\n";
    cout << "        for(int k = 0; k < kolom1; k++) {\n";
    cout << "            hasil[i][j] += matriks1[i][k] * matriks2[k][j];\n";
    cout << "        }\n";
    cout << "    }\n";
    cout << "}\n\n";
    
    pause();
}

void tampilTransposeMatriks() {
    cls();
    cout << "=== TRANSPOSE MATRIKS ===\n\n";
    cout << "Pengertian:\n";
    cout << "Transpose matriks adalah operasi untuk menukar baris menjadi kolom dan sebaliknya.\n\n";
    
    cout << "Langkah-langkah:\n";
    cout << "1. Ambil matriks asli\n";
    cout << "2. Buat matriks transpose dengan ukuran yang sesuai\n";
    cout << "3. Tukar baris menjadi kolom dan kolom menjadi baris\n";
    cout << "4. Simpan hasil ke dalam matriks transpose\n\n";
    
    cout << "Contoh Implementasi:\n";
    cout << "for(int i = 0; i < baris; i++) {\n";
    cout << "    for(int j = 0; j < kolom; j++) {\n";
    cout << "        transpose[j][i] = matriks[i][j];\n";
    cout << "    }\n";
    cout << "}\n\n";
    
    int matriks[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int transpose[3][2];
    
    cout << "Output dari contoh:\n";
    cout << "Matriks asli (2x3):\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }
    
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            transpose[j][i] = matriks[i][j];
        }
    }
    
    cout << "Matriks transpose (3x2):\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "\nImplementasi Kode:\n";
    cout << "for(int i = 0; i < baris; i++) {\n";
    cout << "    for(int j = 0; j < kolom; j++) {\n";
    cout << "        transpose[j][i] = matriks[i][j];\n";
    cout << "    }\n";
    cout << "}\n\n";
    
    pause();
}

void tampilInversMatriks() {
    cls();
    cout << "=== INVERS MATRIKS ===\n\n";
    cout << "Pengertian:\n";
    cout << "Invers matriks adalah matriks yang jika dikalikan dengan matriks aslinya akan menghasilkan matriks identitas.\n";
    cout << "Hanya matriks persegi yang memiliki invers (determinannya tidak nol).\n\n";
    
    cout << "Langkah-langkah:\n";
    cout << "1. Hitung determinan matriks\n";
    cout << "2. Jika determinan nol, matriks tidak memiliki invers\n";
    cout << "3. Jika determinan tidak nol, hitung matriks adjoint\n";
    cout << "4. Bagi setiap elemen matriks adjoint dengan determinan\n\n";
    
    cout << "Contoh (untuk matriks 2x2):\n";
    cout << "det = matriks[0][0]*matriks[1][1] - matriks[0][1]*matriks[1][0];\n";
    cout << "if(det != 0) {\n";
    cout << "    invers[0][0] = matriks[1][1]/det;\n";
    cout << "    invers[0][1] = -matriks[0][1]/det;\n";
    cout << "    invers[1][0] = -matriks[1][0]/det;\n";
    cout << "    invers[1][1] = matriks[0][0]/det;\n";
    cout << "}\n\n";
    
    int matriks[2][2] = {{4, 7}, {2, 6}};
    double det = matriks[0][0]*matriks[1][1] - matriks[0][1]*matriks[1][0];
    
    cout << "Output dari contoh:\n";
    cout << "Matriks asli:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Determinan: " << det << endl;
    
    if(det != 0) {
        double invers[2][2];
        invers[0][0] = matriks[1][1]/det;
        invers[0][1] = -matriks[0][1]/det;
        invers[1][0] = -matriks[1][0]/det;
        invers[1][1] = matriks[0][0]/det;
        
        cout << "Matriks invers:\n";
        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < 2; j++) {
                cout << invers[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "Matriks tidak memiliki invers karena determinannya nol." << endl;
    }
    
    cout << "\nImplementasi Kode:\n";
    cout << "double det = matriks[0][0]*matriks[1][1] - matriks[0][1]*matriks[1][0];\n";
    cout << "if(det != 0) {\n";
    cout << "    invers[0][0] = matriks[1][1]/det;\n";
    cout << "    invers[0][1] = -matriks[0][1]/det;\n";
    cout << "    invers[1][0] = -matriks[1][0]/det;\n";
    cout << "    invers[1][1] = matriks[0][0]/det;\n";
    cout << "}\n\n";
    
    pause();
}

#endif