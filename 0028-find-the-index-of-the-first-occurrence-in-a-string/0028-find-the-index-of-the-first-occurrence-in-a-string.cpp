class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int size1=haystack.length();
        int size2=needle.length();
        for(int i=0;i<size1;i++)
        {
           if(haystack.substr(i,size2)==needle)
           {
               return i;
           }
        }
        return -1;
        
       // int index=haystack.find(needle);
        //return index;
        
    }
};