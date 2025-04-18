#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    string biner;
    int desimal = 0;
    int pangkat = 1;

    cout << "Masukkan bilangan biner: ";
    cin >> biner;

    for (int i = biner.length() - 1; i >= 0; i--) {
        if (biner[i] == '1') {
            desimal += pangkat;
        } else if (biner[i] != '0' && biner[i] != '1') {
            cout<<"Pesan Rusak!"<<endl;
            break;
        }
        pangkat *= 2;
    }
    cout << "Hasil desimal: " << desimal << endl;

    char ulang;
    cout << "\nIngin mengulang program? (Y/N)"<<endl;
    cin >> ulang;
    getchar();
    if (ulang == 'Y' || ulang == 'y') {
        main();
    } else {
        cout << "\n//==//==// Program selesai //==//==//" << endl;
    }
}