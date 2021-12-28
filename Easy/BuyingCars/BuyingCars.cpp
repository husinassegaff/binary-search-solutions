int solve(vector<int> &prices, int k)
{
    sort(prices.begin(), prices.end());
    int ans = 0, i = 0;

    while (k >= prices[i] && i < prices.size())
    {
        ans++;
        k -= prices[i];
        ++i;
    }

    return ans;
}