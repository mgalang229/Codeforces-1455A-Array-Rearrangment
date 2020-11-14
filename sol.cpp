#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int n, x;
		cin >> n >> x;
		int a[n], b[n];
		for(int i=0; i<n; ++i)
			cin >> a[i];
		for(int i=0; i<n; ++i)
			cin >> b[i];
		sort(a, a+n);
		sort(b, b+n);
		bool ok=1;
		int id=0;
		for(int i=n-1; i>=0; --i)
			if(a[i]+b[id++]>x)
				ok=0;
		cout << (ok?"YES":"NO") << "\n";
	}
}
