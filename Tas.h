#pragma once
#include "Tahta.h"
class Tas {
public:

    // Siyah taþlarýn tanýmlanmasý.
    static double psSayisi;
    static double ksSayisi;
    static double asSayisi;
    static double fsSayisi;
    static double vsSayisi;
    static double ssSayisi;

    // Beyaz taþlarýn tanýmlanmasý.
    static double pbSayisi;
    static double kbSayisi;
    static double abSayisi;
    static double fbSayisi;
    static double vbSayisi;
    static double sbSayisi;

    // Tehdit edilen siyah taþlarýn tanýmlanmasý.
    static double psTehdit;
    static double ksTehdit;
    static double asTehdit;
    static double fsTehdit;
    static double vsTehdit;
    static double ssTehdit;

    // Tehdit edilen beyaz taþlarýn tanýmlanmasý.
    static double pbTehdit;
    static double kbTehdit;
    static double abTehdit;
    static double fbTehdit;
    static double vbTehdit;
    static double sbTehdit;

    // Override edilecek tehdit fonksiyonu tanýmlanmasý ve tehdit deðerlerinin ilk deðerlerinin atanmasý.
    virtual void tehdit();

    // Tahta üzerindeki tüm taþlarýn sayýlarýnýn sayýlmasý ve bu sayý deðerlerinin atanmasý.
    void tasYazdir();

};