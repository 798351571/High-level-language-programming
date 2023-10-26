#include <stdio.h>

int main() {
    double a;
    scanf("%lf",&a);
    int b,t;
    b=a;
    double c=a-b;
    if(c>=0.5)
    t=b+1;
    else
    t=b;
    printf("%d",t);
}

