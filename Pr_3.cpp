#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s ;
    cin>>s;
    int ans = 0, length = 1, i = 1;
    int n = s.size();
    if (n == 0)
    {
        cout << 0;
        return 0;
    }
    if (n == 1)
    {
        cout << 1;
        return 0;
    }
    while (i < n)
    {
        if (s[i] != s[i - 1])
        {
            ans = max(ans, length);
            length = 1;
            i++;
        }
        else
        {
            while (s[i] == s[i - 1])
            {
                i++;
                length++;
                ans = max(ans, length);
            }
        }
    }
    cout << ans;
    return 0;
}
