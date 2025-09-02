#include <stdio.h>
int main(void) {
    int x, Eq;
printf("veuillez entrer la valeur de x : ");
scanf("%d",&x);
Eq = (3*x*x*x*x*x)+(2*x*x*x*x)-(5*x*x*x)-(x*x)+(7*x)-6;
printf("la valeur de polynome : %d",Eq);
return 0;
}