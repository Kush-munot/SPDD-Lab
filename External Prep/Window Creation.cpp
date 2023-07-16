#include <iostream>
#include <bits/stdc++.h>
#include <windows.h>

using namespace std;

int WINAPI WinMain(HINSTANCE hi,HINSTANCE previ, LPSTR lpstr, int ncmdShow ){


    for(int i=0;i<10;i++){
        HWND h;
        h = CreateWindow("Button","MyWindow", WS_BORDER, 100*i, 100*i, 500,400,0,0,hi,0);
        ShowWindow(h,1);
        char buffer[50];
        sprintf(buffer,"%d", h);e
        MessageBox(0, buffer ,"String program",MB_OK);
    }

}
