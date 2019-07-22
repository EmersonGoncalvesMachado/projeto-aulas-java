#include <stdio.h>

void main(){
	
	int anosHumano;
	int idadeCanina;
	
	printf("Esse eh um programa que Calcula idade Canina\n************************************\n\n");
	printf("Quantos anos Humanos tem o Cachorro\n");
	scanf("%d", &anosHumano);
	
	idadeCanina = anosHumano*7; //Fórmula que converte idade Humana em Idade Canina
	
	printf("O Cachorro possui %d anos Humanos\n\n",idadeCanina);

	system ("pause");
	
	
}
