#include <stdio.h>

int main() {
    char ch;
    int matrix[100][100];
    int r = 0, c = 0;

    // skip first '['
    scanf(" %c", &ch);  

    while (1) {
        scanf(" %c", &ch);
        if (ch == '[') {        // new row starts
            c = 0;
            while (1) {
                int num;
                scanf("%d", &num);
                matrix[r][c++] = num;

                scanf(" %c", &ch);
                if (ch == ']') break;   // row end
            }
            r++;
        }
        if (ch == ']') {
            scanf(" %c", &ch);
            if (ch == ']') break;       // matrix end
        }
    }

    // print transpose
    printf("Transpose:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }
    return 0;
}
