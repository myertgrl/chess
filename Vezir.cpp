#include "Vezir.h"

    void Vezir :: tehdit() {
        // Tahtanýn taranmasý.
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                tahta[i][j];
                // Beyaz vezir tehdit.
                if (tahta[i][j] == "vb") {
                    // geri hareket
                    int m = 1;
                    while (tahta[i - m][j] == "--")
                    {
                        if ((i - m) == -1) break;
                        m++;
                        if (tahta[i - m][j] == "ps") {
                            psTehdit++;
                        }
                    }
                    m = 1;
                    while (tahta[i - m][j] == "--")
                    {
                        if ((i - m) == -1) break;
                        m++;
                        if (tahta[i - m][j] == "ks") {
                            ksTehdit++;
                        }
                    }
                    m = 1;
                    while (tahta[i - m][j] == "--")
                    {
                        if ((i - m) == -1) break;
                        m++;
                        if (tahta[i - m][j] == "as") {
                            asTehdit++;
                        }
                    }
                    m = 1;
                    while (tahta[i - m][j] == "--")
                    {
                        if ((i - m) == -1) break;
                        m++;
                        if (tahta[i - m][j] == "fs") {
                            fsTehdit++;
                        }
                    }
                    m = 1;
                    while (tahta[i - m][j] == "--")
                    {
                        if ((i - m) == -1) break;
                        m++;
                        if (tahta[i - m][j] == "vs") {
                            vsTehdit++;
                        }
                    }
                    m = 1;
                    while (tahta[i - m][j] == "--")
                    {
                        if ((i - m) == -1) break;
                        m++;
                        if (tahta[i - m][j] == "ss") {
                            ssTehdit++;
                        }
                    }


                    // ileri hareket
                    m = 1;
                    while (tahta[i + m][j] == "--")
                    {
                        if ((i + m) == 8) break;
                        m++;
                        if (tahta[i + m][j] == "ps") {
                            psTehdit++;
                        }
                    }
                    m = 1;
                    while (tahta[i + m][j] == "--")
                    {
                        if ((i + m) == 8) break;
                        m++;
                        if (tahta[i + m][j] == "ks") {
                            ksTehdit++;
                        }
                    }
                    m = 1;
                    while (tahta[i + m][j] == "--")
                    {
                        if ((i + m) == 8) break;
                        m++;
                        if (tahta[i + m][j] == "as") {
                            asTehdit++;
                        }
                    }
                    m = 1;
                    while (tahta[i + m][j] == "--")
                    {
                        if ((i + m) == 8) break;
                        m++;
                        if (tahta[i + m][j] == "fs") {
                            fsTehdit++;
                        }
                    }
                    m = 1;
                    while (tahta[i + m][j] == "--")
                    {
                        if ((i + m) == 8) break;
                        m++;
                        if (tahta[i + m][j] == "vs") {
                            vsTehdit++;
                        }
                    }
                    m = 1;
                    while (tahta[i + m][j] == "--")
                    {
                        if ((i + m) == 8) break;
                        m++;
                        if (tahta[i + m][j] == "ss") {
                            ssTehdit++;
                        }
                    }

                    // sol hareket
                    int n = 1;
                    while (tahta[i][j - n] == "--")
                    {
                        if ((j - n) == -1) break;
                        n++;
                        if (tahta[i][j - n] == "ps") {
                            psTehdit++;
                        }
                    }
                    n = 1;
                    while (tahta[i][j - n] == "--")
                    {
                        if ((j - n) == -1) break;
                        n++;
                        if (tahta[i][j - n] == "ks") {
                            ksTehdit++;
                        }
                    }
                    n = 1;
                    while (tahta[i][j - n] == "--")
                    {
                        if ((j - n) == -1) break;
                        n++;
                        if (tahta[i][j - n] == "as") {
                            asTehdit++;
                        }
                    }
                    n = 1;
                    while (tahta[i][j - n] == "--")
                    {
                        if ((j - n) == -1) break;
                        n++;
                        if (tahta[i][j - n] == "fs") {
                            fsTehdit++;
                        }
                    }
                    n = 1;
                    while (tahta[i][j - n] == "--")
                    {
                        if ((j - n) == -1) break;
                        n++;
                        if (tahta[i][j - n] == "vs") {
                            vsTehdit++;
                        }
                    }
                    n = 1;
                    while (tahta[i][j - n] == "--")
                    {
                        if ((j - n) == -1) break;
                        n++;
                        if (tahta[i][j - n] == "ss") {
                            ssTehdit++;
                        }
                    }

                    // sag hareket
                    n = 1;
                    while (tahta[i][j + n] == "--")
                    {
                        if ((j + n) == 8) break;
                        n++;
                        if (tahta[i][j + n] == "ps") {
                            psTehdit++;
                        }
                    }
                    n = 1;
                    while (tahta[i][j + n] == "--")
                    {
                        if ((j + n) == 8) break;
                        n++;
                        if (tahta[i][j + n] == "ks") {
                            ksTehdit++;
                        }
                    }
                    n = 1;
                    while (tahta[i][j + n] == "--")
                    {
                        if ((j + n) == 8) break;
                        n++;
                        if (tahta[i][j + n] == "as") {
                            asTehdit++;
                        }
                    }
                    n = 1;
                    while (tahta[i][j + n] == "--")
                    {
                        if ((j + n) == 8) break;
                        n++;
                        if (tahta[i][j + n] == "fs") {
                            fsTehdit++;
                        }
                    }
                    n = 1;
                    while (tahta[i][j + n] == "--")
                    {
                        if ((j + n) == 8) break;
                        n++;
                        if (tahta[i][j + n] == "vs") {
                            vsTehdit++;
                        }
                    }
                    n = 1;
                    while (tahta[i][j + n] == "--")
                    {
                        if ((j + n) == 8) break;
                        n++;
                        if (tahta[i][j + n] == "ss") {
                            ssTehdit++;
                        }
                    }
                    // capraz hareket

                    // sag yukari capraz
                    m = 1;
                    n = 1;
                    while (tahta[i - m][j + n] == "--")
                    {
                        if ((i - m) == -1 || (j + n) == 8) break;
                        m++;
                        n++;
                        if (tahta[i - m][j + n] == "ps") {
                            psTehdit++;
                        }
                    }
                    m = 1;
                    n = 1;
                    while (tahta[i - m][j + n] == "--")
                    {
                        if ((i - m) == -1 || (j + n) == 8) break;
                        m++;
                        n++;
                        if (tahta[i - m][j + n] == "ks") {
                            ksTehdit++;
                        }
                    }
                    m = 1;
                    n = 1;
                    while (tahta[i - m][j + n] == "--")
                    {
                        if ((i - m) == -1 || (j + n) == 8) break;
                        m++;
                        n++;
                        if (tahta[i - m][j + n] == "as") {
                            asTehdit++;
                        }
                    }
                    m = 1;
                    n = 1;
                    while (tahta[i - m][j + n] == "--")
                    {
                        if ((i - m) == -1 || (j + n) == 8) break;
                        m++;
                        n++;
                        if (tahta[i - m][j + n] == "fs") {
                            fsTehdit++;
                        }
                    }
                    m = 1;
                    n = 1;
                    while (tahta[i - m][j + n] == "--")
                    {
                        if ((i - m) == -1 || (j + n) == 8) break;
                        m++;
                        n++;
                        if (tahta[i - m][j + n] == "vs") {
                            vsTehdit++;
                        }
                    }
                    m = 1;
                    n = 1;
                    while (tahta[i - m][j + n] == "--")
                    {
                        if ((i - m) == -1 || (j + n) == 8) break;
                        m++;
                        n++;
                        if (tahta[i - m][j + n] == "ss") {
                            ssTehdit++;
                        }
                    }

                    // sol asagi capraz
                    m = 1;
                    n = 1;
                    while (tahta[i + m][j - n] == "--")
                    {
                        if ((i + m) == 8 || (j - n) == -1) break;
                        m++;
                        n++;
                        if (tahta[i + m][j - n] == "ps") {
                            psTehdit++;
                        }
                    }
                    m = 1;
                    n = 1;
                    while (tahta[i + m][j - n] == "--")
                    {
                        if ((i + m) == 8 || (j - n) == -1) break;
                        m++;
                        n++;
                        if (tahta[i + m][j - n] == "ks") {
                            ksTehdit++;
                        }
                    }
                    m = 1;
                    n = 1;
                    while (tahta[i + m][j - n] == "--")
                    {
                        if ((i + m) == 8 || (j - n) == -1) break;
                        m++;
                        n++;
                        if (tahta[i + m][j - n] == "as") {
                            asTehdit++;
                        }
                    }
                    m = 1;
                    n = 1;
                    while (tahta[i + m][j - n] == "--")
                    {
                        if ((i + m) == 8 || (j - n) == -1) break;
                        m++;
                        n++;
                        if (tahta[i + m][j - n] == "fs") {
                            fsTehdit++;
                        }
                    }
                    m = 1;
                    n = 1;
                    while (tahta[i + m][j - n] == "--")
                    {
                        if ((i + m) == 8 || (j - n) == -1) break;
                        m++;
                        n++;
                        if (tahta[i + m][j - n] == "vs") {
                            vsTehdit++;
                        }
                    }
                    m = 1;
                    n = 1;
                    while (tahta[i + m][j - n] == "--")
                    {
                        if ((i + m) == 8 || (j - n) == -1) break;
                        m++;
                        n++;
                        if (tahta[i + m][j - n] == "ss") {
                            ssTehdit++;
                        }
                    }

                    // sag asagi capraz
                    m = 1;
                    n = 1;
                    while (tahta[i + m][j + n] == "--")
                    {
                        if ((i + m) == 8 || (j + n) == 8) break;
                        m++;
                        n++;
                        if (tahta[i + m][j + n] == "ps") {
                            psTehdit++;
                        }
                    }
                    m = 1;
                    n = 1;
                    while (tahta[i + m][j + n] == "--")
                    {
                        if ((i + m) == 8 || (j + n) == 8) break;
                        m++;
                        n++;
                        if (tahta[i + m][j + n] == "ks") {
                            ksTehdit++;
                        }
                    }
                    m = 1;
                    n = 1;
                    while (tahta[i + m][j + n] == "--")
                    {
                        if ((i + m) == 8 || (j + n) == 8) break;
                        m++;
                        n++;
                        if (tahta[i + m][j + n] == "as") {
                            asTehdit++;
                        }
                    }
                    m = 1;
                    n = 1;
                    while (tahta[i + m][j + n] == "--")
                    {
                        if ((i + m) == 8 || (j + n) == 8) break;
                        m++;
                        n++;
                        if (tahta[i + m][j + n] == "fs") {
                            fsTehdit++;
                        }
                    }
                    m = 1;
                    n = 1;
                    while (tahta[i + m][j + n] == "--")
                    {
                        if ((i + m) == 8 || (j + n) == 8) break;
                        m++;
                        n++;
                        if (tahta[i + m][j + n] == "vs") {
                            vsTehdit++;
                        }
                    }
                    m = 1;
                    n = 1;
                    while (tahta[i + m][j + n] == "--")
                    {
                        if ((i + m) == 8 || (j + n) == 8) break;
                        m++;
                        n++;
                        if (tahta[i + m][j + n] == "ss") {
                            ssTehdit++;
                        }
                    }

                    // sol yukari capraz
                    m = 1;
                    n = 1;
                    while (tahta[i - m][j - n] == "--")
                    {
                        if ((i - m) == -1 || (j - n) == -1) break;
                        m++;
                        n++;
                        if (tahta[i - m][j - n] == "ps") {
                            psTehdit++;
                        }
                    }
                    m = 1;
                    n = 1;
                    while (tahta[i - m][j - n] == "--")
                    {
                        if ((i - m) == -1 || (j - n) == -1) break;
                        m++;
                        n++;
                        if (tahta[i - m][j - n] == "ks") {
                            ksTehdit++;
                        }
                    }
                    m = 1;
                    n = 1;
                    while (tahta[i - m][j - n] == "--")
                    {
                        if ((i - m) == -1 || (j - n) == -1) break;
                        m++;
                        n++;
                        if (tahta[i - m][j - n] == "as") {
                            asTehdit++;
                        }
                    }
                    m = 1;
                    n = 1;
                    while (tahta[i - m][j - n] == "--")
                    {
                        if ((i - m) == -1 || (j - n) == -1) break;
                        m++;
                        n++;
                        if (tahta[i - m][j - n] == "fs") {
                            fsTehdit++;
                        }
                    }
                    m = 1;
                    n = 1;
                    while (tahta[i - m][j - n] == "--")
                    {
                        if ((i - m) == -1 || (j - n) == -1) break;
                        m++;
                        n++;
                        if (tahta[i - m][j - n] == "vs") {
                            vsTehdit++;
                        }
                    }
                    m = 1;
                    n = 1;
                    while (tahta[i - m][j - n] == "--")
                    {
                        if ((i - m) == -1 || (j - n) == -1) break;
                        m++;
                        n++;
                        if (tahta[i - m][j - n] == "ss") {
                            ssTehdit++;
                        }
                    }
                }
                // Siyah vezir tehdit.
                if (tahta[i][j] == "vs") {
                    // geri hareket
                    int m = 1;
                    while (tahta[i - m][j] == "--")
                    {
                        if ((i - m) == -1) break;
                        m++;
                        if (tahta[i - m][j] == "pb") {
                            pbTehdit++;
                        }
                    }
                    m = 1;
                    while (tahta[i - m][j] == "--")
                    {
                        if ((i - m) == -1) break;
                        m++;
                        if (tahta[i - m][j] == "kb") {
                            kbTehdit++;
                        }
                    }
                    m = 1;
                    while (tahta[i - m][j] == "--")
                    {
                        if ((i - m) == -1) break;
                        m++;
                        if (tahta[i - m][j] == "ab") {
                            abTehdit++;
                        }
                    }
                    m = 1;
                    while (tahta[i - m][j] == "--")
                    {
                        if ((i - m) == -1) break;
                        m++;
                        if (tahta[i - m][j] == "fb") {
                            fbTehdit++;
                        }
                    }
                    m = 1;
                    while (tahta[i - m][j] == "--")
                    {
                        if ((i - m) == -1) break;
                        m++;
                        if (tahta[i - m][j] == "vb") {
                            vbTehdit++;
                        }
                    }
                    m = 1;
                    while (tahta[i - m][j] == "--")
                    {
                        if ((i - m) == -1) break;
                        m++;
                        if (tahta[i - m][j] == "sb") {
                            sbTehdit++;
                        }
                    }

                    // ileri hareket
                    m = 1;
                    while (tahta[i + m][j] == "--")
                    {
                        if ((i + m) == 8) break;
                        m++;
                        if (tahta[i + m][j] == "pb") {
                            pbTehdit++;
                        }
                    }
                    m = 1;
                    while (tahta[i + m][j] == "--")
                    {
                        if ((i + m) == 8) break;
                        m++;
                        if (tahta[i + m][j] == "kb") {
                            kbTehdit++;
                        }
                    }
                    // hata
                    m = 1;
                    while (tahta[i + m][j] == "--")
                    {
                        if ((i + m) == 8) break;
                        m++;
                        if (tahta[i + m][j] == "ab") {
                            abTehdit;
                        }
                    }
                    m = 1;
                    while (tahta[i + m][j] == "--")
                    {
                        if ((i + m) == 8) break;
                        m++;
                        if (tahta[i + m][j] == "fb") {
                            fbTehdit++;
                        }
                    }
                    m = 1;
                    while (tahta[i + m][j] == "--")
                    {
                        if ((i + m) == 8) break;
                        m++;
                        if (tahta[i + m][j] == "vb") {
                            vbTehdit++;
                        }
                    }
                    m = 1;
                    while (tahta[i + m][j] == "--")
                    {
                        if ((i + m) == 8) break;
                        m++;
                        if (tahta[i + m][j] == "sb") {
                            sbTehdit++;
                        }
                    }

                    // sol hareket
                    int n = 1;
                    while (tahta[i][j - n] == "--")
                    {
                        if ((j - n) == -1) break;
                        n++;
                        if (tahta[i][j - n] == "pb") {
                            pbTehdit++;
                        }
                    }
                    n = 1;
                    while (tahta[i][j - n] == "--")
                    {
                        if ((j - n) == -1) break;
                        n++;
                        if (tahta[i][j - n] == "kb") {
                            kbTehdit++;
                        }
                    }
                    n = 1;
                    while (tahta[i][j - n] == "--")
                    {
                        if ((j - n) == -1) break;
                        n++;
                        if (tahta[i][j - n] == "ab") {
                            abTehdit++;
                        }
                    }
                    n = 1;
                    while (tahta[i][j - n] == "--")
                    {
                        if ((j - n) == -1) break;
                        n++;
                        if (tahta[i][j - n] == "fb") {
                            fbTehdit++;
                        }
                    }
                    n = 1;
                    while (tahta[i][j - n] == "--")
                    {
                        if ((j - n) == -1) break;
                        n++;
                        if (tahta[i][j - n] == "vb") {
                            vbTehdit++;
                        }
                    }
                    n = 1;
                    while (tahta[i][j - n] == "--")
                    {
                        if ((j - n) == -1) break;
                        n++;
                        if (tahta[i][j - n] == "sb") {
                            sbTehdit++;
                        }
                    }

                    // sag hareket
                    n = 1;
                    while (tahta[i][j + n] == "--")
                    {
                        if ((j + n) == 8) break;
                        n++;
                        if (tahta[i][j + n] == "pb") {
                            pbTehdit++;
                        }
                    }
                    n = 1;
                    while (tahta[i][j + n] == "--")
                    {
                        if ((j + n) == 8) break;
                        n++;
                        if (tahta[i][j + n] == "kb") {
                            kbTehdit++;
                        }
                    }
                    n = 1;
                    while (tahta[i][j + n] == "--")
                    {
                        if ((j + n) == 8) break;
                        n++;
                        if (tahta[i][j + n] == "ab") {
                            abTehdit++;
                        }
                    }
                    n = 1;
                    while (tahta[i][j + n] == "--")
                    {
                        if ((j + n) == 8) break;
                        n++;
                        if (tahta[i][j + n] == "fb") {
                            fbTehdit++;
                        }
                    }
                    n = 1;
                    while (tahta[i][j + n] == "--")
                    {
                        if ((j + n) == 8) break;
                        n++;
                        if (tahta[i][j + n] == "vb") {
                            vbTehdit++;
                        }
                    }
                    n = 1;
                    while (tahta[i][j + n] == "--")
                    {
                        if ((j + n) == 8) break;
                        n++;
                        if (tahta[i][j + n] == "sb") {
                            sbTehdit++;
                        }
                    }
                    // capraz hareket

                    // sag yukari capraz
                    m = 1;
                    n = 1;
                    while (tahta[i - m][j + n] == "--")
                    {
                        if ((i - m) == -1 || (j + n) == 8) break;
                        m++;
                        n++;
                        if (tahta[i - m][j + n] == "pb") {
                            pbTehdit++;
                        }
                    }
                    m = 1;
                    n = 1;
                    while (tahta[i - m][j + n] == "--")
                    {
                        if ((i - m) == -1 || (j + n) == 8) break;
                        m++;
                        n++;
                        if (tahta[i - m][j + n] == "kb") {
                            kbTehdit++;
                        }
                    }
                    m = 1;
                    n = 1;
                    while (tahta[i - m][j + n] == "--")
                    {
                        if ((i - m) == -1 || (j + n) == 8) break;
                        m++;
                        n++;
                        if (tahta[i - m][j + n] == "ab") {
                            abTehdit++;
                        }
                    }
                    m = 1;
                    n = 1;
                    while (tahta[i - m][j + n] == "--")
                    {
                        if ((i - m) == -1 || (j + n) == 8) break;
                        m++;
                        n++;
                        if (tahta[i - m][j + n] == "fb") {
                            fbTehdit++;
                        }
                    }
                    m = 1;
                    n = 1;
                    while (tahta[i - m][j + n] == "--")
                    {
                        if ((i - m) == -1 || (j + n) == 8) break;
                        m++;
                        n++;
                        if (tahta[i - m][j + n] == "vb") {
                            vbTehdit++;
                        }
                    }
                    m = 1;
                    n = 1;
                    while (tahta[i - m][j + n] == "--")
                    {
                        if ((i - m) == -1 || (j + n) == 8) break;
                        m++;
                        n++;
                        if (tahta[i - m][j + n] == "sb") {
                            sbTehdit++;
                        }
                    }

                    // sol asagi capraz
                    m = 1;
                    n = 1;
                    while (tahta[i + m][j - n] == "--")
                    {
                        if ((i + m) == 8 || (j - n) == -1) break;
                        m++;
                        n++;
                        if (tahta[i + m][j - n] == "pb") {
                            pbTehdit++;
                        }
                    }
                    m = 1;
                    n = 1;
                    while (tahta[i + m][j - n] == "--")
                    {
                        if ((i + m) == 8 || (j - n) == -1) break;
                        m++;
                        n++;
                        if (tahta[i + m][j - n] == "kb") {
                            kbTehdit++;
                        }
                    }
                    m = 1;
                    n = 1;
                    while (tahta[i + m][j - n] == "--")
                    {
                        if ((i + m) == 8 || (j - n) == -1) break;
                        m++;
                        n++;
                        if (tahta[i + m][j - n] == "ab") {
                            abTehdit++;
                        }
                    }
                    m = 1;
                    n = 1;
                    while (tahta[i + m][j - n] == "--")
                    {
                        if ((i + m) == 8 || (j - n) == -1) break;
                        m++;
                        n++;
                        if (tahta[i + m][j - n] == "fb") {
                            fbTehdit++;
                        }
                    }
                    m = 1;
                    n = 1;
                    while (tahta[i + m][j - n] == "--")
                    {
                        if ((i + m) == 8 || (j - n) == -1) break;
                        m++;
                        n++;
                        if (tahta[i + m][j - n] == "vb") {
                            vbTehdit++;
                        }
                    }
                    m = 1;
                    n = 1;
                    while (tahta[i + m][j - n] == "--")
                    {
                        if ((i + m) == 8 || (j - n) == -1) break;
                        m++;
                        n++;
                        if (tahta[i + m][j - n] == "sb") {
                            sbTehdit++;
                        }
                    }

                    // sag asagi capraz
                    m = 1;
                    n = 1;
                    while (tahta[i + m][j + n] == "--")
                    {
                        if ((i + m) == 8 || (j + n) == 8) break;
                        m++;
                        n++;
                        if (tahta[i + m][j + n] == "pb") {
                            pbTehdit++;
                        }
                    }
                    m = 1;
                    n = 1;
                    while (tahta[i + m][j + n] == "--")
                    {
                        if ((i + m) == 8 || (j + n) == 8) break;
                        m++;
                        n++;
                        if (tahta[i + m][j + n] == "kb") {
                            kbTehdit++;
                        }
                    }
                    m = 1;
                    n = 1;
                    while (tahta[i + m][j + n] == "--")
                    {
                        if ((i + m) == 8 || (j + n) == 8) break;
                        m++;
                        n++;
                        if (tahta[i + m][j + n] == "ab") {
                            abTehdit++;
                        }
                    }
                    m = 1;
                    n = 1;
                    while (tahta[i + m][j + n] == "--")
                    {
                        if ((i + m) == 8 || (j + n) == 8) break;
                        m++;
                        n++;
                        if (tahta[i + m][j + n] == "fb") {
                            fbTehdit++;
                        }
                    }
                    m = 1;
                    n = 1;
                    while (tahta[i + m][j + n] == "--")
                    {
                        if ((i + m) == 8 || (j + n) == 8) break;
                        m++;
                        n++;
                        if (tahta[i + m][j + n] == "vb") {
                            vbTehdit++;
                        }
                    }
                    m = 1;
                    n = 1;
                    while (tahta[i + m][j + n] == "--")
                    {
                        if ((i + m) == 8 || (j + n) == 8) break;
                        m++;
                        n++;
                        if (tahta[i + m][j + n] == "sb") {
                            sbTehdit++;
                        }
                    }

                    // sol yukari capraz
                    m = 1;
                    n = 1;
                    while (tahta[i - m][j - n] == "--")
                    {
                        if ((i - m) == -1 || (j - n) == -1) break;
                        m++;
                        n++;
                        if (tahta[i - m][j - n] == "pb") {
                            pbTehdit++;
                        }
                    }
                    m = 1;
                    n = 1;
                    while (tahta[i - m][j - n] == "--")
                    {
                        if ((i - m) == -1 || (j - n) == -1) break;
                        m++;
                        n++;
                        if (tahta[i - m][j - n] == "kb") {
                            kbTehdit++;
                        }
                    }
                    m = 1;
                    n = 1;
                    while (tahta[i - m][j - n] == "--")
                    {
                        if ((i - m) == -1 || (j - n) == -1) break;
                        m++;
                        n++;
                        if (tahta[i - m][j - n] == "ab") {
                            abTehdit++;
                        }
                    }
                    m = 1;
                    n = 1;
                    while (tahta[i - m][j - n] == "--")
                    {
                        if ((i - m) == -1 || (j - n) == -1) break;
                        m++;
                        n++;
                        if (tahta[i - m][j - n] == "fb") {
                            fbTehdit++;
                        }
                    }
                    m = 1;
                    n = 1;
                    while (tahta[i - m][j - n] == "--")
                    {
                        if ((i - m) == -1 || (j - n) == -1) break;
                        m++;
                        n++;
                        if (tahta[i - m][j - n] == "vb") {
                            vbTehdit++;
                        }
                    }
                    m = 1;
                    n = 1;
                    while (tahta[i - m][j - n] == "--")
                    {
                        if ((i - m) == -1 || (j - n) == -1) break;
                        m++;
                        n++;
                        if (tahta[i - m][j - n] == "sb") {
                            sbTehdit++;
                        }
                    }
                }
            }
        }
        
    }