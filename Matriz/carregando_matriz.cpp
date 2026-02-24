/*
	Name: Matriz.cpp
	Author: Luciene Celestino
	Date: 17/03/25 09:56
	Description: Programa para Manipular dados em Matrizes
*/

#include<stdio.h> //STanArd Input Output
main()
{
	int i,j;
	int ordem=3;
	int matriz[3][3]; //matriz quadrada de ordem 
	i = j =0;
	
	puts("Digite os elementos para carregar na Matriz: ");
	puts("em ordem por linha:");
	
	do
	{
		do
		{
			printf("[%d][%d]:", i,j);
			scanf("%d", &matriz[i][j]);
			j++; // aqui varia o j, ou seja a linha fica estatica, e varia apenas a coluna
			
		}while(j < 3);
		j=0;
		i++;
		
	}while(i < 3);
	
	/*Carregamento da Matriz por colunas
	
	i=0;
	j=0;
	puts("\n \n Digite os elementos para carregar na Matriz: ");
	puts("em ordem por coluna:");
	
	do
	{
		do
		{
			printf("[%d][%d]:", i,j);
			scanf("%d", &matriz[i][j]);
			i++; // aqui varia o i, ou seja a coluna fica estatica, e varia apenas a linha
			
		}while(i < 3);
		i=0;
		j++;
		
	}while(j < 3);
*/

	//Elementos da diagonal principal
	i=0;
	j=0;
	puts("\n \n Elementos da Diagonal Principal: (DP)");
		
	while(i < 3)
	{
		while(j < 3)
		{
		
			if(i == j)
			printf("%d, ",matriz[i][j]);
			
			j++;
		}
		j=0;
		i = i +1;
	}
	
	//elementos da diagonal Secundaria
	i=0;
	j=0;
	puts("\n \n elementos da diagonal Secundaria: (DS)");
	
	for(i=0; i<3; i++)
		for(j=0; j<3; j++)
		
			if(i + j == ordem-1)
			printf("%d, ", matriz[i][j]);
	
		//elementos a cima da diagonal Principal
	i=0;
	j=0;
	puts("\n \n elementos a cima da diagonal Principal");
	do
	{
		while(i < 3)
		{
			if( i < j)
			printf("%d, ",matriz[i][j]);
			i++;
		}
		i=0;
		j++;
	}while(j < 3);
	
	
	//elementos abaixo da diagonal Principal
	i=0;
	j=0;
	puts("\n \n elementos abaixo da diagonal Principal");
	
	for(i=0; i<3; i++)
	{
		do
		{
			if(i>j)
			printf("%d, ",matriz[i][j]);
				
			j++;
		
		}while(j<3);
		j=0;
	}
	
}//fim do Programa
