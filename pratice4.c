#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int x, y, r, i, sum = 0;
    float p, t;
    
    printf("Enter the number of products: ");
    scanf("%d", &x);
    
    for (i = 1; i <= x; i++) {
        printf("Enter price for product %d: ", i);
        scanf("%d", &y);
        printf("How many items are there: ");
        scanf("%d", &r);
        
        sum += y * r;
        printf("Total price with no discount: %d\n", sum);
    }
    
    if (sum >= 100000) {
        p = sum * 0.05;
    } else if (sum >= 40000) {
        p = sum * 0.04;
    } else if (sum >= 5000) {
        p = sum * 0.03;
    } else {
        p = 0; 
    }
    
    t = sum - p; 
    
    printf("Total price before discount: %d\n", sum);
    printf("Discount: %.2f\n", p);
    printf("Total price after discount: %.2f\n", t);
    
    return 0;
}
	
	
