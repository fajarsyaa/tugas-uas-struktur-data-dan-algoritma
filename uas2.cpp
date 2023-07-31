// Nama  : Mukhamad Fajar Syaihu Walid
// NIM   : 220401070410
// Kelas : IT-204 
// Nama Matakuliah : Struktur Data dan Algoritma
#include <iostream>
using namespace std;

// Binary Search function
int cariDenganBinarySearch(const int arr[], int size, int target) {
    int bawah = 0;
    int atas = size - 1;
    int posisi = -1;

    while (atas >= bawah) {
        int tengah = (atas + bawah) / 2;

        if (target > arr[tengah]) {
            bawah = tengah + 1;
        } else if (target < arr[tengah]) {
            atas = tengah - 1;
        } else {
            posisi = tengah;
            break; 
        }
    }

    return posisi;
}


int main() {
    int arr[] = {19, 40, 10, 90, 2, 50, 60, 50, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int target;
    int posisi;

    // Test case 1
    target = 1;
    posisi = cariDenganBinarySearch(arr, size, target);    
    if (posisi >= 0) {
        cout << "Input: " << target << endl;
        cout << "Output: Angka " << target << " ada di indeks ke " << posisi << endl;
    } else {
        cout << "Input: " << target << endl;
        cout << "Output: Angka " << target << " tidak ada dalam array" << endl;
    }

    // Test case 2
    target = 50;
    posisi = cariDenganBinarySearch(arr, size, target);
    cout<<posisi;
    if (posisi >= 0) {
        cout << "\nInput: " << target << endl;
        cout << "Output: Angka " << target << " ada di indeks ke " << posisi << endl;
    } else {
        cout << "\nInput: " << target << endl;
        cout << "Output: Angka " << target << " tidak ada dalam array" << endl;
    }

    // Test case 3
    target = 100;
    posisi = cariDenganBinarySearch(arr, size, target);
    if (posisi >= 0) {
        cout << "\nInput: " << target << endl;
        cout << "Output: Angka " << target << " ada di indeks ke " << posisi << endl;
    } else {
        cout << "\nInput: " << target << endl;
        cout << "Output: Angka " << target << " tidak ada dalam array" << endl;
    }

    return 0;
}
