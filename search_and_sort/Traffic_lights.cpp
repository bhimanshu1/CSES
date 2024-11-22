#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int MOD = 1e9 + 7;
#define pi 3.14159265359
const ll lmax = 1e18;
const int imax = 1e9;
#define all(a) a.begin(), a.end()

int solve()
{
    int x, n;
    cin >> x >> n;

    multiset<int> ms;
    ms.insert(0);
    ms.insert(x);

    ll pos;
    multiset<int> ms2;
    ms2.insert(x);
    for (int i = 0; i < n; i++){
        cin >> pos;

        auto it = ms.upper_bound(pos);   // closest bigger value
        auto sm = prev(it);   // closest smaller value;

        int lft = *sm;
        int rgt  = *it;
        ms2.erase(ms2.find(rgt - lft));  // now delete the max diff

        ms2.insert((pos - lft));  // add the left difference
        ms2.insert((rgt - pos));  // add the right difference
        ms.insert(pos);

        cout << *(prev(ms2.end())) << " ";
    }

    return 0;
}

int main()
{
    // freopen("input.txt", "r", stdin);    // to read the input from the input.txt
    // freopen("output.txt", "w", stdout);  // to read the output to the output.txt
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // int t;
    // cin >> t;
    // while (t--)
    // {

    solve();
    // }

    return 0;
}
