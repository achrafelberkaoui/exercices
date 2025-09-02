#include <stdio.h>
int main(void) {
    int M ,Billet20 ;
printf("veuillez entrer le Montant : ");
scanf("%d",&M);
Billet20 = 20000 % 6;
printf("Buillet de 20 $ : %d\n",Billet20);

return 0;
}