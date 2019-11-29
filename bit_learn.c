#include <stdio.h>

int main (void){
	short deg=3000, x;
	unsigned char deg_l = (unsigned char)(deg)&0x00FF;
    unsigned char deg_h = (unsigned char)(deg>>8)&0x00FF;
    char PC_txdata[200]={'\0'};
    
    printf("deg_l=%d,deg_h=%d\n",deg_l,deg_h);
    printf("deg_l=%x,deg_h=%x\n",deg_l,deg_h);
    
	x=deg_l;
	x+=deg_h<<8;
	printf("x=%d\n",x);
	sprintf(PC_txdata,"%d",x);
	printf("%s\n",PC_txdata);
	return 0;
}
