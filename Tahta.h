#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

 extern string tahta[8][8];

class Tahta {
public:
    // board dosyalarini açma, okuma ve kapatma iþlemi.
    void tahtaYazdir1(); // board1.txt nin taranýp yazdýrýlmasý

    void tahtaYazdir2(); // board2.txt nin taranýp yazdýrýlmasý

    void tahtaYazdir3(); // board3.txt nin taranýp yazdýrýlmasý
};