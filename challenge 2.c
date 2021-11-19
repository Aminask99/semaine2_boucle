 #include <stdio.h>
 #include <stdlib.h> 
 
int main()
{

    int number;
    int j,i;
    int v = 0;
    printf("enter number : \n");
    scanf("%d",&number);

        for(i = 1;i <= number;i++){
            //espace
            for(j = number - i; j >= 1;j--){

                    printf(" ");
            }

            for(j = 1;j <= i+i-1; j++){

            printf("*");
        }
            printf("\n");
    }
    return 0;
}