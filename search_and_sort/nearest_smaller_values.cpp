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
    ll n;
    cin >> n;

    vector<int> a(n+1);
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }

    priority_queue<pair<int, int>> pq;
    vector<int> r(n+1);
    for (int i = n; i > 0; i--){    // move from backward

        while ((!pq.empty()) && (pq.top().first > a[i])){   // add all elements which are greater than the current element
            r[pq.top().second] = i;     
            pq.pop();
        }

        pq.push({a[i], i});
    }

    while (!pq.empty()){    // the left elements don't have any smaller before them
        r[pq.top().second] = 0;
        pq.pop();
    }

    for (int i = 1; i < n+1; i++){
        cout << r[i] << " ";
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