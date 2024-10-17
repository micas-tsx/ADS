#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

char nome[100];
int telefone;
char endereco[100];

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

int cadastro() {
	system("cls");
	
	puts("escreva seu nome completo:\n");
	gets(nome);
	
	puts("digite seu telefone:\n");
	scanf("%d", &telefone);
	
	puts("dgite seu endereço:\n");
	gets(endereco);
	
	system("cls");
	
	printf("Nome completo: %s", nome);
	printf("Seu endereco: %s", endereco);
	printf("Telefone: %d", telefone);
}

/*int compraCarro() {
	
}

int compraAcessorio() {
	
}*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	login();
	cadastro();
}



