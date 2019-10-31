#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <stack>
#include <queue>
#include "unordered_map"
#define trace(x) cerr << #x << " " << x << '\n';
#define ld long long
#define disp(n) for (auto t : n)
#define forn(t, n) for (ld t = 0; t < n; t++)
#define pb push_back
#define mod 1000000007
#define c_sort(a) sort(a, a + sizeof(a) / sizeof(a[0]))
#define NL cout << '\n';
#define INF (int)1e9
#define sws cin.sync_with_stdio(false);
#define tieNULL cin.tie(NULL);
using namespace std;
typedef vector<int> VI;

int main() {

    sws;
    tieNULL;

    // freopen("In.txt", "r", stdin);

    int n, m, temp;
    cin >> n >> m;
    int a[m];

    for (int t=0;t<m;t++)
        cin >> a[t];

    int pt = 1, sum = 0;
    int next;
    
    for (int t=0;t<m;t++) {
        next = a[t];
        
        if (pt >= next)
            sum += abs(pt - n) + abs(pt - next);
        else
            sum += next - pt + 1;
    
        pt = next;
    }
    cout << sum;

}