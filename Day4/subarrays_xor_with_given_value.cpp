
#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    std::vector<int> arr(n, 0);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int m;
    cin >> m;

    vector<int> xorarray(n, 0);
    std::map<int, int> mp;

    xorarray[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        xorarray[i] = xorarray[i - 1] ^ arr[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        // cout << "here\n";
        int num = m ^ xorarray[i];
        ans = ans + mp[num];
        if (xorarray[i] == m)
            ans++;

        mp[xorarray[i]]++;
    }

    cout << ans << endl;



    return 0;
}