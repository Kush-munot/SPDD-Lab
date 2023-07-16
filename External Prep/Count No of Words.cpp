#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

int WINAPI WinMain(HINSTANCE hi,HINSTANCE previ, LPSTR lpstr, int ncmdShow ){
    char s[100];
    for(int i=0;i<100;i++){
        s[i] = lpstr[i];
    }

    int sp=0,len = 0;
    for(int i=0;i<100;i++){
        if(s[i]==' '){
            ++sp;
        }
    }
    int ans = sp;

    char buffer[50];
    sprintf(buffer,"%d", ans);
    MessageBox(0, buffer ,"String program",MB_OK);
    return 0;
}
