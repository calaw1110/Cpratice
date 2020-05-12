#include <stdio.h>

int main() {
	int n,a,f,x,y,z;
	printf("請輸入有幾組資料\n");
	scanf("%d",&n);
	for(int m=1; m<=n; m++) {
		printf("請輸入振幅和頻率");
		scanf("%d%d",&a,&f);
		printf("振幅是%d,頻率是%d\n",a,f);
		printf("\n");
		for(z=0; z<f; z++) {//頻率迴圈 
			for(y=1; y<=a; y++) {//上半振幅迴圈 
				for(x=1; x<=y; x++) {//等同振幅的資料數 
					printf("%d",y);
				}
				printf("\n");
			}
			for(y=a-1; y>=1; y--) {// 下半振幅迴圈 
				for(x=y; x>=1; x--) {
					printf("%d",y);
				}
				printf("\n");
			}
			printf("\n");
		}
	}
	return 0;
}

