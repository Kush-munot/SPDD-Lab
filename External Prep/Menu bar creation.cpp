#include <iostream>
#include <bits/stdc++.h>
#include <windows.h>

using namespace std;

HMENU hMenu;
void AddMenu(HWND hwnd){
    hMenu = CreateMenu();
    HMENU subMenu = CreateMenu();
    AppendMenu(subMenu,MF_STRING,NULL,"New");
    AppendMenu(subMenu,MF_STRING,NULL,"Open");
    AppendMenu(subMenu,MF_SEPARATOR,NULL,NULL);
    AppendMenu(subMenu,MF_STRING,NULL,"Save");
    AppendMenu(subMenu,MF_STRING,NULL,"Save As");

    AppendMenu(hMenu,MF_POPUP,(UINT_PTR)subMenu,"File");
    AppendMenu(hMenu,MF_STRING,NULL,"Edit");
    AppendMenu(hMenu,MF_STRING,NULL,"View");
    AppendMenu(hMenu,MF_STRING,NULL,"Delete");
    AppendMenu(hMenu,MF_STRING,NULL,"Cut");
    AppendMenu(hMenu,MF_STRING,NULL,"Copy");
    AppendMenu(hMenu,MF_STRING,NULL,"Paste");
    AppendMenu(hMenu,MF_STRING,NULL,"Undo");
    AppendMenu(hMenu,MF_STRING,NULL,"Redo");
    SetMenu(hwnd,hMenu);

}


LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg,WPARAM wParam, LPARAM lParam){
    switch (uMsg){
        case WM_COMMAND:
            switch(wParam){
                case 1:
                    MessageBeep(1);
                    break;
                default:
                    cout<<"This program is written by Kush Munot."<<endl;

            }

        case WM_QUIT:
            PostQuitMessage(0);
            break;
        case WM_CREATE:
            AddMenu(hwnd);

        default:
            return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }
}



int WINAPI WinMain(HINSTANCE hi,HINSTANCE previ, LPSTR lpstr, int nCmdShow ){
    WNDCLASS wc = {};
    wc.lpfnWndProc = WindowProc;
    wc.hInstance = hi;
    wc.lpszClassName = "My Class";

    RegisterClass(&wc);

    HWND hwnd = CreateWindow("My Class", "Microsoft-Word-1888", WS_OVERLAPPEDWINDOW,200,200,500,500,0,0,hi,0);
    ShowWindow(hwnd, nCmdShow);

    MSG msg={};
    while(GetMessage(&msg, NULL,0,0) > 0){
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

}
