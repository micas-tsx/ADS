#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#include "funcoes2.h"

int cadastrar() {
	system("cls");

	printf("\nseu nome :\n");
    scanf("%s", lista[i].nomeCliente);
	fflush(stdin);
		
	printf("nome do cachorro:\n");
	scanf("%s", &lista[i].nomePet);
	fflush(stdin);
		
	printf("telefone:\n");
	scanf("%d", &lista[i].telefone);
	fflush(stdin);
	
	i++;
	menu();
	
}
