#include<iostream>
#define MAX 50
using namespace std;
int main()
{
    int test_case;
    cin>>test_case;
    while (test_case--)
    {
        int arr[MAX],n,i,j,temp,minimum, comparisons=0, swaps=0;
        cin>>n;
        for (i=0;i<n;i++)
            cin>>arr[i];
        for (i=0;i<n-1;i++)
        {
            minimum=i;
            for (j=i+1;j<n;j++)
            {
                if (arr[j]<arr[minimum])
                    minimum=j;
                comparisons++;
            }
            temp=arr[i];
            arr[i]=arr[minimum];
            arr[minimum]=temp;
            swaps++;
        }
        for (i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
        cout<<"comparisons = "<<comparisons<<endl;
        cout<<"swaps = "<<swaps<<endl;
    }
}
