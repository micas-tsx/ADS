#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno {
	char nome[50];
	float nota1;
	float nota2;
};

typedef struct aluno aluno;

int main() {
	int tamanho = 0;
	printf("quantos alunos tem?\n");
	scanf("%d", &tamanho);

	aluno lista[tamanho];

	int i = 0;

	system("cls");
	
	puts("============ Cadastre os Alunos =================");

	for(i = 0; i < tamanho; i++) {
		printf("\nNome do aluno %d:\n", i + 1);
        scanf("%s", lista[i].nome);
		fflush(stdin);
		
		printf("Nota 1 do aluno %d:\n", i + 1);
		scanf("%f", &lista[i].nota1);
		fflush(stdin);

		printf("Nota 2 do aluno %d:\n", i + 1);
		scanf("%f", &lista[i].nota2);
		fflush(stdin);
	}

	system("cls");

	puts("================ Alunos =================\n");
	for(i=0; i < tamanho; i++) {
		printf("Aluno: %s\n", lista[i].nome);
		printf("Nota: %.2f\n", lista[i].nota1);
		printf("Nota: %.2f\n", lista[i].nota2);

		float media = (lista[i].nota1 + lista[i].nota2) / 2.0;
        if(media >= 7) {
			printf("Media: %.2f - Aprovado", media);
			puts("\n");
		} else {
			printf("Media: %.2f - Reprovado", media);
			puts("\n");
		}
	}
};