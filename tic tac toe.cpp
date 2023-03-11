#include <graphics.h>
#include<stdio.h>

int main(){
	int gd=DETECT, gm;
	initgraph(&gd,&gm, (char*)"");
	int s,c;
	setcolor(YELLOW);
    line(200,100,200,400);
    line(300,100,300,400);
    line(100,200,400,200);
    line(100,300,400,300);
    for(int i=0;i<9;i++){
    printf("enter the square number ");
    scanf("%i",&s);
    printf(" O => 0  X => 1 enter 1 or 0 ");
    scanf("%i",&c);
   	int x=150;int y=150;
	if(s<=3){x=x+100*(s-1); }
	else if(s>=4&& s<=6){x=x+100*(s-4);y=y+100; }
	else if(s>=7 && s<=9){x=x+100*(s-7);y=y+200; }
	if(c==0){setcolor(GREEN); circle(x,y,30);}
	else if(c==1) {setcolor(RED); line(x-20,y-40,x+20,y+40);
	line(x+20,y-40,x-20,y+40);	}
}

	getch();
	closegraph();
	
}
