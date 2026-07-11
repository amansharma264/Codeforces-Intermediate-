#include <bits/stdc++.h>
#define ll long long
using namespace std;

void addMatrix(vector<vector<ll>> &A, vector<vector<ll>> &B,
               int i, int j, int r, int c)
{
    if (i == r)
    {
        return;
    }

    if (j == c)
    {
        cout << endl;
        addMatrix(A, B, i + 1, 0, r, c);
        return;
    }

    cout << A[i][j] + B[i][j] << " ";

    addMatrix(A, B, i, j + 1, r, c);
}

void solve()
{
    ll r, c;
    cin >> r >> c;

    vector<vector<ll>> A(r, vector<ll>(c));
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> A[i][j];
        }
    }

    vector<vector<ll>> B(r, vector<ll>(c));
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> B[i][j];
        }
    }

    addMatrix(A, B, 0, 0, r, c);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}