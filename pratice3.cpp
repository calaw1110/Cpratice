#include <stdio.h>

int main() {
	char str[]={0};
	//char str[9999];
	int tag=0,words=0,i;
	puts("input");
	while(gets(str)) {
		for(i=0; str[i] ; i++) {
			if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z') {
				tag=1;
			} else if(tag==1) {
				words++;
				tag=0;
			}
		}
		printf("count\t%d",words);
		words=0;
	}
	return 0;
}

