# include <iostream>
# include <vector>
using namespace std;
int main()
{
    vector<int> A = {1,3,5,7,0,0,0,0};
    vector<int> B = {2,4,6,8};
    // 合并两个有序数组
    int n = A.size();
    int m = B.size();
    int i = n - m - 1;
    int j = m - 1;
    int k = n - 1;
    int cur;
    while(i >= 0 || j >= 0)
    {
        if(i == -1)
        {
            cur = B[j];
            j--;
        }
        else if(j == -1)
        {
            cur = A[i];
            i--;
        }
        else if(A[i] > B[j])
        {
            cur = A[i];
            i--;
        }
        else
        {
            cur = B[j];
            j--;
        }
        A[k] = cur;
        k--;
    }
    // 输出结果
    for(int z = 0; z < A.size(); z++)
    {
        cout << A[z] << " ";
    }cout << endl;
    return 0;
}