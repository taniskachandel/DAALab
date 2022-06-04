#include<iostream>
using namespace std;
int partitionfunc(int[],int,int);
void QuickSort(int[],int,int);
int comparisons=0, swaps=0;
int main ()
{
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i=0;i<n;i++)
            cin>>arr[i];
        int s=0, e=n-1;
        QuickSort(arr, s, e);
        for (int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
        cout<<"comparisons = "<<comparisons<<endl<<"swaps = "<<swaps<<endl;
        comparisons=0, swaps=0;
    }
}

void QuickSort(int arr[], int s, int e)
{
    int p;
    if (s<e)
    {
        p = partitionfunc(arr, s, e);
        QuickSort(arr, s, p-1);
        QuickSort(arr, p+1, e);
    }
}

int partitionfunc(int arr[], int s, int e)
{
    int i, j, temp, pivot;
    pivot = arr[e];
    i=s-1;
    for (j=s;j<e;j++)
    {
        comparisons++;
        if (arr[j]<=pivot)
        {
            i++;
            swaps++;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    swaps++;
    temp=arr[i+1];
    arr[i+1]=arr[e];
    arr[e]=temp;
    return i+1;
}
