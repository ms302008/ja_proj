#pragma once
#include <cstdint>

/// Filtr czarno-bia³y
/// Micha³ Suchan
/// Jezyki Asemblerowe sem 5, gr 5
///
/// Zalozenia: przeksztalcenie obrazu wejsciowego w czarno bialy korzystajac z metody oswietleniowej / lumy(luminosity method).
/// Konwersja przyporzadkowuje kolorom RGB wagi zalezne od wrazliwosci ludzkiego oka na dany kolor : 0.3 czerwonemu, 0.59 zielonemu
/// i 0.11 niebieskiemu, po czym dodaje otrzymane wartosci.
/// 
/// 
/// ver 1.2 (14.01.24) - zmiana kilku elementow zeby zgadzala sie z wersja asm
/// 
/// ver 1.1 (11.05.24) - naprawienie funkcji
/// 
/// ver 1.0 (05.01.24) - przesuniecie, konwersja, zapis
/// 
/// ver 0.1 (23.10.23) - w koncu stworzono bez bledu DLL w wersji wysokopoziomowej
///
/// 


#ifdef DLLC_EXPORTS
#define DLLC __declspec(dllexport)
#else
#define DLLC __declspec(dllimport)
#endif

extern "C" DLLC int testinit(int a, int b);
extern "C" DLLC bool to_grayscale(uint8_t* ptr, int to_skip, int to_edit);