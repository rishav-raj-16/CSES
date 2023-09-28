#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1;
        return 0;
    }
    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    vector<int> even, odd;
    while (n > 0)
    { 
        if (n % 2 == 0)
        {
            even.push_back(n);
        }
        else
        {
            odd.push_back(n);
        }
        n--;
    }
 
    for (auto it : odd)
    {
        cout << it << " ";
    }
    
    for (auto it : even)
    {
        cout << it << " ";
    }
 
 
    return 0;
}