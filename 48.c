#include <stdio.h>

int main()
{
    int num, j;
    float num[100], sum = 0.0, average;
    printf("Enter the numbers of elements: ");
    scanf("%d", &n);
    while (num > 100 || num <= 0)
    {
        printf("Error! number should in range of (1 to 100).\n");
        printf("Enter the number again: ");
        scanf("%d", &num);
    }

    for(j= 0; j < num; ++j)
    {
        printf("%d. Enter number: ", j+1);
        scanf("%f", &num[j]);
        sum += num[j];
    }

    average = sum / num;
    printf("Average = %.2f", average);

    return 0;
}
