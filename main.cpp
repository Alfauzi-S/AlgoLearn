#include <iostream>
#include "menu.h"
#include "array_submenu.h"
#include "pointer_struct_submenu.h"
#include "procedure_function_submenu.h"
#include "sorting_submenu.h"
#include "searching_submenu.h"

using namespace std;

int main() {
    int pilihan, subpilihan;
    
    do {
        cls();
        tampilMenuUtama();
        cin >> pilihan;
        
        switch(pilihan) {
            case 1:
                do {
                    cls();
                    tampilSubMenuArray();
                    cin >> subpilihan;
                    
                    switch(subpilihan) {
                        case 1: tampilString(); break;
                        case 2: tampilArrayStatis(); break;
                        case 3: tampilArrayDinamis(); break;
                        case 4: tampilArray1Dimensi(); break;
                        case 5: tampilArrayMulti2Dimensi(); break;
                        case 6: tampilArrayMulti3Dimensi(); break;
                        case 7: tampilPenjumlahanMatriks(); break;
                        case 8: tampilPenguranganMatriks(); break;
                        case 9: tampilPerkalianMatriks(); break;
                        case 10: tampilTransposeMatriks(); break;
                        case 11: tampilInversMatriks(); break;
                        case 0: break;
                        default: 
                            cout << "Pilihan tidak valid!\n";
                            pauseMenu();
                            break;
                    }
                } while(subpilihan != 0);
                break;
                
            case 2:
                do {
                    cls();
                    tampilSubMenuPointerStruct();
                    cin >> subpilihan;
                    
                    switch(subpilihan) {
                        case 1: tampilPointer(); break;
                        case 2: tampilStruct(); break;
                        case 3: tampilArrayStruct(); break;
                        case 4: tampilPointerStruct(); break;
                        case 5: tampilUnion(); break;
                        case 0: break;
                        default: 
                            cout << "Pilihan tidak valid!\n";
                            pauseMenu();
                            break;
                    }
                } while(subpilihan != 0);
                break;
                
            case 3:
                do {
                    cls();
                    tampilSubMenuProcedureFungsi();
                    cin >> subpilihan;
                    
                    switch(subpilihan) {
                        case 1: tampilProcedure(); break;
                        case 2: tampilFungsi(); break;
                        case 3: tampilParameter(); break;
                        case 4: tampilVariabelLokalGlobal(); break;
                        case 5: tampilVariabelStatic(); break;
                        case 6: tampilFungsiRekursif(); break;
                        case 0: break;
                        default: 
                            cout << "Pilihan tidak valid!\n";
                            pauseMenu();
                            break;
                    }
                } while(subpilihan != 0);
                break;
                
            case 4:
                do {
                    cls();
                    tampilSubMenuSorting();
                    cin >> subpilihan;
                    
                    switch(subpilihan) {
                        case 1: tampilInsertionSort(); break;
                        case 2: tampilHeapSort(); break;
                        case 3: tampilMergeSort(); break;
                        case 4: tampilQuickSort(); break;
                        case 5: tampilTreeSort(); break;
                        case 6: tampilExchangeSort(); break;
                        case 7: tampilRadixSort(); break;
                        case 8: tampilShellSort(); break;
                        case 9: tampilBubbleSort(); break;
                        case 10: tampilSelectionSort(); break;
                        case 0: break;
                        default: 
                            cout << "Pilihan tidak valid!\n";
                            pauseMenu();
                            break;
                    }
                } while(subpilihan != 0);
                break;
                
            case 5:
                do {
                    cls();
                    tampilSubMenuSearching();
                    cin >> subpilihan;
                    
                    switch(subpilihan) {
                        case 1: tampilFibonacciSearch(); break;
                        case 2: tampilBinarySearch(); break;
                        case 3: tampilInterpolationSearch(); break;
                        case 4: tampilSequentialSearch(); break;
                        case 0: break;
                        default: 
                            cout << "Pilihan tidak valid!\n";
                            pauseMenu();
                            break;
                    }
                } while(subpilihan != 0);
                break;
                
            case 0:
                cout << "Terima kasih telah menggunakan AlgoLearn!\n";
                break;
                
            default:
                cout << "Pilihan tidak valid!\n";
                pauseMenu();
                break;
        }
    } while(pilihan != 0);
    
    return 0;
}