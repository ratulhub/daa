#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of items: ";
    cin >> n;

    int weight[n], value[n];

    cout << "Enter weights:\n";

    for(int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }

    cout << "Enter values:\n";

    for(int i = 0; i < n; i++)
    {
        cin >> value[i];
    }

    int capacity;

    cout << "Enter bag capacity: ";
    cin >> capacity;

    int dp[n + 1][capacity + 1];

    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= capacity; j++)
        {
            if(i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            else if(weight[i - 1] <= j)
            {
                dp[i][j] = max(
                    value[i - 1] + dp[i - 1][j - weight[i - 1]],
                    dp[i - 1][j]
                );
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    cout << "Maximum Value = " << dp[n][capacity];

    return 0;
}
