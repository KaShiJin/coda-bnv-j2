#include <stdlib.h>
#include <stdio.h>

int main()
{
	char str[50];
	int age;
	printf("\n Quel est votre prénom ?");
	scanf("%s", str);
	printf("Bonjour %s, quel est votre âge?\n", str);
	scanf("%d", &age);
	int annee = 2026 - age;
	printf("%s si vous êtes de la fin d'année, votre année de naissance est %d\n", str, annee);
	exit(0);
}

