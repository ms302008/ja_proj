#pragma once
#include "pch.h"
#include <string>
#include <msclr\marshal_cppstd.h>
#include <thread>
#include "opencv2/highgui.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/imgproc.hpp"

HINSTANCE dllHandle = NULL;

std::string fileContentC = "";

void MarshalString(String^ s, std::string& os) {
    using namespace Runtime::InteropServices;
    const char* chars =
        (const char*)(Marshal::StringToHGlobalUni(s)).ToPointer();
    os = chars;
    Marshal::FreeHGlobal(IntPtr((void*)chars));
}

void MarshalString(String^ s, std::wstring& os) {
    using namespace Runtime::InteropServices;
    const wchar_t* chars =
        (const wchar_t*)(Marshal::StringToHGlobalUni(s)).ToPointer();
    os = chars;
    Marshal::FreeHGlobal(IntPtr((void*)chars));
}

typedef bool(_fastcall* to_grayscale)(uint8_t*, int, int);

void PrintToListBox(System::Windows::Forms::ListBox^ lbox, String^ msg) {
    lbox->BeginUpdate();
    lbox->Items->Add(msg);
    lbox->EndUpdate();
    //autoscroll na dol listy
    lbox->TopIndex = lbox->Items->Count - 1;
}