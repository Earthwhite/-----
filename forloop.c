#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int sum = 0;
	for(i=2; i<=98; i=i+2){
		printf("%d : Hello World\n",i);
		sum = sum + i;
	}
	printf("anser is %d",sum);
	return 0;
}
