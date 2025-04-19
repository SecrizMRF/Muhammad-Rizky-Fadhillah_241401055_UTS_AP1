#include <iostream>
using namespace std;

int main() {
    system("cls");

    float kode;
    int i = 1;

    cout << "Kode (masukkan bilangan bulat positif) : ";
    cin >> kode;

    while (i < kode) {
        i *= 2;
    } if (i == kode) {
        cout << "Ya" << endl;
    } else {
        cout << "Bukan" << endl;
    }

    char ulang;
    cout << "\nKamoeh mawu mengulang program? (Y/N)"<<endl;
    cin >> ulang;
    getchar();
    if (ulang == 'Y' || ulang == 'y') { 
        main();
    } else {
        cout << "\n//==//==// Program selesai //==//==//" << endl;
    }
}