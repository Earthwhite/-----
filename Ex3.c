#include <stdio.h>
#include <stdlib.h>

//* run this program using the console pauser or add your own getch, system("pause") or input loop 
void f(float x){
    float ans = x*x-1 ;
    printf("answer is %.2f",ans);
}

main(){
    float x;
    printf("x = ");
    scanf("%f",&x);
    f(x);
    return 0;
}

	

