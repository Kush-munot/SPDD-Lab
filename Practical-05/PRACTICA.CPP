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
void showMouse(){
	in.x.ax = 1;
	int86(0X33,&in,&out);

}
void displayStatus(){
	while(!kbhit()){
		int x1,y1;
		in.x.ax = 3;
		int86(0X33,&in,&out);
		if(out.x.bx == 1){
			printf("Left Btn Pressed\n");
			x1 = out.x.cx;
			y1 = out.x.dx;
			printf("%d %d\n",x1,y1);
		}else if(out.x.bx == 2){
			printf("Right Btn Pressed\n");
		}else if(out.x.bx == 3){
			printf("Center Button Pressed\n");
		}

	delay(100);
	}
}
int main(){
	detectMouse();
	showMouse();
	displayStatus();
	getch();
	return 0;
}