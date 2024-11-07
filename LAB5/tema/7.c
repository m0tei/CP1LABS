#include <stdlib.h>
#include <stdio.h>

char romanValue(int arab)
{
    switch (arab)
    {
    case 1:
        return 'I';
    case 5:
        return 'V';
    case 10:
        return 'X';
    case 50:
        return 'L';
    case 100:
        return 'C';
    case 500:
        return 'D';
    case 1000:
        return 'M';
    default:
        return 0;
    }
}

int digits(int num)
{
    int count = 0;
    while (num)
    {
        count++;
        num /= 10;
    }
    return count;
}

int transform(int arab)
{
    char string[100];
    int k = -1;
    int size = digits(arab);
    int numbers[] = {1000, 500, 100, 50, 10, 5, 1};
    while (arab)
    {
        int zero = 1;
        for (int i = 1; i < size; i++)
        {
            zero *= 10;
        }
        int ca = arab;
        ca = ca - ca % zero;
        for (int i = 0; i < 7; i++)
        {
            if (ca - numbers[i] > 0)
            {
                string[++k] = romanValue(numbers[i]);
                ca -= numbers[i];
            }
        }
        arab /= 10;
    }
    printf("%99s\n",  string);
}

int main()
{
    int num;
    scanf("%d", &num);

    transform(num);
}