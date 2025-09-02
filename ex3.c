#include <stdio.h>
int main(void) {
    float v,r;
    int i;
printf("veuillez entrer le rayon : ");
scanf("%f",&r);
v =(  3.14 * 4/3);
for(i=0; i<3; i++){
v = v * r;
}
printf(" le volume %.1f ",v);


return 0;
}