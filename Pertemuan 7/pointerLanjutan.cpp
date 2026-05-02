#include <iostream>
using namespace std;

// fungsi untuk pointer sebagai parameter
void ubahnilai(int *p) {
    *p = 20; // ubah isi alamat
}

int main() {
    system("cls");

    // 1. Pointer dalam Pointer
     cout << "=== Pointer Dalam Pointer ===" << endl;
    int a = 64; // Variabel biasa
    int *p = &a; // pointer ke a
    int **pp = &p; // pointer ke pointer p

    cout << "Nilai a: " << a << endl; // 64
    cout << "Nilai *p : " << *p << endl; // isi alamat a = 64
    cout << "Nilai **pp : " << **pp << endl; // isi pointer p

    // 2. Pointer dalam Array
    cout << "=== Pointer dalam Array ===" << endl;
    int arr[3] = {1, 2, 3};
    int *ptr = arr;

    cout << "Elemen 1 : " << *ptr << endl; // arr[0] --> 1
    cout << "Elemen 2 : " << *(ptr + 1) << endl; // arr[1] --> 2
    cout << "Elemen 3 : " << *(ptr + 2) << endl; // arr[2] --> 3

    // 3. Pointer dalam String
    cout << "=== Pointer dalam String ===" << endl;

    char *organisasi = "Ilmu komputer Laboratory Center" ;
    cout << "Awal : " << organisasi << endl;

    organisasi +=5; // geser pointer
    cout << "Geser : " << organisasi << endl; // setelah +5 --> Mulai dari k

    // 4. Pointer sebagai Parameter
    cout << "=== Pointer sebagai Parameter ===" << endl;
    int x = 5;
    cout << "sebelum : " << x << endl;

    ubahnilai(&x);
    cout << "sesudah : " << x << endl; 
}