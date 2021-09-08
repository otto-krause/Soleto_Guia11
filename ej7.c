#include <stdio.h>
void comparar(int x, int y){
    if(x > y)
      printf("%d es mayor que %d", x,y);
    if(x < y)
        printf("%d es menor que %d", x,y);
    else
        printf("%d es igual que %d", x,y);
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    comparar(a,b);
}
