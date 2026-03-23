#ifndef SORTING_SUBMENU_H
#define SORTING_SUBMENU_H

#include <iostream>
#include "menu.h"
#include <vector>
#include <algorithm>

using namespace std;

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

void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
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
    
    cout << "Contoh Implementasi:\n";
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    
    cout << "Array sebelum diurutkan: ";
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if(i < arr.size() - 1) cout << ", ";
    }
    cout << endl;
    
    cout << "\nIterasi Insertion Sort:\n";
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        int iterasi = i;
        
        cout << "Iterasi " << iterasi << ": ";
        cout << key << ", posisi saat ini = " << i << endl;
        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        
        cout << "  Hasil setelah iterasi " << iterasi << ": ";
        for(int k = 0; k < arr.size(); k++) {
            cout << arr[k];
            if(k < arr.size() - 1) cout << ", ";
        }
        cout << endl;
    }
    
    cout << "\nArray setelah diurutkan: ";
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if(i < arr.size() - 1) cout << ", ";
    }
    cout << endl;
    
    cout << "\nImplementasi Kode:\n";
    cout << "void insertionSort(vector<int>& arr) {\n";
    cout << "    int n = arr.size();\n";
    cout << "    for (int i = 1; i < n; i++) {\n";
    cout << "        int key = arr[i];\n";
    cout << "        int j = i - 1;\n";
    cout << "        while (j >= 0 && arr[j] > key) {\n";
    cout << "            arr[j + 1] = arr[j];\n";
    cout << "            j--;\n";
    cout << "        }\n";
    cout << "        arr[j + 1] = key;\n";
    cout << "    }\n";
    cout << "}\n\n";
    
    pause();
}

void heapify(vector<int>& arr, int n, int i) {
    int largest = i; // Inisialisasi largest sebagai root
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    // Jika left child lebih besar dari root
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // Jika right child lebih besar dari largest
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // Jika largest bukan root
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(vector<int>& arr) {
    int n = arr.size();

    // Bangun max heap
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Ekstraksi elemen satu per satu dari heap
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
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
    
    cout << "Contoh Implementasi:\n";
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    
    cout << "Array sebelum diurutkan: ";
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if(i < arr.size() - 1) cout << ", ";
    }
    cout << endl;
    
    cout << "\nIterasi Heap Sort:\n";
    int n = arr.size();

    // Bangun max heap
    cout << "Membangun max heap..." << endl;
    for (int i = n / 2 - 1; i >= 0; i--) {
        cout << "Heapify dari indeks " << i << endl;
        heapify(arr, n, i);
        cout << "Hasil heapify: ";
        for(int j = 0; j < arr.size(); j++) {
            cout << arr[j];
            if(j < arr.size() - 1) cout << ", ";
        }
        cout << endl;
    }
    
    cout << "Proses sorting..." << endl;
    // Ekstraksi elemen satu per satu dari heap
    for (int i = n - 1; i > 0; i--) {
        cout << "Menukar arr[0] = " << arr[0] << " dengan arr[" << i << "] = " << arr[i] << endl;
        swap(arr[0], arr[i]);
        cout << "Setelah swap: ";
        for(int j = 0; j < arr.size(); j++) {
            cout << arr[j];
            if(j < arr.size() - 1) cout << ", ";
        }
        cout << endl;
        
        cout << "Heapify dari indeks 0 dengan ukuran " << i << endl;
        heapify(arr, i, 0);
        cout << "Hasil heapify: ";
        for(int j = 0; j < arr.size(); j++) {
            cout << arr[j];
            if(j < arr.size() - 1) cout << ", ";
        }
        cout << endl;
    }
    
    cout << "\nArray setelah diurutkan: ";
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if(i < arr.size() - 1) cout << ", ";
    }
    cout << endl;
    
    cout << "\nImplementasi Kode:\n";
    cout << "void heapify(vector<int>& arr, int n, int i) {\n";
    cout << "    int largest = i;\n";
    cout << "    int left = 2 * i + 1;\n";
    cout << "    int right = 2 * i + 2;\n";
    cout << "\n";
    cout << "    if (left < n && arr[left] > arr[largest])\n";
    cout << "        largest = left;\n";
    cout << "    if (right < n && arr[right] > arr[largest])\n";
    cout << "        largest = right;\n";
    cout << "    if (largest != i) {\n";
    cout << "        swap(arr[i], arr[largest]);\n";
    cout << "        heapify(arr, n, largest);\n";
    cout << "    }\n";
    cout << "}\n";
    cout << "\n";
    cout << "void heapSort(vector<int>& arr) {\n";
    cout << "    int n = arr.size();\n";
    cout << "    for (int i = n / 2 - 1; i >= 0; i--)\n";
    cout << "        heapify(arr, n, i);\n";
    cout << "    for (int i = n - 1; i > 0; i--) {\n";
    cout << "        swap(arr[0], arr[i]);\n";
    cout << "        heapify(arr, i, 0);\n";
    cout << "    }\n";
    cout << "}\n\n";
    
    pause();
}

void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr, int left, int right) {
    if (left >= right) return;

    int mid = left + (right - left) / 2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
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
    
    cout << "Contoh Implementasi:\n";
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    
    cout << "Array sebelum diurutkan: ";
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if(i < arr.size() - 1) cout << ", ";
    }
    cout << endl;
    
    cout << "\nIterasi Merge Sort:\n";
    vector<int> tempArr = arr;
    mergeSort(tempArr, 0, tempArr.size() - 1);
    
    cout << "Array setelah diurutkan: ";
    for(int i = 0; i < tempArr.size(); i++) {
        cout << tempArr[i];
        if(i < tempArr.size() - 1) cout << ", ";
    }
    cout << endl;
    
    cout << "\nImplementasi Kode:\n";
    cout << "void merge(vector<int>& arr, int left, int mid, int right) {\n";
    cout << "    int n1 = mid - left + 1;\n";
    cout << "    int n2 = right - mid;\n";
    cout << "    vector<int> L(n1), R(n2);\n";
    cout << "    for (int i = 0; i < n1; i++)\n";
    cout << "        L[i] = arr[left + i];\n";
    cout << "    for (int j = 0; j < n2; j++)\n";
    cout << "        R[j] = arr[mid + 1 + j];\n";
    cout << "    int i = 0, j = 0, k = left;\n";
    cout << "    while (i < n1 && j < n2) {\n";
    cout << "        if (L[i] <= R[j]) {\n";
    cout << "            arr[k] = L[i];\n";
    cout << "            i++;\n";
    cout << "        } else {\n";
    cout << "            arr[k] = R[j];\n";
    cout << "            j++;\n";
    cout << "        }\n";
    cout << "        k++;\n";
    cout << "    }\n";
    cout << "    while (i < n1) {\n";
    cout << "        arr[k] = L[i];\n";
    cout << "        i++; k++;\n";
    cout << "    }\n";
    cout << "    while (j < n2) {\n";
    cout << "        arr[k] = R[j];\n";
    cout << "        j++; k++;\n";
    cout << "    }\n";
    cout << "}\n";
    cout << "\n";
    cout << "void mergeSort(vector<int>& arr, int left, int right) {\n";
    cout << "    if (left >= right) return;\n";
    cout << "    int mid = left + (right - left) / 2;\n";
    cout << "    mergeSort(arr, left, mid);\n";
    cout << "    mergeSort(arr, mid + 1, right);\n";
    cout << "    merge(arr, left, mid, right);\n";
    cout << "}\n\n";
    
    pause();
}

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
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
    
    cout << "Contoh Implementasi:\n";
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    
    cout << "Array sebelum diurutkan: ";
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if(i < arr.size() - 1) cout << ", ";
    }
    cout << endl;
    
    cout << "\nIterasi Quick Sort:\n";
    vector<int> tempArr = arr;
    quickSort(tempArr, 0, tempArr.size() - 1);
    
    cout << "Array setelah diurutkan: ";
    for(int i = 0; i < tempArr.size(); i++) {
        cout << tempArr[i];
        if(i < tempArr.size() - 1) cout << ", ";
    }
    cout << endl;
    
    cout << "\nImplementasi Kode:\n";
    cout << "int partition(vector<int>& arr, int low, int high) {\n";
    cout << "    int pivot = arr[high];\n";
    cout << "    int i = low - 1;\n";
    cout << "    for (int j = low; j <= high - 1; j++) {\n";
    cout << "        if (arr[j] < pivot) {\n";
    cout << "            i++;\n";
    cout << "            swap(arr[i], arr[j]);\n";
    cout << "        }\n";
    cout << "    }\n";
    cout << "    swap(arr[i + 1], arr[high]);\n";
    cout << "    return i + 1;\n";
    cout << "}\n";
    cout << "\n";
    cout << "void quickSort(vector<int>& arr, int low, int high) {\n";
    cout << "    if (low < high) {\n";
    cout << "        int pi = partition(arr, low, high);\n";
    cout << "        quickSort(arr, low, pi - 1);\n";
    cout << "        quickSort(arr, pi + 1, high);\n";
    cout << "    }\n";
    cout << "}\n\n";
    
    pause();
}

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* insert(TreeNode* root, int val) {
    if (!root) return new TreeNode(val);
    if (val < root->val)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);
    return root;
}

void inorder(TreeNode* root, vector<int>& result) {
    if (root) {
        inorder(root->left, result);
        result.push_back(root->val);
        inorder(root->right, result);
    }
}

void treeSort(vector<int>& arr) {
    TreeNode* root = NULL;
    for (int val : arr) {
        root = insert(root, val);
    }
    arr.clear();
    inorder(root, arr);
}

void tampilTreeSort() {
    cls();
    cout << "=== TREE SORT ===\n\n";
    cout << "Pengertian:\n";
    cout << "Tree sort adalah algoritma sorting yang menggunakan binary search tree.\n\n";
    
    cout << "Langkah-langkah:\n";
    cout << "1. Bangun binary search tree dari elemen array\n";
    cout << "2. Lakukan inorder traversal untuk mendapatkan elemen dalam urutan terurut\n\n";
    
    cout << "Contoh Implementasi:\n";
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    
    cout << "Array sebelum diurutkan: ";
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if(i < arr.size() - 1) cout << ", ";
    }
    cout << endl;
    
    cout << "\nIterasi Tree Sort:\n";
    vector<int> tempArr = arr;
    treeSort(tempArr);
    
    cout << "Array setelah diurutkan: ";
    for(int i = 0; i < tempArr.size(); i++) {
        cout << tempArr[i];
        if(i < tempArr.size() - 1) cout << ", ";
    }
    cout << endl;
    
    cout << "\nImplementasi Kode:\n";
    cout << "struct TreeNode {\n";
    cout << "    int val;\n";
    cout << "    TreeNode* left;\n";
    cout << "    TreeNode* right;\n";
    cout << "    TreeNode(int x) : val(x), left(NULL), right(NULL) {}\n";
    cout << "};\n";
    cout << "\n";
    cout << "TreeNode* insert(TreeNode* root, int val) {\n";
    cout << "    if (!root) return new TreeNode(val);\n";
    cout << "    if (val < root->val)\n";
    cout << "        root->left = insert(root->left, val);\n";
    cout << "    else\n";
    cout << "        root->right = insert(root->right, val);\n";
    cout << "    return root;\n";
    cout << "}\n";
    cout << "\n";
    cout << "void inorder(TreeNode* root, vector<int>& result) {\n";
    cout << "    if (root) {\n";
    cout << "        inorder(root->left, result);\n";
    cout << "        result.push_back(root->val);\n";
    cout << "        inorder(root->right, result);\n";
    cout << "    }\n";
    cout << "}\n";
    cout << "\n";
    cout << "void treeSort(vector<int>& arr) {\n";
    cout << "    TreeNode* root = NULL;\n";
    cout << "    for (int val : arr) {\n";
    cout << "        root = insert(root, val);\n";
    cout << "    }\n";
    cout << "    arr.clear();\n";
    cout << "    inorder(root, arr);\n";
    cout << "}\n\n";
    
    pause();
}

void exchangeSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }
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
    
    cout << "Contoh Implementasi:\n";
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    
    cout << "Array sebelum diurutkan: ";
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if(i < arr.size() - 1) cout << ", ";
    }
    cout << endl;
    
    cout << "\nIterasi Exchange Sort:\n";
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        cout << "Iterasi " << (i+1) << ": ";
        cout << "posisi i = " << i << ", arr[" << i << "] = " << arr[i] << endl;
        
        for (int j = i + 1; j < n; j++) {
            cout << "  Membandingkan arr[" << i << "] = " << arr[i] 
                 << " dengan arr[" << j << "] = " << arr[j];
            
            if (arr[i] > arr[j]) {
                cout << " -> TUKAR!";
                swap(arr[i], arr[j]);
            } else {
                cout << " -> TIDAK DITUKAR";
            }
            cout << endl;
        }
        
        cout << "  Hasil setelah iterasi " << (i+1) << ": ";
        for(int k = 0; k < arr.size(); k++) {
            cout << arr[k];
            if(k < arr.size() - 1) cout << ", ";
        }
        cout << endl;
    }
    
    cout << "\nArray setelah diurutkan: ";
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if(i < arr.size() - 1) cout << ", ";
    }
    cout << endl;
    
    cout << "\nImplementasi Kode:\n";
    cout << "void exchangeSort(vector<int>& arr) {\n";
    cout << "    int n = arr.size();\n";
    cout << "    for (int i = 0; i < n - 1; i++) {\n";
    cout << "        for (int j = i + 1; j < n; j++) {\n";
    cout << "            if (arr[i] > arr[j]) {\n";
    cout << "                swap(arr[i], arr[j]);\n";
    cout << "            }\n";
    cout << "        }\n";
    cout << "    }\n";
    cout << "}\n\n";
    
    pause();
}

int getMax(vector<int> arr) {
    int max = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

void countSort(vector<int>& arr, int exp) {
    vector<int> output(arr.size());
    vector<int> count(10, 0);

    for (int i = 0; i < arr.size(); i++)
        count[(arr[i] / exp) % 10]++;

    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (int i = arr.size() - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    for (int i = 0; i < arr.size(); i++)
        arr[i] = output[i];
}

void radixSort(vector<int>& arr) {
    int max = getMax(arr);
    for (int exp = 1; max / exp > 0; exp *= 10) {
        countSort(arr, exp);
    }
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
    
    cout << "Contoh Implementasi:\n";
    vector<int> arr = {170, 45, 75, 90, 2, 802, 24, 66};
    
    cout << "Array sebelum diurutkan: ";
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if(i < arr.size() - 1) cout << ", ";
    }
    cout << endl;
    
    cout << "\nIterasi Radix Sort:\n";
    vector<int> tempArr = arr;
    int max = getMax(tempArr);
    
    for (int exp = 1; max / exp > 0; exp *= 10) {
        cout << "Urutkan berdasarkan digit ke-" << (exp == 1 ? "satuan" : exp == 10 ? "puluhan" : exp == 100 ? "ratusan" : "ribuan") << endl;
        countSort(tempArr, exp);
        cout << "Hasil setelah mengurutkan digit ke-" << (exp == 1 ? "satuan" : exp == 10 ? "puluhan" : exp == 100 ? "ratusan" : "ribuan") << ": ";
        for(int i = 0; i < tempArr.size(); i++) {
            cout << tempArr[i];
            if(i < tempArr.size() - 1) cout << ", ";
        }
        cout << endl;
    }
    
    cout << "\nArray setelah diurutkan: ";
    for(int i = 0; i < tempArr.size(); i++) {
        cout << tempArr[i];
        if(i < tempArr.size() - 1) cout << ", ";
    }
    cout << endl;
    
    cout << "\nImplementasi Kode:\n";
    cout << "int getMax(vector<int> arr) {\n";
    cout << "    int max = arr[0];\n";
    cout << "    for (int i = 1; i < arr.size(); i++) {\n";
    cout << "        if (arr[i] > max)\n";
    cout << "            max = arr[i];\n";
    cout << "    }\n";
    cout << "    return max;\n";
    cout << "}\n";
    cout << "\n";
    cout << "void countSort(vector<int>& arr, int exp) {\n";
    cout << "    vector<int> output(arr.size());\n";
    cout << "    vector<int> count(10, 0);\n";
    cout << "    for (int i = 0; i < arr.size(); i++)\n";
    cout << "        count[(arr[i] / exp) % 10]++;\n";
    cout << "    for (int i = 1; i < 10; i++)\n";
    cout << "        count[i] += count[i - 1];\n";
    cout << "    for (int i = arr.size() - 1; i >= 0; i--) {\n";
    cout << "        output[count[(arr[i] / exp) % 10] - 1] = arr[i];\n";
    cout << "        count[(arr[i] / exp) % 10]--;\n";
    cout << "    }\n";
    cout << "    for (int i = 0; i < arr.size(); i++)\n";
    cout << "        arr[i] = output[i];\n";
    cout << "}\n";
    cout << "\n";
    cout << "void radixSort(vector<int>& arr) {\n";
    cout << "    int max = getMax(arr);\n";
    cout << "    for (int exp = 1; max / exp > 0; exp *= 10) {\n";
    cout << "        countSort(arr, exp);\n";
    cout << "    }\n";
    cout << "}\n\n";
    
    pause();
}

void shellSort(vector<int>& arr) {
    int n = arr.size();
    for (int gap = n/2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
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
    
    cout << "Contoh Implementasi:\n";
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    
    cout << "Array sebelum diurutkan: ";
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if(i < arr.size() - 1) cout << ", ";
    }
    cout << endl;
    
    cout << "\nIterasi Shell Sort:\n";
    int n = arr.size();
    for (int gap = n/2; gap > 0; gap /= 2) {
        cout << "Gap = " << gap << endl;
        
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            cout << "  i = " << i << ", temp = " << temp << endl;
            
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
                cout << "    Memindahkan arr[" << (j-gap) << "] = " << arr[j] 
                     << " ke posisi " << j << endl;
            }
            arr[j] = temp;
            cout << "    Menyimpan " << temp << " ke posisi " << j << endl;
        }
        
        cout << "  Hasil setelah gap " << gap << ": ";
        for(int k = 0; k < arr.size(); k++) {
            cout << arr[k];
            if(k < arr.size() - 1) cout << ", ";
        }
        cout << endl;
    }
    
    cout << "\nArray setelah diurutkan: ";
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if(i < arr.size() - 1) cout << ", ";
    }
    cout << endl;
    
    cout << "\nImplementasi Kode:\n";
    cout << "void shellSort(vector<int>& arr) {\n";
    cout << "    int n = arr.size();\n";
    cout << "    for (int gap = n/2; gap > 0; gap /= 2) {\n";
    cout << "        for (int i = gap; i < n; i++) {\n";
    cout << "            int temp = arr[i];\n";
    cout << "            int j;\n";
    cout << "            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {\n";
    cout << "                arr[j] = arr[j - gap];\n";
    cout << "            }\n";
    cout << "            arr[j] = temp;\n";
    cout << "        }\n";
    cout << "    }\n";
    cout << "}\n\n";
    
    pause();
}

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
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
    
    cout << "Contoh Implementasi:\n";
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    
    cout << "Array sebelum diurutkan: ";
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if(i < arr.size() - 1) cout << ", ";
    }
    cout << endl;
    
    cout << "\nIterasi Bubble Sort:\n";
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        cout << "Iterasi " << (i+1) << ": ";
        bool swapped = false;
        
        for (int j = 0; j < n - i - 1; j++) {
            cout << "  Membandingkan arr[" << j << "] = " << arr[j] 
                 << " dengan arr[" << (j+1) << "] = " << arr[j+1];
            
            if (arr[j] > arr[j + 1]) {
                cout << " -> TUKAR!";
                swap(arr[j], arr[j + 1]);
                swapped = true;
            } else {
                cout << " -> TIDAK DITUKAR";
            }
            cout << endl;
        }
        
        cout << "  Hasil setelah iterasi " << (i+1) << ": ";
        for(int k = 0; k < arr.size(); k++) {
            cout << arr[k];
            if(k < arr.size() - 1) cout << ", ";
        }
        cout << endl;
        
        if (!swapped) {
            cout << "  Tidak ada pertukaran, array sudah terurut!" << endl;
            break;
        }
    }
    
    cout << "\nArray setelah diurutkan: ";
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if(i < arr.size() - 1) cout << ", ";
    }
    cout << endl;
    
    cout << "\nImplementasi Kode:\n";
    cout << "void bubbleSort(vector<int>& arr) {\n";
    cout << "    int n = arr.size();\n";
    cout << "    for (int i = 0; i < n - 1; i++) {\n";
    cout << "        for (int j = 0; j < n - i - 1; j++) {\n";
    cout << "            if (arr[j] > arr[j + 1]) {\n";
    cout << "                swap(arr[j], arr[j + 1]);\n";
    cout << "            }\n";
    cout << "        }\n";
    cout << "    }\n";
    cout << "}\n\n";
    
    pause();
}

void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        swap(arr[min_idx], arr[i]);
    }
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
    
    cout << "Contoh Implementasi:\n";
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    
    cout << "Array sebelum diurutkan: ";
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if(i < arr.size() - 1) cout << ", ";
    }
    cout << endl;
    
    cout << "\nIterasi Selection Sort:\n";
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        cout << "Iterasi " << (i+1) << ": ";
        cout << "mencari elemen terkecil dari posisi " << i << " ke akhir" << endl;
        
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
                cout << "  Elemen terkecil baru ditemukan di posisi " << j 
                     << ", nilai = " << arr[j] << endl;
            }
        }
        
        cout << "  Menukar arr[" << i << "] = " << arr[i] 
             << " dengan arr[" << min_idx << "] = " << arr[min_idx] << endl;
        swap(arr[min_idx], arr[i]);
        
        cout << "  Hasil setelah iterasi " << (i+1) << ": ";
        for(int k = 0; k < arr.size(); k++) {
            cout << arr[k];
            if(k < arr.size() - 1) cout << ", ";
        }
        cout << endl;
    }
    
    cout << "\nArray setelah diurutkan: ";
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if(i < arr.size() - 1) cout << ", ";
    }
    cout << endl;
    
    cout << "\nImplementasi Kode:\n";
    cout << "void selectionSort(vector<int>& arr) {\n";
    cout << "    int n = arr.size();\n";
    cout << "    for (int i = 0; i < n - 1; i++) {\n";
    cout << "        int min_idx = i;\n";
    cout << "        for (int j = i + 1; j < n; j++) {\n";
    cout << "            if (arr[j] < arr[min_idx]) {\n";
    cout << "                min_idx = j;\n";
    cout << "            }\n";
    cout << "        }\n";
    cout << "        swap(arr[min_idx], arr[i]);\n";
    cout << "    }\n";
    cout << "}\n\n";
    
    pause();
}

#endif