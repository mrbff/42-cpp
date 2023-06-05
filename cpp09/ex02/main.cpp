#include <iostream>
#include <vector>
#include <deque>

template<class C>
void merge(C& arr, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    C L(n1), R(n2);

    int i = 0, j = 0, k = left;

    for (; i < n1; i++)
        L[i] = arr[left + i];
    for (; j < n2; j++)
        R[j] = arr[mid + 1 + j];    

    i = 0, j = 0;

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

template<class C>
void insertionSort(C& arr, int left, int right)
{
    int i = left + 1;
    int j, key;

    for (; i <= right; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= left && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

template<class C>
void mergeInsertionSort(C& arr, int left, int right, int threshold)
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


int main()
{
    int arr[] = {5, 2, 9, 1, 7, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::vector<int> vec(arr, arr + n);
    std::deque<int> dq(arr, arr + n);
    int threshold = 5;

    mergeInsertionSort(vec, 0, n - 1, threshold);
    mergeInsertionSort(dq, 0, n - 1, threshold);
    
    for (int i = 0; i < n; i++)
        std::cout << vec[i] << " ";
    std::cout << std::endl;
    for (int i = 0; i < n; i++)
        std::cout << dq[i] << " ";

    return 0;
}