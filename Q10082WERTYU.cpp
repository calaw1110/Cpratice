#include <stdio.h>

int main(void) {
	//��L�r���}�C//�u�w��j�g�^��
	char c[]= {'`','1','2','3','4','5','6','7','8','9','0','-','=',     
	           'Q','W','E','R','T','Y','U','I','O','P','[',
	           'A','S','D','F','G','H','J','K','L',
	           ';','Z','X','C','V','B','N','M',',','.','/',
	          };
	//�r���J�}�C
	char input[1024]= {0};

	while(gets(input)) {
		for(int i=0; input[i]; i++) {
			if(input[i]==' '||input[i]=='\n') {//�ťո򴫦� �@�˿�X�ť�
				input[i]==' ';
			}
		}
		for(int i=0; input[i]; i++) {
			for(int j=0; c[j]; j++) {
				if(input[i]==c[j]) {//��Ӱ}�C��� �@�ˮ���L�}�C-1 �٭쥿�T
					input[i]=c[j-1];//���s��Ȧ^�h
				}
			}
		}
		puts(input);
	}
	return 0;
}
