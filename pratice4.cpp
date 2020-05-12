#include <stdio.h>

int main() {
	char str[100];
	int a,i;

	puts("輸入英文字母\n");
	gets(str);

	printf("輸入數字來解密1-25\n");
	scanf("%d",&a);
	for(i=0; i<str[i]; i++) {
		printf("%c",str[i]-a);
	}
	return 0;
}
