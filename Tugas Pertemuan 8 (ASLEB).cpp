#include<iostream>
using namespace std;

struct Zodiak{
    int tanggal;
    int bulan;
    int tahun;
};

void hasil(Zodiak z){
    cout<<endl;
    cout<<"================================"<<endl;
    cout<<endl;

    if ((z.tanggal >= 21 && z.tanggal <= 31 && z.bulan == 3) || (z.tanggal >= 1 && z.tanggal <= 19 && z.bulan == 4)) {
        cout << "Tanggal Lahir Anda: " << z.tanggal << "-" << z.bulan << "-" << z.tahun << endl;
        cout << "Zodiak Anda Adalah: ARIES" << endl;
    } else if ((z.tanggal >= 20 && z.tanggal <= 30 && z.bulan == 4) || (z.tanggal >= 1 && z.tanggal <= 20 && z.bulan == 5)) {
        cout << "Tanggal Lahir Anda: " << z.tanggal << "-" << z.bulan << "-" << z.tahun << endl;
        cout << "Zodiak Anda Adalah: TAURUS" << endl;
    } else if ((z.tanggal >= 21 && z.tanggal <= 31 && z.bulan == 5) || (z.tanggal >= 1 && z.tanggal <= 20 && z.bulan == 6)) {
        cout << "Tanggal Lahir Anda: " << z.tanggal << "-" << z.bulan << "-" << z.tahun << endl;
        cout << "Zodiak Anda Adalah: GEMINI" << endl;
    } else if ((z.tanggal >= 21 && z.tanggal <= 30 && z.bulan == 6) || (z.tanggal >= 1 && z.tanggal <= 22 && z.bulan == 7)) {
        cout << "Tanggal Lahir Anda: " << z.tanggal << "-" << z.bulan << "-" << z.tahun << endl;
        cout << "Zodiak Anda Adalah: CANCER" << endl;
    } else if ((z.tanggal >= 23 && z.tanggal <= 31 && z.bulan == 7) || (z.tanggal >= 1 && z.tanggal <= 22 && z.bulan == 8)) {
        cout << "Tanggal Lahir Anda: " << z.tanggal << "-" << z.bulan << "-" << z.tahun << endl;
        cout << "Zodiak Anda Adalah: LEO" << endl;
    } else if ((z.tanggal >= 23 && z.tanggal <= 31 && z.bulan == 8) || (z.tanggal >= 1 && z.tanggal <= 22 && z.bulan == 9)) {
        cout << "Tanggal Lahir Anda: " << z.tanggal << "-" << z.bulan << "-" << z.tahun << endl;
        cout << "Zodiak Anda Adalah: VIRGO" << endl;
    } else if ((z.tanggal >= 23 && z.tanggal <= 30 && z.bulan == 9) || (z.tanggal >= 1 && z.tanggal <= 22 && z.bulan == 10)) {
        cout << "Tanggal Lahir Anda: " << z.tanggal << "-" << z.bulan << "-" << z.tahun << endl;
        cout << "Zodiak Anda Adalah: LIBRA" << endl;
    } else if ((z.tanggal >= 23 && z.tanggal <= 31 && z.bulan == 10) || (z.tanggal >= 1 && z.tanggal <= 21 && z.bulan == 11)) {
        cout << "Tanggal Lahir Anda: " << z.tanggal << "-" << z.bulan << "-" << z.tahun << endl;
        cout << "Zodiak Anda Adalah: SCORPIO" << endl;
    } else if ((z.tanggal >= 22 && z.tanggal <= 30 && z.bulan == 11) || (z.tanggal >= 1 && z.tanggal <= 21 && z.bulan == 12)) {
        cout << "Tanggal Lahir Anda: " << z.tanggal << "-" << z.bulan << "-" << z.tahun << endl;
        cout << "Zodiak Anda Adalah: SAGITARIUS" << endl;
    } else if ((z.tanggal >= 22 && z.tanggal <= 31 && z.bulan == 12) || (z.tanggal >= 1 && z.tanggal <= 19 && z.bulan == 1)) {
        cout << "Tanggal Lahir Anda: " << z.tanggal << "-" << z.bulan << "-" << z.tahun << endl;
        cout << "Zodiak Anda Adalah: CAPRICORN" << endl;
    } else if ((z.tanggal >= 20 && z.tanggal <= 31 && z.bulan == 1) || (z.tanggal >= 1 && z.tanggal <= 18 && z.bulan == 2)) {
        cout << "Tanggal Lahir Anda: " << z.tanggal << "-" << z.bulan << "-" << z.tahun << endl;
        cout << "Zodiak Anda Adalah: AQUARIUS" << endl;
    } else if ((z.tanggal >= 19 && z.tanggal <= 29 && z.bulan == 2) || (z.tanggal >= 1 && z.tanggal <= 20 && z.bulan == 3)) {
        cout << "Tanggal Lahir Anda: " << z.tanggal << "-" << z.bulan << "-" << z.tahun << endl;
        cout << "Zodiak Anda Adalah: PISCES" << endl;
    } else {
        cout << "Tanggal yang Anda masukkan tidak valid." << endl;
    }
}

int main(){
    Zodiak z;

    cout<<"Masukan tanggal lahir anda      : ";
    cin>>z.tanggal;
    cout<<"Masukan bulan lahir anda [1-12] : ";
    cin>>z.bulan;
    cout<<"Masukan tahun lahir anda        : ";
    cin>>z.tahun;

    hasil(z);

    return 0;
}

