// Nama  : Mukhamad Fajar Syaihu Walid
// NIM   : 220401070410
// Kelas : IT-204 
// Nama Matakuliah : Struktur Data dan Algoritma
#include <iostream>
#include <string>
using namespace std;

struct Person {
    string name;
    string address;
};

// Bubble Sort function
void bubbleSort(Person arr[], int n) {
    int counter = 1;
    while(counter<n){
        for(int i=0; i<n-counter;i++){
            if(arr[i].name > arr[i+1].name){
                Person temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }
}

// Selection Sort function
void selectionSort(Person arr[], int n) {
    for (int i = 0; i < n - 1; i++) {        
        for (int j = i + 1; j < n; j++) {
            if(arr[j].name < arr[i].name){
                Person temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }       
    }
}

int main() {
    const int n = 8;
    Person data[n] = {
        {"Fahmi", "Jakarta"},
        {"Romi", "Solo"},
        {"Andri", "Jakarta"},
        {"Fadillah", "Banyuwangi"},
        {"Ruli", "Bandung"},
        {"Rudi", "Bali"},
        {"Dendi", "Purwokerto"},
        {"Zaki", "Madiun"}
    };

    cout << "Data awal sebelum diurutkan:" << endl;
    cout << "Nama\t\tAlamat" << endl;
    cout << "----------------------"<<endl;
    for (int i = 0; i < n; i++) {
        cout << data[i].name << "\t\t" << data[i].address << endl;
    }

    // Sorting using Bubble Sort
    bubbleSort(data, n);
    cout << "\nHasil setelah diurutkan dengan Bubble Sort:" << endl;
    cout << "Nama\t\tAlamat" << endl;
    cout << "----------------------"<<endl;
    for (int i = 0; i < n; i++) {
        cout << data[i].name << "\t\t" << data[i].address << endl;
    }

    // Sorting using Selection Sort
    selectionSort(data, n);
    cout << "\nHasil setelah diurutkan dengan Selection Sort:" << endl;
    cout << "Nama\t\tAlamat" << endl;
    cout << "----------------------"<<endl;
    for (int i = 0; i < n; i++) {
        cout << data[i].name << "\t\t" << data[i].address << endl;
    }

    return 0;
}
