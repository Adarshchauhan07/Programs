#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a, b;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int x, y;
        cin >> x >> y;
        a.push_back(x);
        b.push_back(y);
    }
    vector<int> ct, tat, wt;
    ct[0] = b[0];
    for (int i = 1; i < size; i++)
    {
        ct.push_back([i - 1] + b[i]);
    }
    for (int i = 0; i < size; i++)
    {
        tat[i] = ct[i] - a[i];
        wt.push_back(tat[i] - ct[i]);
    }
    int avgct(0);
    int avgwt(0);
    for (int i = 0; i < size; i++)
    {
        avgct += tat[i];
        avgwt += wt[i];
    }
    cout << avgtat << " " << avgct;
}