#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = n; i >= 1 ; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            if (j==i  j==1  i==n)
            {
                cout<<j<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        for (int j = 1; j <= n-i; j++)
        {
            cout<<"  ";
        }
        for (int j = n-i; j >=2; j--)
        {
            cout<<"  ";
        }
        for (int j = 1; j <= i; j++)
        {
            if (i==n && j==1)
            {
                continue;
            }
            else{
                if (j==i  j==1  i==n)
                {
                    cout<<j<<" ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
    for (int i = 1; i <= n ; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            if (j==i  j==1  i==n)
            {
                cout<<j<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        for (int j = 1; j <= n-i; j++)
        {
            cout<<"  ";
        }
        for (int j = n-i; j >=2; j--)
        {
            cout<<"  ";
        }
        for (int j = 1; j <= i; j++)
        {
            if (i==n && j==1)
            {
                continue;
            }
            else{
                if (j==i  j==1  i==n)
                {
                    cout<<j<<" ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }

}