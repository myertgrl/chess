#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

 extern string tahta[8][8];

class Tahta {
public:
    // board dosyalarini a�ma, okuma ve kapatma i�lemi.
    void tahtaYazdir1(); // board1.txt nin taran�p yazd�r�lmas�

    void tahtaYazdir2(); // board2.txt nin taran�p yazd�r�lmas�

    void tahtaYazdir3(); // board3.txt nin taran�p yazd�r�lmas�
};