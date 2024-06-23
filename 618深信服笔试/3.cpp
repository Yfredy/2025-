#include<bits/stdc++.h>
using namespace std;
void dfs(vector<vector<int>>& board)
{
    int m = board.size();
    int n = board[0].size();
    int dx[] = {-1,0,1,1,1,0,-1,-1};
    int dy[] = {-1,-1,-1,0,1,1,1,0};
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            int count = 0;
            for(int k=0;k<8;k++)
            {
                int x = i + dx[k];
                int y = j + dy[k];
                if(x >= 0 && x < m && y>=0 && y<n &&(board[x][y]==1||board[x][y]==2))
                    count++;
            }
            if(board[i][j] == 0 && count == 3)
            {
                board[i][j] = 3;
            }
            else if(board[i][j] ==1 && (count<2||count>3))
            {
                board[i][j] = 2;
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                board[i][j] %= 2;
            }
        }
    }
}
int main()
{
    int r,c,iter,a;
    cin >> r;
    cin >> c;
    cin >> iter;
    vector<vector<int>> input(r, vector<int>(c,0));
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin >> a;
            input[i][j] = a;
        }
    }
    // while(iter)
    // {
    //     dfs(input);
    //     iter--;
    // }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout << input[i][j];
        }
        cout << endl;
    }
    return 0;
}