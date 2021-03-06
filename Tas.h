#pragma once
#include "Tahta.h"
class Tas {
public:

    // Siyah taşların tanımlanması.
    static double psSayisi;
    static double ksSayisi;
    static double asSayisi;
    static double fsSayisi;
    static double vsSayisi;
    static double ssSayisi;

    // Beyaz taşların tanımlanması.
    static double pbSayisi;
    static double kbSayisi;
    static double abSayisi;
    static double fbSayisi;
    static double vbSayisi;
    static double sbSayisi;

    // Tehdit edilen siyah taşların tanımlanması.
    static double psTehdit;
    static double ksTehdit;
    static double asTehdit;
    static double fsTehdit;
    static double vsTehdit;
    static double ssTehdit;

    // Tehdit edilen beyaz taşların tanımlanması.
    static double pbTehdit;
    static double kbTehdit;
    static double abTehdit;
    static double fbTehdit;
    static double vbTehdit;
    static double sbTehdit;

    // Override edilecek tehdit fonksiyonu tanımlanması ve tehdit değerlerinin ilk değerlerinin atanması.
    virtual void tehdit();

    // Tahta üzerindeki tüm taşların sayılarının sayılması ve bu sayı değerlerinin atanması.
    void tasYazdir();

};