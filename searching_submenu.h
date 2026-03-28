#ifndef SEARCHING_SUBMENU_H
#define SEARCHING_SUBMENU_H

#include <iostream>
#include "menu.h"
#include <vector>
#include <algorithm>

using namespace std;

void tampilSubMenuSearching() {
    cout << "\n--- Searching ---\n";
    cout << "1. Fibonacci Search\n";
    cout << "2. Binary Search\n";
    cout << "3. Interpolation Search\n";
    cout << "4. Sequential Search\n";
    cout << "0. Kembali ke Menu Utama\n";
    cout << "Pilih submenu: ";
}

// Fungsi untuk mengimplementasikan Fibonacci Search
int fibonacciSearch(vector<int> arr, int target) {
    int n = arr.size();
    // Membuat bilangan fibonacci yang cukup besar
    int fib2 = 0;   // (m-2)'th Fibonacci number
    int fib1 = 1;   // (m-1)'th Fibonacci number
    int fibM = fib2 + fib1;  // m'th Fibonacci number
    
    // Cari bilangan fibonacci terbesar yang <= n
    while (fibM < n) {
        fib2 = fib1;
        fib1 = fibM;
        fibM = fib2 + fib1;
    }
    
    int offset = -1; // Offset yang dihapus dari array
    
    // Sementara fibM lebih besar dari 1
    while (fibM > 1) {
        // Cek apakah fib2 valid
        int i = min(offset + fib2, n - 1);
        
        // Jika target lebih besar dari nilai pada indeks fib2, geser ke kanan
        if (arr[i] < target) {
            fibM = fib1;
            fib1 = fib2;
            fib2 = fibM - fib1;
            offset = i;
        }
        // Jika target lebih kecil dari nilai pada indeks fib2, geser ke kiri
        else if (arr[i] > target) {
            fibM = fib2;
            fib1 = fib1 - fib2;
            fib2 = fibM - fib1;
        }
        // Jika target ditemukan
        else {
            return i;
        }
    }
    
    // Membandingkan elemen terakhir dengan target
    if (fib1 && offset + 1 < n && arr[offset + 1] == target) {
        return offset + 1;
    }
    
    // Jika elemen tidak ditemukan
    return -1;
}

void tampilFibonacciSearch() {
    cls();
    cout << "=== FIBONACCI SEARCH ===\n\n";
    cout << "Pengertian:\n";
    cout << "Fibonacci search adalah teknik pencarian yang menggunakan bilangan Fibonacci untuk membagi array.\n\n";
    
    cout << "Langkah-langkah:\n";
    cout << "1. Temukan bilangan Fibonacci terbesar yang <= ukuran array\n";
    cout << "2. Gunakan bilangan Fibonacci untuk menentukan indeks pencarian\n";
    cout << "3. Bandingkan elemen target dengan elemen di indeks tersebut\n";
    cout << "4. Geser indeks berdasarkan hasil perbandingan\n\n";
    
    cout << "Contoh Implementasi:\n";
    vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
    
    cout << "Array: ";
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if(i < arr.size() - 1) cout << ", ";
    }
    cout << endl;
    
    int target;
    cout << "Masukkan nilai yang ingin dicari: ";
    cin >> target;
    
    cout << "\nIterasi Fibonacci Search:\n";
    
    int n = arr.size();
    int fib2 = 0, fib1 = 1, fibM = fib2 + fib1;
    
    // Cari bilangan fibonacci terbesar yang <= n
    while (fibM < n) {
        fib2 = fib1;
        fib1 = fibM;
        fibM = fib2 + fib1;
    }
    
    int offset = -1;
    int iterasi = 1;
    
    cout << "Iterasi " << iterasi << ": fibM=" << fibM << ", fib1=" << fib1 << ", fib2=" << fib2 << endl;
    
    // Sementara fibM lebih besar dari 1
    while (fibM > 1) {
        int i = min(offset + fib2, n - 1);
        
        cout << "  Iterasi " << iterasi << ": i=" << i << ", arr[" << i << "]=" << arr[i] << ", target=" << target << endl;
        
        // Jika target lebih besar dari nilai pada indeks fib2, geser ke kanan
        if (arr[i] < target) {
            cout << "  Karena " << arr[i] << " < " << target << ", geser ke kanan" << endl;
            fibM = fib1;
            fib1 = fib2;
            fib2 = fibM - fib1;
            offset = i;
        }
        // Jika target lebih kecil dari nilai pada indeks fib2, geser ke kiri
        else if (arr[i] > target) {
            cout << "  Karena " << arr[i] << " > " << target << ", geser ke kiri" << endl;
            fibM = fib2;
            fib1 = fib1 - fib2;
            fib2 = fibM - fib1;
        }
        // Jika target ditemukan
        else {
            cout << "  Elemen ditemukan pada indeks: " << i << endl;
            cout << "Proses selesai!" << endl;
            pauseMenu();
            return;
        }
        
        iterasi++;
        cout << "  Iterasi " << iterasi << ": fibM=" << fibM << ", fib1=" << fib1 << ", fib2=" << fib2 << endl;
    }
    
    // Membandingkan elemen terakhir dengan target
    if (fib1 && offset + 1 < n && arr[offset + 1] == target) {
        cout << "  Elemen ditemukan pada indeks: " << offset + 1 << endl;
    } else {
        cout << "  Elemen tidak ditemukan" << endl;
    }
    
    cout << "\nImplementasi Kode:\n";
    cout << "int fibonacciSearch(vector<int> arr, int target) {\n";
    cout << "    int n = arr.size();\n";
    cout << "    int fib2 = 0, fib1 = 1, fibM = fib2 + fib1;\n";
    cout << "    while (fibM < n) {\n";
    cout << "        fib2 = fib1;\n";
    cout << "        fib1 = fibM;\n";
    cout << "        fibM = fib2 + fib1;\n";
    cout << "    }\n";
    cout << "    int offset = -1;\n";
    cout << "    while (fibM > 1) {\n";
    cout << "        int i = min(offset + fib2, n - 1);\n";
    cout << "        if (arr[i] < target) {\n";
    cout << "            fibM = fib1;\n";
    cout << "            fib1 = fib2;\n";
    cout << "            fib2 = fibM - fib1;\n";
    cout << "            offset = i;\n";
    cout << "        } else if (arr[i] > target) {\n";
    cout << "            fibM = fib2;\n";
    cout << "            fib1 = fib1 - fib2;\n";
    cout << "            fib2 = fibM - fib1;\n";
    cout << "        } else {\n";
    cout << "            return i;\n";
    cout << "        }\n";
    cout << "    }\n";
    cout << "    if (fib1 && offset + 1 < n && arr[offset + 1] == target) {\n";
    cout << "        return offset + 1;\n";
    cout << "    }\n";
    cout << "    return -1;\n";
    cout << "}\n\n";
    
    pauseMenu();
}

int binarySearch(vector<int> arr, int target) {
    int left = 0, right = arr.size() - 1;
    
    while(left <= right) {
        int mid = left + (right - left) / 2;
        
        if(arr[mid] == target) {
            return mid;
        } else if(arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return -1; // Tidak ditemukan
}

void tampilBinarySearch() {
    cls();
    cout << "=== BINARY SEARCH ===\n\n";
    cout << "Pengertian:\n";
    cout << "Binary search adalah algoritma pencarian yang bekerja pada array terurut dengan membagi dua area pencarian.\n\n";
    
    cout << "Langkah-langkah:\n";
    cout << "1. Tentukan batas kiri dan kanan\n";
    cout << "2. Hitung titik tengah\n";
    cout << "3. Bandingkan elemen tengah dengan target\n";
    cout << "4. Geser batas berdasarkan hasil perbandingan\n\n";
    
    cout << "Contoh Implementasi:\n";
    vector<int> arr = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30};
    
    cout << "Array: ";
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if(i < arr.size() - 1) cout << ", ";
    }
    cout << endl;
    
    int target;
    cout << "Masukkan nilai yang ingin dicari: ";
    cin >> target;
    
    cout << "\nIterasi Binary Search:\n";
    
    int left = 0, right = arr.size() - 1;
    int iterasi = 1;
    
    while(left <= right) {
        int mid = left + (right - left) / 2;
        
        cout << "Iterasi " << iterasi << ": left=" << left << ", right=" << right << ", mid=" << mid << endl;
        cout << "  arr[" << mid << "] = " << arr[mid] << ", target = " << target << endl;
        
        if(arr[mid] == target) {
            cout << "  Elemen ditemukan pada indeks: " << mid << endl;
            cout << "Proses selesai!" << endl;
            cout << "\nImplementasi Kode:\n";
            cout << "int binarySearch(vector<int> arr, int target) {\n";
            cout << "    int left = 0, right = arr.size() - 1;\n";
            cout << "    while(left <= right) {\n";
            cout << "        int mid = left + (right - left) / 2;\n";
            cout << "        if(arr[mid] == target) return mid;\n";
            cout << "        else if(arr[mid] < target) left = mid + 1;\n";
            cout << "        else right = mid - 1;\n";
            cout << "    }\n";
            cout << "    return -1;\n";
            cout << "}\n\n";
            pauseMenu();
            return;
        } else if(arr[mid] < target) {
            cout << "  Karena " << arr[mid] << " < " << target << ", geser left ke " << (mid + 1) << endl;
            left = mid + 1;
        } else {
            cout << "  Karena " << arr[mid] << " > " << target << ", geser right ke " << (mid - 1) << endl;
            right = mid - 1;
        }
        
        iterasi++;
    }
    
    cout << "  Elemen tidak ditemukan" << endl;
    
    cout << "\nImplementasi Kode:\n";
    cout << "int binarySearch(vector<int> arr, int target) {\n";
    cout << "    int left = 0, right = arr.size() - 1;\n";
    cout << "    while(left <= right) {\n";
    cout << "        int mid = left + (right - left) / 2;\n";
    cout << "        if(arr[mid] == target) return mid;\n";
    cout << "        else if(arr[mid] < target) left = mid + 1;\n";
    cout << "        else right = mid - 1;\n";
    cout << "    }\n";
    cout << "    return -1;\n";
    cout << "}\n\n";
    
    pauseMenu();
}

int interpolationSearch(vector<int> arr, int target) {
    int low = 0, high = arr.size() - 1;
    
    while(low <= high && target >= arr[low] && target <= arr[high]) {
        if(low == high) {
            if(arr[low] == target) return low;
            return -1;
        }
        
        // Formula interpolation search
        int pos = low + ((double)(target - arr[low]) / (arr[high] - arr[low])) * (high - low);
        
        if(arr[pos] == target) {
            return pos;
        } else if(arr[pos] < target) {
            low = pos + 1;
        } else {
            high = pos - 1;
        }
    }
    
    return -1; // Tidak ditemukan
}

void tampilInterpolationSearch() {
    cls();
    cout << "=== INTERPOLATION SEARCH ===\n\n";
    cout << "Pengertian:\n";
    cout << "Interpolation search adalah algoritma pencarian yang bekerja baik pada array terurut dengan distribusi seragam.\n\n";
    
    cout << "Langkah-langkah:\n";
    cout << "1. Hitung posisi estimasi berdasarkan nilai target\n";
    cout << "2. Bandingkan elemen di posisi estimasi dengan target\n";
    cout << "3. Sesuaikan batas pencarian berdasarkan hasil perbandingan\n\n";
    
    cout << "Contoh Implementasi:\n";
    vector<int> arr = {1, 4, 7, 10, 13, 16, 19, 22, 25, 28, 31, 34, 37, 40, 43};
    
    cout << "Array: ";
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if(i < arr.size() - 1) cout << ", ";
    }
    cout << endl;
    
    int target;
    cout << "Masukkan nilai yang ingin dicari: ";
    cin >> target;
    
    cout << "\nIterasi Interpolation Search:\n";
    
    int low = 0, high = arr.size() - 1;
    int iterasi = 1;
    
    while(low <= high && target >= arr[low] && target <= arr[high]) {
        if(low == high) {
            if(arr[low] == target) {
                cout << "Iterasi " << iterasi << ": low=" << low << ", high=" << high << endl;
                cout << "  Elemen ditemukan pada indeks: " << low << endl;
                cout << "Proses selesai!" << endl;
                cout << "\nImplementasi Kode:\n";
                cout << "int interpolationSearch(vector<int> arr, int target) {\n";
                cout << "    int low = 0, high = arr.size() - 1;\n";
                cout << "    while(low <= high && target >= arr[low] && target <= arr[high]) {\n";
                cout << "        if(low == high) {\n";
                cout << "            if(arr[low] == target) return low;\n";
                cout << "            return -1;\n";
                cout << "        }\n";
                cout << "        int pos = low + ((double)(target - arr[low]) / (arr[high] - arr[low])) * (high - low);\n";
                cout << "        if(arr[pos] == target) return pos;\n";
                cout << "        else if(arr[pos] < target) low = pos + 1;\n";
                cout << "        else high = pos - 1;\n";
                cout << "    }\n";
                cout << "    return -1;\n";
                cout << "}\n\n";
                pauseMenu();
                return;
            }
            break;
        }
        
        // Formula interpolation search
        int pos = low + ((double)(target - arr[low]) / (arr[high] - arr[low])) * (high - low);
        
        cout << "Iterasi " << iterasi << ": low=" << low << ", high=" << high << ", pos=" << pos << endl;
        cout << "  arr[" << pos << "] = " << arr[pos] << ", target = " << target << endl;
        
        if(arr[pos] == target) {
            cout << "  Elemen ditemukan pada indeks: " << pos << endl;
            cout << "Proses selesai!" << endl;
            cout << "\nImplementasi Kode:\n";
            cout << "int interpolationSearch(vector<int> arr, int target) {\n";
            cout << "    int low = 0, high = arr.size() - 1;\n";
            cout << "    while(low <= high && target >= arr[low] && target <= arr[high]) {\n";
            cout << "        if(low == high) {\n";
            cout << "            if(arr[low] == target) return low;\n";
            cout << "            return -1;\n";
            cout << "        }\n";
            cout << "        int pos = low + ((double)(target - arr[low]) / (arr[high] - arr[low])) * (high - low);\n";
            cout << "        if(arr[pos] == target) return pos;\n";
            cout << "        else if(arr[pos] < target) low = pos + 1;\n";
            cout << "        else high = pos - 1;\n";
            cout << "    }\n";
            cout << "    return -1;\n";
            cout << "}\n\n";
            pauseMenu();
            return;
        } else if(arr[pos] < target) {
            cout << "  Karena " << arr[pos] << " < " << target << ", geser low ke " << (pos + 1) << endl;
            low = pos + 1;
        } else {
            cout << "  Karena " << arr[pos] << " > " << target << ", geser high ke " << (pos - 1) << endl;
            high = pos - 1;
        }
        
        iterasi++;
    }
    
    cout << "  Elemen tidak ditemukan" << endl;
    
    cout << "\nImplementasi Kode:\n";
    cout << "int interpolationSearch(vector<int> arr, int target) {\n";
    cout << "    int low = 0, high = arr.size() - 1;\n";
    cout << "    while(low <= high && target >= arr[low] && target <= arr[high]) {\n";
    cout << "        int pos = low + ((double)(target - arr[low]) / (arr[high] - arr[low])) * (high - low);\n";
    cout << "        if(arr[pos] == target) return pos;\n";
    cout << "        else if(arr[pos] < target) low = pos + 1;\n";
    cout << "        else high = pos - 1;\n";
    cout << "    }\n";
    cout << "    return -1;\n";
    cout << "}\n\n";
    
    pauseMenu();
}

int sequentialSearch(vector<int> arr, int target) {
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == target) {
            return i;
        }
    }
    return -1; // Tidak ditemukan
}

void tampilSequentialSearch() {
    cls();
    cout << "=== SEQUENTIAL SEARCH ===\n\n";
    cout << "Pengertian:\n";
    cout << "Sequential search adalah algoritma pencarian yang memeriksa setiap elemen satu per satu dari awal sampai akhir.\n\n";
    
    cout << "Langkah-langkah:\n";
    cout << "1. Mulai dari elemen pertama\n";
    cout << "2. Bandingkan elemen dengan target\n";
    cout << "3. Jika cocok, kembalikan indeks\n";
    cout << "4. Jika tidak cocok, lanjut ke elemen berikutnya\n\n";
    
    cout << "Contoh Implementasi:\n";
    vector<int> arr = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60, 65, 70, 75};
    
    cout << "Array: ";
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if(i < arr.size() - 1) cout << ", ";
    }
    cout << endl;
    
    int target;
    cout << "Masukkan nilai yang ingin dicari: ";
    cin >> target;
    
    cout << "\nIterasi Sequential Search:\n";
    
    int iterasi = 1;
    for(int i = 0; i < arr.size(); i++) {
        cout << "Iterasi " << iterasi << ": arr[" << i << "] = " << arr[i] << ", target = " << target << endl;
        
        if(arr[i] == target) {
            cout << "  Elemen ditemukan pada indeks: " << i << endl;
            cout << "Proses selesai!" << endl;
            cout << "\nImplementasi Kode:\n";
            cout << "int sequentialSearch(vector<int> arr, int target) {\n";
            cout << "    for(int i = 0; i < arr.size(); i++) {\n";
            cout << "        if(arr[i] == target) return i;\n";
            cout << "    }\n";
            cout << "    return -1;\n";
            cout << "}\n\n";
            pauseMenu();
            return;
        }
        
        iterasi++;
    }
    
    cout << "  Elemen tidak ditemukan" << endl;
    
    cout << "\nImplementasi Kode:\n";
    cout << "int sequentialSearch(vector<int> arr, int target) {\n";
    cout << "    for(int i = 0; i < arr.size(); i++) {\n";
    cout << "        if(arr[i] == target) return i;\n";
    cout << "    }\n";
    cout << "    return -1;\n";
    cout << "}\n\n";
    
    pauseMenu();
}

#endif