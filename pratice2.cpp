#include <stdio.h>
int main(void) {
	int a,b,n=1;
	printf("�п�Ja�Bb\n");
	scanf("%d",&a);
	scanf("%d",&b);
	for(int i=1;i<=b;i++){
		n=n*a;		
	}
	printf(" %d ��%d���谣�H100���l��= %d\n",a,b,n%100);

	return 0;
}

