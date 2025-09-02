#include <stdio.h>
int main(void) {
float M, Ti, Pm,cal,cal1,cal2;
printf("veullez entrer le montat de pret : ");
scanf("%f",&M);
printf("veullez entrer le taux d'interet de pret : ");
scanf("%f",&Ti);
printf("veullez entrer le paiement mensuel : ");
scanf("%f",&Pm);
cal = (M*(Ti/(100*12)))+M-Pm;
printf("Solde restant apres le 1 mois %.2f \n",cal);
cal1 = (cal*(Ti/(100*12)))+cal-Pm;
printf("Solde restant apres le 2 mois %.2f \n",cal1);
cal2 = (cal1*(Ti/(100*12)))+cal1-Pm;
printf("Solde restant apres le 3 mois %.2f \n",cal2);
return 0;
}