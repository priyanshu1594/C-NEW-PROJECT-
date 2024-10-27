#include <stdio.h>
#include <string.h>

struct Laptop {
    char company_name[50];
    char processor[50];
    float price;
};

int main() {
    int n;
    printf("Enter the number of laptops: ");
    scanf("%d", &n);

    struct Laptop laptops[n];

    for (int i = 0; i < n; i++) {
        printf("Enter details for laptop %d\n", i + 1);
        printf("Company Name: ");
        scanf("%s", laptops[i].company_name);
        printf("Processor: ");
        scanf("%s", laptops[i].processor);
        printf("Price: ");
        scanf("%f", &laptops[i].price);
    }

    printf("\nLaptop Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Laptop %d: %s, %s, $%.2f\n", i + 1, laptops[i].company_name, laptops[i].processor, laptops[i].price);
    }

    return 0;
}
