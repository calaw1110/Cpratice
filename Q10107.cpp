#include <stdio.h>


void insertionSort(int arr[],int n) {//���J�ƧǪk
	for(int i = 0; i<n; i++) {
		int j=i;
		while(j>0&&arr[j-1]>arr[j]) {
			int temp= arr[j];
			arr[j]=arr[j-1];
			arr[j-1]=temp;
			j--;
		}
	}
}
int main() {
	int input[100]= {0};
	int n=0;
	while(scanf("%d",&input)) {
        n++;//�}�C���� 
		insertionSort(input,n);
		if(n%2==0) {
			printf("    %d\n",((input[n/2]+input[n/2-1]))/2);
		} else {
			printf("    %d\n",input[(n)/2]);
		}
	}

	return 0;
}
