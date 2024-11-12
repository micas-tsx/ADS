#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#include "funcoes1.h"

int nome_do_petshop() {
	puts("Canto do Pet");
}

int menu() {
	nome_do_petshop();
	
	puts("Escolha o que voc� deseja fazer:");
	
	puts("Cadastrar - 1");
	puts("Agendar - 2");
	puts("Consultar - 3");
	puts("Relatorio - 4");
	puts("Sair - 5");
	
	scanf("%d", &opcao);

    return 0;
}

int cadastrar() {
	puts("Digite o seu nome:");
	fflush(stdin);
	printf("%s", &nomeCliente);

	puts("Digite o nome do seu pet:");
	fflush(stdin);
	printf("%s", &nomePet);
	
	puts("Digite seu telefone:");
	scanf("%d", &telefone);
	
	system("cls");

    system("pause");

    menu();
    return 0;
}

int agendar() {
	puts("Digite o nome do seu pet:");
	fflush(stdin);
	printf("%s", &nomePet);

    puts("Escolha uma opção:");
    puts("Banho - 1");
	puts("Tosa - 2");
	puts("Banho e Tosa - 3");
    scanf("%d", &tosaOption);

    system("cls");

    system("pause");

    menu();

    return 0;
}

int consulta() {
	puts("Escolha uma data para sua consulta:");
    puts("quarta - 1");
	puts("Quinta - 2");
    scanf("%d", &dataOption);

    for(i = 0; i <= 10; i++) {
        printf("Aluno: %s\n", nomeCliente[i] + 1);
    }

    puts("Escolha uma data para sua consulta:");
    puts("Dr. Micael - 1");
	puts("Dr. Professor - 2");
    scanf("%d", &medOpiton);

    system("cls");

    system("pause");

    menu();

    return 0;
}

int relatorio() {
	
}

int sair() {
	system("cls");
	printf("Volte sempre ao Canto do Pet");
    return 0;
}
