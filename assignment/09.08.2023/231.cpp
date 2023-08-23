#include <bits/stdc++.h>
class Solution {
public:
    bool isPowerOfTwo(int n) {

        // for(int i=0;i<31;i++)
        // {
        //     int a=pow(2,i);
        //     if(n==a)
        //     return true;
        // }
        
        // return false;
        if(n<=0)
        return false;
        if (n==1)
        return true;
        
        return !(n&1) && isPowerOfTwo(n/2);

    }
};