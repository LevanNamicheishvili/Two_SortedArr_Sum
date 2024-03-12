#include <bits/stdc++.h>

using namespace std;

void bubbleSort(int arr[], int m)
{
    for(int i = 0; i < m-1; i++)
    {
        for(int j = 0; j < m-i-1; j++)
        {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void insertSort(int arr[], int n)
{
    for(int k = 1; k < n; k++){
        int m = k;
        while(m > 0 && arr[m] < arr[m-1])
        {
            swap(arr[m], arr[m-1]);
            m--;
        }
    }
}

int main() {
    vector <int> c;
    int sum ;
    int a[] = {14, 2, 7 , 15, 1, 14 , 8};
    int b[] = {23, 4, 17, 6, 22 ,33 ,5};
    
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);


    insertSort(a, n);
    bubbleSort(b, m);
    
    for(int k = 0; k < n; k++)
    {
        sum = a[k] + b[k];
        c.push_back(sum);
        sum = 0;
    }
    
    for(int i = 0; i < n; i++)
    {
        cout << c[i] <<" ";
    }

    return 0;
}