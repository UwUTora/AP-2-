#include <iostream>
using namespace std;

int main() {
    system ("cls");

    // 1. Operasi Penugasan
    cout << "=== Operasi Penugasan === " << endl;
    int a = 10;
    int *p;
    p = &a; // pointer simpen alaman a

    cout << "Nilai a : " << a << endl; // 10
    cout << "alamat a (&a) : " << &a << endl; // alamat variabel a
    cout << "Isi pointer p : " << p << endl; // alamat variabel a
    cout << "Nilai *p : " << *p << endl; // 10

    // 2. Operasi Aritmatika
    cout << "=== Operasi Penugasan ===" << endl;
    int nilai[3];
    int *oke;

    nilai[0] = 125;
    nilai[1] = 345;
    nilai[2] = 750;

    oke = &nilai[0]; // "oke" sekarang menyimpan alamat nilai[0]
    /*ilustrasi
    nilai [0] --> alamat 1000 --> isi 125
    nilai [1] --> alamat 1002 --> isi 345
    nilai [2] --> alamat 1005 --> isi 750
    maka sekarang oke = 1000*/

    cout << "Nilai " << *oke << " ada di alamat " << oke << endl;
    cout << "Nilai " << *(oke + 1) << " Ada di alamat " << (oke + 1) << endl;
    cout << "Nilai " << *(oke + 2) << " Ada di alamat " << (oke + 2) << endl;

    // 3. Operasi Logika
    cout << "=== Operasi Logika ===" << endl;
    int x = 5, y = 10;
    int *p1 = &x; // p1 --> alamat x
    int *p2 = &y; // p2 --> alamat y
    int *p3 = &x; // p3 --> alamat x

    // jadi : p1 dan p3 sama, dan p2 beda sendiri
    /*Ilustrasi
    p1 = 1000
    p2 = 2000
    p3 = 1000*/

    if (p1 == p3) {
        cout << "p1 dan p3 menunjut alamat yang sama " << endl;
    }

    if (p1 != p2) {
        cout << "p1 dan p2 menunjuk alamat yang berbeda" << endl;
    }

    int *p4 = NULL; // pointer tidak menunjuk ke mana mana
    if (p4 == NULL) {
        cout << "p4 adalah pointer NULL" << endl;
    }
    return 0;
}