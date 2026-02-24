/*
	Name: Vetor.cpp
	Author: Luciene Celestino
	Date: 10/03/25 09:54
	Description: Programa para Manipular Vetores em Memória
*/

#include <stdio.h>

main()
{

	int i;
	int qtdElem = 0;
	
	puts("Quantidade de elementos?");
	scanf("%d", &qtdElem);
	
	int num[qtdElem];
	
	for(i = 0; i < qtdElem; i++)
	{
		printf("Digite o %do ", i + 1);
		scanf("%d", &num[i]);
	}
	 puts("\n");
	 
	 i = 0;// sem essa atribuição nunca entraria no laço while
	 
	 puts("\n");
	 
	 //mostrando os numeros na sequencia
	while(i < qtdElem)
	{
		printf("%d|", num[i]);
		i++;
	}
	puts("\n");
	
	//mostrando os numeros de tras para frente
	
do{
		i--; // colocando o decremento aqui, o i que valia 10, AGORA vale 9, fazendo com que entre no laço do while
		printf("%d|", num[i]);
		
  }while (i > 0); //enquanto i for maior que zero essa condição se repete, evai decrementando, chegou em zero, ele sai do laço
  
  //mostrando se o numero é par ou impar
  	i = 0;
  	
  	puts("\n Numeros Pares do Vetor Sao:");
  	while(i < qtdElem)
    {
  	if(num[i] % 2 == 0)
  	{
  		printf("%d|", num[i]);
  		
	  }
	  i++;
 	}
 	 
 	 i = 0;
 	 
 	puts("\n Numeros impares do Vetor");
 	while(i < qtdElem)
 	{
 	if(num[i] %2 != 0)
	  {
	 	printf("%d|", num[i]);
	  }
	  i++;
	 }

  
}// fim do programa
