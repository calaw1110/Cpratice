#include <stdio.h>
int main(void) {
	int a,b,n=1;
	printf("請輸入a、b\n");
	scanf("%d",&a);
	scanf("%d",&b);
	for(int i=1;i<=b;i++){
		n=n*a;		
	}
	printf(" %d 的%d次方除以100的餘數= %d\n",a,b,n%100);

	return 0;
}

