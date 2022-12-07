#include<stdio.h>
#pragma warning(disable:4996)
long long int AvalBoodanAndis(long long int andis) {
	for (long long int j = andis - 1; j > 1; j--) {
		if (andis % j == 0) {
			return 0;
		}
		if (j == 2) {
			return 1;
		}
	}
}
long long int AvalBoodan(long long int andis) {
	long long int z = 3, i = 11,q=5;
	for (i; ; i++) {
		for (long long int j = i - 1; j > 1; j--) {
			if (i % j == 0)
				break;
			if (j == 2) {
				if (AvalBoodanAndis(q)) {
					if (z == andis) {
						return i;
					}
					z++;
				}
				q++;
			}
		}
	}
}
int main() {
	long long int TedadSoal, Adad, nomin;
	scanf("%lld", &TedadSoal);
	for (long long int i = 0; i < TedadSoal; i++) {
		scanf("%lld", &Adad);
		if (Adad == 0);

		else if (Adad == 1) {
			printf("3\n");
		}
		else if (Adad == 2) {
			printf("5\n");
		}
		else {
			nomin = AvalBoodan(Adad);
			printf("%lld\n", nomin);
		}
	}
	return 0;
}