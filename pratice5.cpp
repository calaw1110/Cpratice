#include <stdio.h>

int main() {
	int n,a,f,x,y,z;
	printf("�п�J���X�ո��\n");
	scanf("%d",&n);
	for(int m=1; m<=n; m++) {
		printf("�п�J���T�M�W�v");
		scanf("%d%d",&a,&f);
		printf("���T�O%d,�W�v�O%d\n",a,f);
		printf("\n");
		for(z=0; z<f; z++) {//�W�v�j�� 
			for(y=1; y<=a; y++) {//�W�b���T�j�� 
				for(x=1; x<=y; x++) {//���P���T����Ƽ� 
					printf("%d",y);
				}
				printf("\n");
			}
			for(y=a-1; y>=1; y--) {// �U�b���T�j�� 
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

