#include <iostream>
using namespace std;

int main() {
    const float pi = 3.14;
    float r, luas, volume;

    system("cls");
    cout << "masukkan r: ";
    cin >> r;

    luas = 4 * pi * r * r;
    volume = (float)4/(float)3 * pi * r * r * r;

    cout << "luas permukaan adalah: " << luas << endl;
    cout << "volume adalah : " << volume << endl;

}