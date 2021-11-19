#include <stdio.h>
int somme (int a,int b){
        
        int s=a+b;
        return s;
}
int main() {
    int  a , b;
  printf("entrer a");
  scanf("%d",&a);
  printf("entrer b");
  scanf("%d",&b);
  
  printf("%d",somme (a,b));

  return 0;
}


