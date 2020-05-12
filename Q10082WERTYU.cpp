#include <stdio.h>

int main(void) {
	//鍵盤字元陣列//只針對大寫英文
	char c[]= {'`','1','2','3','4','5','6','7','8','9','0','-','=',     
	           'Q','W','E','R','T','Y','U','I','O','P','[',
	           'A','S','D','F','G','H','J','K','L',
	           ';','Z','X','C','V','B','N','M',',','.','/',
	          };
	//字串輸入陣列
	char input[1024]= {0};

	while(gets(input)) {
		for(int i=0; input[i]; i++) {
			if(input[i]==' '||input[i]=='\n') {//空白跟換行 一樣輸出空白
				input[i]==' ';
			}
		}
		for(int i=0; input[i]; i++) {
			for(int j=0; c[j]; j++) {
				if(input[i]==c[j]) {//兩個陣列比對 一樣時鍵盤陣列-1 還原正確
					input[i]=c[j-1];//重新賦值回去
				}
			}
		}
		puts(input);
	}
	return 0;
}
