#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;
long long mod = 1e9+7;
#define endl '\n'
#define ll long long
#define ull unsigned long long
const int N = 6e4;
int n;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int k; cin>>k;
    while(k--) {
        ll ans(0); cin>>n;
        string arr[n];
        map<char,int>start;
        map<char,int>end;
        map<string,int>sim;
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=0;i<n;i++) {
            ++start[arr[i][0]];
            ++end[arr[i][1]];
            if(start[arr[i][0]]>=2) ans+=start[arr[i][0]]-1;
            if(end[arr[i][1]]>=2) ans+=end[arr[i][1]]-1;
            ans-=2*sim[arr[i]];
            sim[arr[i]]++;
        }
        cout<<ans<<endl;
    }
}

