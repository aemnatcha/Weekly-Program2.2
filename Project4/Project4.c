#include<stdio.h>
int main() {
	int i, n = 3, max = 0, a[100];

	for (i = 0; i < n; i++) {
		printf("input num%d = ", i + 1);
		scanf_s("%d", &a[i]);
	}
	for (i = 0; i < n; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}
	printf("max: %d", max);
}