#include <stdio.h>

int main()
{
    int length, breadth, perimeter;

    printf("Enter length and breadth: ");
    scanf("%d%d", &length, &breadth);

    perimeter = 2 * (length + breadth);

    printf("Perimeter = %d", perimeter);

    return 0;
}