/*Time complexity: O(n^2)
 * Space complexity: O(1)
 Never makes more than O(n) swaps and can be useful when memory write is a costly operation.
 */

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n)
{
   int currMin;
   
   for(int i = 0; i < n-1 ; i++)
   {
       currMin = i;
       for(int j = i + 1 ; j < n; j++)
       {
           if(arr[j]<arr[currMin])
            currMin = j;
       }

       swap(&arr[currMin], &arr[i]);
   }
}
