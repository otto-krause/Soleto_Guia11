#include <stdio.h>
void octava(int x){
  printf("la octava parte es %f", (float)x/8);
}
int main(){
    int a;
    printf("ingrese un numero entero: ");
    scanf("%d", &a);
    octava(a);
}
