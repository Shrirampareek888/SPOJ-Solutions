#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define intmax INT_MAX
#define deb(x) cout << #x << "=" << x << endl
const ll llmax = 19223372036859;
int res = -1;
void bfs(vector<int> g[], int v, int cnst, int cnt);
int binarySearch(vector<int> arr, int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;
		if (arr[mid] == x)
			return mid;
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);
		return binarySearch(arr, mid + 1, r, x);
	}
}

bool is_prime(int no)
{

	for (int i = 3; i * i <= no; i++)
		if (no % i == 0)
			return false;
	return true;

}
bool chck(int i, int j)
{
	int f = 0;
	while (i > 0)
	{
		if (i % 10 != j % 10)
			f++;
		i /= 10; j /= 10;
	}
	if (f == 1)
		return true;
	return false;
}

int main()
{
	int i, j;
	vector<int> primes;
	for (i = 1000; i <= 10000; i++)
		if (i % 2 != 0 && is_prime(i))
			primes.push_back(i);
	vector<int> g[1062];
	for (i = 0; i < primes.size() - 1; i++)
	{
		for (j = i + 1; j < primes.size(); j++)
		{
			if (chck(primes[i], primes[j]))
			{
				g[i + 1].push_back(j + 1);
				g[j + 1].push_back(i + 1);
			}
		}
	}
	int t = 1;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		int ai, bi;
		ai = binarySearch(primes, 0, primes.size() - 1, a);
		bi = binarySearch(primes, 0, primes.size() - 1, b);
		ai++; bi++;
		if (ai == bi)
			cout << "0" << endl;
		else {
			int cnt = 0; res = -1;
			bfs(g, ai, bi, 0);
		if(res==-1)
            cout<<"Impossible"<<endl;
        else
            cout<<res<<endl;
		}
	}
}

void bfs(vector<int> g[], int v, int cnst, int cnt)
{
	bool vis[1062];
	memset(vis, false, sizeof(vis));
	queue<int> q;
	q.push(v);
	vis[v] = true;
	while (!q.empty())
	{
	    int cc=q.size();
	    while(cc--)
        {
		int temp = q.front();
		if(temp==cnst)
            res=cnt;
		for (int i = 0; i < g[temp].size(); i++)
		{
			if (vis[g[temp][i]] == false)
			{
				vis[g[temp][i]] = true;
				q.push(g[temp][i]);
			}
		}
		q.pop();
        }
        cnt++;
	}
}
