#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll ans=0;
    ll n;
    cin>>n;
    ll arr[n+1];
    int i=0;
    while(i<n) {
        cin>>arr[i];
        i++;
    }
 
    for(int i = 1; i < n; i++) {
        if(arr[i] < arr[i-1]) {
            int temp = arr[i-1] - arr[i];
            arr[i] += temp;
            ans += temp;
        }
    }
 
    cout<<ans;
    return 0;
}