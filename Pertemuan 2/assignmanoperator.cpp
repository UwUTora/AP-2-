#include <iostream>
using namespace std;
int main() {
    int a, b;
    system("cls");

    //assignment operator, " = ", untuk mengasih nilai untuk suatu variable
    a = 3;
    b = 5; 

    // //arithmatical  operator, operator untuk operasi matematika
    // int tambah = a + b;
    // int kurang = a - b;
    // int kali = a * b;
    // // 
    // float bagi = (float)a/ (float)b; //type casting, memaksa tipe data untuk berubah
    // int modulo = a % b;

    // cout << "hasil penjumlahan tambah " << tambah << endl;
    // cout << "hasil penjumlahan kurang " << kurang << endl;
    // cout << "hasil penjumlahan kali " <<kali <<endl;
    // cout << "hasil penjumlahan bagi " << bagi << endl;
    // cout << "hasil penjumlahan sisa bagi " << modulo << endl;

    // relational operator, operator untuk membandingkan nilai dari 2 operand. Hasil berupa True (1)/False(0)
    // cout << (a==b) << endl;
    // cout << (a < b) << endl;
    // cout << (a != b) << endl;

    // Logical Operator (and (&&), or (||), Negasi (!)), Bandingkan 2 Nilai variable yang bertipe boolean.
    // cout << (true & true ) << endl;
    // cout << (true & false) << endl;
    // cout << (true | false) << endl;
    // cout << (false | false) << endl;
    // cout << (!true) << endl;
    // cout << (!false) << endl;

    // bitwise operator, (7 + 3), untuk operasi bilangan biner (&, q|, ^, ~, << (SHL), >> (SHR))
    // cout << (5 & 7) << endl;
    // cout << (5 | 7) << endl;
    // cout << (5 ^ 7) << endl;
    // cout << (~ 7) << endl;
    // cout << (48 << 2) << endl;
    // cout << (7 >> 2) << endl;

    // operator kondisional (ternery)  (?), kenapa 3 operand? harus berkondisi --> hasil 1 ? hasil 2
    // int max; 
    // max = (a > b) ? a : b;
    // cout << "Nilai Terbesar: " << max << endl;

    // shorthand
    // a += 7; // a = a + 7
    // cout << a << endl;

    // a *= 7;

    // increment, decrement
        // pre increment, ++ ada di depan variable 
        // cout << a << endl; // 3
        // cout << ++a << endl; // penambahan 3 = 4

        // post Increment, ++ ada di belakang variable
        // cout << a << endl; // 3
        // cout << a++ << endl; // 3 baru penambahan
        // cout << a << endl;

        // pre decrement, -- ada di depan variable
        // cout << b << endl; // 5
        // cout << --b << endl; // di kurang baru di tampilin
        
        // post decrement, -- ada di belakang variable
        cout << b << endl; // 5
        cout << b-- << endl; // di tampilin dulu baru di kurangin
        cout << b << endl; // baru tampil di sini setelah di kurangkan

        
}