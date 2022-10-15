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
    int a = 7;
    a = 10;

    cout << a << endl;

    //! tanpa variable sementara

    int b = 2;
    cout << b + 2 << endl;

    return 0;
}
