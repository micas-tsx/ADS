#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int login() {
	int senha = 123;
	
	int senhaVer;
			
	printf("escreva a senha: ");
	scanf("%d", &senhaVer);
	
	
	if(senha == senhaVer) {
		system("cls");
		puts("senha correta");
		system("pause");
	} else {
		while(senha != senhaVer) {
			system("cls");
			
			printf("escreva a senha: ");
			scanf("%d", &senhaVer);

			system("cls");
			
			if(senha != senhaVer) {
				puts("senha incorreta");
			
				system("pause");
			}	
			
		}
		system("cls");
		puts("senha correta");
	}
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    login();
}