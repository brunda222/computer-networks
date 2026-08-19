#include <stdio.h>
#include <string.h>

int main()
{
    int i, j = 0, n;
    char a[200], b[100];

    printf("Enter the stuffed frame: ");
    scanf("%199s", a);

    n = strlen(a);

    /* Skip starting FLAG (4 characters) */
    i = 4;

    /* Process until ending FLAG */
    while (i < n - 4)
    {
        /* If ESC is found, skip it and copy the next character(s) */
        if (i <= n - 7 &&
            a[i] == 'E' &&
            a[i + 1] == 'S' &&
            a[i + 2] == 'C')
        {
            i += 3;   // Skip ESC
        }

        b[j++] = a[i++];
    }

    b[j] = '\0';

    printf("\nAfter Character De-Stuffing:\n%s\n", b);

    return 0;
}
