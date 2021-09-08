#include <stdio.h>
void presion(float a, float b){
  printf("la presion es: %fPa\n", a/b);
}
int main(){
    float f, a;
    printf("ingrese la fuerza en Newtons y el area de la superficie en m2: ");
    scanf("%f %f", &f, &a);
    presion(f,a);
}
