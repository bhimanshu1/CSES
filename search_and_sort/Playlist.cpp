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
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    map<int, int> fq;
    int ma = 0;
    int j = 0;
    for (int i = 0; i < n; i++){
        fq[a[i]]++;

        if (fq[a[i]] > 1){
            while (fq[a[i]] > 1){
                fq[a[j]]--;
                if (fq[a[j]] == 0) fq.erase(a[j]);
                j++;
            }
        }
        ma = max(ma, (i-j+1));
    }

    cout << ma << endl;
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
