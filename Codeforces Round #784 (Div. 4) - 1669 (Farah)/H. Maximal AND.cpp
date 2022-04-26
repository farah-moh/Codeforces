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
    int c; cin>>c;
    while(c--) {
        int n,k; cin>>n>>k;
        int arr[n]; for(int i=0;i<n;i++) cin>>arr[i];
        for(int bit=30;bit>=0;bit--) {
            int count(0);
            for(int i=0;i<n;i++) {
                if(!(arr[i]&(1<<bit))) count++;
            }
            if(count<=k) {
                for(int i=0;i<n;i++) {
                    arr[i]|=(1<<bit);
                }
                k-=count;
            }
            if(!k)  break;
        }
        int curr(arr[0]);
        for(int i=1;i<n;i++) curr&=arr[i];
        cout<<curr<<endl;
    }
}

