#include <stdio.h>

int main() {
	char str[100];
	int a,i;

	puts("��J�^��r��\n");
	gets(str);

	printf("��J�Ʀr�ӸѱK1-25\n");
	scanf("%d",&a);
	for(i=0; i<str[i]; i++) {
		printf("%c",str[i]-a);
	}
	return 0;
}
