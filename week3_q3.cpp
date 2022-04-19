#include<iostream>
using namespace std;
void QuickSort(int[], int, int);
int partitionfunc(int[], int, int);
int main ()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int start=0, end=n-1;
        QuickSort(arr, start, end);
        int flag=0;
        for (int i=0;i<n;i++)
        {
            if (arr[i]==arr[i+1])
            {
                flag=1;
                break;
            }
        }
        if (flag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
void QuickSort(int arr[], int start, int end)
{
    int p;
    if (start<end)
    {
        p=partitionfunc(arr, start, end);
        QuickSort(arr,start,p-1);
        QuickSort(arr,p+1,end);
    }
}
int partitionfunc(int arr[], int start, int end)
{
    int pivot, i=0, temp,j;
    pivot=arr[end];
    i=start-1;
    for (j=start;j<end;j++)
    {
        if (arr[j]<=pivot)
        {
            i++;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    temp=arr[i+1];
    arr[i+1]=arr[end];
    arr[end]=temp;
    return i+1;
}
