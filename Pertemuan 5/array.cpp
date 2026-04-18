#include <iostream>
#include <string.h>
#include <array>
using namespace std;

int main () {
    //array declaration & initialization
    //2 cara membuat array

    //cara 1 : array kosong
    // string nama[5];
    // nama[0] = "Alya";
    // nama[1] = "Parul";
    // nama[2] = "Hana";
    // nama[3] = "Dewi";
    // nama[4] = "Padhil";

    //cara 2 : Array langsung diisi
    // string nama[5] = {"Alya", "parul ","Hana", "Dewi", "Padhil"};   
    // string nama[] = {"Alya", "parul ","Hana", "Dewi", "Padhil"};   
    
    //Menampilkan data dalam array
    // cout << nama[0] << endl;
    // cout << nama[3] << endl;

    //Menggunakan looping ascending
    // for (int i = 0; i < 5; i++) {
    //     cout << nama[i] << endl;
    // }

    //descending
    //  for (int i = 4; i >= 0; i--) {
    //     cout << nama[i] << endl;
    // }

    // Multidimensional Array
    // 1 2 3
    // 4 5 6

    // int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    // for (int i = 0; i < 2; i++) { // baris
    //     for (int j = 0; j < 3; j++) { // kolom 
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // // String (Array of char) 
    // string nama = "Alya";
    // cout << nama[0] << endl;
    // cout << nama[2] << endl;

    // cout << nama.length(); // untuk menghitung jumlah karakter

    // string s1 = "hello";
    // string s2 = "world";

    // // 1. s1 = s2
    // s1 = s2;
    // cout << "s1 sekarang = " << s1 << endl;

    // // 2. s1 = s1 + s2
    // s1 = "hello"; // reset nilai
    // cout << "Hasil gabungan = " << s1 + s2 << endl;

    // // 3. s1.length()
    // cout << s1.length() << endl; // 5
    // cout << (s1 + s2).length() << endl; // 10
    
    // // 4. s1.substr(n, m) n itu mulai dari berapa, m itu panjang berapa
    // cout << s1.substr(2, 3) << endl; // 2 sampai ke 3, karena dari hello yaitu 5 karakter, berarti yang muncul dari karakter 3 sammpai 5 atau 2 sampai 4

    // Operator sizeof (untuk melihat ukuran memory dalam byte)
    // int angka = 10;
    // cout << sizeof(angka); // 4

    // int nilai[] = {10, 20, 30, 40, 50};
    // cout << sizeof(nilai);

    // Array library
    // misal Array biasa : float nilai[5]

    // array<float,5> nilai = {87.5, 90, 100, 95.7, 78.3};
    // cout << "nilai : " << endl;

    // for (int i = 0; i < nilai.size(); i++) {
    //     cout << nilai[i] << " ";
    // }

    
}