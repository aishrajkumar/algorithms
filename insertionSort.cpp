void insertionSort(int arr[], int n)
{
    //Find the key
    for(int i = 1; i < n; i++)
    {
        int currKey = arr[i];
        int j = i-1;
        
      //For all numbers to the left of the key, check if they need to be swapped or not
        while(j>=0 && arr[j]>currKey)
        {
            //Shift right
            arr[j+1] = arr[j];
            j = j-1;
        }
      
        //j+1 because we decrement an extra time
        arr[j + 1] = currKey;
    }
}
