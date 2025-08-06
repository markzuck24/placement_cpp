// 1. Given a stack of int, delete the middle element from it.

// 2. Given an array of int, rearragne the elements in alternate +/- by maintaing relative order among all + and among all -
// a = [10, 20, 30, -40, -10, 40]
// op: [10, -40, 20, -10, 30, 40]

// 3. Given an array of size n, containing elements in the range from 1 to n, one of the element in this range is missing and another number in this range is present twice.
// Find both: the missing and the duplicate element.

// 1- Brute force - TC: O(nlogn) SC: O(1)
//2- Optimised - Freq Array -> TC: (n), SC: O(n)
//3 - Optimised - TC: O(n) , SC: O(1)



#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[] = {1,2,5,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int freq[n+1] = {0};
   
    
    for(int i =0;i<n;i++)
    {
        freq[arr[i]]++;
    }
    
    int missing =-1,duplicate = -1;
    
    for(int i =1;i<=n;i++)
    {
        if(freq[i] == 0)
        {
            missing = i;
        }
        else if(freq[i] >1)
        {
            duplicate = i;
        }
    }
    
    cout<<missing<<" "<<duplicate<<endl;
 }
 
 
 
/*

int main()
{
    int arr[] = {1,2,5,4,5};
    //missing = 3, duplicate = 5
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    sort(arr,arr+n);//1 2 4 5 5
    
    //missing element
    for(int i=0;i<n;i++)
    {
        
        if(arr[i] != i+1)
        {
            cout<<(i+1); 
            break;
        }
    }
    
    cout<<endl;
    
    //duplicate
    for(int i=1;i<n;i++)
    {
        if(arr[i] == arr[i-1])
        {
            cout<<arr[i];
            break;
        }
    }
  
 }
 
 

int main()
{
    int a[] = {10, 20, 30, -40, -10, 40};
    int s = sizeof(a)/sizeof(a[0]);
    int res[s];

    vector<int> pos, neg;

    for(int elem: a)
    {
        if(elem >= 0)
        {
            pos.push_back(elem);
        }
        else
        {
            neg.push_back(elem);
        }
    }

    int p=0,n=0, i=0;
    int pos_n = pos.size();
    int neg_n = neg.size();

    while(p < pos_n && n < neg_n)
    {
        if(i%2 == 0)
        {
            res[i] = pos[p];
            i++;
            p++;
        }
        else
        {
            res[i] = neg[n];
            i++;
            n++;
        }
    }

    while(n < neg_n)
    {
        res[i] = neg[n];
        i++;
        n++;
    }

    while(p < pos_n)
    {
        res[i] = pos[p];
        i++;
        p++;
    }

    for(int elem: a)
    {
        cout << elem << " ";
    }

    cout << endl;

    for(int elem: res)
    {
        cout << elem << " ";
    }


}



int main()
{
    stack<int> st;
    for(int i=1;i<6;i++)
    {
        st.push(i*10);
    }
    
    int n = st.size();
    stack<int> temp;
    int c = 0;

    while(c < n/2)
    {
        temp.push(st.top());
        st.pop();
        c++;
    }

    st.pop();

    while( !temp.empty())
    {
        st.push(temp.top());
        temp.pop();
    }

    while(! st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
}
*/
