#include <stdio.h>

int main(void) {
	// your code goes here
	int max=0;
	char input[1024];//字元陣列

	while(gets(input)) {//輸入字串
		//puts(a);
		int n=0,record[128]= {0};//紀錄次數陣列
		for(int i =0; input[i]; i++) {
			record[input[i]]++;//重複時增加
			n++;  //位置標記 
		}
		for(int m=1; m<n; m++) {
			for(char c=127; c>=0; c--) {
				if(record[c]==m)
				printf("%d %d\t\n",c,record[c]);//ASCII碼 次數 
			}
		}

	}
	return 0;
}

