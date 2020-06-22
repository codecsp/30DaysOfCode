// Merge two sorted arrays with O(1) extra space
// We are given two sorted array.
// We need to merge these two arrays such that the
// initial numbers (after complete sorting) are in the
// first array and the remaining numbers are in the second array.
// Extra space allowed in O(1).

//works fine

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void merge(vector<ll>&arr1, vector<ll>&arr2, ll m, ll n)
{

    for (ll i = n - 1; i >= 0; i--)
    {
        ll last = arr1[m - 1];
        ll j;
        for ( j = m - 2; j >= 0; j--)
        {
            if (arr1[j] > arr2[i])
            {
                arr1[j + 1] = arr1[j];
            }
            else
                break;
        }
        if (j != m - 2 || last > arr2[i])
        {
            arr1[j + 1] = arr2[i];
            arr2[i] = last;
        }
    }

}

int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ll n, m;
    cin >> n >> m;
    std::vector<ll> arr1(n, 0);
    std::vector<ll> arr2(m, 0);

    for (ll i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    merge(arr1, arr2, n, m);


    for (auto num : arr1)
        cout << num << " ";
    cout << endl;
    for (auto num : arr2)
        cout << num << " ";
    cout << endl;


}

