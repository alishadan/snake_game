
menu(){
    //SetConsoleCursorPosition(hConsole,coord);
    INPUT_RECORD input_buffer[256]; // name of array is a pointer;
    DWORD nLength=256;
    DWORD NumberInput;
    SetConsoleMode(iConsole,ENABLE_WINDOW_INPUT|ENABLE_EXTENDED_FLAGS|ENABLE_MOUSE_INPUT  );
    GetNumberOfConsoleInputEvents(iConsole,&nLength);
    ReadConsoleInput(iConsole,input_buffer,nLength,&NumberInput);
    DWORD i;
    for (i=0; i<NumberInput ; i++){


    }
}
