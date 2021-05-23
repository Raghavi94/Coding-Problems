
//GEEKS FOR GEEKS PRACTICE PROBLEMS

// C function to find maximum in arr[] of size n
int largest(int arr[], int n) 
{
    int large=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>large)
        {
            large=arr[i];
            
           
            
        }
        
    }
    return large;
} 