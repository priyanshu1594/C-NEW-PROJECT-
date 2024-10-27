#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the number of fruits: ");
    scanf("%d", &n);

    FILE *file = fopen("data.txt", "w");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    char fruit[50], color[50];
    for (int i = 0; i < n; i++) {
        printf("Enter fruit name: ");
        scanf("%s", fruit);
        printf("Enter color: ");
        scanf("%s", color);
        fprintf(file, "Fruit: %s, Color: %s\n", fruit, color);
    }

    fclose(file);
    printf("Data written to data.txt successfully.\n");

    return 0;
}
