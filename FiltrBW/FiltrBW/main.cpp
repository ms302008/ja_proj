/// Filtr czarno-bia³y
/// Micha³ Suchan
/// 
/// ver 0.2.1 (15.10.23) - dodanie eksploratora do wyboru pliku
/// 
/// ver 0.2 (11.10.23) - dodanie dll do projektu, konfiguracja srodowiska
/// 
/// ver 0.1 (10.10.23) - stworzono okno w winforms
///


#include "pch.h"

using namespace System;

 //int main(array<System::String ^> ^args)
 //{
 //   return 0;
 //}

#include "Form1.h"

using namespace System::Windows::Forms;

[STAThread]
int main()
{
	HINSTANCE dllHandle = NULL;
	dllHandle = LoadLibrary(L"DLL.dll");
	MyProc11 procedura = (MyProc11)GetProcAddress(dllHandle, "MyProc11");
	int x = 5, y = 7; int retVal = procedura(x, y);
	int a = 5;

  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);
  Application::Run(gcnew CppCLRWinFormsProject::Form1());
  return 0;
}