#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// score ? >= 60 print("pass") but score < 60 >= print("not pass")
	int x;
	printf("Input your score :");
	scanf("%d",&x);
	if(x>=60){
		printf("pass");
	}else{
		printf("not pass");
	}
	return 0;
}
