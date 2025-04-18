#include <iostream>
using namespace std;

int main() {
    system("cls");
    int count=0;
    string mantra;
    cout<<"Masukkan Mantra : ";
    getline(cin, mantra);

    for (int i = 0; i < mantra.length(); i++) {
        if (mantra[i] == 'a' || mantra[i] == 'i' || mantra[i] == 'u' || mantra[i] == 'e' || mantra[i] == 'o' || mantra[i] == 'A' || mantra[i] == 'I' || mantra[i] == 'U' || mantra[i] == 'E' || mantra[i] == 'O') {
            count++; }  }

    if (count >= 1) {
        cout << "Kekuatan mantra : " << count <<" vokal"<< endl; 
    } else if (count < 1) {
        cout << "Mantra tidak valid! Tidak mengandung vokal"<<endl;
    }

    char ulang;
    cout << "\nIngin mengulang program? (Y/N)"<<endl;
    cin >> ulang;
    getchar();
    if (ulang == 'Y' || ulang == 'y') 
    {
        main();
    } else {
        cout << "\n//==//==// Program selesai //==//==//" << endl;
    }
}