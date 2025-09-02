#include <stdio.h>
int main(void) {
float M, Ti, Pm,cal;
printf("veullez entrer le montat de pret : ");
scanf("%f",&M);
printf("veullez entrer le taux d'interet de pret : ");
scanf("%f",&Ti);
printf("veullez entrer le paiement mensuel : ");
scanf("%f",&Pm);
cal = M*(Ti/(100*12))+M;
for(int i = 0; i<3; i++){
    cal = cal-Pm;
    printf("%f \n",cal);
}
return 0;
}