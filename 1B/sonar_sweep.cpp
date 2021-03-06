#include <bits/stdc++.h>
#define endl "\n"
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define vec vector
#define FOR(i, N) for(ll i = 0; i < N; i++)

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pii;


int main(int argc, char *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n = 2000;
    ll window_size = 3;
    vec<ll> measurements(n);
    FOR(i, n) {
        cin >> measurements[i];
    }

    ll prevSum = 9999999999;
    ll count = 0;
    FOR(i, n - window_size + 1) {
        ll windowSum = 0;
        FOR(j, window_size)
            windowSum += measurements[i + j];

        if (prevSum < windowSum)
            count++;

        prevSum = windowSum;
    }
    cout << count;
    return 0;
}
