#include<iostream>
#define MAX 50
using namespace std;
void BinarySearch(int[], int, int, int);
int main()
{
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        int arr[MAX], n, low=0, high, key;
        scanf("%d", &n);
        for (int i=0;i<n;i++)
            scanf("%d",&arr[i]);
        high=n-1;
        cin>>key;
        BinarySearch(arr, low, high, key);
    }
}
void BinarySearch(int arr[], int l, int r, int key) {
    int m, flag=0;
    while (l<=r)
    {
        m=(l+r)/2;
        if (arr[m]==key) {
            flag=1;
            break;
        }
        if (arr[m]<key)
            l=m+1;
        else
            r=m-1;
    }
    if (flag==0)
        cout<<"Not Present "<<m;
    else
        cout<<"Present "<<m+1;
}
