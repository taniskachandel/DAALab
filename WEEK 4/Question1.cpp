#include<iostream>
using namespace std;
void MergeSort (int[], int, int);
void Merge (int[], int, int, int);
int comparisons=0;
int main() {
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i=0;i<n;i++)
            cin>>arr[i];
        int start=0, e=n-1;
        MergeSort(arr, start, e);
        for (int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl<<"comparisons = "<<comparisons<<endl;
        comparisons=0;
    }
}
void MergeSort(int arr[], int start, int e)
{
    int mid;
    if (start<e)
    {
        mid = (start+e)/2;
        MergeSort(arr, start, mid);
        MergeSort(arr, mid+1, e);
        Merge (arr, start, mid, e);
    }
}

void Merge(int A[], int start, int mid, int e)
{
    int n1, n2, i, j, k;
    n1 = mid-start+1;
    n2 = e-mid;
    int L[n1], R[n2];
    for (i=0;i<n1;i++)
    {
        L[i]=A[start+i];
    }
    for (j=0;j<n2;j++)
    {
        R[j]=A[mid+j+1];
    }
    i=0, j=0, k=start;
    while (i<n1 && j<n2)
    {
        comparisons++;
        if (L[i]<=R[j])
        {
            A[k]=L[i];
            i++;
        }
        else
        {
            A[k]=R[j];
            j++;
        }
        k++;
    }
    while (i<n1)
    {
        A[k]=L[i];
        i++;
        k++;
    }
    while (j<n2)
    {
        A[k]=R[j];
        j++;
        k++;
    }
}
