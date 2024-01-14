/// Filtr czarno-bia³y
/// Micha³ Suchan
/// Jezyki Asemblerowe sem 5, gr 5
///
/// Zalozenia: przeksztalcenie obrazu wejsciowego w czarno bialy korzystajac z metody oswietleniowej / lumy (luminosity method).
/// Konwersja przyporzadkowuje kolorom RGB wagi zalezne od wrazliwosci ludzkiego oka na dany kolor : 0.3 czerwonemu, 0.59 zielonemu
/// i 0.11 niebieskiemu, po czym dodaje otrzymane wartosci.
///
/// 
/// ver 1.0 (14.01.24) - dodano sprawdzanie zakresow w DLLkach, uzupelniono komentarze, dodano zabezpieczenie przed blednymi obrazami
/// 
/// ver 0.9 (13.01.24) - dodano limity na pliki, naprawiono watki (znowu - konwersja ze string zwracala tylko pierwszy znak),
/// dodano liczenie czasu, usunieto polskie znaki z winforma
/// 
/// ver 0.8 (12.01.24) - uporzadkowano kod, naprawiono watki
/// 
/// ver 0.7 (06.01.24) - dodano watki
/// 
/// ver 0.6 (05.01.24) - uporzadkowano kod po skonczeniu pisania obydwoch DLLek
/// 
/// ver 0.5 (20.11.23) - klonowanie obrazu zrodlowego i zdobycie adresu na poczatek kopii
/// 
/// ver 0.4.1 (29.10.23) - zabezpieczenie kontrolek przed niewlasciwymi danymi i przedwczesnym uruchomieniem
/// 
/// ver 0.4 (28.10.23) - proby dostania sie do ladowanego obrazu
/// 
/// ver 0.3 (24.10.23) - naprawienie bledow, dynamiczne ladowanie i wyladowanie bibliotek checkboxem
/// 
/// ver 0.2.1 (15.10.23) - dodanie eksploratora do wyboru pliku
/// 
/// ver 0.2 (11.10.23) - dodanie dll do projektu, konfiguracja srodowiska
/// 
/// ver 0.1 (10.10.23) - stworzono okno w winforms
///


#include "pch.h"

using namespace System;

#include "Form1.h"

using namespace System::Windows::Forms;

[STAThread]
int main()
{
  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);
  Application::Run(gcnew CppCLRWinFormsProject::Form1());
  
  if (dllHandle != nullptr) {
	  FreeLibrary(dllHandle);
  }
  return 0;
}