#include <dos.h>
#include<stdio.h>
#include<conio.h>
union REGS in,out;

void detectMouse(){
    in.x.ax = 0;
    int86(0X33, &in, &out);
    if(out.x.ax == 0){
       printf("Mouse failed to Initalized\n");
    }else{
	printf("Mouse was successfully initalized\n");
    }
}

int main(){
	detectMouse();
	getch();
	return 0;
}