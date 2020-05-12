#include <stdio.h>

int main() {
	int n,num,times=1,sum=0,h[100]= {0};
	printf("input n ,h,1<=n<=50  1<=hi<=100\n");

	while(1) {
		scanf("%d",&n);
		if(n==0) break;
		if(1<=n<=50) {
			for(int i=0; i<n; i++) {
				scanf("%d",&h[i]);
				sum=sum+h[i];
			}
			sum=sum / n;
			for(int j=0; j<n; j++) {
				if(h[j]>sum) {
					num=num+(h[j]-sum);
				}
			}
			printf("Set #%d\nThe minimum number of moves is %d.\n\n",times,num);
			times++;
		}
	}
	return 0;
}

