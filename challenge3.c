 #include <stdio.h>
 #include <stdlib.h> 
 int main()
 {
     int nbr , c=0 ,i;
     printf("nbr est");
     scanf("%d",&nbr);
    for (i=1;i<=nbr;i++){
         
         if(nbr%i ==0){
          c++;
         }  
     }

     if (c==2) {
         printf("%d est premiere",nbr);
     }
     else {
         printf("nombre nest pas un premier");
     }

     return 0;
 }
        
     

