#include<stdio.h>
int main()
{

	int  n, i, j, r;
	printf("\nEnter upper bound of the interval: ");
	scanf("%d", &n);


	printf("\nPrime numbers between 1 and %d are:\n " ,n);

	for (i = 2; i <= n; i++) {
		
		if (i == 1 || i == 0)
			continue;

		r = 1;

		for (j = 2; j <= i/2; ++j) {
			if (i % j == 0) {
				r = 0;
				break;
			}
		}

	
		if (r == 1)
			printf("%d\n ", i);
	}
 system("pause");
	return 0;
}
