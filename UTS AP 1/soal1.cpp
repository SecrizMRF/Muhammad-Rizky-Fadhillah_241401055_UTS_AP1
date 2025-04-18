#include <iostream>
using namespace std;

int main() {
    system("cls");

    int kode, i=1;
    
    cout << "Kode : ";
    cin >> kode;

    while (i < kode) {
        i *= 2;
    } if (i == kode) {
        cout << "Ya ya ya :3" << endl;
    } else {
        cout << "Nooo!! Bukan :(" << endl;
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