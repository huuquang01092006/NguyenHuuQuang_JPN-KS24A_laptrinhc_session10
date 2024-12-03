#include <stdio.h>
int main() {
    int array[] = {64, 25, 12, 22, 11};
    int length = 5;
    int i, j, min;
    printf("mang truoc khi sap xep la: \n");
    for (i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    for (i = 0; i < length - 1; i++) {
        min = i;
        for (j = i+1; j < length; j++)
            if (array[j] < array[min])
                min = j;
        int temp = array[min];
        array[min] = array[i];
        array[i] = temp;
    }
    printf("mang sau khi duoc sap xep: \n");
    for (int i=0; i < length; i++){
    	printf("%d ", array[i]);
	}
    printf("\n");
    return 0;
}

