#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int fac1(int n){
    if(n==1){
        return ;
    }
    return n*fac1(n-1);
}

int fac2(int n){
    int ans = 1;
    for(int i=1;i<=n;i++){
        ans*=i;
    }
    return ans;
}

int WINAPI WinMain(HINSTANCE hi,HINSTANCE previ, LPSTR lpstr, int ncmdShow ){
    int num = atoi(lpstr);
    int ans;
    ans = fac2(num);
    int buffer[50];
    sprintf(buffer,"%d", ans);
    MessageBox(0, buffer ,"Factorial program",MB_OK);
    return 0;
}
