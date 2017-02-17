/*
 * Mainly for RDP (mstsc.exe)
 * compile: cl SwapMouseButton.cpp user32.lib */

#pragma comment(lib, "user32")

#include <tchar.h>
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

int WinMain(
    HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPSTR lpCmdLine,
    int nCmdShow
) {
    // https://blogs.msdn.microsoft.com/oldnewthing/20071017-00/?p=24753
    //int swapped = GetSystemMetrics(SM_SWAPBUTTON);
    int swapped = SwapMouseButton(TRUE);
    MessageBox(NULL, _T("Dismiss me when done."), _T("Mouse buttons swapped"), MB_OK);
    SwapMouseButton(swapped);
}