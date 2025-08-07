// 1 - HW - Given an array of size n, where the numbers range between 1 to n.
// Find the missing and the repeating element in it.
// a - Brute force: TC: O(nlogn), SC: O(1)
// b - Optimised: TC: O(n) , SC: O(n)
// c - Optimised: TC: O(n), SC: O(1)


#include<bits/stdc++.h>
using namespace std;

// 2 - Given an array of int, find the sum of the Maximum sum subarray. (subaaray should be of atleast length = 1)
// a - Brute Force : TC: O(n^2)
// b - also print the subarray with the maximum sum. - TC: O(n^2)
// c - Optimised solution: O(n)

3 - Given a binary array -> having only 0s and 1s.
Find the maximum consecutive 0s or 1s in it.






/*

int main()
{
    int arr[] = {1,2,3,-14,8};
    
    int n  = sizeof(arr) / sizeof(arr[0]);
    
    int sum = arr[0],maxsum = arr[0];
    
    for(int i =1;i<n;i++)
    {
        cout<<arr[i]<<" ";
        sum = max(arr[i],sum+arr[i]);
        cout<<sum<<" ";
        maxsum = max(maxsum,sum);
        cout<<maxsum<<endl;
    }
    
    // sum + x > x
    // sum > x-x
    // sum > 0
}



int main()
{
    int arr[] = {1,2,3,-14,8};
    
    int n  = sizeof(arr) / sizeof(arr[0]);
    int left =0,right=n-1;
    
    int sum = 0,maxsum = INT_MIN;
    
    for(int i =0;i<n;i++)
    {
        for(int j =i;j<n;j++)
        {
            sum += arr[j];
            
            if(maxsum<sum)
            {
                maxsum = sum;
                left = i;
                right = j;
                
            }
            
        }
       // cout<<left<<" "<<right<<endl;
        
        sum = 0;
    }
    
    for(int k = left;k<=right;k++)
    {
        cout<<arr[k]<<" ";
    }
    cout<<endl;
    cout << maxsum<<endl;
}



int main()
{
    int arr[] = {1,2,3,-4,-5};
    
    int n  = sizeof(arr) / sizeof(arr[0]);
    
    int sum = 0,maxsum = INT_MIN;
    
    for(int i=0;i<n;i++)
    {
        sum = 0;
        for(int j=i;j<n;j++)
        {
            sum += arr[j];
            cout << sum << " ";
            maxsum = max(sum,maxsum);
        }
        
        cout << endl;
    }
    cout << maxsum<<endl;
}



//Array Masking
int main() {
    int arr[] = {1, 2, 5, 4, 5}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    int duplicate = -1, missing = -1;

    
    for (int i = 0; i < n; i++) {
        int index = abs(arr[i]) - 1;
        if (arr[index] > 0) {
            arr[index] = -arr[index];
        } 
        else {
             duplicate = abs(arr[i]);
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            missing = i + 1;
            break;
        }
    }

    // 0   1   0   -1
    // 1   2   1   -2
    // 2   5   4   5 --> missing = 2+1 = 3
    // 3   4   3   -4
    // 4   5   4   -5 --> duplicate = |-5| = 5
    
    cout  << duplicate << endl;
    cout  << missing << endl;

    return 0;
}


int main()
{
    unordered_set<int> s;
    s.insert(5);
    s.insert(2);
    s.insert(8);
    
    for(int x: s)
    {
        cout << x << " ";
    }
    
    return 0;
} 


int main()
{
    set<int> s;
    s.insert(5);
    s.insert(2);
    s.insert(8);
    
    for(int x: s)
    {
        cout << x << " ";
    }
    
    return 0;
}
*/
