#include <stdio.h>
 
int main()
{
	int dados[5][4], l, c;
	for(l=0; l<5; l++)
	{
		    c=0;
			printf("Entre com o codigo do funcionario %d: ",l+1);
			scanf("%d", &dados[l][c]);
			printf("Entre com os dias trabalhados: ");
			scanf("%d", &dados[l][c+1]);
			printf("Entre com as faltas: ");
			scanf("%d", &dados[l][c+2]);

		dados [l][3] = dados[l][1]-dados[l][2];
	}
	//saida
	for(l=0; l<5; l++)
	{
		printf("Funcionario %d dos %d trabalhou %d dias\n", dados[l][0],dados[l][1], dados[l][3]);
	}
}
