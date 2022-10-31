#include <iostream>
using namespace std;

int main()
{
    string nama = "Johan", kelas = "1C", hobi = "Tidur", cita = "Menjadi presiden";
    int umur = 18;
    long npm = 2210631170023;

    //* Tugas 1
    cout << "NPM   : " << npm << endl;
    cout << "Nama  : " << nama << endl;
    cout << "Umur  : " << umur << endl;
    cout << "Kelas : " << kelas << endl;
    cout << "Hobi  : " << hobi << endl;
    cout << "Cita-Cita : " << cita << endl
         << endl;

    //* Tugas 2

    //! variable sementara
    int a = 2;
    int b = 8;

    int c = a;
    a = b;
    b = c;


    cout << "Menggunakan Variabel Sementara" << endl;
    cout << "Hasil a = " << a << endl;
    cout << "Hasil b = " << b << endl;

    //! tanpa variable sementara
    int a1 = 4;
    int b1 = 7;

    a1 = a1 - b1;
    b1 = a1 + b1;
    a1 = b1 - a1;

    cout << "Tidak menggunakan Variabel Sementara" << endl;
    cout << "Hasil a = " << a1 << endl;
    cout << "Hasil b = " << b1 << endl;

    return 0;
}
