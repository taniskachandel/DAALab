#include<iostream>
#include<math.h>
using namespace std;
void jumpsearch (int [], int ,int);
int main ()
{
    int test_case;
    cin>>test_case;
    while (test_case--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i=0;i<n;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        jumpsearch(arr, key, n);
    }
}
void jumpsearch (int arr[], int key, int n)
{
    int pos=sqrt(n), comparisons=1, i=0, flag=0;
    while (arr[pos]<=key && pos<n)
    {
        comparisons++;
        i=pos;
        pos=pos+(sqrt(n));
        if (pos>n-1)
            pos=n;
    }
    for (int j=i;j<=pos;j++)
    {
        if (arr[j]==key)
        {
            flag=1;
            break;
        }
    }
    if (flag==1)
        cout<<"Present "<<comparisons<<endl;
    else
        cout<<"Not Present "<<comparisons<<endl;
}

