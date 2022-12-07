#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main() {
	int a, j = 0, z = 0;;
	char s1[20];
	scanf("%s", s1);
	a = strlen(s1);
	if (z == 0) {
		for (int i = 0; i < a; i++) {
			if (s1[i] == 'R') {
				j++;
				if (j == 3) {
					printf("nakhor lite");
					z++;
				}
			}
		}
	}
	j = 0;
	if (z == 0) {
		for (int i = 0; i < a; i++) {
			if (s1[i] == 'R' || s1[i] == 'Y') {
				j++;
				if (j == a) {
					printf("nakhor lite");
					z++;
				}
			}
		}
	}
	j = 0;
	int q = 0;
	if (z == 0) {
		for (int i = 0; i < a; i++) {
			if (s1[i] == 'R')
				j++;
			if (s1[i] == 'Y')
				q++;
			if (q == 2 && j == 2) {
				printf("nakhor lite");
				z++;
			}
		}
	}
	if (z == 0)
		printf("rahat baash");
	return 0;
}