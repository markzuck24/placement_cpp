// 1. Given two lowercase strings, find the longest common substring among both.
// print -> len, common substring.

// 2. Given two strings, check if they are permutations of each other.
// 1- Brute Force. sORTING -> o(NLOGN + MlogM)
// 2- optimised?


HW1 -> Given a matrix, find the largest element in each row.

input:
1 2 3 4
5 3 2 1
6 8 4 1

output:
1 2 3 4 -> 4
5 3 2 1 -> 5
6 8 4 1 -> 8


/*


import java.util.*;

public class Main
{
 public static void main(String[] args) {

  String s1= "abbced";
  String s2 = "bbcade";

  int n1 = s1.length();
  int n2 = s2.length();

  if(n1 != n2)
  {
   System.out.println("Non Permutable strings");
  }
  else
  {
   HashMap<Character, Integer> m = new HashMap<>();
   for(int i =0; i<n1; i++)
   {
    m.put(s1.charAt(i),m.getOrDefault(s1.charAt(i),0)+1);
   }
   System.out.println(m);

   for(int j =0; j<n1; j++)
   {
    char c = s2.charAt(j);
    if(!m.containsKey(c))
    {
     System.out.println("Non Permutable strings");
     return;
    }
    m.put(c, m.get(c) - 1);

    if(m.get(c) == 0)
    {
     m.remove(c);
    }

   }

   if (m.isEmpty()) {
    System.out.println("Permutable strings");
   } else {
    System.out.println("Non Permutable strings");
   }
   // for(int j =0;j<n1;j++)
   // {
   //     hs
   // }
  }

 }
}



class Solution {
    public static void main(String[] args) 
    {
        String s1 = "zyx";
        String s2 = "bcdfg";
        String result = "";
        int n = s1.length();
        for (int i = 0; i < n; i++) //starting of substring
        {
            for (int j = i + 1; j <= n; j++) //end of substring
            {
                String sub = s1.substring(i, j);
                if (s2.contains(sub) && sub.length() > result.length()) {
                    result = sub;
                }
            }
        }
        System.out.println("Longest Common Substring: " + result);
        System.out.println("Length of the Longest Common Substring: " + result.length());
        
    }
}


package Java.Lecture16;
// Question: Given two lowercase Strings, find the longest common substring among both.
// print--> length, commonstring
public class Q2 {
    public static void main(String[] args) {
        String s1="vbcdefz";
        String s2="abcdewhjkjne";
        String s3="";
        for (int i = 0; i < s1.length(); i++) {
            for (int j = 0; j < s2.length(); j++) {
                if(s1.charAt(i)==s2.charAt(j)){
                    int k=0;
                    int x = i+k, y = j+k;
                    while(x<s1.length() && y<s2.length() && 
                                s1.charAt(x)==s2.charAt(y)){
                        k++;
                    }
                    if(k>s3.length()){
                        s3=s1.substring(i,i+k);
                    }
                }
            }
        }
        System.out.println(s3);
        System.out.println(s3.length());
    }
    
}


public class CrazyBook{
    String title;
    String author;
    
    public CrazyBook(String title, String author)
    {
        this.title = title;
        this.author = author;
    }
    
    @Override
    public String toString()
    {
        return "Book " + title + " by " + author;
    }
    
    public static void main(String[] args)
    {
        CrazyBook book = new CrazyBook("Life of Aditya Jain", "AJ");
        System.out.println(book);
    }
}

*/
