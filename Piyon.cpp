#include "Piyon.h"

    void Piyon :: tehdit() {
        // Tahtanýn taranmasý.
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                tahta[i][j];
                // Beyaz piyon tehdit.
                if (tahta[i][j] == "pb") {

                    // Rakip taþlar pb tarafýndan tek tek tehdit edilir, tehdit bulundukça tehdit edilen taþ sayýlarý artar

                    // Sað çapraz tehdit
                    if (tahta[i - 1][j + 1] == "ps") {
                        if ((i - 1) == -1 || (j - 1) == -1 || (j + 1) == 8) break;
                        psTehdit++;
                    }
                    if (tahta[i - 1][j + 1] == "ks") {
                        if ((i - 1) == -1 || (j - 1) == -1 || (j + 1) == 8) break;
                        ksTehdit++;
                    }
                    if (tahta[i - 1][j + 1] == "as") {
                        if ((i - 1) == -1 || (j - 1) == -1 || (j + 1) == 8) break;
                        asTehdit++;
                    }
                    if (tahta[i - 1][j + 1] == "fs") {
                        if ((i - 1) == -1 || (j - 1) == -1 || (j + 1) == 8) break;
                        fsTehdit++;
                    }
                    if (tahta[i - 1][j + 1] == "vs") {
                        if ((i - 1) == -1 || (j - 1) == -1 || (j + 1) == 8) break;
                        vsTehdit++;
                    }
                    if (tahta[i - 1][j + 1] == "ss") {
                        if ((i - 1) == -1 || (j - 1) == -1 || (j + 1) == 8) break;
                        ssTehdit++;
                    }

                    // Sol çapraz tehdit
                    if (tahta[i - 1][j - 1] == "ps") {
                        if ((i - 1) == -1 || (j - 1) == -1 || (j + 1) == 9) break;
                        psTehdit++;
                    }
                    if (tahta[i - 1][j - 1] == "ks") {
                        if ((i - 1) == -1 || (j - 1) == -1 || (j + 1) == 8) break;
                        ksTehdit++;
                    }
                    if (tahta[i - 1][j - 1] == "as") {
                        if ((i - 1) == -1 || (j - 1) == -1 || (j + 1) == 8) break;
                        asTehdit++;
                    }
                    if (tahta[i - 1][j - 1] == "fs") {
                        if ((i - 1) == -1 || (j - 1) == -1 || (j + 1) == 8) break;
                        fsTehdit++;
                    }
                    if (tahta[i - 1][j - 1] == "vs") {
                        if ((i - 1) == -1 || (j - 1) == -1 || (j + 1) == 8) break;
                        vsTehdit++;
                    }
                    if (tahta[i - 1][j - 1] == "ss") {
                        if ((i - 1) == -1 || (j - 1) == -1 || (j + 1) == 8) break;
                        ssTehdit++;
                    }
                }
                // Siyah piyon tehdit.
                if (tahta[i][j] == "ps") {

                    // Sol çapraz tehdit
                    if (tahta[i + 1][j - 1] == "pb") {
                        if ((i + 1) == 8 || (j - 1) == -1 || (j + 1) == 8) break;
                        pbTehdit++;
                    }
                    if (tahta[i + 1][j - 1] == "kb") {
                        if ((i + 1) == 8 || (j - 1) == -1 || (j + 1) == 8) break;
                        kbTehdit++;
                    }
                    if (tahta[i + 1][j - 1] == "ab") {
                        if ((i + 1) == 8 || (j - 1) == -1 || (j + 1) == 8) break;
                        abTehdit++;
                    }
                    // hata
                    if (tahta[i + 1][j - 1] == "fb") {
                        if ((i + 1) == 8 || (j - 1) == -1 || (j + 1) == 8) break;
                        fbTehdit;
                    }
                    if (tahta[i + 1][j - 1] == "vb") {
                        if ((i + 1) == 8 || (j - 1) == -1 || (j + 1) == 8) break;
                        vbTehdit++;
                    }
                    if (tahta[i + 1][j - 1] == "sb") {
                        if ((i + 1) == 8 || (j - 1) == -1 || (j + 1) == 8) break;
                        sbTehdit++;
                    }

                    // Sað çapraz tehdit
                    if (tahta[i + 1][j + 1] == "pb") {
                        if ((i + 1) == 8 || (j - 1) == -1 || (j + 1) == 8) break;
                        pbTehdit++;
                    }
                    if (tahta[i + 1][j + 1] == "kb") {
                        if ((i + 1) == 8 || (j - 1) == -1 || (j + 1) == 8) break;
                        kbTehdit++;
                    }
                    if (tahta[i + 1][j + 1] == "ab") {
                        if ((i + 1) == 8 || (j - 1) == -1 || (j + 1) == 8) break;
                        abTehdit++;
                    }
                    if (tahta[i + 1][j + 1] == "fb") {
                        if ((i + 1) == 8 || (j - 1) == -1 || (j + 1) == 8) break;
                        fbTehdit++;
                    }
                    if (tahta[i + 1][j + 1] == "vb") {
                        if ((i + 1) == 8 || (j - 1) == -1 || (j + 1) == 8) break;
                        vbTehdit++;
                    }
                    if (tahta[i + 1][j + 1] == "sb") {
                        if ((i + 1) == 8 || (j - 1) == -1 || (j + 1) == 8) break;
                        sbTehdit++;
                    }
                }
            }
        }
    }