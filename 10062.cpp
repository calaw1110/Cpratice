#include <stdio.h>

int main(void) {
	// your code goes here
	int max=0;
	char input[1024];//�r���}�C

	while(gets(input)) {//��J�r��
		//puts(a);
		int n=0,record[128]= {0};//�������ư}�C
		for(int i =0; input[i]; i++) {
			record[input[i]]++;//���ƮɼW�[
			n++;  //��m�аO 
		}
		for(int m=1; m<n; m++) {
			for(char c=127; c>=0; c--) {
				if(record[c]==m)
				printf("%d %d\t\n",c,record[c]);//ASCII�X ���� 
			}
		}

	}
	return 0;
}

