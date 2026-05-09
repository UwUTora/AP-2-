#include <iostream>
using namespace std;

class ContohAkses {
    private: 
        int privateVar;

    protected:
        int protectedVar;

    public:
        int publicVar;

    // Contructor 
    ContohAkses() {
    privateVar = 1;
    protectedVar = 2;
    publicVar = 3;
    }
    void tampilkanSemua() {
        cout << "Akses dari dalam class : " << endl;
        cout << privateVar << endl;
        cout << protectedVar << endl;
        cout << publicVar << endl;
    }
};

// inheritance (perwarisan), class turunan 
class Turunan : public ContohAkses {
    public:
    void aksesProtected() {
        // cout << privateVar << endl; // error, karena diluar class nya
        cout << protectedVar << endl;
        cout << publicVar << endl;
    }
};

int main() {
    ContohAkses obj;
    system("cls");
    obj.tampilkanSemua();

    cout << "\n Akses dari luar class : " << endl;
    // cout << obj.privateVar << endl; // error, karena di luar class nya
    // cout << obj.protectedVar << endl; // error, karena di luar class dan diluar class turunan
    cout << obj.publicVar << endl;  

    cout << "\n Akses dari kelas Turunan : " << endl;
    Turunan tur;
    tur.aksesProtected();
}