#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, a, d, u, y = 1;
	float c, p, t;
	printf("Enter the number of product : ");
	scanf("%d",&x);
	while(y <= x){
		printf("Enter the prize of product %d : ",y);
		scanf("%d",&a);
		printf("how many item : ");
		scanf("%d",&d);
		u = a * d;
		c += a * d;
		printf("the prize of item %d is : %d\n", y, u);
		y += 1;
		
	}
	
	printf("total prize is : %.2f\n", c);
	
	if(c == 10000){
		p = c * 0.02;
		t = c - p;
		printf("discount : %.2f\n",p);
		printf("the prize with discount is : %d",t);
	}else if(c > 10000 && c <= 50000){
		p = c * 0.03;
		t = c - p;
		printf("discount : %.2f\n",p);
		printf("the prize with discount is : %.2f",t);
	}else if(c > 50000){
		p = c * 0.04;
		t = c - p;
		printf("discount : %.2f\n",p);
		printf("the prize with discount is : %.2f",t);
	}else if(c < 10000){
		printf("no discount same prize : %.2f",c);
	}
	
	
	return 0;
	}
