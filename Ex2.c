#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//* run this program using the console pauser or add your own getch, system("pause") or input loop 

int main(int argc, char *argv[]) {
    char ch = 'a';
    int age = 40;
    printf("%c\n",ch);
    printf("%d\n",age);
    float vat = 0.07;
    printf("%.2f",vat);

    //---------------------- Ex_1-------------------------//

    int r = 5;
    float a = 3.14*r*r;
    printf("\n%.2f",a);

    //---------------------- Ex_2-------------------------//

    int x = 3;
    int y = 4;

    int y1 = x*x+3*x+1;
    printf("%d\n",y1);

    int z = x*x+y*y;
    printf("%d\n",z);

    int y2 = -x*-x+1;
    printf("%d\n",y2);
    
    bool b1 = true;
    const char* s = (b1 == true) ? "true" : "false";
    printf("%s", s);
    
    
    int p = 2;
    int b = 10;
    int c;
    c = b;
    b = p;
    p = c;
    printf("\n%d",b);
    printf("\n%d",p);

    return 0;
}
	
