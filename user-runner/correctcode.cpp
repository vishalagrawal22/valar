/*
++[---------->+<]>.-[------>+<]>-.++++++++.+++++.-[->+++++<]>-.-[--->++<]>--.+.[--->+<]>---.[->+++<]>++.++++++.-------.++++++.--[--->+<]>.-[->+++<]>-..+++++++++++++.[----->++<]>.------------.+[----->+<]>.--------.+++++++++++++.-------------.--[--->+<]>-.---[->++++<]>-.++++[->+++<]>.--[--->+<]>-.[->+++<]>++.-.+++.---.-[->+++<]>.-[--->++<]>+.++++.------.[--->+<]>---.+[----->+<]>.------------.+++++++.-------.--[--->+<]>---.+++[->+++<]>++..+++++++++.---------.-[->+++<]>.+[----->+<]>+.-------------.+++++++.+.----[->+++<]>-.
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long big;
#define bigvec vector<big>
#define pbb pair<big, big>
#define pii pair<int, int>
#define fe first
#define se second
#define maxheap priority_queue
#define uset unordered_set
#define umap unordered_map
#define fr(i, s, e) for(big i = s; i < e; i++)
#define revfr(i, s, e) for(big i = s - 1; i >= e; i--)
#define speed ios_base::sync_with_stdio(false); cin.tie(NULL)
#define debug(text) if(do_debug) {cout << text << endl;}
#define nl "\n"

const big mod = 1000000007;
const big infinity = 1000000000000000000;
bool do_debug = false;


void solve() {

	int n;
	cin >> n;

	vector<int> v(n);

	fr(i, 0, n) {

		cin >> v[i];

		if(i != 0) {

			v[i] += v[i - 1];
		}
	}

	int nq;
	cin >> nq;

	fr(i, 0, nq) {

		int l, r;
		cin >> l >> r;
		l--;
		r--;

		if(l == 0) {

			cout << v[r] << nl;

		} else {

			cout << v[r] - v[l - 1] << nl;
		}
	}
}


int main() {
	
	speed;

	int q = 1;
	// cin >> q;

	while(q-- > 0) {

		solve();
	}

	return 0;
}