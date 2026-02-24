#include <stdio.h>
 
int main()
{
    int matriz[4][4],l,c ;
    int l1= 0, l4 =0;
    
    for (l=0; l<4; l++)
    {
        for(c=0; c<4; c++)
        {
        
// preenche a matriz com o dobro do valor do seu indice
        matriz [l][c] = ((l+c)*2);
        printf("%d ", matriz[l][c]);
        }
         printf ("\n");
       }
       
//trava as linhas 1 e 4, cujo indice é 0 e 3 respectivamente e guarda a soma em duas variaveus
            for(c=0; c<4; c++)
            {
                   l1 += matriz[0][c];
                  l4 += matriz[3][c];
            }
           
     //mostrar o resultado das linhas somadas
    
    printf ("soma da primeira linha  %d \n soma da ultima linha %d /n", l1,l4);
}