#pragma once
#include "Tahta.h"
class Tas {
public:

    // Siyah ta�lar�n tan�mlanmas�.
    static double psSayisi;
    static double ksSayisi;
    static double asSayisi;
    static double fsSayisi;
    static double vsSayisi;
    static double ssSayisi;

    // Beyaz ta�lar�n tan�mlanmas�.
    static double pbSayisi;
    static double kbSayisi;
    static double abSayisi;
    static double fbSayisi;
    static double vbSayisi;
    static double sbSayisi;

    // Tehdit edilen siyah ta�lar�n tan�mlanmas�.
    static double psTehdit;
    static double ksTehdit;
    static double asTehdit;
    static double fsTehdit;
    static double vsTehdit;
    static double ssTehdit;

    // Tehdit edilen beyaz ta�lar�n tan�mlanmas�.
    static double pbTehdit;
    static double kbTehdit;
    static double abTehdit;
    static double fbTehdit;
    static double vbTehdit;
    static double sbTehdit;

    // Override edilecek tehdit fonksiyonu tan�mlanmas� ve tehdit de�erlerinin ilk de�erlerinin atanmas�.
    virtual void tehdit();

    // Tahta �zerindeki t�m ta�lar�n say�lar�n�n say�lmas� ve bu say� de�erlerinin atanmas�.
    void tasYazdir();

};