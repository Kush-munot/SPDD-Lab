#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int WINAPI WinMain(HINSTANCE hi,HINSTANCE previ, LPSTR lpstr, int ncmdShow ){
     char buffer[50];
     sprintf(buffer,"%d", hi);
     //MessageBox(0, "Hello World!!" ,"Demo program",MB_HELP);
     MessageBox(0, buffer ,"Instance program",MB_OKCANCEL);
     return 0;
}
