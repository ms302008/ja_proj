/// Filtr czarno-bia³y
/// Micha³ Suchan
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