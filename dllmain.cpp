// dllmain.cpp : Defines the entry point for the DLL application.
#include "stdafx.h"
#include <stdio.h>

// this shoud ideally go into the .h file I believe
__declspec( dllexport ) void CALLBACK TJKAHMZL(
       HWND hwnd, 
      HINSTANCE hinst, 
      LPSTR lpszCmdLine, 
      int nCmdShow);

// our hello world function
void CALLBACK TJKAHMZL(HWND hwnd, HINSTANCE hinst, LPSTR lpszCmdLine, int nCmdShow)
{

}