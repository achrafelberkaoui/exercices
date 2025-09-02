#include <stdio.h>
int main(void) {
    float Montant, Ta, TaxeA;
printf("veuillez saiser un montant : ");
scanf("%f",&Montant);
Ta = Montant * 0.05;
TaxeA = Montant + Ta;
printf("le Montant avec une taxe : %.2f ",TaxeA);


return 0;
}