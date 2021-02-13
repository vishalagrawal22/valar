#include <bits/stdc++.h>

#define endl "\n"
#define debug(statement) if(debugging) cerr << statement << endl
#define debug_variable(var) if(debugging) cerr << (#var) << ": " << var << endl

const bool debugging = 1;

using namespace std;

long longmain() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long longN, K;
    cin >> N >> K;
    vector< pair<int, int> > cars;
    cars.reserve(N);
    for (long longi = 0; i < N; i++)
    {
        long longprice, kms;
        cin >> price >> kms;
        if (price < K)
        {
            cars.push_back({kms, price});
        }
    }
    sort(cars.begin(), cars.end());
    if (cars.size() == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << cars[0].first << endl;
    }
    
    return 0;
}