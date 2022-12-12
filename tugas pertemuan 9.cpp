#include <iostream>
using namespace std;

struct Tanggal {
    int tanggal, bulan, tahun;
};

string zodiak[] = {"Aries", "Taurus", "Gemini", "Cancer", "Leo", "Virgo", "Libra", "Scorpio", "Sagitarius", "Capricorn", "Aquarius", "Pisces"};

int indeksZodiak(Tanggal lahir) {
    if ((lahir.bulan == 3 && lahir.tanggal >= 21) || (lahir.bulan == 4 && lahir.tanggal <= 19)) {
        return 0;
    } else if ((lahir.bulan == 4 && lahir.tanggal >= 20) || (lahir.bulan == 5 && lahir.tanggal <= 20)) {
        return 1;
    } else if ((lahir.bulan == 5 && lahir.tanggal >= 21) || (lahir.bulan == 6 && lahir.tanggal <= 20)) {
        return 2;
    } else if ((lahir.bulan == 6 && lahir.tanggal >= 21) || (lahir.bulan == 7 && lahir.tanggal <= 22)) {
        return 3;
    } else if ((lahir.bulan == 7 && lahir.tanggal >= 23) || (lahir.bulan == 8 && lahir.tanggal <= 22)) {
        return 4;
    } else if ((lahir.bulan == 8 && lahir.tanggal >= 23) || (lahir.bulan == 9 && lahir.tanggal <= 22)) {
        return 5;
    } else if ((lahir.bulan == 9 && lahir.tanggal >= 23) || (lahir.bulan == 10 && lahir.tanggal <= 22)) {
        return 6;
    } else if ((lahir.bulan == 10 && lahir.tanggal >= 23) || (lahir.bulan == 11 && lahir.tanggal <= 21)) {
        return 7;
    } else if ((lahir.bulan == 11 && lahir.tanggal >= 22) || (lahir.bulan == 12 && lahir.tanggal <= 21)) {
        return 8;
    } else if ((lahir.bulan == 12 && lahir.tanggal >= 22) || (lahir.bulan == 1 && lahir.tanggal <= 19)) {
        return 9;
    } else if ((lahir.bulan == 1 && lahir.tanggal >= 20) || (lahir.bulan == 2 && lahir.tanggal <= 18)) {
        return 10;
    } else if ((lahir.bulan == 2 && lahir.tanggal >= 19) || (lahir.bulan == 3 && lahir.tanggal <= 20)) {
        return 11;
  }
    return -1;
}

int main() {
    Tanggal lahir;

    cout << "Masukkan tanggal lahir (DD MM YYYY): ";
    cin >> lahir.tanggal >> lahir.bulan >> lahir.tahun;

    int index = indeksZodiak(lahir);

    if (index != -1) {
        cout << "Zodiak: " << zodiak[index] << endl;
    } else {
        cout << "Tanggal lahir tidak valid" << endl;
    }

  return 0;
}