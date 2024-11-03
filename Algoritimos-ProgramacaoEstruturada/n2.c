#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int option;
char telefone[16];
char endereco[100];
char nome[100];

int optionCar;
char cor[20];
char pagamento[50];

int quantidade;
char nomeAcessorio[100];

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
			
			puts("senha incorreta");
			
			system("pause");
			
			system("cls");
			
			printf("escreva a senha: ");
			scanf("%d", &senhaVer);

			system("cls");	
			
		}
		system("cls");
		puts("senha correta");
	}
}

int menu() {
	system("cls");

	puts("1 - Cadastrar");
	puts("2 - Comprar carro");
	puts("3 - Comprar acessório");
	puts("4 - Sair\n");
	puts("escolha uma opção:");
	
	fflush(stdin);
	scanf("%d", &option);
	fflush(stdin);
	
	switch (option) {
		case 1:
			cadastro();
			break;
		
		case 2: 
			compraCarro();
			break;
			
		case 3: 
			compraAcessorio();
			break;
			
		case 4: 
			sair();
			break;
			
		default:
			system("cls");
			puts("numero inválido");
			system("pause");
			menu();
			break;
	}
}

int cadastro() {
	system("cls");
	
	puts("escreva seu nome completo:");
	gets(nome);
	
	puts("digite seu telefone:");
	gets(telefone);
	
	puts("digite seu endereço:");
	fflush(stdin);
	gets(endereco);
	
	system("cls");
	
	printf("Nome completo: %s\n", nome);
	printf("Telefone: %s\n", telefone);
	printf("Seu endereco: %s\n\n", endereco);
	
	system("pause");

	menu();
}

int compraCarro() {
	system("cls");
	
	puts("1 - Siena");
	puts("2 - Civic");
	puts("3 - Lancer\n");
	puts("escolha uma opção:");
	
	fflush(stdin);
	scanf("%d", &optionCar);
	fflush(stdin);
	
	puts("Qual a cor do seu carro?");
	fflush(stdin);
	gets(cor);
	
	puts("qual a forma de pagamento?");
	fflush(stdin);
	gets(pagamento);
	
	system("cls");
	
	//printf("Carro: %s\n", carName);
	if(optionCar == 1) {
		printf("Carro: Siena\n");
	} else if(optionCar == 2 ) {
		printf("Carro: Civic\n");
	} else if(optionCar == 3) {
		printf("Carro: Lancer\n");
	} 
	printf("Cor do carro: %s\n", cor);
	printf("Forma de pagamento: %s\n\n", pagamento);
	
	system("pause");
	
	menu();
}

int compraAcessorio() {
	system("cls");
	
	puts("Qual acessório você vai comprar?");
	fflush(stdin);
	gets(nomeAcessorio);
	
	puts("Quantas você deseja comprar?");
	scanf("%d", &quantidade);
	
	system("cls");
	
	printf("Acessório: %s\n", nomeAcessorio);
	printf("Quantidade: %d\n", quantidade);
	
	system("pause");
	
	menu();
}

int sair() {
	system("cls");
	
	puts("Programa Finalizado!");
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	login();
	
	menu();
	
}



