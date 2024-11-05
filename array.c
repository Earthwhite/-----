# include <stdio.h>
#define SIZE 5
main ( ) {
int k; /* loop control */
int data[SIZE]; /* data value */
for (k = 0; k < SIZE; k++)
scanf ("%d", &data[k]); /* data input */
for (k = SIZE-1; k >= 0; k--)
printf ("%d\n", data[k]); /* data output */
}
