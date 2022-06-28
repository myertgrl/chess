#include <iostream>
#include "Tahta.h"
#include "Hesapla.h"

using namespace std;

// String tipinde 8'e 8'lik tahta matrisi tanımlanması.
string tahta[8][8];

// Kullanılan taş ve tehdit sayılarının bildirilmesi.
double Tas::psTehdit;
double Tas::ksTehdit;
double Tas::asTehdit;
double Tas::fsTehdit;
double Tas::vsTehdit;
double Tas::ssTehdit;
double Tas::pbTehdit;
double Tas::kbTehdit;
double Tas::abTehdit;
double Tas::fbTehdit;
double Tas::vbTehdit;
double Tas::sbTehdit;
double Tas::psSayisi;
double Tas::ksSayisi;
double Tas::asSayisi;
double Tas::fsSayisi;
double Tas::vsSayisi;
double Tas::ssSayisi;
double Tas::pbSayisi;
double Tas::kbSayisi;
double Tas::abSayisi;
double Tas::fbSayisi;
double Tas::vbSayisi;
double Tas::sbSayisi;


int main()
{
    // Tahta sınıfından her bir board için nesne oluşturulması.
    Tahta* tahta1 = new Tahta();
    Tahta* tahta2 = new Tahta();
    Tahta* tahta3 = new Tahta();
    // Hesapla sınıfından sonuçları hesaplamak için nesneler oluşturulması.
    Hesapla* sonuc1 = new Hesapla();
    Hesapla* sonuc2 = new Hesapla();
    Hesapla* sonuc3 = new Hesapla();

    cout << "Tahta Dosya Adi" << "\t\t" << "Sonuclar" << endl;

    // Oluşturulan nesneler ile board1 icin sonucun hesaplanması ve sonrasında nesnelerin silinmesi.
    tahta1->tahtaYazdir1();
    cout << "board1.txt";
    sonuc1->hesapla();

    delete tahta1;
    delete sonuc1;

    // Oluşturulan nesneler ile board2 icin sonucun hesaplanması ve sonrasında nesnelerin silinmesi.
    cout << "board2.txt";
    tahta2->tahtaYazdir2();
    sonuc2->hesapla();

    delete tahta2;
    delete sonuc2;

    // Oluşturulan nesneler ile board3 icin sonucun hesaplanması ve sonrasında nesnelerin silinmesi.
    cout << "board3.txt";
    tahta3->tahtaYazdir3();
    sonuc3->hesapla();

    delete tahta3;
    delete sonuc3;

    return 0;
}