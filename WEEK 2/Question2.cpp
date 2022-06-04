#include<iostream>
#define MAX 50
using namespace std;
int findarr(int[],int);
int main() {
    int test_case;
    cin>>test_case;
    while (test_case--)
    {
        int n, arr[MAX],flag, i, j, k;
        cin>>n;
        for (i=0;i<n;i++)
            cin>>arr[i];
        flag = findarr(arr,n);
        if (flag==0)
            cout<<"No sequence found"<<endl;
    }
}
int findarr(int arr[], int n) {
    int i,j,k;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            for (k=0;k<n;k++)
            {
                if (i!=j && j!=k)
                {
                    if (arr[i]+arr[j]==arr[k])
                    {
                        cout<<i+1<<", "<<j+1<<", "<<k+1<<endl;
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}
