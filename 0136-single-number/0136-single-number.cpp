class Solution {
public:
    int singleNumber(vector<int>& nums) {
       
       /* int sizeofnums=nums.size();
        
        for(int i=0;i<sizeofnums;i++)
        {
             int count=0;
            for(int j=0;j<sizeofnums;j++)
            {
                if(nums[i]==nums[j])
                {
                    count++;
               }
            }
            
            if(count==1)
            {
                return nums[i];
            }
        }
       return -1; */
        
        sort(nums.begin(),nums.end());
            for(int i=0;i<nums.size()-1;i++)
            {
                if(nums[i]==nums[i+1])
                {
                    i++;
                }
                else 
                {
                    return nums[i];
                }
            }
        return nums[nums.size()-1];
        
        
        
        
        
        
        
        
    }
};