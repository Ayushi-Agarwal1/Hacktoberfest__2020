#include <bits/stdc++.h>
#define file(s) freopen(s".in","r",stdin); freopen(s".out","w",stdout);                                          
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define forn(i, a, b) for(int i = (a); i <= (b); ++i)
#define forev(i, b, a) for(int i = (b); i >= (a); --i)
#define VAR(v, i) __typeof(i) v=(i)
#define forit(i, c) for(VAR(i, (c).begin()); i != (c).end(); ++i)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi; 
typedef vector<ll> Vll;
typedef vector<pair<int, int> > vpii;
typedef vector<pair<ll, ll> > vpll;
const int maxn = (int)2e5 + 100;
const int mod = (int)1e9 + 7;
const int P = (int)227;
#define inf mod
int n, p, prv;
bool check(int x){
	if(x == 1) return 0;
	forn(i, 2, x - 1)
		if(x % i == 0) return 0;
	return 1;
}
void solve(){
	cin >> n;
	if(n == 5){
		cout << "1 2 4 8 16\n";
		return;
	}
	p = n;
	while(!check(p)) p++;
	forn(i, 1, n){
		int cur = 2 * i * p + i * i % p;
		cout << cur - prv << " ";
		swap(prv, cur);
	}
}
int main () {
    int t = 1;
    //scanf("%d", &t);
    while(t--){
        solve();
    }
}
