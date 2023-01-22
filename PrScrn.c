/*
	gendef PrScrn.dll
	i686-w64-mingw32-dlltool -v -d PrScrn.def -l PrScrn.lib
	i686-w64-mingw32-g++ -Wall -O3 -static -s -o PrScrn.exe PrScrn.c -mwindows -nostdlib -luser32 -L. -lPrScrn
*/

#include <windows.h>

extern "C" int __cdecl PrScrn();

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	CreateWindowExW(0, L"PrScrn", L"PrScrn", WS_OVERLAPPED|WS_SYSMENU, 0, 0, CW_USEDEFAULT, CW_USEDEFAULT, NULL, NULL, hInstance, NULL);
	PrScrn();
	return 0;
}