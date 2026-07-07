#include <stdio.h>

int main()
{
    int length, breadth, area;

    printf("Enter length and breadth: ");
    scanf("%d%d", &length, &breadth);

    area = length * breadth;

    printf("Area = %d", area);

    return 0;
}