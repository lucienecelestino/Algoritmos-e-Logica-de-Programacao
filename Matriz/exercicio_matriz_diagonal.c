
#include <stdio.h>
 
int main()
{
    int matriz[4][4],l,c ;
    int somadiagonal =0;
    
    for (l=0; l<4; l++)
    {
        for(c=0; c<4; c++)
        {
        
// preenche a matriz com o triplo do valor do seu indice
        matriz [l][c] = ((l+c)*2+(l+c)*3);
        printf("%d ", matriz[l][c]);
        }
         printf ("\n");
       }
       
//soma da diagonal, (soma apenas onde a linha e igual a coluna, exemplo linha 1, coluna 1)
        for (l=0; l<4; l++)
       {
         for (c=0; c<4; c++)
         {
             if(l==c)
             {
                 somadiagonal += matriz[l][c];
             }
         }
       }
           
    printf ("a soma da diagonal é %d \n", somadiagonal );
}