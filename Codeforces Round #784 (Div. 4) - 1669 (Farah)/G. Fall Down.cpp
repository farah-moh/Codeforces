#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;
long long mod = 1e9+7;
#define endl '\n'
#define ll long long
#define ull unsigned long long
const int N = 6e4;
int n,m;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int k; cin>>k;
    while(k--) {
        cin>>n>>m;
        char arr[n][m];
        for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>arr[i][j];
        for(int i=n-2;i>=0;i--) {
            for(int j=0;j<m;j++) {

                if(arr[i][j]=='*') {
                    int last = i;
                    for(int row=i+1;row<n;row++) {
                        if(arr[row][j]=='.') last=row;
                        else break;
                    }
                    arr[i][j]='.';
                    arr[last][j]='*';
                }

            }
        }
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) cout<<arr[i][j];
            cout<<endl;
        }
        cout<<endl;
    }
}

