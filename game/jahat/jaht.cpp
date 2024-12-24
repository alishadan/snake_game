#include "jahat.h"
void jahat(arrows &key){
                //if pressed any of key left up right or down arrow
            if (GetAsyncKeyState(VK_LEFT))
                key=key_left;
            if (GetAsyncKeyState(VK_UP))
                key=key_up;
            if (GetAsyncKeyState(VK_RIGHT))
                key=key_right;
            if (GetAsyncKeyState(VK_DOWN))
                key=key_down;

}
