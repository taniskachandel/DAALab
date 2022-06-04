#include<iostream>
#define MAX 50
using namespace std;
int main() {
    int test_case;
    cin>>test_case;
    while (test_case--)
    {
        int arr[MAX], i, j, temp, key, n, comparisons=0, shifts=0;
        cin>>n;
        for (i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for (i=1;i<n;i++)
        {
            key=arr[i];
            j=i-1;
            while (j>=0 && arr[j]>key)
            {
                arr[j+1]=arr[j];
                j=j-1;
                comparisons++;
                shifts++;
            }
            arr[j+1]=key;
            shifts++;
        }
        for (i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<"comparisons = "<<comparisons<<endl;
        cout<<"shifts = "<<shifts<<endl;
    }
}
