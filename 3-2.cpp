
// 1. Reverse a given string using stack.

// 2. Check if the given string denotes balanced paranthesis or not.

// (()) 
// ())
// ()()
// ())(

// 3. String compression.
// Given a sorted string, compress it in the below form:
// "aabbbccd" --> "a2b3c2d1"

// 4. Given 2 lowercase strings, check if they are anagrams or not.

// listen, silent --> yes

#include<bits/stdc++.h>
using namespace std;


int main()
{
    string a = "listen";
    string b = "siaent";
    
    int freq1[26] = {0};
    int freq2[26] = {0};
    
    string ans = "Anagrams";
    
    for(char c: a)
    {
        freq1[c - 'a']++;
    }
    
    for(char c: b)
    {
        freq2[c - 'a']++;
    }
    
    for(int elem: freq1)
    {
        cout << elem << " ";
    }
    
    cout << endl;
    
    for(int elem: freq2)
    {
        cout << elem << " ";
    }
    
    cout << endl;
    
    for(int i=0; i<26; i++)
    {
        if(freq1[i] != freq2[i])
        {
            ans = "Not Anagrams";
            break;
        }
    }
    
    cout << ans << endl;
    
}


/*



int main()
{
    string a = "listen";
    string b = "silent";
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    cout << a << endl;
    cout << b << endl;
    
    if(a == b)
    {
        cout << "Anagrams!" << endl;
    }
    else
    {
        cout << "Not Anagrams!" << endl;
    }
    
}

int main()
{
    string s = "aabbbccdd";
    
    int freq[26] = {0};
    
    for(char c: s)
    {
        freq[c - 'a']++;
    }
    
    string res = "";
    
    for(int i = 0; i<26 ; i++)
    {
        if(freq[i] != 0)
        {
            res += ('a'+i);
            res += to_string(freq[i]);
        }
    }
    
    cout << res << endl;
}

int main()
{
    string s = "aabbbccdd";
    
    int n = s.length();
    int count = 1;
    string res = "";
    
    for(int i=1; i<n; i++)
    {
        if(s[i-1] == s[i])
        {
            count++;
        }
        else
        {
           res += s[i-1];
           res += to_string(count);
           count = 1;
        }
    }
    
    res += s[n-1];
    res += to_string(count);
    
    cout << res << endl;
    
}



int main()
{
    string s = "()(";
    stack<char> st;
    bool isBalanced = true;
    
    for(char c: s)
    {
        if(c == '(')
        {
            st.push(c);
        }
        else if(c==')')
        {
            if(st.empty())
            {
                isBalanced=false;
                break;
            }
            else
            {
                st.pop();
            }
            
            
        }
    }
    
    if(st.empty() && isBalanced)
    {
        cout << "Balanced";
    }
    else
    {
        cout << "Not Balanced";
    }
}




int main()
{
    string s = "Aditya";
    stack<char> st;
    
    for(char c: s)
    {
        st.push(c);
    }
    
    string rev = "";
    
    while(!st.empty())
    {
        rev += st.top();
        st.pop();
    }
    
    cout << s << endl;
    cout << rev << endl;
}



int main()
{
    string s = "Aditya";
    stack<char> st;
    
    for(char c: s)
    {
        st.push(c);
    }
    
    string rev = "";
    int n = st.size();
    
    for(int i = 0; i< n; i++)
    {
        rev += st.top();
        st.pop();
    }
    
    cout << s << endl;
    cout << rev << endl;
}


int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    cout << "Top element: " << s.top() << endl;
    s.pop();
    cout << "Top element after pop: " << s.top() << endl;
    return 0;
}
*/
