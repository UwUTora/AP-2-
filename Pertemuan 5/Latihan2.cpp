#include <iostream>
#include <vector>
using namespace std;

int main() {
      vector<string> nama = {"Nadia", "Echa", "Carlos", "Ilham", "Alan"};  
        cout << "Isi Vector Awal: " << endl;
        for (int i = 0; i < nama.size(); i++) {
            cout <<nama[i] << endl;
            }
        cout << endl;
        nama.push_back("Houra");
        nama.pop_back();

        nama.erase(nama.begin() + 1);
        cout << "isi Vector setelah perubahan: " << endl;
        for (int i = 0; i < nama.size(); i++) {
        cout << nama[i] << endl;
        }
        cout << endl;
        cout<<"Total nama: " << nama.size();
}