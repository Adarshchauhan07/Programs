#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int size, cnt;
    cin >> size >> cnt;
    int arr[cnt];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int counter = cnt;
    for (int i = 0; i < size; i++)
    {
        cout << arr[counter] << " ";
        if (counter == size-1)
        {
            counter = 0;
        }
        else
        {
            counter++;
        }
    }
}