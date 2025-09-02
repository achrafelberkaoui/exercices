#include <stdio.h>
int main(void) {
    int M ,Billet20 ,Billet10 ,Billet5 ,Billet1;
printf("veuillez entrer le Montant : ");
scanf("%d",&M);
Billet20 = M / 20;
printf("Buillet de 20 $ : %d\n",Billet20);
Billet10 = M%20 /10;
printf("Buillet de 10 $ : %d\n",Billet10);
Billet5 = ((M%20)%10)/5;
printf("Buillet de 5 $ : %d\n",Billet5);
Billet1 = (M%20)%10;
printf("Buillet de 1 $ : %d\n",Billet1);
return 0;
}