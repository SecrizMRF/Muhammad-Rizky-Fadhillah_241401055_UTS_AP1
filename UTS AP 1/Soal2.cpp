#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    string biner;
    int desimal = 0;
    int pangkat = 1;

    cout << "Input kode biner: ";
    cin >> biner;

    for (int i = biner.length() - 1; i >= 0; i--) {
        if (biner[i] == '1') {
            desimal += pangkat;
        } else if (biner[i] != '0' && biner[i] != '1') {
            cout<<"Pesan Rusak!"<<endl;
            return 1;
        }
        pangkat *= 2;
    }
    cout << "Angka desimal dari biner " << biner << " adalah "<< desimal << endl;

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