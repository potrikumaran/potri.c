#include <stdio.h>
#include <string.h>

int main() {
    int n, i, j, t;
    printf("Enter the length of the words: ");
    scanf("%d", &n);
    char a[n + 1], b[n + 1];
    printf("Enter the words: ");
    scanf("%s", a);
    scanf("%s", b);
    if (strlen(a) != n || strlen(b) != n) 
    {
        printf("The input strings do not match the specified length.\n");
    }
for (i = 0; i < n - 1; i++) 
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1]) 
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }

    // Sort second string
    for (i = 0; i < n - 1; i++) 
        for (j = 0; j < n - 1 - i; j++) 
        {
            if (b[j] > b[j + 1]) 
            {
                t = b[j];
                b[j] = b[j + 1];
                b[j + 1] = t;
            }
        }
    if (strcmp(a, b) == 0) {
        printf("Anagram\n");
    } else {
        printf("Not anagram\n");
    }

    return 0;
}
