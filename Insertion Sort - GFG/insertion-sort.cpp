//{ Driver Code Starts
// C program for insertion sort
#include <stdio.h>
#include <math.h>

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void insert(int arr[], int i)
    {
        //code here
    }
     public:
     
    void insertionSort(int arr[], int n)
    {
        int key ,j;
        
    
        for(int i=1;i<n;i++)   // 
        {
            key=arr[i];    //1  , 3
            j=i-1;         //0  , 1
            
                        // 4>1 , 4>3
            while(j>=0 && arr[j]>key)
            {
                //4
                arr[j+1]=arr[j];
                j--;
            }
            
            arr[j+1]=key; //1
            
            
        }
      
    
    }
};

//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;

    scanf("%d",&T);

    while(T--){

    scanf("%d",&n);

    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.insertionSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}

// } Driver Code Ends