#include "global.h"


HANDLE hConsole= GetStdHandle(STD_OUTPUT_HANDLE);

HANDLE iConsole = GetStdHandle(STD_INPUT_HANDLE);
HANDLE iConsole1 = GetStdHandle(STD_INPUT_HANDLE);

HANDLE FirstBuffer= GetStdHandle(STD_OUTPUT_HANDLE);

HANDLE FoodBuffer= GetStdHandle(STD_OUTPUT_HANDLE);
HANDLE  Player_Buffer= GetStdHandle(STD_OUTPUT_HANDLE);
HANDLE SaveMouseBuffer= GetStdHandle(STD_OUTPUT_HANDLE);
HANDLE ScoreBuffer= GetStdHandle(STD_OUTPUT_HANDLE);
HANDLE SnakeBuffer= GetStdHandle(STD_OUTPUT_HANDLE);
HANDLE ScreenBuffer= GetStdHandle(STD_OUTPUT_HANDLE);

HANDLE SecondBuffer = CreateConsoleScreenBuffer(
    GENERIC_READ | GENERIC_WRITE,
    FILE_SHARE_WRITE | FILE_SHARE_READ,
    nullptr,
    CONSOLE_TEXTMODE_BUFFER,
    nullptr);

    HANDLE BackBuffer=SecondBuffer;
    bool BufferSwitch=true;

    void swapBuffers(void)
{
    //WriteConsole(BackBuffer, inBuffer, static_cast<short>(sizeof(inBuffer)), nullptr, nullptr);
    SetConsoleActiveScreenBuffer(BackBuffer);
    BackBuffer = BufferSwitch ? FirstBuffer : SecondBuffer;
    BufferSwitch = !BufferSwitch;


}

COORD GetConsoleCursorPosition(HANDLE hConsoleOutput)
{
    CONSOLE_SCREEN_BUFFER_INFO cbsi;
    if (GetConsoleScreenBufferInfo(hConsoleOutput, &cbsi))
    {
        return cbsi.dwCursorPosition;
    }
    else
    {
        // The function failed. Call GetLastError() for details.
        COORD invalid = { 0, 0 };
        return invalid;
    }
}
