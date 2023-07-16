#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include<bits/stdc++.h>

using namespace std;

int WINAPI WinMain(HINSTANCE hi,HINSTANCE previ, LPSTR lpstr, int ncmdShow ){
    char str[100];
    int k=0,m=0,len=0;
    for(int i=0;i<100;i++){
        str[i] = lpstr[i];
    }
    int temp = 0,j=0,sum=0;

    int str_length = strlen(str);
    //cout<<str_length<<endl;


    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ',')
            continue;
         if (str[i] == ' '){
            j++;
        }
        else {
            arr[j] = arr[j] * 10 + (str[i] - 48);
        }
    }

    for (int i = 0; str[i] != '\0'; i++) {
        sum+=arr[i];
    }

    char buffer[50];
    sprintf(buffer,"%d", sum);
    MessageBox(0, buffer ,"String program",MB_OK);

}
