#include <stdio.h>
int main (){
	int array[] = {11, 4, 6, 53, 14};
	int key = 5;
	printf("mang truoc khi duoc sap xep: \n");
	for(int i = 0;i < key; i++){
		printf("%d ", array[i]);
	}
	printf("\n");
	for(int i = 0; i < key - 1; i++){
		for(int j = 0; j < key - i - 1; j++){
			if(array[j] > array[j + 1]){
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	printf("mang sau khi duoc sap xep: \n");
	for(int i = 0;i < key; i++){
		printf("%d ", array[i]);
	}
	printf("\n");
	return 0;
}
