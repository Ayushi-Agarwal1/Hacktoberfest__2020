#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mii map<char,int>
#define T ll t; cin>>t; while(t--)
#define F first
#define S second
#define all(z) z.begin(),z.end()
using namespace std;
using ll = long long;
int main() {
    string s,s1;
    T{
        cin>>s;
        cin>>s1;
        unordered_map<char,int> m;
        for(char i:s1){
          m[i]++;
    }
    for(auto i:s){
        
        while( m[i]>0) {
          cout<<i;
          m[i]--;
        }
    }
    cout<<'\n';
}
}
