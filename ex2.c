#include <stdio.h>
int main(void) {
    float v,r;
    r=10;
    int i;
printf("programme qui calcule le volume\n");
v =(  3.14 * 4/3);
for(i=0; i<3; i++){
v = v * r;
}
printf(" le volume %.1f ",v);


return 0;
}