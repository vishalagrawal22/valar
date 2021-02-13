#include <bits/stdc++.h>

#define endl "\n"
#define debug(statement) \
    if (debugging)       \
    cerr << statement << endl
#define debug_variable(var) \
    if (debugging)          \
    cerr << (#var) << ": " << var << endl

const bool debugging = 1;

using namespace std;

long longmain()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long N;
    cin >> N;
    long long ans = 0;
    long long total_gifts = 0;
    if (N >= 7)
    {
        ans += 7 * ((N - 7) / 7 + 1);
        total_gifts += (N - 7) / 7 + 1;
    }

    if (N >= 5)
    {
        ans += 5 * ((N - 5) / 5 + 1);
        total_gifts += ((N - 5) / 5 + 1);
    }
    if (N >= 35)
    {
        ans -= 5 * ((N - 35) / 35 + 1);
        total_gifts -= ((N - 35) / 35 + 1);
    }

    if (N >= 2)
    {
        ans += 2 * ((N - 2) / 2 + 1);
        total_gifts += ((N - 2) / 2 + 1);
    }

    if (N >= 10)
    {
        ans -= 2 * ((N - 10) / 10 + 1);
        total_gifts -= ((N - 10) / 10 + 1);
    }

    if (N >= 14)
    {
        ans -= 2 * ((N - 14) / 14 + 1);
        total_gifts -= ((N - 14) / 14 + 1);
    }

    if (N >= 70)
    {
        ans += 2 * ((N - 70) / 70 + 1);
        total_gifts += ((N - 70) / 70 + 1);
    }
    ans += (N - total_gifts);
    cout << ans << endl;
    return 0;
}