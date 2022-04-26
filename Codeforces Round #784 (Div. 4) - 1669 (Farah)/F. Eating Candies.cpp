#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;
long long mod = 1e9+7;
#define endl '\n'
#define ll long long
#define ull unsigned long long
const int N = 6e4;


int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int k; cin>>k;
    while(k--) {
        int n; cin>>n;
        int arr[n];
        int pref_start[n],pref_end[n];
        for(int i=0;i<n;i++) {
            cin>>arr[i];
        }
        pref_start[0]=arr[0],pref_end[0]=arr[n-1];
        for(int i=1,j=n-2;i<n&&j>=0;i++,j--) {
            pref_start[i]=pref_start[i-1]+arr[i];
            pref_end[i]=pref_end[i-1]+arr[j];
        }
        int ans(0);
        for(int i=0;i<n;i++) {
            int curr = pref_start[i];
            int find = lower_bound(pref_end,pref_end+n-i-1,curr)-pref_end;
            if((pref_end[find]!=curr) || (find==n-i-1)) continue;
            else ans = max(ans,i+1+find+1);
        }
        cout<<ans<<endl;
    }
}

