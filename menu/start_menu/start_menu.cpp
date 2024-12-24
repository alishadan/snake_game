#include "start_menu.h"
#include "../menu_mouse_position/menu_mouseP.h"
#include "../../global/global.h"
#include <iostream>
#include "../menu.h"
#include "../../game/new_game/new_game.h"
#include "../../arrow_function.h"
#include "../../game/jahat/jahat.h"
#include "start_menu.h"
#include "mouse_click/mouse_click.h"
#include"../../game/continue_game/continue_game.h"
#include "../../game/about/about.h"
#include "../../game/exit/exit.h"
#include "../../game/records/records.h"
#include "../end_menu/end_menu.h"
#include "draw_start_menu/deaw_start_menu.h"
using namespace std;
void menu_start(arrows key){
    COORD coord0={0,0};
    COORD coord1={0,3};
    COORD coord2={0,5};
    COORD coord3={0,7};
    COORD coord4={0,9};
    COORD coord5={0,11};
  //  SetConsoleCursorPosition(hConsole,coord0);

    SetConsoleMode(iConsole, ENABLE_WINDOW_INPUT|ENABLE_MOUSE_INPUT|ENABLE_EXTENDED_FLAGS );
     INPUT_RECORD lpBuffer[10];
    DWORD nLength =10;
    DWORD lpNumberOfEventsRead,lpNumber;
    WORD Counter=0;
     COORD mouse=GetConsoleCursorPosition(hConsole);

    ReadConsoleInput(iConsole, lpBuffer,nLength,&lpNumberOfEventsRead);

         DWORD i=0;
           for (i=0; i<lpNumberOfEventsRead; i++){
                if (mouse.X <= coord0.X+17
                    && mouse.X>=coord0.X
                    && mouse.Y<=coord0.Y+2
                    && mouse.Y>=coord0.Y
                    ){
                        switch(lpBuffer[i].EventType){
                            case KEY_EVENT:
                                if(lpBuffer[i].Event.KeyEvent.bKeyDown==TRUE){
                                    switch(lpBuffer[i].Event.KeyEvent.wVirtualKeyCode){
                                    case VK_RETURN:
                                        new_game();
                                        break;
                                    case VK_DOWN:
                                        SetConsoleCursorPosition(hConsole,coord1);
                                        break;
                                    case VK_UP:
                                        SetConsoleCursorPosition(hConsole,coord0);
                                        break;
                                    }//end switch
                                    break;
                                }//end if
                        }//end switch
                    }//end if
                if (mouse.X <= coord1.X+17
                    && mouse.X>=coord1.X
                    && mouse.Y<=coord1.Y+2
                    && mouse.Y>=coord1.Y
                    ){
                        switch(lpBuffer[i].EventType){
                            case KEY_EVENT:
                                if(lpBuffer[i].Event.KeyEvent.bKeyDown==TRUE){
                                    switch(lpBuffer[i].Event.KeyEvent.wVirtualKeyCode){
                                    case VK_RETURN:
                                        continue_game();
                                        break;
                                    case VK_DOWN:
                                        SetConsoleCursorPosition(hConsole,coord2);
                                        break;
                                    case VK_UP:
                                        SetConsoleCursorPosition(hConsole,coord0);
                                        break;
                                    }//end switch
                                    break;
                                }//end if
                        }//end switch
                    }//end if
                if (mouse.X <= coord2.X+17
                    && mouse.X>=coord2.X
                    && mouse.Y<=coord2.Y+2
                    && mouse.Y>=coord2.Y
                    ){
                        switch(lpBuffer[i].EventType){
                            case KEY_EVENT:
                                if(lpBuffer[i].Event.KeyEvent.bKeyDown==TRUE){
                                    switch(lpBuffer[i].Event.KeyEvent.wVirtualKeyCode){
                                    case VK_RETURN:
                                        //records_snake();
                                        break;
                                    case VK_DOWN:
                                        SetConsoleCursorPosition(hConsole,coord3);
                                        break;
                                    case VK_UP:
                                        SetConsoleCursorPosition(hConsole,coord1);
                                        break;
                                    }//end switch
                                    break;
                                }//end if
                        }//end switch
                    }//end if
                if (mouse.X <= coord3.X+17
                    && mouse.X>=coord3.X
                    && mouse.Y<=coord3.Y+2
                    && mouse.Y>=coord3.Y
                    ){
                        switch(lpBuffer[i].EventType){
                            case KEY_EVENT:
                                if(lpBuffer[i].Event.KeyEvent.bKeyDown==TRUE){
                                    switch(lpBuffer[i].Event.KeyEvent.wVirtualKeyCode){
                                    case VK_RETURN:
                                        records_snake();
                                        break;
                                    case VK_DOWN:
                                        SetConsoleCursorPosition(hConsole,coord4);
                                        break;
                                    case VK_UP:
                                        SetConsoleCursorPosition(hConsole,coord2);
                                        break;
                                    }//end switch
                                    break;
                                }//end if
                        }//end switch
                    }//end if
                if (mouse.X <= coord4.X+17
                    && mouse.X>=coord4.X
                    && mouse.Y<=coord4.Y+2
                    && mouse.Y>=coord4.Y
                    ){
                        switch(lpBuffer[i].EventType){
                            case KEY_EVENT:
                                if(lpBuffer[i].Event.KeyEvent.bKeyDown==TRUE){
                                    switch(lpBuffer[i].Event.KeyEvent.wVirtualKeyCode){
                                    case VK_RETURN:
                                        about_snake();
                                        break;
                                    case VK_DOWN:
                                        SetConsoleCursorPosition(hConsole,coord5);
                                        break;
                                    case VK_UP:
                                        SetConsoleCursorPosition(hConsole,coord3);
                                        break;
                                    }//end switch
                                    break;
                                }//end if
                        }//end switch
                    }//end if
                if (mouse.X <= coord5.X+17
                    && mouse.X>=coord5.X
                    && mouse.Y<=coord5.Y+2
                    && mouse.Y>=coord5.Y
                    ){
                        switch(lpBuffer[i].EventType){
                            case KEY_EVENT:
                                if(lpBuffer[i].Event.KeyEvent.bKeyDown==TRUE){
                                    switch(lpBuffer[i].Event.KeyEvent.wVirtualKeyCode){
                                    case VK_RETURN:
                                        exit_snake();
                                        break;
                                    case VK_DOWN:
                                        SetConsoleCursorPosition(hConsole,coord0);
                                        break;
                                    case VK_UP:
                                        SetConsoleCursorPosition(hConsole,coord4);
                                        break;
                                    }//end switch
                                    break;
                                }//end if
                        }//end switch
                    }//end if


           }//end for


}//end function
