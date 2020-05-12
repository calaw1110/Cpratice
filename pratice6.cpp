#include <stdio.h>

int main() {
	int h,m;
	double hh,mm;
	printf("input H:M,1<=H<=12,00<=M<=59 \n");
	scanf("%d%d",&h,&m);
	while((1<=h<=12)&&(0<=m<=59)) {
		double deg;//角度
		hh=h*30+0.5*m;//一小時走30度(360度/12小時=30度/小時) 一分鐘走0.5度(30度/60分鐘=0.5度/分鐘)
		mm=m*6;//一小時走360度->一分鐘走360度/60分鐘 =6度/分鐘
		if(h==0&&m==0) {
			break;
		}
		if(hh>mm) {//計算 時針角度大於分針角度時的最小夾角
			deg=hh-mm;
		} else {//計算 時針角度小於分針角度時的最小夾角
			deg=mm-hh;
		}
		if(deg>180) {//夾角超過180度換算成最小夾角
			deg=360-deg;
		}
		printf("%f",deg);
		break;
	}
	return 0;
}

