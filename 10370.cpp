#include<stdio.h>
int main() {
	int C,n,sum,count,grade[1000];
	float average;
	scanf("%d", &C);
	for(int i=0; i<C; i++) {
		sum=0;
		count=0;
		scanf("%d", &n);

		for(int j=0; j<n; j++) {
			scanf("%d", &grade[j]);
			sum += grade[j];
		}

		average = sum/n;

		for(int j=0; j<n; j++) {
			if(grade[j]>average) {
				count++;
			}
		}
		printf("%.3f%%\n",100.0*count/n);
	}
	return 0;
}
