#include <iostream> //header standar c++, conio.h, stdio.h
#include <conio.h> //header untuk getche() dan getch()
using namespace std;

int main()
{
    string nama;
    char kom, jeniskelamin;
    int NIM;
    float IP;


    cout << "hello world"<<endl;

    cout << "masukkan nama: ";
    // cin >> nama;
    getline(cin, nama); //Agar karakter spasi bisa terbaca
    
    cout << "masukkan Kom: ";
    cin >> kom;

    cout << "masukkan NIM: ";
    cin >> NIM;

    cout << "masukkan IP: ";
    cin >> IP;

    cout << "masukkan jenis kelamin (L/P): "; //getche
    jeniskelamin = getche(); //agar karakter langsung tambil, tidak perlu tekan enter
    // cin >> jeniskelamin;

    /*ini  output*/
    cout << "\n" << nama << endl;
    cout << kom << endl;
    cout << NIM << endl;
    cout << IP << endl;
    // cout << "Jenis kelamin anda " << jeniskelamin<< endl;
    putchar (jeniskelamin); //untuk menampilkan karakter "jenis kelammin"

    cout << "press any botton to continue: ";
    getch(); // karakter yang kita ketik tidak ditampilkan di layar
}