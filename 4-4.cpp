// 1. Given a sorted array with distinct elements, and a key element, find the index of occurance of the given element.
// a - Linear search. -> TC: O(n)
// b - Binary Search - TC: O(logn)


// 2. Given a sorted array and a key element, find the index of the first occurance of the given key element.
// a- Linear search. TC: O(n)
// b - Binary Search based. TC: O(logn)


// 3. Given a sorted array and a key element, find the index of the last occurance of the given key element.
// a- Linear search. TC: O(n)
// b - Binary Search based: O(logn)

// 4. Given an array of int, where each element represents the price of the stock on a given day, find the maximum profit that can be made.
// 1) by making at max 1 transaction. (buy and then sell)
// a- Brute Force - O(n^2)
// b - HW: To come up with an efficient code.
// c - HW2- check out the notes.


#include<bits/stdc++.h>
using namespace std;

int main()
{
    // int prices[] = {6, 10, 1, 4, 6, 9, 3};
    //ans = 8
    
    int prices[] = {15,13,11,8,5,2};
    //ans = 0
    
    int n = sizeof(prices)/sizeof(prices[0]);
    int ans = 0;
    
    //buying
    for(int i=0; i<n; i++)
    {
        //selling
        for(int j=i+1; j<n; j++)
        {
            ans = max(ans, prices[j] - prices[i]);
        }
    }
    
    cout << ans << endl;
    
}






/*


int main()
{
    int a[] = {2,4,5,5,5,7,7,9,9,9,11,12,17};
    int key = 7;
    int n = sizeof(a)/sizeof(a[0]);
    int l=0, r = n-1;
    int mid = 0;
    int ans = -1;
    
    while(l <= r)
    {
        mid = (l+r)/2;
        
        if(a[mid] == key)
        {
            ans = mid;
            l = mid+1;
        }
        else if(a[mid] > key)
        {
            r = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }
    
    cout << ans << endl;
    
}


int main()
{
    int a[] = {2,4,5,5,5,7,7,9,9,9,11,12,17,17};
    int key = 17;
    int ans = -1;
    //ans = 4
    int n = sizeof(a)/sizeof(a[0]);
    
    for(int i=0; i<n-1 ; i++)
    {
        if(a[i] == key && a[i+1] != key)
        {
            ans=i;
            break;
        }
    }
    
    
    if(a[n-1] == key)
    {
        ans = n-1;
    }
    
    cout << ans << endl;
    
}



int main()
{
    int a[] = {2,4,5,5,5,7,7,9,9,9,11,12,17};
    int key = 20;
    int n = sizeof(a)/sizeof(a[0]);
    int l=0, r = n-1;
    int mid = 0;
    int ans = -1;
    
    while(l <= r)
    {
        mid = (l+r)/2;
        
        if(a[mid] == key)
        {
            ans = mid;
            r = mid-1;
        }
        else if(a[mid] > key)
        {
            r = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }
    
    cout << ans << endl;
    
}


int main()
{
    int a[] = {2,4,5,5,5,7,7,9,9,9,11,12,17};
    int key = 5;
    int ans = -1;
    //ans = 2
    int n = sizeof(a)/sizeof(a[0]);
    
    for(int i=0; i<n ; i++)
    {
        if(a[i] == key)
        {
            ans=i;
            break;
        }
    }
    
    cout << ans << endl;
    
}


int main()
{
    int a[] = {2,4,5,7,9,11,12,17};
    int key = 10;
    int n = sizeof(a)/sizeof(a[0]);
    int l=0, r = n-1;
    int mid = 0;
    int ans = -1;
    
    while(l <= r)
    {
        mid = (l+r)/2;
        
        if(a[mid] == key)
        {
            ans = mid;
            break;
        }
        else if(a[mid] > key)
        {
            r = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }
    
    cout << ans << endl;
    
}


int main()
{
    int a[] = {2,4,15,17,9,11,12,17};
    int key = 11;
    int ans = -1;
    int n = sizeof(a)/sizeof(a[0]);
    
    for(int i=0 ; i<n; i++)
    {
        if(a[i] == key)
        {
            ans = i;
            break;
        }
    }
    
    cout << ans << endl;
    
}
*/
