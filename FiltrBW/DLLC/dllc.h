#pragma once
#include <cstdint>
/// Filtr czarno-bia³y
/// Micha³ Suchan
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