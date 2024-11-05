#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//while loop
	//show "Hello world"
	int x;
	printf("Enter the number :");
	scanf("%d",&x);
	while(x != -999){
		printf("your number is : %d\n",x);
		printf("Enter the number : ");
		scanf("%d", &x);
	}
	printf("Exist");
	return 0;
}
