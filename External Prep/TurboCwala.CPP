
#include <stdio.h>
#include <dos.h>
#include<conio.h>

union REGS in,out;

void setCursorSize(){
	in.h.ah =1;
	in.h.ch =0;
	in.h.cl=14;
	int86(0X10,&in,&out);
}

void cursorLoc(){
	in.h.ah = 3;
	in.h.bh = 0;
	int86(0X10,&in,&out);
	printf("CH - %d DH- %d CL- %d DL- %d",out.h.ch,out.h.dh,out.h.cl,out.h.dl);

}

void ScrollDown(){
	in.h.ah = 7;
	in.h.al = 1;
	in.h.bh = 61;
	in.x.cx = 0;
	in.h.dh = 24;
	in.h.dl = 79;
	int86(0X10,&in,&out);
}

int main(){
     //setCursorSize();
    // cursorLoc();
      ScrollDown();
     getch();
     return 0;
}