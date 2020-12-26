#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define db double
#define all(x) x.begin(),x.end()
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define intmax INT_MAX
#define deb(x) cout << #x << "=" << x << endl
const ll llmax = 19223372036859;
const db PI = 3.14159265358979323846264338327950288419716939937510;
struct element {
	ll rightmaxs, leftmaxs, maxs, tots;
};
int sizet = 50000;
vector<ll> a;
struct element seg[200000];
void build(ll si, ll ss, ll se)
{
	if (ss == se)
	{
		seg[si].maxs = a[ss]; seg[si].rightmaxs = a[ss]; seg[si].leftmaxs = a[ss]; seg[si].tots = a[ss];
		return;
	}
	ll mid = (ss + se) / 2;
	build(2 * si + 1, ss, mid);
	build(2 * si + 2, mid + 1, se);
	seg[si].leftmaxs = max(seg[2 * si + 1].leftmaxs, seg[2 * si + 1].tots + seg[2 * si + 2].leftmaxs);
	seg[si].rightmaxs = max(seg[2 * si + 2].rightmaxs, seg[2 * si + 1].rightmaxs + seg[2 * si + 2].tots);
	seg[si].tots = seg[2 * si + 1].tots + seg[2 * si + 2].tots;
	seg[si].maxs = max(seg[2 * si + 1].maxs, max(seg[2 * si + 2].maxs, seg[2 * si + 1].rightmaxs + seg[2 * si + 2].leftmaxs));
}
struct element query(ll si, ll ss, ll se, ll qs, ll qe)
{
	if (qs > se || qe < ss)
	{
		struct element temp;
		temp.maxs = -llmax; temp.rightmaxs = -llmax; temp.leftmaxs = -llmax; temp.tots = -llmax;
		return temp;
	}
	if (ss >= qs && se <= qe)
		return seg[si];
	ll mid = (ss + se) / 2;
	struct element ta = query(2 * si + 1, ss, mid, qs, qe);
	struct element tb = query(2 * si + 2, mid + 1, se, qs, qe);
	struct element temp;
	temp.leftmaxs = max(ta.leftmaxs, ta.tots + tb.leftmaxs);
	temp.rightmaxs = max(tb.rightmaxs, ta.rightmaxs + tb.tots);
	temp.tots = ta.tots + tb.tots;
	temp.maxs = max(ta.maxs, max(tb.maxs, ta.rightmaxs + tb.leftmaxs));
	return temp;

}
void solve()
{
	ll n, q, i;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		ll x; cin >> x; a.push_back(x);
	}
	build(0, 0, n - 1);
	cin >> q;
	while (q--)
	{
		ll qs, qe;
		cin >> qs >> qe;
		qs--; qe--;
		struct element temp = query(0, 0, n - 1, qs, qe);
		cout << temp.maxs << endl;
	}
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
}