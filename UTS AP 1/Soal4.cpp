#include <iostream>
using namespace std;

int main() {
    system("cls");
    int count = 0, i = 0;
    string mantra;
    
    cout<<"Masukkan Mantra : ";
    getline(cin, mantra);

    while (i <= mantra.length()) {
        if (mantra[i] == 'a' || mantra[i] == 'i' || mantra[i] == 'u' || mantra[i] == 'e' || mantra[i] == 'o' || mantra[i] == 'A' || mantra[i] == 'I' || mantra[i] == 'U' || mantra[i] == 'E' || mantra[i] == 'O') {
            count++; }  
        i++;
    }

    if (count >= 1) {
        cout << "Kekuatan mantra : " << count <<" vokal"<< endl; 
    } else {
        cout << "Mantra tidak valid! Tidak mengandung vokal."<<endl;
    }

    char ulang;
    cout << "\nKamoeh mawu mengulang program? (Y/N)"<<endl;
    cin >> ulang;
    getchar();
    if (ulang == 'Y' || ulang == 'y') 
    {
        main();
    } else {
        cout << "\n//==//==// Program selesai //==//==//" << endl;
    }
}