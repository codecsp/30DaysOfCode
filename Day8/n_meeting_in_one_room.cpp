/*
N meetings in one room

There is one meeting room in a firm.
There are N meetings in the form of (S[i], F[i]) where S[i] is start time of meeting i and F[i]
is finish time of meeting i.

What is the maximum number of meetings that can be accommodated in the meeting room ?


submiited at gfg : https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room/0
reference video : https://www.youtube.com/watch?v=poWB2UCuozA


code is mine logic using maps and vector pair
*/

#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>

typedef long long int ll;

using namespace std;


int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll>arr(n, 0);
        vector<ll>brr(n, 0);
        for (ll i = 0; i < n; i++)
            cin >> arr[i];
        for (ll i = 0; i < n; i++)
            cin >> brr[i];

        vector<pair<ll, ll>>vt;
        std::map<pair<ll, ll>, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            mp[make_pair(arr[i], brr[i])] = i + 1;

            vt.push_back(make_pair(brr[i], arr[i]));
        }
        sort(vt.begin(), vt.end());

        vector<ll> ans;
        ans.push_back(mp[make_pair(vt[0].second, vt[0].first)]);
        ll last = 0;
        for (ll i = 1; i < n; i++)
        {
            if (vt[i].second >= vt[last].first)
            {
                ans.push_back(mp[make_pair(vt[i].second, vt[i].first)]);
                last = i;
            }
        }

        for (auto tmp : ans)
            cout << tmp << " ";
        cout << endl;
    }




    return 0;
}