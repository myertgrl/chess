#include "Tahta.h"

    // board dosyalarini a�ma, okuma ve kapatma i�lemi.
    void Tahta :: tahtaYazdir1() {
        // board1 dosya a�ma, okuma ve kapatma i�lemi.
        ifstream dosyaOku;
        dosyaOku.open("board\\board1.txt");
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++)
            {
                dosyaOku >> tahta[i][j];
            }
        }
        dosyaOku.close();
    }

    void Tahta::tahtaYazdir2() {
        // board2 dosya a�ma, okuma ve kapatma i�lemi.
        ifstream dosyaOku;
        dosyaOku.open("board\\board2.txt");
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++)
            {
                dosyaOku >> tahta[i][j];
            }
        }
        dosyaOku.close();
    }

    void Tahta::tahtaYazdir3() {
        // board3 dosya a�ma, okuma ve kapatma i�lemi.
        ifstream dosyaOku;
        dosyaOku.open("board\\board3.txt");
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++)
            {
                dosyaOku >> tahta[i][j];
            }
        }
        dosyaOku.close();
        
    }