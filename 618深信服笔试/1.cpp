// "222BCC111CB"
// 清除出现三次及以上的字符

#include<bits/stdc++.h>
using namespace std;
string Delete(string& s)
{
    stack<char> st;
    int n = s.size();
    for(int i=0;i<n;i++)
    {
        if(st.size() >= 2)
        {
            int element1 = st.top();
            st.pop();
            int element2 = st.top();
            st.push(element1);
            if(s[i] == element1 && s[i] == element2)
            {
                st.pop();
                st.pop();
            }
            else{
                st.push(s[i]);
            }
            }
            else
            {
                st.push(s[i]);
            }
    }
            string ans = "";
            while(!st.empty())
            {
                ans += st.top();
                st.pop();
            }
            reverse(ans.begin(),ans.end());
            return ans;
}
