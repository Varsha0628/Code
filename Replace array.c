#include <stdio.h>

int main() {
    int a[10], i, n, oldno, newno;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d numbers for the array:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter the number to replace: ");
    scanf("%d", &oldno);

    printf("Enter the new number: ");
    scanf("%d", &newno);

    
    for(i = 0; i < n; i++) {
        if(a[i] == oldno) {
            a[i] = newno;
        }
    }

    printf("Updated array: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}