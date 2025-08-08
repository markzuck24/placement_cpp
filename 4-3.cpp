// 1. Given a string, find the number of distinct characters in it.
// a - Brute force. TC: O(nlogn)  SC: O(1)

// 2- Given a binary array, print the longest subarray having all 0s or all 1s.
// a - Brute Force.


// 3- Given an array of int, find the smallest missing element in it. A valid answer always exist.
// a- Brute force


// 4- Given an array of int, find the smallest positive missing element in it. A valid answer always exist.
// a- Brute force


#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[] = {1, 3, 4, 2,5, 7, 6, 4, -3, -2, -1,0};
    //op: 2
    //range : 
    int n = sizeof(arr)/sizeof(arr[0]);
    
    unordered_set<int> elements;
    
    int minEle = INT_MAX, maxEle = INT_MIN;
    
    for(int i =0;i<n;i++)
    {
        elements.insert(arr[i]);
        minEle = min(minEle,arr[i]);
        maxEle = max(maxEle,arr[i]);
    }
    
    for (int i = minEle; i <= maxEle; i++) {
        if (elements.find(i) == elements.end()) {
            cout << i << endl;
            return 0;
        }
    }
    
    cout << maxEle + 1 << endl;
    return 0;
}


/*


int main()
{
    int arr[] = {1, 1, 0, 0, 0, 1, 1, 1, 1};
    //op: 4
    int n =sizeof(arr)/sizeof(arr[0]);
    
    int maxCount =1,currCount =1;
    
    for(int i =1;i<n;i++)
    {
        if(arr[i] == arr[i-1])
        {
            currCount++;
        }
        else
        {
            maxCount = max(maxCount,currCount);
            currCount =1;
        }
        
    }
    maxCount = max(maxCount,currCount);
    
    cout<<maxCount<<endl;
}



int main(){
    int a[]={0,1,0,0,0,1,1,1,1,1,0,0,0,1};
    //op: 5
    int n=sizeof(a)/sizeof(a[0]);
    
    int i=0,j=i+1,count=1;
    
    int mx=INT_MIN;
    
    while(j<n){
        if(a[i]==a[j]){
            j++;
            count++;
        }
        else{
            i=j;
            j++;
            count=1;
        }
        mx=max(mx,count);
    }
    cout<<mx;
}




int main()
{
    string s ="aditya jain";
    unordered_set<char> distinctChars;
    
    for (char c : s) {
        
            distinctChars.insert(c);
        
    }
    
    cout << distinctChars.size() << endl;
}


int main()
{
    // string s ="We all will get good rank in gate";
    string s ="aditya jain";
    unordered_map<char,int> chFreq;
    int n = s.length();
    
    for(int i =0;i<n;i++)
    {
        chFreq[s[i]] ++;
    }
    
    cout << chFreq.size() << endl;
    
    for (auto it : chFreq)
    {
        cout << it.first << " : " << it.second << endl;
    }

    return 0;
}


int main(){
    int freq[256];
    string str="aditya jain";
    int sum=0;
    int n = str.length();
    
    for(int i =0; i<256; i++)
    {
        freq[i] = 0;
    }
    
    for(int i=0; i<n; i++){
        freq[str[i]]+=1;
    }

    for(int num:freq){
        if(num>=1){
            sum+=1;
        }
    }

    cout<<sum;
}



int main()
{
    string s = "aditya jain";
    //op: 8
    int count = 0;
    
    int n = s.size();
    sort(s.begin(), s.end());
    cout << s << endl;
    
    for(int i=0; i<n-1; i++)
    {
        if(s[i] != s[i+1])
        {
            count++;
        }
    }
    
    count++;
    
    cout << count << endl;
}

*/
