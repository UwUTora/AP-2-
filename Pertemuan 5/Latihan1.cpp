#include <iostream>
#include <string.h>
#include <array>
using namespace std;

int main () {
    // Penjumlahan matrix 2 x 2

    int matrix1 [2][2];
    int matrix2 [2][2];
    int hasil[2][2];

    // Matrix 1
    cout << "Matrix 1 " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Masukkan elemen baris " << i + 1 << " kolom" << j + 1 << " : ";
            cin >> matrix1[i][j];
        }
    }
    // Matrix 1
    cout << "Matrix 2 " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Masukkan elemen baris " << i + 1 << " kolom" << j + 1 << " : ";
            cin >> matrix2[i][j];
        }
    }
    
    // Hasil Penjumlahan
    cout << "Hasil Penjumlahan " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            hasil[i ][ j] = matrix1[i][j] + matrix2[i][j];
            cout << hasil[i][j];
        }
        cout << endl;
    }
}