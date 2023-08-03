class Solution {
public:
    int smallestEvenMultiple(int n) {
        int mul=2;
        
        while(mul % n!=0)
        {
            mul+=2;
        }
        return mul;
        
    }
};