#include<bits/stdc++.h>
using namespace std;
int count(string& str1, string& str2)
{
    int n = str1.size();
    int m = str2.size();
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
    dp[0][0] = 0;
    for(int i=1;i<dp.size();i++)
    {
        dp[i][0] = i;
    }
    for(int i=1;i<dp[0].size();i++)
    {
        dp[0][i] = i;
    }
    for(int i=1;i<dp.size();i++)
    {
        for(int j=1;j<dp[0].size();j++)
        {
            int zuo = dp[i][j-1]+1;
            int shang = dp[i-1][j]+1;
            int equal = 0;
            if(str1[i-1] !=  str2[j-1])
            {
                equal = 1;
            }
            int zuoshang = dp[i-1][j-1]+equal;
            dp[i][j] = min(min(zuo,shang),zuoshang);
        }
    }
    return dp[n][m];
}
int main()
{
    int a;
    cin >> a;
    string str1, str2;
    for(int i=0;i<a;i++)
    {
        cin >> str1;
        cin >> str2;
        cout << count(str1, str2) << endl;
    }
    return 0;
}