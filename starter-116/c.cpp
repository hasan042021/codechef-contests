#include <bits/stdc++.h>
using namespace std;

void sort_suffix(vector<int> &arr, int len)
{
    int start = arr.size() - len;
    sort(arr.begin() + start, arr.end());
}

void print_array(const vector<int> &arr)
{
    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << "\n";
}

int main()
{
    int T;
    cin >> T;

    for (int t = 0; t < T; t++)
    {
        int N, M;
        cin >> N >> M;

        vector<int> A(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        int mx = INT_MIN;
        vector<int> B(M);
        for (int i = 0; i < M; i++)
        {
            cin >> B[i];
            mx = max(mx, B[i]);
        }

        sort_suffix(A, mx);

        print_array(A);
    }

    return 0;
}