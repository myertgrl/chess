#include "Tas.h"
//#include "Tahta.h"

    // Override edilecek tehdit fonksiyonu tanýmlanmasý ve tehdit deðerlerinin ilk deðerlerinin atanmasý.
    void Tas :: tehdit() {
        psTehdit = 0;
        ksTehdit = 0;
        asTehdit = 0;
        fsTehdit = 0;
        vsTehdit = 0;
        ssTehdit = 0;
        pbTehdit = 0;
        kbTehdit = 0;
        abTehdit = 0;
        fbTehdit = 0;
        vbTehdit = 0;
        sbTehdit = 0;

    }

    // Tahta üzerindeki tüm taþlarýn sayýlarýnýn sayýlmasý ve bu sayý deðerlerinin atanmasý.
    void Tas::tasYazdir() {
        psSayisi = 0;
        ksSayisi = 0;
        asSayisi = 0;
        fsSayisi = 0;
        vsSayisi = 0;
        ssSayisi = 0;

        pbSayisi = 0;
        kbSayisi = 0;
        abSayisi = 0;
        fbSayisi = 0;
        vbSayisi = 0;
        sbSayisi = 0;

        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                tahta[i][j];
                if (tahta[i][j] == "ps") {
                    psSayisi++;
                }
                if (tahta[i][j] == "ks") {
                    ksSayisi++;
                }
                if (tahta[i][j] == "as") {
                    asSayisi++;
                }
                if (tahta[i][j] == "fs") {
                    fsSayisi++;
                }
                if (tahta[i][j] == "vs") {
                    vsSayisi++;
                }
                if (tahta[i][j] == "ss") {
                    ssSayisi++;
                }

                if (tahta[i][j] == "pb") {
                    pbSayisi++;
                }
                if (tahta[i][j] == "kb") {
                    kbSayisi++;
                }
                if (tahta[i][j] == "ab") {
                    abSayisi++;
                }
                if (tahta[i][j] == "fb") {
                    fbSayisi++;
                }
                if (tahta[i][j] == "vb") {
                    vbSayisi++;
                }
                if (tahta[i][j] == "sb") {
                    sbSayisi++;
                }
            }
        }
    }
