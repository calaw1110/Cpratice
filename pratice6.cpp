#include <stdio.h>

int main() {
	int h,m;
	double hh,mm;
	printf("input H:M,1<=H<=12,00<=M<=59 \n");
	scanf("%d%d",&h,&m);
	while((1<=h<=12)&&(0<=m<=59)) {
		double deg;//����
		hh=h*30+0.5*m;//�@�p�ɨ�30��(360��/12�p��=30��/�p��) �@������0.5��(30��/60����=0.5��/����)
		mm=m*6;//�@�p�ɨ�360��->�@������360��/60���� =6��/����
		if(h==0&&m==0) {
			break;
		}
		if(hh>mm) {//�p�� �ɰw���פj����w���׮ɪ��̤p����
			deg=hh-mm;
		} else {//�p�� �ɰw���פp����w���׮ɪ��̤p����
			deg=mm-hh;
		}
		if(deg>180) {//�����W�L180�״��⦨�̤p����
			deg=360-deg;
		}
		printf("%f",deg);
		break;
	}
	return 0;
}

