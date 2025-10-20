#include <stdio.h>
int longest1binary(int arr[], int n)
{
    int max = 0, count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count = 0;
        }
        else
            count++;

        if (count > max)
        {
            max = count;
        }
    }
    return max;
}
int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result = longest1binary(arr, n);
    printf("result = %d ", result);
}