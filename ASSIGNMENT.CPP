#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    vector<int> arr = {100, 34, 6, 40, 150, 80};

    int n = arr.size();
    vector<int> s(n);
    stack<int> st;

    for (int i = 0; i < n; i++)
    {

        while (!st.empty() && arr[st.top()] <= arr[i])
        {
            st.pop();
        }

        if (st.empty())
        {
            s[i] = (i + 1);
        }
        else
        {
            s[i] = (i - st.top());
        }

        st.push(i);
    }
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " ";
    }
}
