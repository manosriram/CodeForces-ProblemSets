#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <stack>
#include <queue>
#include "unordered_map"
#define SPEED cin.sync_with_stdio(false);cin.tie(NULL);
#define trace(x) cerr << #x << " " << x << '\n';
#define ld long long
#define disp(n) for (auto t : n)
#define forn(t, n) for (ld t = 0; t < n; t++)
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define c_sort(a) sort(a, a + sizeof(a) / sizeof(a[0]))
#define NL cout << '\n';
#define INF (int)1e9
using namespace std;
typedef vector<int> vi;
typedef unordered_map<int, int> ump;

int main() {
    SPEED;

    int s, n, x, y;
    bool die;
    cin >> s >> n;
    // unordered_map<int, int> u;
    vector<pair<int, int> > v;

    for (int t=0;t<n;t++) {
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
   
    sort(v.begin(), v.end()); 
    
    for (auto t : v) {
        die = false;
        if (s > t.first)
            s += t.second;

        else {
            die = true;
            cout << "NO";
            break;
        }
    }
    if (!die)
        cout << "YES";
}
