//  problem link : https://codeforces.com/problemset/problem/466/C

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

#define SCD(t) scanf("%d", &t)
#define SCLD(t) scanf("%ld", &t)
#define SCLLD(t) scanf("%lld", &t)
#define SCC(t) scanf("%c", &t)
#define SCS(t) scanf("%s", t)
#define SCF(t) scanf("%f", &t)
#define SCLF(t) scanf("%lf", &t)
#define MEM(a, b) memset(a, (b), sizeof(a))
#define FOR(i, j, k, in) for (int i = j; i < k; i += in)
#define RFOR(i, j, k, in) for (int i = j; i >= k; i -= in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define IN(A, B, C) assert(B <= A && A <= C)
#define MP make_pair
#define PB push_back
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define read(type) readInt<type>()
const double pi = acos(-1.0);
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int, int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;

//  o(N2)  using prefix sum
// void solve(){

//     int n;
//     SCD(n);
//     VI pre(n,0);
//     VI v;
//     int in;
//     for(int i = 0 ;i<n;i++)
//     {
//         SCD(in);
//         v.push_back(in);
//     }
//     pre[0] = v[0];
//     for(int i=1;i<n;i++)
//     {
//         pre[i] = pre[i-1] + v[i];
//     }
//     int i = 0;
//     int j = i+1;
//     int k =n-1;
//     // for(auto i : pre) cout << i << " ";
//     int count=0;
//     while(i<k)
//     {
//         while(j<k)
//     {
//         if ( (pre[i] == pre[j]-pre[i]) and (pre[i] == pre[k]- pre[j]))
//             count++;
//         j++;
//     }
//     i++;
//     j=i+1;
// }

// cout << count << endl;

// }

const int N = 1e6 + 5;
int a[N], b[N], freq[N];

void solve()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {

        sum += a[i];
    }

    if (sum % 3 != 0)
    {

        cout << 0 << endl;
    }

    else
    {

        int countsumby3 = 0;
        int count2sumby3 = 0;

        int s1 = 0;

        for (int i = 0; i < n - 1; i++)
        {

            s1 += a[i];

            if (s1 == 2 * sum / 3)
            {

                count2sumby3 += countsumby3;
            }

            if (s1 == sum / 3)
            {

                countsumby3++;
            }
        }

        cout << count2sumby3 << endl;
    }
}

int main()
{
    solve();
}