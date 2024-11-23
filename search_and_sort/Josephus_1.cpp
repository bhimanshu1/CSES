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
 
    deque<int> deq(n);
    for (int i = 0; i < n; i++){
        deq[i] = (i+1);
    }
    // 1 2 3 4 5 6 
    while (deq.size() > 1){

        deque<int> q;
        for (int i = 0; i < deq.size(); i++){
            if (i & 1){
                cout << deq[i] << " ";
            }else{
                q.push_back(deq[i]);
            }
        }

        if (deq.size() & 1){
            int tmp = q[q.size() - 1];
            q.pop_back();
            q.push_front(tmp);
        }
        
        deq.clear();
        deq = q;
        q.clear();
    }
    cout << deq[0];
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