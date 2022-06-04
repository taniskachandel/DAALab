#include<iostream>
using namespace std;
int main()
{
    int test_case;
    cin>>test_case;
    while (test_case--)
    {
        int key, n, counter=0, flag=0;
        cin>>n;
        int arr[n];
        for (int i=0;i<n;i++)
            cin>>arr[i];
        cin>>key;
        int mid, start=0, end=n-1;
        while (start<=end)
        {
            mid =(start+end)/2;
            if (arr[mid]>key)
            {
                end=mid-1;
            }
            else if (arr[mid]<key)
            {
                start=mid+1;
            }
            else
            {
                flag=1;
                counter=1;
                int amid=mid+1;
                if (amid!=n)
                {
                    while (amid<=end)
                    {
                        if (arr[amid]!=key)
                        {
                            break;
                        }
                        counter++;
                        amid++;
                    }
                }
                int bmid=mid-1;
                while (bmid>=start)
                {
                    if (arr[bmid]!=key)
                    {
                        break;
                    }
                    counter++;
                    bmid--;
                }
                break;
            }

        }
        if (flag==0)
            cout<<"Key not present"<<endl;
        else
            cout<<key<<" - "<<counter<<endl;
    }

}
