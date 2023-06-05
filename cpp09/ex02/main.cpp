#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& arr, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void insertionSort(vector<int>& arr, int left, int right)
{
    for (int i = left + 1; i <= right; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= left && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void mergeInsertionSort(vector<int>& arr, int left, int right, int threshold)
{
    if (left < right)
    {
        if (right - left + 1 <= threshold)
            insertionSort(arr, left, right);
        else
        {
            int mid = left + (right - left) / 2;

            mergeInsertionSort(arr, left, mid, threshold);
            mergeInsertionSort(arr, mid + 1, right, threshold);

            merge(arr, left, mid, right);
        }
    }
}

// Usage example:
int main()
{
    int arr[] = {5, 2, 9, 1, 7, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> vec(arr, arr + n);

    int threshold = 5;

    mergeInsertionSort(vec, 0, n - 1, threshold);

    for (int i = 0; i < n; i++)
        cout << vec[i] << " ";

    return 0;
}





