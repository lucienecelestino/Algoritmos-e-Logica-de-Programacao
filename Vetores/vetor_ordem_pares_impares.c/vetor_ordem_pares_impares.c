/*Carregar um vetor com o número de elementos definidos pelo usuário
e, a partir da carga, fazer:
a) Imprimir em ordem original
b) Imprimir em ordem inversa
c) Imprimir os elementos pares
d) Imprimir os elementos ímpares*/
#include <stdio.h>
 
int main() {
    int t = 0;
    int i = 0;
 
    
    printf("Digite o tamanho do vetor: \n");
    scanf("%d", &t);
 
    int vetor[t];
 
    // Carregando o vetor
    for(i = 0; i < t; i++) {
        printf("Digite o %dº Numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }
 
    // Imprimindo em ordem original
    printf("\nOrdem original:\n");
    i = 0;
    do {
        printf("|%d| ", vetor[i]);
        i++;
    } while (i < t);
 
    puts("\n");
 
    // Imprimindo em ordem inversa
    i=t-1;
    printf("\nOrdem inversa:\n");
    do
    {
      printf("|%d| ", vetor[i]);
      i--;
    }while(i>=0);
     puts("\n");
 
    // Imprimindo os numeros pares
    i=0;
    printf("\nNumeros pares:\n");
    
    while(i<t)
    {
        if(vetor[i]%2 ==0)
        {
        printf("|%d| ",vetor[i]);
        }
        i++;
    }
    puts("\n");
    
 
   
    // Imprimindo Numeros ímpares
    i=0;
    printf("\nNumeros ímpares:\n");
    do
    {
        if(vetor[i] %2 !=0 )
        {
            printf("|%d| ",vetor[i]);
        }
        i++;
    }while(i<t);
    
 
}