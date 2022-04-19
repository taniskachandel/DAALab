#include<iostream>
#define MAX 50
using namespace std;
void LinearSearch(int[], int, int);
int main ()
{
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        int arr[MAX], n, key;
        cin>>n;
        for (int i=0;i<n;i++)
            cin>>arr[i];
        cin>>key;
        LinearSearch(arr, n, key);
    }
}
void LinearSearch(int arr[], int n, int key)
{
    int flag=1, i;
    for (i=0;i<n;i++)
    {
        if (arr[i]==key)
        {
            flag=1;
            cout<<"Present "<<i+1<<endl;
            break;
        }

        else
            flag=0;

    }
    if (flag==0)
        cout<<"Not Present "<<i<<endl;
}
