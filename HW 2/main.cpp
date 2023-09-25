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

    cout << "Masukkan nilai matriks A:" << endl;
    for (int i = 0; i < b1; i++) {
        for (int j = 0; j < k1; j++) {
            cin >> matrixA[i][j];
        }
    }

    // Matriks B
    int matrixB[b2][k2];

    cout << "Masukkan nilai matriks B:" << endl;
    for (int i = 0; i < b2; i++) {
        for (int j = 0; j < k2; j++) {
            cin >> matrixB[i][j];
        }
    }

    cout<<endl;

    // Hasil Penjumlahan Matriks 1
    int hasilPenjumlahan[b1][k1];

    // Sistem Penjumlahan Matriks A & matriks B
    for (int i = 0; i < b1; i++) {
        for (int j = 0; j < k1; j++) {
            hasilPenjumlahan[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }

    // Hasil Penjumlahan Matriks 2
    cout << "Hasil penjumlahan matriks :" << endl;
    for (int i = 0; i < b1; i++) {
        for (int j = 0; j < k1; j++) {
            cout << hasilPenjumlahan[i][j] << " ";
        }
        cout << endl;
    }

    cout<<endl;

    // Hasil Pengurangan Matriks 1
    int hasilPengurangan[b1][k1];

    // Sistem Pengurangan Matriks A & Matriks B
    for (int i = 0; i < b1; i++) {
        for (int j = 0; j < k1; j++) {
            hasilPengurangan[i][j] = matrixA[i][j] - matrixB[i][j];
        }
    }

    // Hasil Pengurangan Matriks 2
    cout << "Hasil pengurangan matriks:" << endl;
    for (int i = 0; i < b1; i++) {
        for (int j = 0; j < k1; j++) {
            cout << hasilPengurangan[i][j] << " ";
        }
        cout << endl;
    }

    cout<<endl;
    // Mengecek Kepastian Perkalian Matriks
    if (k1 != k2 || b1 != b2) {
        cout << "Matriks tidak dapat dikalikan karena ordonya tidak sama." << endl;
    }else{

    // Hasil Perkalian Matriks 1
    int hasilPerkalian[b1][k2];

    // Sistem Perkalian Matriks A & Matriks B
    for (int i = 0; i < b1; i++) {
        for (int j = 0; j < k2; j++) {
            hasilPerkalian[i][j] = 0;
            for (int k = 0; k < k1; k++) {
                hasilPerkalian[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    // Hasil Perkalian Matriks 2
    cout << "Hasil perkalian matriks:" << endl;
    for (int i = 0; i < b1; i++) {
        for (int j = 0; j < k2; j++) {
            cout << hasilPerkalian[i][j] << " ";
        }
        cout << endl;
    }

    cout<<endl;
    cout << "Masukkan skalar untuk dikali kan: ";
    cin >> skalar;

    // Sistem Perkalian dengan Skalar (Matriks A)
    for (int i = 0; i < b1; i++) {
        for (int j = 0; j < k1; j++) {
            matrixA[i][j] *= skalar;
        }
    }
       // Hasil Perkalian dengan Skalar (Matriks A)
    cout << "Hasil perkalian matriks A dengan skalar " << skalar << ":"<<endl;
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
    cout << "Hasil perkalian matriks B dengan skalar " << skalar << ":"<<endl;
    for (int i = 0; i < b2; i++) {
        for (int j = 0; j < k2; j++) {
            cout << matrixB[i][j] << " ";
        }
        cout << endl;
    }

}
    return 0;
}
