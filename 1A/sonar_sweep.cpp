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

    ll sonar_scans = 2000;
    ll prev = -1;
    ll increases = 0;
    FOR(i, sonar_scans) {
        ll scan;
        cin >> scan;
        if (prev != -1) {
            if (prev < scan) {
                increases++;
            }
        }
        prev = scan;
    }
    cout << increases << "\n";

    return 0;
}
