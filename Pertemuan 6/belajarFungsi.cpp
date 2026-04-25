#include <iostream>
using namespace std;

void sapa(string nama) { // nama adalah parameter formal
    cout << "Halo " << nama << " Selamat datang di AP 2 " << endl;
}

int main () {
    string namaPengguna = "Alya";

    sapa(namaPengguna); // namaPengguna adalah parameter aktual

    return 0;
}

