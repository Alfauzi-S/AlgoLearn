#ifndef SORTING_SUBMENU_H
#define SORTING_SUBMENU_H

#include <iostream>
#include "menu.h"

void tampilSubMenuSorting() {
    cout << "\n--- Sorting ---\n";
    cout << "1. Insertion Sort\n";
    cout << "2. Heap Sort\n";
    cout << "3. Merge Sort\n";
    cout << "4. Quick Sort\n";
    cout << "5. Tree Sort\n";
    cout << "6. Exchange Sort\n";
    cout << "7. Radix Sort\n";
    cout << "8. Shell Sort\n";
    cout << "9. Bubble Sort\n";
    cout << "10. Selection Sort\n";
    cout << "0. Kembali ke Menu Utama\n";
    cout << "Pilih submenu: ";
}

void tampilInsertionSort() {
    cls();
    cout << "=== INSERTION SORT ===\n\n";
    cout << "Pengertian:\n";
    cout << "Insertion sort adalah algoritma sorting yang membangun array yang diurutkan satu per satu.\n\n";
    
    cout << "Langkah-langkah:\n";
    cout << "1. Mulai dari elemen kedua\n";
    cout << "2. Bandingkan dengan elemen sebelumnya\n";
    cout << "3. Geser elemen yang lebih besar ke kanan\n";
    cout << "4. Masukkan elemen ke posisi yang benar\n\n";
    
    cout << "Contoh:\n";
    cout << "for(int i = 1; i < n; i++) {\n";
    cout << "    int key = arr[i];\n";
    cout << "    int j = i - 1;\n";
    cout << "    while(j >= 0 && arr[j] > key) {\n";
    cout << "        arr[j+1] = arr[j];\n";
    cout << "        j--;\n";
    cout << "    }\n";
    cout << "    arr[j+1] = key;\n";
    cout << "}\n\n";
    
    pause();
}

void tampilHeapSort() {
    cls();
    cout << "=== HEAP SORT ===\n\n";
    cout << "Pengertian:\n";
    cout << "Heap sort adalah algoritma sorting yang menggunakan struktur data heap.\n\n";
    
    cout << "Langkah-langkah:\n";
    cout << "1. Bangun max heap dari array\n";
    cout << "2. Pindahkan elemen terbesar ke akhir array\n";
    cout << "3. Urutkan sisa array dengan heap sort\n\n";
    
    cout << "Contoh:\n";
    cout << "// Fungsi untuk heapify dan heap sort\n";
    cout << "// Memerlukan implementasi lengkap\n\n";
    
    pause();
}

void tampilMergeSort() {
    cls();
    cout << "=== MERGE SORT ===\n\n";
    cout << "Pengertian:\n";
    cout << "Merge sort adalah algoritma sorting divide and conquer yang membagi array menjadi bagian-bagian kecil kemudian menggabungkannya kembali.\n\n";
    
    cout << "Langkah-langkah:\n";
    cout << "1. Bagi array menjadi dua bagian\n";
    cout << "2. Urutkan masing-masing bagian secara rekursif\n";
    cout << "3. Gabungkan kedua bagian yang sudah diurutkan\n\n";
    
    cout << "Contoh:\n";
    cout << "// Fungsi merge dan mergesort\n";
    cout << "// Memerlukan implementasi lengkap\n\n";
    
    pause();
}

void tampilQuickSort() {
    cls();
    cout << "=== QUICK SORT ===\n\n";
    cout << "Pengertian:\n";
    cout << "Quick sort adalah algoritma sorting divide and conquer yang memilih pivot dan membagi array berdasarkan pivot tersebut.\n\n";
    
    cout << "Langkah-langkah:\n";
    cout << "1. Pilih elemen pivot\n";
    cout << "2. Partisi array sehingga elemen lebih kecil dari pivot di kiri, lebih besar di kanan\n";
    cout << "3. Urutkan bagian kiri dan kanan secara rekursif\n\n";
    
    cout << "Contoh:\n";
    cout << "// Fungsi partition dan quicksort\n";
    cout << "// Memerlukan implementasi lengkap\n\n";
    
    pause();
}

void tampilTreeSort() {
    cls();
    cout << "=== TREE SORT ===\n\n";
    cout << "Pengertian:\n";
    cout << "Tree sort adalah algoritma sorting yang menggunakan binary search tree.\n\n";
    
    cout << "Langkah-langkah:\n";
    cout << "1. Bangun binary search tree dari elemen array\n";
    cout << "2. Lakukan inorder traversal untuk mendapatkan elemen dalam urutan terurut\n\n";
    
    cout << "Contoh:\n";
    cout << "// Implementasi BST dan inorder traversal\n";
    cout << "// Memerlukan struktur node dan fungsi insert\n\n";
    
    pause();
}

void tampilExchangeSort() {
    cls();
    cout << "=== EXCHANGE SORT ===\n\n";
    cout << "Pengertian:\n";
    cout << "Exchange sort adalah algoritma sorting yang membandingkan pasangan elemen dan menukar jika urutan salah.\n\n";
    
    cout << "Langkah-langkah:\n";
    cout << "1. Bandingkan setiap pasangan elemen\n";
    cout << "2. Tukar jika elemen kiri lebih besar dari elemen kanan\n";
    cout << "3. Ulangi sampai array terurut\n\n";
    
    cout << "Contoh:\n";
    cout << "for(int i = 0; i < n-1; i++) {\n";
    cout << "    for(int j = i+1; j < n; j++) {\n";
    cout << "        if(arr[i] > arr[j]) {\n";
    cout << "            swap(arr[i], arr[j]);\n";
    cout << "        }\n";
    cout << "    }\n";
    cout << "}\n\n";
    
    pause();
}

void tampilRadixSort() {
    cls();
    cout << "=== RADIX SORT ===\n\n";
    cout << "Pengertian:\n";
    cout << "Radix sort adalah algoritma sorting non-pembanding yang mengurutkan angka digit demi digit.\n\n";
    
    cout << "Langkah-langkah:\n";
    cout << "1. Mulai dari digit paling kanan (unit)\n";
    cout << "2. Urutkan array berdasarkan digit saat ini\n";
    cout << "3. Pindah ke digit berikutnya (puluhan, ratusan, dll)\n\n";
    
    cout << "Contoh:\n";
    cout << "// Implementasi counting sort sebagai subrutin\n";
    cout << "// Proses per digit\n\n";
    
    pause();
}

void tampilShellSort() {
    cls();
    cout << "=== SHELL SORT ===\n\n";
    cout << "Pengertian:\n";
    cout << "Shell sort adalah variasi insertion sort yangan pertukaran jarak jauh.\n\n";
    
    cout << "Langkah-langkah:\n";
    cout << "1. Pilih gap (jarak antar elemen)\n";
    cout << "2. Bandingkan elemen dengan gap tertentu\n";
    cout << "3. Urutkan elemen dalam gap tersebut\n";
    cout << "4. Kurangi gap dan ulangi\n\n";
    
    cout << "Contoh:\n";
    cout << "for(int gap = n/2; gap > 0; gap /= 2) {\n";
    cout << "    for(int i = gap; i < n; i++) {\n";
    cout << "        int temp = arr[i];\n";
    cout << "        int j;\n";
    cout << "        for(j = i; j >= gap && arr[j-gap] > temp; j -= gap) {\n";
    cout << "            arr[j] = arr[j-gap];\n";
    cout << "        }\n";
    cout << "        arr[j] = temp;\n";
    cout << "    }\n";
    cout << "}\n\n";
    
    pause();
}

void tampilBubbleSort() {
    cls();
    cout << "=== BUBBLE SORT ===\n\n";
    cout << "Pengertian:\n";
    cout << "Bubble sort adalah algoritma sorting yang terus menukar elemen berdekatan jika urutan salah.\n\n";
    
    cout << "Langkah-langkah:\n";
    cout << "1. Bandingkan pasangan elemen berdekatan\n";
    cout << "2. Tukar jika elemen kiri lebih besar dari elemen kanan\n";
    cout << "3. Ulangi sampai tidak ada lagi pertukaran\n\n";
    
    cout << "Contoh:\n";
    cout << "for(int i = 0; i < n-1; i++) {\n";
    cout << "    for(int j = 0; j < n-i-1; j++) {\n";
    cout << "        if(arr[j] > arr[j+1]) {\n";
    cout << "            swap(arr[j], arr[j+1]);\n";
    cout << "        }\n";
    cout << "    }\n";
    cout << "}\n\n";
    
    pause();
}

void tampilSelectionSort() {
    cls();
    cout << "=== SELECTION SORT ===\n\n";
    cout << "Pengertian:\n";
    cout << "Selection sort adalah algoritma sorting yang mencari elemen terkecil dan menukar dengan posisi pertama.\n\n";
    
    cout << "Langkah-langkah:\n";
    cout << "1. Cari elemen terkecil dari array yang belum diurutkan\n";
    cout << "2. Tukar elemen terkecil dengan elemen pertama\n";
    cout << "3. Ulangi untuk sisa array\n\n";
    
    cout << "Contoh:\n";
    cout << "for(int i = 0; i < n-1; i++) {\n";
    cout << "    int min_idx = i;\n";
    cout << "    for(int j = i+1; j < n; j++) {\n";
    cout << "        if(arr[j] < arr[min_idx]) {\n";
    cout << "            min_idx = j;\n";
    cout << "        }\n";
    cout << "    }\n";
    cout << "    swap(arr[min_idx], arr[i]);\n";
    cout << "}\n\n";
    
    pause();
}

#endif