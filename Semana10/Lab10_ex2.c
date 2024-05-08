#include <stdio.h>

int main() {
    int i = 10; 
    int *p = &i;
	
	printf("*p = %d\n", *p);
	
	printf(" p = %ld\n", (long int)p);

    printf(" p = %p\n", (void *)p);

    printf("&p = %p\n", (void *)&p);

    return 0;
}
