#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main() {
	int b;
	char s1[100], s2[100];
	scanf("%s%s", &s1, &s2);
	b = strlen(s2);
	if (s1[0] == s2[b - 1])
		printf("YES");
	else
		printf("NO");
	return 0;
}