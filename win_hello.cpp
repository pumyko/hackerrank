#include <windows.h>

int main()
{
    MessageBoxW(
        NULL,
        L"Hello, Windows!",
        L"My First WinAPI",
        MB_OK
    );

    return 0;
}

// g++ win_hello.cpp -o win_hello.exe -mwindows -O2
