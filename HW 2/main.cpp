#include <iostream>

using namespace std;

int main() {
    int b1, k1, b2, k2;
    double skalar;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<endl;
    cout << "Nama   : Tirto D.P.B.M" <<endl;
    cout << "Nim    : A11.2021.13355" <<endl;
    cout << "Tugas Komputer Grafik - A11.4707" <<endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<endl;

	cout <<endl;
    cout << "Input Jumlah Baris Matriks Pertama: ";
    cin >> b1;
    cout << "Input Jumlah Kolom Matriks Pertama: ";
    cin >> k1;
    cout << "Input Jumlah Baris Matriks Kedua: ";
    cin >> b2;
    cout << "Input Jumlah Kolom Matriks Kedua: ";
    cin >> k2;

	cout << endl;
    // Matriks A
    int matrixA[b1][k1];

    cout << "Input Nilai Matriks A:" << endl;
    for (int i = 0; i < b1; i++) {
        for (int j = 0; j < k1; j++) {
            cin >> matrixA[i][j];
        }
    }

    // Matriks B
    int matrixB[b2][k2];

    cout << "Input Nilai Matriks B:" << endl;
    for (int i = 0; i < b2; i++) {
        for (int j = 0; j < k2; j++) {
            cin >> matrixB[i][j];
        }
    }

    cout<<endl;

    // Hasil Penjumlahan Matriks 1
    int hasil_jumlah[b1][k1];

    // Sistem Penjumlahan Matriks A & matriks B
    for (int i = 0; i < b1; i++) {
        for (int j = 0; j < k1; j++) {
            hasil_jumlah[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }

    // Hasil Penjumlahan Matriks 2
    cout << "Penjumlahan Matriks :" << endl;
    for (int i = 0; i < b1; i++) {
        for (int j = 0; j < k1; j++) {
            cout << hasil_jumlah[i][j] << " ";
        }
        cout << endl;
    }

    cout<<endl;

    // Hasil Pengurangan Matriks 1
    int hasil_kurang[b1][k1];

    // Sistem Pengurangan Matriks A & Matriks B
    for (int i = 0; i < b1; i++) {
        for (int j = 0; j < k1; j++) {
            hasil_kurang[i][j] = matrixA[i][j] - matrixB[i][j];
        }
    }

    // Hasil Pengurangan Matriks 2
    cout << "Pengurangan Matriks:" << endl;
    for (int i = 0; i < b1; i++) {
        for (int j = 0; j < k1; j++) {
            cout << hasil_kurang[i][j] << " ";
        }
        cout << endl;
    }

    cout<<endl;
    // Mengecek Kepastian Perkalian Matriks
    if (k1 != k2 || b1 != b2) {
        cout << "Tidak dapat dikali kan!" << endl;
    }else{

    // Hasil Perkalian Matriks 1
    int hasil_kali[b1][k2];

    // Sistem Perkalian Matriks A & Matriks B
    for (int i = 0; i < b1; i++) {
        for (int j = 0; j < k2; j++) {
            hasil_kali[i][j] = 0;
            for (int k = 0; k < k1; k++) {
                hasil_kali[i][j] = matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    // Hasil Perkalian Matriks 2
    cout << "Perkalian Matriks:" << endl;
    for (int i = 0; i < b1; i++) {
        for (int j = 0; j < k2; j++) {
            cout << hasil_kali[i][j] << " ";
        }
        cout << endl;
    }

    cout<<endl;
    cout << "Masukan Skalar untuk Perkalian: ";
    cin >> skalar;

    // Sistem Perkalian dengan Skalar (Matriks A)
    for (int i = 0; i < b1; i++) {
        for (int j = 0; j < k1; j++) {
            matrixA[i][j] *= skalar;
        }
    }
       // Hasil Perkalian dengan Skalar (Matriks A)
    cout << "Perkalian Matriks A x Skalar " << skalar << ":"<<endl;
    for (int i = 0; i < b1; i++) {
        for (int j = 0; j < k1; j++) {
            cout << matrixA[i][j] << " ";
        }
        cout << endl;
    }
        // Sistem Perkalian dengan Skalar (Matriks B)
    for (int i = 0; i < b2; i++) {
        for (int j = 0; j < k2; j++) {
            matrixB[i][j] *= skalar;
        }
    }
       // Hasil perkalian dengan Skalar (Matriks B)
    cout << "Perkalian Matriks B x Skalar " << skalar << ":"<<endl;
    for (int i = 0; i < b2; i++) {
        for (int j = 0; j < k2; j++) {
            cout << matrixB[i][j] << " ";
        }
        cout << endl;
    }

}
    return 0;
}
