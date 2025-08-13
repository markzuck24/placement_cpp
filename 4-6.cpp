// 1. HW: 
// Given an integer array arr[], the task is to divide the array into three non-empty contiguous segments with equal sum. In other words, we need to return an index pair [i, j], such that sum(arr[0...i]) = sum(arr[i+1...j]) = sum(arr[j+1...n-1]).

// Note: If it is impossible to divide the array into three non-empty contiguous segments, return [-1, -1].

// a - Brute force, TC: O(n^3), SC: O(1)
//b - optimised code. TC: O(n) , SC: O(1)


// 2. 

// You have an inclusive interval [lower, upper] and a sorted array of unique integers arr[], all of which lie within this interval. 
// A number x is considered missing if x is in the range [lower, upper] but not present in arr. 
// Your task is to return the smallest set of sorted ranges that includes all missing numbers, ensuring no element from arr is within any range, and every missing number is covered exactly once.

// eg1:
// ip:
// lower = 10, upper = 50
// a = [14,15,20,30,31,45]

// op:
// ans = [[10,13], [16,19], [21,29], [32,44], [46,50]]


// 3. 
// Given an unsorted array arr[] with both positive and negative elements, find the smallest positive number missing from the array.

// a- Brute force
// b - Optimised


#include<bits/stdc++.h>
using namespace std;

// [1,3,6,4,5] --> sum = 19
// sum : 1-6: 21

// missing = 21-19 = 2

// [2,5,9,1]
// ans = 3

int main() {
    int a[] = {3, 4, -1, 1};
    int n = sizeof(a)/sizeof(a[0]);

    sort(a, a+n);
    int ans = 1;
    
    for (int num : a) 
    {
        if(num == ans)
        {
            ans++;
        }
        else if (num > ans)
        {
         break;   
        }
    }

    cout << ans << endl;

    return 0;
}




/*

int main() {
    int arr[] = {3, 4, -1, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    unordered_set<int> s;
    
    for (int num : arr) 
    {
        if (num > 0) 
        {
            s.insert(num);
        }
    }

    int missing = 1;
    while (true) 
    {
        if (s.find(missing) == s.end()) 
        {
            cout << missing << endl;
            break;
        }
        
        missing++;
    }

    return 0;
}

int main() {
    int arr[] = {3, 4, -1, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    unordered_set<int> s;
    
    for (int num : arr) 
    {
        if (num > 0) 
        {
            s.insert(num);
        }
    }

    int missing = 1;
    while (true) 
    {
        if (s.find(missing) == s.end()) 
        {
            cout << missing << endl;
            break;
        }
        
        missing++;
    }

    return 0;
}



int main()
{
    int lower = 10,upper = 50;
    int arr [] = {14,15,20,30,31,45};
    vector<vector<int>> res;
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    if(arr[0] > lower)
    {
        res.push_back({lower, arr[0] - 1});
    }
    
    
    for(int i=1; i<n; i++)
    {
        if(arr[i] - arr[i-1] > 1)
        {
            res.push_back({arr[i-1]+1 , arr[i]-1});
        }
    }
        
    if(arr[n-1] != upper)
    {
        res.push_back({arr[n-1], upper});
    }
    
    for(auto elem: res)
    {
        cout << elem[0] << ", " << elem[1]  << endl;
    }
        
    return 0;
    
 }



int main()
{
    int a[] = {1,3,2,2,4};
    int n = sizeof(a)/sizeof(a[0]);
    int total_sum = 0;
    vector<int> ans;
    
    for(int elem: a)
    {
        total_sum += elem;
    }
    
    if((total_sum % 3) != 0)
    {
        cout << "-1 -1" << endl;
        return 0;
    }
    
    int sum = 0;
    
    for(int i=0; i<n ; i++)
    {
        sum += a[i];
        
        if(sum == (total_sum/3))
        {
            ans.push_back(i);
            sum = 0;
            
            if(ans.size() == 2 && i < n-1)
            {
                cout << ans[0] << " " << ans[1] << endl;
                return 0;
            }
            
        }
        
    }
    
    cout << "-1 -1" << endl;
}



int sum_arr(int a[], int s, int e)
{
    int sum = 0;
    for(int i = s; i<=e; i++)
    {
        sum += a[i];
    }
    
    return sum;
}


int main()
{
    int a[] = {1,3,2,2,4};
    //ans = [1,3]
    int s1=0, s2=0, s3=0;
    int flag = 0;
    int n  = sizeof(a)/sizeof(a[0]);
    
    for(int i=0; i<n;i++)
    {
        for(int j=i+1; j<n ; j++)
        {
            s1 = sum_arr(a, 0, i);
            s2 = sum_arr(a, i+1, j);
            s3 = sum_arr(a, j+1, n-1);
            
            if((s1 == s2) && (s2 == s3))
            {
                flag = 1;
                cout << i << " " << j << endl;
                break;
            }
        }
        
        if(flag == 1)
        {
            break;
        }
    }
    
    
    if(flag == 0)
    {
        cout << "-1 -1" << endl;
    }
}
*/
