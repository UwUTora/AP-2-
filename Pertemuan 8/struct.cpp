#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Alamat {
    string jalan;
    string kota;
    int kodePos;
};

struct Mahasiswa {
    string nama;
    int umur;
    float ipk;
    Alamat alamat; // nested struct
};

int main() {
    system("cls");

    Mahasiswa mhs1;

    // mhs1.alamat.jalan  = "Jalan Diski Glugur Rimbun";
    // mhs1.alamat.kota = "deli serdang";
    // mhs1.alamat.kodePos = 20351;

    // cout << "alamat : " << mhs1.alamat.jalan << " " << mhs1.alamat.kota << " " << mhs1.alamat.kodePos << endl;

    vector<Mahasiswa> mahasiswa;
    int n;
    cout << "Masukkan banyak mahasiswa: ";
    cin >> n;

    for (int i = 0 ; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;

        cin.get();
        cout << "Masukkan nama : ";
        getline(cin, mhs1.nama);

        cout << "Masukkan Umur : ";
        cin >> mhs1.umur;

        cout << "Masukkan IPK : ";
        cin >> mhs1.ipk;

        mahasiswa.push_back(mhs1);
    }
    system("cls");
    for (int i = 0; i < n; i++){
        cout << "Mahasiswa " << i + 1 << endl;
        cout << "Nama : " << mahasiswa[i].nama << endl;
        cout << "Umur : " << mahasiswa[i].umur << endl;
        cout << "IPK  : " << mahasiswa[i].ipk << endl;
    }
}