#include <bits/stdc++.h>

class Solution {
public:

    void fun(vector<char>& s,int i)
    {
        if (i>=s.size()/2)
        return ;

        swap(s[i],s[s.size()-i-1]);
               i++;
 
        fun(s,i);

    }

    void reverseString(vector<char>& s) {
       
        int i=0;
        fun(s,i);


    }
};