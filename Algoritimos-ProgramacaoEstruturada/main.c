#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#include "funcoes1.h"

int login() {
	int ok;
	
	char senha[20] = "patinha";
	char senhaVer[20];
			
	printf("escreva a senha: ");
	scanf("%s", &senhaVer);
	
	ok = strcmp(senha, senhaVer);
	
	if(ok != 0) {
		while(ok != 0) {
			system("cls");
			
			printf("escreva a senha: ");
			fflush(stdin);
			scanf("%s", &senhaVer);

			ok = strcmp(senha, senhaVer);

			system("cls");	
		}
	}
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    login();
    
	system("cls");
   	
    menu();
}