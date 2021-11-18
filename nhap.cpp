#include <bits/stdc++.h>
using namespace std;

int xuly(string s)
{
    stack<char> st;
    int dem = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
            st.push(s[i]);
        else
        {
            if (!st.empty())
            {
                if (st.top() == '(')
                {
                    dem += 2;
                    st.pop();
                }
            }
        }
    }
    cout << dem << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        xuly(s);
    }
}