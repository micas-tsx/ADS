#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int login() {
	nome_do_petshop();
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
			scanf("%s", &senhaVer);
			fflush(stdin);
			
			ok = strcmp(senha, senhaVer);

			system("cls");	
		}
	}
}

int nome_do_petshop() {
	puts("Canto_do_Pet");
}

int menu() {
	nome_do_petshop();
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    login();
    menu();
}
