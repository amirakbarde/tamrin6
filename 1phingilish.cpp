#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main() {
	int a, b = 1;;
	char s1[100];
	scanf("%s", &s1);
	a = strlen(s1);
	for (int i = 0; i < a; i++) {
		if (s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'u' || s1[i] == 'o' || s1[i] == 'i')
			b *= 2;
	}
	printf("%d", b);
	return 0;
}
