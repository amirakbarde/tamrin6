#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)
int ragham_hash(int shomare) {
		int d = 10, u = 1, m, n, i = 0, q = 0, RaghamHash[8], z = 0, j, w;
		for (i = 0; i < 8; i++) {
			m = shomare % d;
			n = shomare % u;
			m = (m - n) / u;
			RaghamHash[i] = m;
			d *= 10;
			u *= 10;
		}
		for (w = 0; w < 5; w++) {
			for (j = 0; j < 8; j++) {
				if (RaghamHash[j] == RaghamHash[w])
					z++;
				if (z == 4) {
					return 1;
				}
			}
			z = 0;
		}
		int hasht = 7, sh = 0;
		for (i = 0; i < 8; i++) {
			sh += RaghamHash[i] * pow(10, hasht - i);
		}
		if (sh == shomare) {
			return 1;
		}
		for (w = 0; w < 6; w++) {
			z = 0;
			if((RaghamHash[w]== RaghamHash[w+1])&& (RaghamHash[w] == RaghamHash[w + 2]))
					z++;
			if (z == 1) {
					return 1;
				}
			}
		return 0;
}
int main() {
	int ShomareTelephone, k, s, tedad, i;
	scanf("%d", &tedad);
	for (i = 0; i < tedad; i++) {
		scanf("%d", &ShomareTelephone);
		s = ShomareTelephone;
		k = ragham_hash(s);
		if (k==1) {
			printf("Ronde!\n");
		}
		if (k == 0) {
			printf("Rond Nist\n");
		}
	}
	return 0;
}