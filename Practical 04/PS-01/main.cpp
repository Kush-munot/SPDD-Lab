#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg,WPARAM wParam, LPARAM lParam){
    HDC d;

    int x1,y1;
    switch (uMsg){
        case WM_LBUTTONDOWN:{
            d = GetDC(hwnd);
            x1 = LOWORD(lParam);
            y1 = HIWORD(lParam);
            cout<<x1<<" "<<y1<<endl;
            TextOut(d,x1,y1,"Hello",5);
            ReleaseDC(hwnd,d);
        }
        break;



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

    HWND hwnd = CreateWindow("My Class", "Microsoft-Word-1888", WM_LBUTTONDOWN,200,200,500,500,0,0,hi,0);
    ShowWindow(hwnd, nCmdShow);

    MSG msg={};
    while(GetMessage(&msg, NULL,0,0) > 0){
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

}
