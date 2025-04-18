#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    system("cls");
    
    int n1,n2,n3;
    float mean;
    string nama, nim;

    cout << "Nama Mahasiswa : ";
    getline(cin, nama);
    cout << "NIM Mahasiswa : ";
    getline(cin, nim);

    cout << "Nilai Mata Kuliah: "<<endl;
    cout << "Algoritma & Pemrograman : "; cin >> n1;
    cout << "Matematika Diskrit : "; cin >> n2;
    cout << "Statistika & Probabilitas : "; cin >> n3;

    if (n1 >= 60) {
        cout << "\nAlgoritma & Pemrograman : Lulus." << endl;
    } else if (n1 < 0 || n1 > 100) {
        cout << "Nilai tidak valid!" << endl;
    } else {
        cout << "\nAlgoritma & Pemrograman : Tidak Lulus. Silakan Ulangi di Tahun Depan!" << endl;
    }

    if (n2 >= 60) {
        cout << "Matematika Diskrit : Lulus." << endl;
    } else if (n2 < 0 || n2 > 100) {
        cout << "Nilai tidak valid!" << endl;
    } else {
        cout << "Matematika Diskrit : Tidak Lulus. Silakan Ulangi di Tahun Depan!" << endl;
    }

    if (n3 >= 60){
        cout << "Statistika & Probabilitas : Lulus." << endl;
    } else if (n3 < 0 || n3 > 100) {
        cout << "Nilai tidak valid!" << endl;
    } else {
        cout << "Statistika & Probabilitas : Tidak Lulus. Silakan Ulangi di Tahun Depan!" << endl;
    }

    mean = (n1 + n2 + n3) / 3.0;
    cout <<"Nilai Rata-rata Semester ini: " << fixed << setprecision(2)<< mean << endl;

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