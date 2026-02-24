/*
	Name: Vetor.cpp
	Author: Luciene Celestino
	Date: 10/03/25 09:54
	Description: Programa para Manipular Vetores em Memória
*/

#include <stdio.h>

main()
{
	int num[10];
	int i;
	
	for(i = 0; i < 10; i++)
	{
		printf("Digite o %do ", i + 1);
		scanf("%d", &num[i]);
	}
	 i = 0;
	 //mostrando os numeros na sequencia
	while(i < 10)
	{
		printf("%d|", num[i]);
		i++;
	}
	puts("\n");
	
	//mostrando os numeros de tras para frente
	
do{
		i--; // colocando o decremento aqui, o i que valia 10, AGORA vale 9, fazendo com que entre no laço do while
		printf("%d|", num[i]);
		
  }while (i > 0);
  
  
}// fim do programa
