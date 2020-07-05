#pragma warning(push)
#pragma warning(disable:4668 4710 5039)
#include <windows.h>
#include <cstdio>
#pragma warning(pop)

#include "defines.h"




int main()
{
    HWND handle = FindWindowEx(NULL, NULL, TEXT("Shell_TrayWnd"), NULL);

    handle = FindWindowEx(handle, NULL, TEXT("TrayNotifyWnd"), NULL);

    handle = FindWindowEx(handle, NULL, TEXT("TrayClockWClass"), NULL);

    printf("handle clock = %x\n", reinterpret_cast<uint>(handle));

    PAINTSTRUCT ps;

    HDC hdc = BeginPaint(handle, &ps);

    TextOut(hdc, 0, 0, TEXT("Hello"), 5);

    EndPaint(handle, &ps);

    system("pause");

    return 0;
}
