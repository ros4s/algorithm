#include <stdio.h>
#include <stdlib.h>

void merge(int *arr, int left, int pivot, int right)
{
    int i = left;
    int j = pivot + 1;
    int t = 0;
    int *tmp = (int *)malloc(sizeof(int) * (right - left + 1));

    while (i <= pivot && j <= right)
    {
        if (arr[i] <= arr[j])
            tmp[t++] = arr[i++];
        else
            tmp[t++] = arr[j++];
    }
    while (i <= pivot)
        tmp[t++] = arr[i++];
    while (j <= right)
        tmp[t++] = arr[j++];

    i = left;
    t = 0;

    while (i <= right)
        arr[i++] = tmp[t++];

    free(tmp);
}

void sort(int *arr, int left, int right)
{
    if (left < right)
    {
        int q = (left + right) / 2;
        sort(arr, left, q);
        sort(arr, left + 1, right);
        merge(arr, left, q, right);
    }
}

int main()
{
    int n = 0;

    scanf("%d", &n);
    int *arr = (int *)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        printf("%d\n", arr[i]);

    free(arr);
    return 0;
}