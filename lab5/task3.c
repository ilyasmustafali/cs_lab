#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int rows, cols;

    scanf("%d%d", &rows, &cols);
    if (rows < 1 || cols < 1)
    {
        puts("The dims are not valid!");
        return -1;
    }

    int arr[rows][cols];

    // initialization
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            arr[i][j] = rand() % 20 + 1;
    }

    // display
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            printf("%4d", arr[i][j]);
        puts("");
    }

    puts("-----------------------");

    for (int i = 0; i < rows; i++)
    {
        int max = arr[i][0];
        int sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum += arr[i][j];
            if (arr[i][j] > max)
                max = arr[i][j];
        }

        printf("Max of row %d is %d AND sum is %d\n", i + 1, max, sum);
    }

    return 0;
}