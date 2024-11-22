#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int MOD = 1e9 + 7;
#define pi 3.14159265359
const ll lmax = 1e18;
const int imax = 1e9;
#define all(a) a.begin(), a.end()

bool sortBySecond(const pair<int, int>& a, const pair<int, int>& b) {
    return a.second < b.second;  // Compare by the second element in ascending order
}

int solve()
{
    int n;
    cin >> n;

    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i].first >> a[i].second;
    }

    sort(all(a), sortBySecond);
    // first sort the array by the deadlines 
    ll ma = 0;
    ll tm = 0;
    for (int i = 0; i < n; i++){
        tm += 1ll*a[i].first;
        ma += 1ll*a[i].second - tm;
    }

    // sort the array by the durations
    ll ma2 = 0;
    sort(all(a));
    tm = 0;
    for (int i = 0; i < n; i++){
        tm += 1ll*a[i].first;
        ma2 += 1ll*a[i].second - tm;
    }

    // for both calculate the rewards
    // take the max of the both the rewards
    cout << max(ma, ma2) << endl;
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
