#include <stdio.h>


int f(int x) {
	int ret = x * x + 1;
    return (ret);
}


int g(int x) {
	int re = x * x * x - 2 * x * x + x + 1;
    return(re);
}

int main() {
    int x = 2;
    int z = f(g(x));

    printf("f(g(%d)) = %d", x, z);

    return 0;
}
