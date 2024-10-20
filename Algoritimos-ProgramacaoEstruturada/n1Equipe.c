#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	
	char user[5] = "adm";
	int senha = 123;
	
	char userVer[5];
	int senhaVer;
	
	int ok;

	printf("escreva o usuario: ");
	gets(userVer);
			
	printf("escreva a senha: ");
	scanf("%d", &senhaVer);
	
	ok = strcmp(user, userVer);
	
	if(ok == 0 && senha == senhaVer) {
		puts("e o micas");
	} else {
		while(ok != 0 || senha != senhaVer) {
			system("cls");
			printf("escreva o usuario: ");
			scanf("%s", &userVer);
			fflush(stdin);
			
			printf("escreva a senha: ");
			scanf("%d", &senhaVer);
	
			ok = strcmp(user, userVer);	
			system("cls");
		}
	}
}
