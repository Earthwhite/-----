#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, a, d, c, p, y = 1;
	printf("Enter the number of product : ");
	scanf("%d",&x);
	while(y <= x){
		printf("Enter the prize of product %d : ",y);
		scanf("%d",&a);
		printf("how many item : ");
		scanf("%d",&d);
		c = a * d;
		printf("the prize with no discount is : %d\n", c);
		y += 1;
		
	}
	
	if(c == 10000){
		p = c * 0.02;
		printf("discount is : %d\n",c-p);
		printf("the prize with discount is : %d",p);
	}else if(c > 10000 && c <= 50000){
		p = c * 0.03;
		printf("discount is : %d\n",c-p);
		printf("the prize with discount is : %d",p);
		
	
	}else if(c > 50000){
		p = c * 0.04;
		printf("discount is : %d\n",c-p);
		printf("the prize with discount is : %d",p);
	}else if(c < 10000){
		printf("no discount same prize : %d",c);
	}
	
	
	return 0;
}
