#include <stdio.h>
int main() {
    int array[] = {12, 11, 13, 5, 6};
    int length = 5;
    int i, key, j;
    printf("mang truoc khi sap xep la: \n");
    for (i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    for (i = 1; i < length; i++) {
        key = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
    printf("mang sau khi sap xep la: \n");
    for (i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
