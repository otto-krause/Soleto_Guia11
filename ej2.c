#include <stdio.h>
void area(int h, int b){
  printf("el area es %d\n",h * b);
}
void perimetro(int h, int b){
  printf("el perimetro es %d\n", h*2+b*2);
}
int main(){
    int a,b;
    printf("ingrese el la altura y el ancho de un rectangulo: ");
    scanf("%d %d", &a,&b);
    area(a,b);
    perimetro(a,b);
}
