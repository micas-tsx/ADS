#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char user[5] = "adm";
	int senha = 123;
	
	char userVer[5];
	int senhaVer;
	
	int ok;

	printf("escreva o usu�rio: ");
	gets(userVer);
			
	printf("escreva a senha: ");
	scanf("%d", &senhaVer);
	
	ok = strcmp(user, userVer);
	
	if(ok == 0 && senha == senhaVer) {
		system("cls");
		numeroMaior();
	} else {
		while(ok != 0 || senha != senhaVer) {
			system("cls");
			printf("escreva o usu�rio: ");
			scanf("%s", &userVer);
			fflush(stdin);
			
			printf("escreva a senha: ");
			scanf("%d", &senhaVer);
	
			ok = strcmp(user, userVer);
			system("cls");
		}

		numeroMaior();
	}
}


int numeroMaior() {
	int a, b, c;
	printf("Digite tr�s n�meros apertando ENTER: \n");
	scanf("%i %i %i", &a, &b, &c);

	system("cls");

	if( (a>b) && (a>c) ) {
		printf("Maior valor � o A: %d", a);
	} else if( (b>a) && (b>c) ) {
		printf("Maior valor � o B: %d", b);
	} else if( (c>a) && (c>b) ) {
		printf("Maior valor � o C: %d", c);
	} else {
		printf("Dois ou mais n�meros com valores igual: \nA=%d \nB=%d \nC=%d", a, b,c);
	}
}
