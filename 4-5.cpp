// 1. Given an array representing the prices of the stocks on that particular day, find the max profit thta can be made.
// p1: at max 1 transaction can be made - (buy and then sell)
// a - brute force: TC: O(n^2)
// b - Brute force - show the buying and selling price that will get the max profit.
// c - Optimised code: tc: O(n)
// d - Brute force - show the buying and selling price that will get the max profit.


// 2:
// Given an array p[] of size n denoting the cost of stock on each day, the task is to find the maximum total profit if we can buy and sell the stocks any number of times.

// Note: We can only sell a stock which we have bought earlier and we cannot hold multiple stocks on any day.

// Input: prices[] = {100, 180, 260, 310, 40, 535, 695}
// a - local max, min. --> TC :O(n) , SC: O(1)
// b - simplified approach: TC: O(n), SC: o(1)

// 3- 
// Given an integer array arr[], the task is to divide the array into three 
// non-empty contiguous segments with equal sum. In other words, we need to return an index pair [i, j], such that 
// sum(arr[0...i]) = sum(arr[i+1...j]) = sum(arr[j+1...n-1]).

// Note: If it is impossible to divide the array into three non-empty contiguous segments, return [-1, -1].

// a- Brute force.

#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 0, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    

    int sum = 0;
    for(int i =0;i<n;i++)
    {
        sum += arr[i];
    }
    
    if (sum % 3 != 0) {
        cout << "-1 -1";
        return 0;
    }

    int part = sum / 3, s = 0;
    int i = -1, j = -1;

    for (int k = 0; k < n; k++) 
    {
        s += arr[k];
        
        if (s == part && i == -1) 
        {
            i = k;
        }
        else if (s == 2 * part && i != -1) 
        { 
            j = k; 
            break; 
            
        }
    }

    if (j < n - 1) 
    {
        cout << i << " " << j;
    }
    else
    {
        cout << "-1 -1";
    }
    return 0;
}



/*

int main()
{
    int p[] = {100, 180, 260, 310, 40, 535, 695};
    // 180-100 + 260-180 + 310-260 + 535-40 + 695-535 = 
    // 80 + 80 + 50 + 495 + 160 = 370 + 495 = 865
    
    int n = sizeof(p)/sizeof(p[0]);
    
    int min =-1, maxprofit = 0 ;
    for(int i = 0;i<n-1;i++)
    {
        int profit = p[i+1] - p[i];
        
        if(profit>0)
        {
            maxprofit += profit;
        }
        
    }
    cout<<maxprofit<<endl;
     
}


int main()
{
    int p[] = {100, 180, 260, 310, 40, 535, 695};
    // 310-100 + 695-40 => 210 + 655 = 865
    
    int mn = p[0], mx = p[0];
    int ans = 0;
    int n = sizeof(p)/sizeof(p[0]);
    
    int i = 0;
    while(i < n-1)
    {
        while((i < n -1) && (p[i] >= p[i+1]))
        {
            i++;
        }
        mn = p[i];
        
        
        while((i<n-1) && (p[i] <= p[i+1]))
        {
            i++;
        }
        mx = p[i];
        
        ans = ans + (mx - mn);
    }
    
    cout << ans << endl;
}


int main()
{
    // int p[] = {8, 10, 7, 1, 5, 9, 13};
    int p[] = {20, 14, 12, 10, 7, 3, 2};
    //ans = 8
    int ans = 0, buy = -1, sell= -1, min_p = p[0];
    
    int n = sizeof(p)/sizeof(p[0]);
    
    for(int i=1; i<n ; i++)
    {
        min_p = min(min_p, p[i]);
        
        if( (p[i] - min_p) > ans )
        {
            ans = (p[i] - min_p);
            buy = min_p;
            sell = p[i];
        }
        
    }
    
    cout << ans << endl;
    cout << buy << "  " << sell << endl;
    
}

int main()
{
    int p[] = {8, 10, 7, 1, 5, 9, 13};
    // int p[] = {20, 14, 12, 10, 7, 3, 2};
    //ans = 8
    int ans = 0, buy = -1, sell= -1;
    
    int n = sizeof(p)/sizeof(p[0]);
    
    for(int i = 0; i<n ; i++)
    {
        for(int j=i+1; j<n ; j++)
        {
            if( (p[j] - p[i]) > ans )
            {
                ans = (p[j] - p[i]);
                buy = p[i];
                sell = p[j];
            }
        }
    }
    
    cout << ans << endl;
    cout << buy << "  " << sell << endl;
    
}



int main()
{
    int p[] = {8, 10, 7, 1, 5, 9, 3};
    //ans = 8
    int ans = 0;
    int n = sizeof(p)/sizeof(p[0]);
    
    for(int i = 0; i<n ; i++)
    {
        for(int j=i+1; j<n ; j++)
        {
            ans = max(ans, p[j] - p[i]);
        }
    }
    
    cout << ans << endl;
    
}
*/
