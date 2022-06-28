//#include <iostream>
#include "Hesapla.h"
//#include "Tas.h"
//#include "Piyon.h"
//#include "At.h"
//#include "Vezir.h"

using namespace std;


    // Ta�, Piyon, At ve Vezir s�n�flar�ndan olu�turulan nesneler ile ta� say�lar� ve
    // tehdit edilen ta� say�lar� i�leme al�n�p sonu� puanlar�n�n hesaplanmas�.
    void Hesapla :: hesapla() {
        // Nesnelerin olu�turulmas�.
        Tas* tas = new Tas();
        Piyon* piyon = new Piyon();
        At* at = new At();
        Vezir* vezir = new Vezir();

        // Piyon, At ve Vezir s�n�flar�ndan olu�turulan nesnelerin Ta� s�n�f�ndaki tehdit metodu
        // override edilerek her s�n�ftaki tan�ml� tehdit metodlar�n�n �a��r�lmas�.
        piyon->tehdit();
        at->tehdit();
        vezir->tehdit();

        // Ta� s�n�f�nda tan�ml� t�m ta�lar�n say�ld��� tasYazdir metodunun �a��r�lmas�.
        tas->tasYazdir();

        // Verilen kurallara g�re hesaplaman�n yap�lmas�
        double psSonuc = ((tas->psSayisi - tas->psTehdit) * 1 + tas->psTehdit * 0.5);
        double ksSonuc = ((tas->ksSayisi - tas->ksTehdit) * 5 + tas->ksTehdit * 2.5);
        double asSonuc = ((tas->asSayisi - tas->asTehdit) * 3 + tas->asTehdit * 1.5);
        double fsSonuc = ((tas->fsSayisi - tas->fsTehdit) * 3 + tas->fsTehdit * 1.5);
        double vsSonuc = ((tas->vsSayisi - tas->vsTehdit) * 9 + tas->vsTehdit * 4.5);
        double ssSonuc = ((tas->ssSayisi - tas->ssTehdit) * 100 + tas->ssTehdit * 50);

        double siyahSonuc = psSonuc + ksSonuc + asSonuc + fsSonuc + vsSonuc + ssSonuc;

        double pbSonuc = ((tas->pbSayisi - tas->pbTehdit) * 1 + tas->pbTehdit * 0.5);
        double kbSonuc = ((tas->kbSayisi - tas->kbTehdit) * 5 + tas->kbTehdit * 2.5);
        double abSonuc = ((tas->abSayisi - tas->abTehdit) * 3 + tas->abTehdit * 1.5);
        double fbSonuc = ((tas->fbSayisi - tas->fbTehdit) * 3 + tas->fbTehdit * 1.5);
        double vbSonuc = ((tas->vbSayisi - tas->vbTehdit) * 9 + tas->vbTehdit * 4.5);
        double sbSonuc = ((tas->sbSayisi - tas->sbTehdit) * 100 + tas->sbTehdit * 50);

        double beyazSonuc = pbSonuc + kbSonuc + abSonuc + fbSonuc + vbSonuc + sbSonuc;

        cout << "\t\t" << "Siyah: " << siyahSonuc << "\t" << "Beyaz: " << beyazSonuc << endl;

        // Her bir hesaplaman�n do�rulu�u i�in tehdit de�erlerinin s�f�rlanmas�.
        Tas::psTehdit = 0;
        Tas::ksTehdit = 0;
        Tas::asTehdit = 0;
        Tas::fsTehdit = 0;
        Tas::vsTehdit = 0;
        Tas::ssTehdit = 0;
        Tas::pbTehdit = 0;
        Tas::kbTehdit = 0;
        Tas::abTehdit = 0;
        Tas::fbTehdit = 0;
        Tas::vbTehdit = 0;
        Tas::sbTehdit = 0;

        // Olu�turulan nesnelerin i�lem sonras� silinmesi.
        delete tas, piyon, at, vezir;
    }