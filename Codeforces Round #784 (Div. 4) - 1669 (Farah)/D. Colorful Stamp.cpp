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
        cin>>n; char arr[n];
        for(int i=0;i<n;i++) {
            cin>>arr[i];
        }
        bool ok (1);
        int countr(0),countb(0);
        for(int i=0;i<n;i++) {
            if(arr[i]=='R') countr++;
            else if(arr[i]=='B') countb++;
            else if(arr[i]=='W') {
                if((!countb&&countr) || (!countr&&countb)) {
                    ok=0;
                    break;
                }
                countr=0;
                countb=0;
            }
        }
        if((!countb&&countr) || (!countr&&countb)) ok=0;
        if(ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

