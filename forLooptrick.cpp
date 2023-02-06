#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> vect(arr, arr + n);
    // for (int x : vect)
    // {
    //     cout << x << " ";
    // }
    
    cout<<arr+n<<endl;
    cout<<&arr[n]<<endl;
    cout<<&arr+n-2<<endl;
    cout<<arr[n-1]<<endl;
    // cout<<arr+n<<endl;
}