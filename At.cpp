#include "At.h"

    void At :: tehdit() {
        // Tahtanýn taranmasý.
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                tahta[i][j];
                // Beyaz at tehdit.
                if (tahta[i][j] == "ab") {
                    if (tahta[i - 2][j - 1] == "ps") {
                        psTehdit++;
                    }
                    if (tahta[i - 2][j - 1] == "ks") {
                        ksTehdit++;
                    }
                    if (tahta[i - 2][j - 1] == "as") {
                        asTehdit++;
                    }
                    if (tahta[i - 2][j - 1] == "fs") {
                        fsTehdit++;
                    }
                    if (tahta[i - 2][j - 1] == "vs") {
                        vsTehdit++;
                    }
                    if (tahta[i - 2][j - 1] == "ss") {
                        ssTehdit++;
                    }

                    if (tahta[i - 2][j + 1] == "ps") {
                        psTehdit++;
                    }
                    if (tahta[i - 2][j + 1] == "ks") {
                        ksTehdit++;
                    }
                    if (tahta[i - 2][j + 1] == "as") {
                        asTehdit++;
                    }
                    if (tahta[i - 2][j + 1] == "fs") {
                        fsTehdit++;
                    }
                    if (tahta[i - 2][j + 1] == "vs") {
                        vsTehdit++;
                    }
                    if (tahta[i - 2][j + 1] == "ss") {
                        ssTehdit++;
                    }

                    if (tahta[i - 1][j - 2] == "ps") {
                        psTehdit++;
                    }
                    if (tahta[i - 1][j - 2] == "ks") {
                        ksTehdit++;
                    }
                    if (tahta[i - 1][j - 2] == "as") {
                        asTehdit++;
                    }
                    // hata
                    if (tahta[i - 1][j - 2] == "fs") {
                        fsTehdit;
                    }
                    if (tahta[i - 1][j - 2] == "vs") {
                        vsTehdit++;
                    }
                    if (tahta[i - 1][j - 2] == "ss") {
                        ssTehdit++;
                    }

                    if (tahta[i - 1][j + 2] == "ps") {
                        psTehdit++;
                    }
                    if (tahta[i - 1][j + 2] == "ks") {
                        ksTehdit++;
                    }
                    if (tahta[i - 1][j + 2] == "as") {
                        asTehdit++;
                    }
                    if (tahta[i - 1][j + 2] == "fs") {
                        fsTehdit++;
                    }
                    if (tahta[i - 1][j + 2] == "vs") {
                        vsTehdit++;
                    }
                    if (tahta[i - 1][j + 2] == "ss") {
                        ssTehdit++;
                    }

                    if (tahta[i + 1][j - 2] == "ps") {
                        psTehdit++;
                    }
                    if (tahta[i + 1][j - 2] == "ks") {
                        ksTehdit++;
                    }
                    if (tahta[i + 1][j - 2] == "as") {
                        asTehdit++;
                    }
                    if (tahta[i + 1][j - 2] == "fs") {
                        fsTehdit++;
                    }
                    if (tahta[i + 1][j - 2] == "vs") {
                        vsTehdit++;
                    }
                    if (tahta[i + 1][j - 2] == "ss") {
                        ssTehdit++;
                    }

                    if (tahta[i + 1][j + 2] == "ps") {
                        psTehdit++;
                    }
                    if (tahta[i + 1][j + 2] == "ks") {
                        ksTehdit++;
                    }
                    // hata
                    if (tahta[i + 1][j + 2] == "as") {
                        asTehdit;
                    }
                    if (tahta[i + 1][j + 2] == "fs") {
                        fsTehdit++;
                    }
                    if (tahta[i + 1][j + 2] == "vs") {
                        vsTehdit++;
                    }
                    if (tahta[i + 1][j + 2] == "ss") {
                        ssTehdit++;
                    }

                    if (tahta[i + 2][j - 1] == "ps") {
                        psTehdit++;
                    }
                    if (tahta[i + 2][j - 1] == "ks") {
                        ksTehdit++;
                    }
                    if (tahta[i + 2][j - 1] == "as") {
                        asTehdit++;
                    }
                    if (tahta[i + 2][j - 1] == "fs") {
                        fsTehdit++;
                    }
                    if (tahta[i + 2][j - 1] == "vs") {
                        vsTehdit++;
                    }
                    if (tahta[i + 2][j - 1] == "ss") {
                        ssTehdit++;
                    }

                    if (tahta[i + 2][j + 1] == "ps") {
                        psTehdit++;
                    }
                    if (tahta[i + 2][j + 1] == "ks") {
                        ksTehdit++;
                    }
                    if (tahta[i + 2][j + 1] == "as") {
                        asTehdit++;
                    }
                    if (tahta[i + 2][j + 1] == "fs") {
                        fsTehdit++;
                    }
                    if (tahta[i + 2][j + 1] == "vs") {
                        vsTehdit++;
                    }
                    if (tahta[i + 2][j + 1] == "ss") {
                        ssTehdit++;
                    }
                }
                // Siyah at tehdit.
                if (tahta[i][j] == "as") {
                    if (tahta[i - 2][j - 1] == "pb") {
                        pbTehdit++;
                    }
                    if (tahta[i - 2][j - 1] == "kb") {
                        kbTehdit++;
                    }
                    if (tahta[i - 2][j - 1] == "ab") {
                        abTehdit++;
                    }
                    if (tahta[i - 2][j - 1] == "fb") {
                        fbTehdit++;
                    }
                    // hata
                    if (tahta[i - 2][j - 1] == "vb") {
                        vbTehdit;
                    }
                    if (tahta[i - 2][j - 1] == "sb") {
                        sbTehdit++;
                    }

                    if (tahta[i - 2][j + 1] == "pb") {
                        pbTehdit++;
                    }
                    if (tahta[i - 2][j + 1] == "kb") {
                        kbTehdit++;
                    }
                    if (tahta[i - 2][j + 1] == "ab") {
                        abTehdit++;
                    }
                    if (tahta[i - 2][j + 1] == "fb") {
                        fbTehdit++;
                    }
                    if (tahta[i - 2][j + 1] == "vb") {
                        vbTehdit++;
                    }
                    if (tahta[i - 2][j + 1] == "sb") {
                        sbTehdit++;
                    }

                    if (tahta[i - 1][j - 2] == "pb") {
                        pbTehdit++;
                    }
                    if (tahta[i - 1][j - 2] == "kb") {
                        kbTehdit++;
                    }
                    if (tahta[i - 1][j - 2] == "ab") {
                        abTehdit++;
                    }
                    if (tahta[i - 1][j - 2] == "fb") {
                        fbTehdit++;
                    }
                    if (tahta[i - 1][j - 2] == "vb") {
                        vbTehdit++;
                    }
                    if (tahta[i - 1][j - 2] == "sb") {
                        sbTehdit++;
                    }

                    if (tahta[i - 1][j + 2] == "pb") {
                        pbTehdit++;
                    }
                    if (tahta[i - 1][j + 2] == "kb") {
                        kbTehdit++;
                    }
                    if (tahta[i - 1][j + 2] == "ab") {
                        abTehdit++;
                    }

                    // hata
                    if (tahta[i - 1][j + 2] == "fb") {
                        fbTehdit--;
                    }
                    if (tahta[i - 1][j + 2] == "vb") {
                        vbTehdit++;
                    }
                    if (tahta[i - 1][j + 2] == "sb") {
                        sbTehdit++;
                    }

                    if (tahta[i + 1][j - 2] == "pb") {
                        pbTehdit++;
                    }
                    if (tahta[i + 1][j - 2] == "kb") {
                        kbTehdit++;
                    }
                    if (tahta[i + 1][j - 2] == "ab") {
                        abTehdit++;
                    }
                    if (tahta[i + 1][j - 2] == "fb") {
                        fbTehdit++;
                    }
                    if (tahta[i + 1][j - 2] == "vb") {
                        vbTehdit++;
                    }
                    if (tahta[i + 1][j - 2] == "sb") {
                        sbTehdit++;
                    }

                    if (tahta[i + 1][j + 2] == "pb") {
                        pbTehdit++;
                    }
                    if (tahta[i + 1][j + 2] == "kb") {
                        kbTehdit++;
                    }
                    // hata
                    if (tahta[i + 1][j + 2] == "ab") {
                        abTehdit;
                    }
                    if (tahta[i + 1][j + 2] == "fb") {
                        fbTehdit++;
                    }
                    if (tahta[i + 1][j + 2] == "vb") {
                        vbTehdit++;
                    }
                    if (tahta[i + 1][j + 2] == "sb") {
                        sbTehdit++;
                    }

                    if (tahta[i + 2][j - 1] == "pb") {
                        pbTehdit++;
                    }
                    if (tahta[i + 2][j - 1] == "kb") {
                        kbTehdit++;
                    }
                    if (tahta[i + 2][j - 1] == "ab") {
                        abTehdit++;
                    }
                    if (tahta[i + 2][j - 1] == "fb") {
                        fbTehdit++;
                    }
                    if (tahta[i + 2][j - 1] == "vb") {
                        vbTehdit++;
                    }
                    if (tahta[i + 2][j - 1] == "sb") {
                        sbTehdit++;
                    }

                    if (tahta[i + 2][j + 1] == "pb") {
                        pbTehdit++;
                    }
                    if (tahta[i + 2][j + 1] == "kb") {
                        kbTehdit++;
                    }
                    if (tahta[i + 2][j + 1] == "ab") {
                        abTehdit++;
                    }
                    if (tahta[i + 2][j + 1] == "fb") {
                        fbTehdit++;
                    }
                    if (tahta[i + 2][j + 1] == "vb") {
                        vbTehdit++;
                    }
                    if (tahta[i + 2][j + 1] == "sb") {
                        sbTehdit++;
                    }

                }
            }
        }
    }