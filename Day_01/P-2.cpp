//Happy Number

class Solution {
public:
    
    bool isHappy(int n) {
        int r,sum=0;
        int a=n;
        
        while(a>0)
        {
            r=a%10;
            sum = sum+(r*r);
            a=a/10;
        }
        if(sum == 1 || sum==7)
        {
            return true;
        }
        else if(sum/10==0)
        {
            return false;
        }
        else
            return(isHappy(sum));
    }
};

