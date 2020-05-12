#include <stdio.h>


int main() {
	int num;
	int i,j,flag=1;

	scanf("%d",&num);
	for(i=num; i>=2; i--) {
		for(j=2; j<i; j++) {
			if(i%j==0) {
				flag=0;
				
			}
		}
		if(flag!=0&&j==i) {
			printf("%d\t",i);
		}
		flag=1;
	}
	printf("\n");
	return 0;
}




