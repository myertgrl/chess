//#include <iostream>
#include "Hesapla.h"
//#include "Tas.h"
//#include "Piyon.h"
//#include "At.h"
//#include "Vezir.h"

using namespace std;


    // Taþ, Piyon, At ve Vezir sýnýflarýndan oluþturulan nesneler ile taþ sayýlarý ve
    // tehdit edilen taþ sayýlarý iþleme alýnýp sonuç puanlarýnýn hesaplanmasý.
    void Hesapla :: hesapla() {
        // Nesnelerin oluþturulmasý.
        Tas* tas = new Tas();
        Piyon* piyon = new Piyon();
        At* at = new At();
        Vezir* vezir = new Vezir();

        // Piyon, At ve Vezir sýnýflarýndan oluþturulan nesnelerin Taþ sýnýfýndaki tehdit metodu
        // override edilerek her sýnýftaki tanýmlý tehdit metodlarýnýn çaðýrýlmasý.
        piyon->tehdit();
        at->tehdit();
        vezir->tehdit();

        // Taþ sýnýfýnda tanýmlý tüm taþlarýn sayýldýðý tasYazdir metodunun çaðýrýlmasý.
        tas->tasYazdir();

        // Verilen kurallara göre hesaplamanýn yapýlmasý
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

        // Her bir hesaplamanýn doðruluðu için tehdit deðerlerinin sýfýrlanmasý.
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

        // Oluþturulan nesnelerin iþlem sonrasý silinmesi.
        delete tas, piyon, at, vezir;
    }