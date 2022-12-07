#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#pragma warning(disable:4996)
int main() {
	int Tedad;
	char name[1000];
	scanf("%d", &Tedad);
	for (int i = 0; i < Tedad; i++) {
		getchar(name);
		for (int j = 0; name[j] != '\0'; j++) {
			tolower(name[j]);
		}
		for (int z = 0; name[z] != '\0'; z++) {
			if (name[z] == ' ')
				name[z + 1] -= 32;
		}
		printf("%s\n", name);
	}
	return 0;
}