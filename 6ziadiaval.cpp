#include<stdio.h>
#pragma warning(disable:4996)
int TedadRagham(int a) {
	int y=0;
	while (a > 0) {
		a = a / 10;
		y++;
	}
	return y;
}
void RaghamHash(int khorooji) {
	int l = khorooji;
	int y = TedadRagham(l);
	int d = 10, u = 1, m, n, i = 0, q=0;
	while(y>i) {
		m = khorooji % d;
		n = khorooji % u;
		m =(m - n)/u;
		if (m == 2 || m == 3 || m == 5 || m == 7)
			q++;
		d *= 10;
		u *= 10;
		i++;
	}
	if (i == q)
		printf("%d ", khorooji);
}
void AvalBoodan(int adad_voroodi) {
	int z = 1;
	for (int i = 3; i < adad_voroodi; i++) {
		for (int j = i - 1; j > 1; j--) {
			if (i % j == 0)
				break;
			if (j == 2)
				RaghamHash(i);
		}
	}
}
int main() {
	int adad_tabiee;
	scanf("%d", &adad_tabiee);
	if (adad_tabiee > 2)
		printf("2 ");
	AvalBoodan(adad_tabiee);
	return 0;
}