class Solution {
public:
    bool isSameAfterReversals(int num) {
        
        int reversed1=reversednumber(num);
        int reversed2=reversednumber(reversed1);
        
        return reversed2==num;
        
    }
    int reversednumber(int num1)
    {
        int rem;
        double reversed=0;
        while(num1!=0)
        {
            rem=num1%10;
            reversed=reversed*10+rem;
            num1=num1/10;
        }
        return reversed;
    }
};