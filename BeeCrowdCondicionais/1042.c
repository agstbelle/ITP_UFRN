#include <stdio.h>

int main(){

    int n1, n2, n3, a, b, c, order;
    scanf("%d %d %d", &n1, &n2, &n3);

    a = n1;
    b = n2;
    c = n3;

    if (a > b) { 
        order = a;
        a = b;
        b = order; 
    }
    if (a > c) { 
        order = a; 
        a = c; 
        c = order; 
    }
    if (b > c) 
    { 
        order = b; 
        b = c; 
        c = order; 
    }

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf(" \n");
    printf("%d\n", n1);
    printf("%d\n", n2);
    printf("%d\n", n3);

    return 0;
}