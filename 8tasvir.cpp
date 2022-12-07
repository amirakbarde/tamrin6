#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)
int i, j;
void Convert2Negative(int voroodi[1000][1000]) {
		voroodi[i][j] = abs(voroodi[i][j] - 255);
}
void PrintImage(int voroodi[1000][1000]) {
	Convert2Negative(voroodi);
	printf("%d ", voroodi[i][j]);
}
int main() {
	int tasvir[1000][1000], tedad;
	scanf("%d", &tedad);
	for ( i = 0; i < tedad; i++) {
		for (j = 0; j <tedad ; j++) {
			scanf("%d", &tasvir[i][j]);
			PrintImage(tasvir);
		}
		printf("\n");
	}
}