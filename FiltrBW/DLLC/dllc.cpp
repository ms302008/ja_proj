#include "pch.h"
#include "dllc.h"


int testinit(int a, int b)
{
    return a + b;
}


//Funkcja przeksztalcajaca fragment obrazu w czarno - bialy.
//
//wejscie:
//ptr - wskaznik na poczatek obrazu; przedzial wartosci: wszystkie wartosci mozliwe do zapisania na 64 bitach
//to_skip - ilosc pikseli do pominiecia(skad zaczac); przedzial wartosci: -2,147,483,648 do 2,147,483,647 (4 bajty)
//to_edit - ilosc pikseli do obrobki; przedzial wartosci: -2,147,483,648 do 2,147,483,647 (4 bajty)
//wyjscie:
//1 jesli bledne wykonanie, 0 jesli prawidlowe
bool to_grayscale(uint8_t* ptr, int to_skip, int to_edit)
{
    bool flag = 1;

    //optymalizacja nie majaca miejsca w asm
    /*uint8_t tred[256];
    uint8_t tgreen[256];
    uint8_t tblue[256];

    for (int i = 0; i <= 255; i++)
    {
        tred[i] = i * 0.11f;
        tgreen[i] = i * 0.59f;
        tblue[i] = i * 0.3f;
    }*/

    //ustaw pointer
    //ptr = ptr + 4*to_skip; - tak nie moge zrobic w asm, wiec tutaj tez nie
    for (int i = 0; i < to_skip; ++i) {
        ptr += 4;
    }

    //edytuj piksele
    to_edit *= 4;
    for (int i = 0; i < to_edit; i += 4) {
        int gray = ptr[i] * 0.11f + ptr[i + 1] * 0.59f + ptr[i + 2] * 0.3f;
        //uint8_t gray = tred[ptr[i]] + tgreen[ptr[i + 1]] + tblue[ptr[i + 2]]; wersja zoptymalizowana, nie ma jej w asm
        if (gray < 0) gray = 0;
        else if (gray > 255) gray = 255;
        (uint8_t)gray;
        ptr[i] = gray;
        ptr[i+1] = gray;
        ptr[i+2] = gray;
    }

    flag = 0;
    return flag;
}

