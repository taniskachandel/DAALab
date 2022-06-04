#include<iostream>
#define MAX 50
using namespace std;
int main()
{
    int test_case;
    cin>>test_case;
    while (test_case--)
    {
        int arr[MAX], n, key, i, j, counter=0;
        cin>>n;
        for (i=0;i<n;i++)
            cin>>arr[i];
        cin>>key;
        for (i=0;i<n;i++)
        {
            for (j=0;j<n;j++)
            {
                if (arr[i]-arr[j]==key)
                    counter++;
            }
        }
        cout<<counter<<endl;
    }
}
