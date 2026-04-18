#include <iostream>
#include <vector>
using namespace std;

int main() {
    // vector declartion & initialization
    vector<string> nama_karyawan = {"alya", "Parul", "hana", "dewi", "Padhil"};

    // Menampilkan data Ascending
    // for (int i = 0; i < nama_karyawan.size(); i++) {
    //     cout << nama_karyawan[i] << endl;
    // }

    // add data to vector
    // nama_karyawan.push_back("Edric");

    // for (int i = 0; i < nama_karyawan.size(); i++) {
    //     cout << nama_karyawan[i] << endl;
    // }

    //Delate data from vector
    nama_karyawan.pop_back();
    nama_karyawan.erase(nama_karyawan.begin() + 2);

    for (int i = 0; i < nama_karyawan.size(); i++) {
        cout << nama_karyawan[i] << endl;
    }
}
