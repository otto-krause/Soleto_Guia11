#include <stdio.h>
void porcentaje(float a, float b){
  printf("el porcentaje es %%%f\n", (a/b)*100);
}
int main(){
    float a, b;
    printf("ingrese la cantidad de hombres y mujeres que enviaron su curricular y el total: ");
    scanf("%f %f",&a, &b);
    porcentaje(a,b);
}
