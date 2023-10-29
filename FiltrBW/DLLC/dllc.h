#pragma once
/// Filtr czarno-bia³y
/// Micha³ Suchan
/// 
/// ver 0.1 (23.10.23)- w koncu stworzono bez bledu DLL w wersji wysokopoziomowej
///
/// 


#ifdef DLLC_EXPORTS
#define DLLC __declspec(dllexport)
#else
#define DLLC __declspec(dllimport)
#endif

extern "C" DLLC int testinit(int a, int b);