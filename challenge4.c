 #include <stdio.h>
 #include <stdlib.h> 
int main()
{
    int som,max,a;
    som=0;
    max=0;
    a=1;
    printf("Entrez une serie d'entier, pour finir entrez 0.\n");
    while(a!=0)
    {
       do{
            scanf("%d",&a);
            if(a>100)
             printf("Entrez SVP un entier inferieur ou egal a 100\n");
       }while(a>100);
       som+=a;
       if(a>max) max=a;
    }
    printf("la somme: %d\n",som);
    printf("le max: %d\n",max);
    system("pause");
    return 0;
}