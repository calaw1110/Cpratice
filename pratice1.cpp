#include <stdio.h>

int length(int n) {
	int s=1;
	while(n!=1) {
		if(n%2==0) {
			n = n/2;
		} else {
			n = n*3+1;
		}
		s = s+1;
	}
	//printf("���סG%d\n", s);
	return s;
}

int main(void) {
	int i, j, k, p;
	int max = 0;
	puts("�п�J�Ʀr1");
	scanf("%d", &i);
	puts("�п�J�Ʀr2");
	scanf("%d", &j);
	if(i>j) {
		k=i;
		i=j;
		j=k;
	}
	for(i>=1; i<j; i++) {
		p = length(i);
		if(p>max) {
			max = p;
		}
	}

	printf("max�G%d\n", max);
}
