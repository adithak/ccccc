
  
class G  
{ 
      
    public static int localMinUtil(int[] arr, int low,  
                                   int high, int n) 
    { 
          
        int mid = low + (high - low) / 2; 
          
        if(mid == 0 || arr[mid - 1] > arr[mid] &&  
           mid == n - 1 || arr[mid] < arr[mid + 1]) 
                return mid; 
          
        else if(mid > 0 && arr[mid - 1] < arr[mid]) 
                return localMinUtil(arr, low, mid - 1, n); 
          
        return localMinUtil(arr, mid + 1, high, n); 
    } 
      
    public static int localMin(int[] arr, int n) 
    { 
        return localMinUtil(arr, 0, n - 1, n); 
    } 
      
    public static void Main ()  
    { 
          
        int []arr = {4, 3, 1, 14, 16, 40}; 
        int n = arr.Length; 
        Console.WriteLine("Index of a local minima is " + 
                            localMin(arr, n)); 
      
    } 
