#include <stdio.h>
int main() {
    int i, j, number;
    int array[2][3] = {
	{1, 2, 3},
	{4, 5, 6}
	};
    printf("Nhap vao mot phan tu: ");
    scanf("%d", &number);
    int found = 0;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            if (array[i][j] == number) {
                printf("Vi tri phan tu trong mang la: hang %d, cot %d\n", i, j);
                found = 1;
                break;
            }
        }
        if (found) {
            break;
        }
    }
    if (!found) {
        printf("Phan tu khong ton tai trong mang.\n");
    }
    return 0;
}

