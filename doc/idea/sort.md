# Sorting

-----------------------------------------

## Selection Sort (n^2)

- Works by repeatedly selecting the smallest (or largest) element
- Moves it to the sorted portion of the list. 

```
void selectionSort(int arr[], int n) 
{ 
    int i, j, min; 
  
    for (i = 0; i < n - 1; i++) { 
  
        // Find the minimum element 
        min = i; 
        for (j = i + 1; j < n; j++) { 
            if (arr[j] < arr[min]) 
                min = j; 
        } 
  
        // Swap 
        if (min != i) 
            swap(arr[min], arr[i]); 
    } 
}
```

-----------------------------------------

## Insertion Sort (n^2)

- Virtually split into a sorted and an unsorted part 
- Values from the unsorted part are picked and placed in the correct position

```
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
 
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
```

-----------------------------------------

## Bubble Sort (n^2)

- Repeatedly swapping the adjacent elements if they are in the wrong order

```
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
 
        if (swapped == false)
            break;
    }
}
```

-----------------------------------------

## Merge Sort (nlogn)

- Dividing an array into smaller subarrays, sorting each subarray
- Then merging the sorted subarrays back together to form the final sorted array

```
void merge(int array[], int const left, int const mid, int const right)
{
    int const leftIdx = mid - left + 1;
    int const rightIdx = right - mid;
 
    // Create temp arrays
    auto *leftArray = new int[leftIdx],
         *rightArray = new int[rightIdx];
 
    // Copy data to temp arrays leftArray[] and rightArray[]
    for (auto i = 0; i < leftIdx; i++)
        leftArray[i] = array[left + i];
    for (auto j = 0; j < rightIdx; j++)
        rightArray[j] = array[mid + 1 + j];
 
    auto subLeftIdx = 0, subRightIdx = 0;
    int index = left;
 
    // Merge the temp arrays back into array[left..right]
    while (subLeftIdx < leftIdx && subRightIdx < rightIdx) {
        if (leftArray[subLeftIdx] <= rightArray[subRightIdx]) {
            array[index] = leftArray[subLeftIdx];
            subLeftIdx;
        }
        else {
            array[index] = rightArray[subRightIdx];
            subRightIdx;
        }
        index++;
    }
 
    // Copy the remaining elements
    while (subLeftIdx < leftIdx) {
        array[index] = leftArray[subLeftIdx];
        subLeftIdx++;
        index++;
    }
 
    while (subRightIdx < rightIdx) {
        array[index] = rightArray[subRightIdx];
        subRightIdx++;
        index++;
    }

    delete[] leftArray;
    delete[] rightArray;
}
 
// begin is for left index and end is right index of the sub-array of arr to be sorted
void mergeSort(int array[], int const begin, int const end)
{
    if (begin >= end)
        return;
 
    int mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}
```

-----------------------------------------

## Heap Sort (nlogn)

- Based on binary heap data structure
- Find the minimum element and place the minimum element at the beginning
- Repeat the same process for the remaining elements.

```
// To heapify a subtree 
void heapify(int arr[], int N, int i)
{
 
    // Initialize largest as root
    int largest = i;
 
    // left = 2*i + 1
    int l = 2 * i + 1;
 
    // right = 2*i + 2
    int r = 2 * i + 2;
 
    // If left child is larger than root
    if (l < N && arr[l] > arr[largest])
        largest = l;
 
    // If right child is larger than root
    if (r < N && arr[r] > arr[largest])
        largest = r;
 
    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]); 
        heapify(arr, N, largest);
    }
}
 
// Main function to do heap sort
void heapSort(int arr[], int N)
{
 
    // Build heap
    for (int i = N / 2 - 1; i >= 0; i--)
        heapify(arr, N, i);
 
    // One by one extract an element from heap
    for (int i = N - 1; i > 0; i--) {
        // Move current root to end
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}
```

-----------------------------------------

## Quick Sort (n^2 / nlogn)

- Based on divide and conquer 
- Picks an element as a pivot 
- Partitions the given array around the picked pivot by placing the pivot in its correct position

```
int partition(int arr[] ,int low, int high)
{  
  int pivot = arr[high], i = low - 1;
   
  for(int j = low; j <= high; j++)
  {
    if(arr[j] < pivot)
    {
      i++;
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[i+1], arr[high]);

  return (i + 1);
}
 
            
void quickSort(int arr[], int low, int high)
{
  if(low<high)
  {
     
    int mid = partition(arr, low, high);
     
    quickSort(arr, low, mid-1);
    quickSort(arr, mid + 1, high);
  }
}
```

-----------------------------------------

## Counting Sort (n + k)

- Non-comparison-based sorting algorithm
- Works well when there is limited range of input values
- Count the frequency of each distinct element in the input array 
- Use information to place the elements in their correct sorted positions

```
void countSort(int[] inputArray) {
		int N = inputArray.length;
        int M = 0;
 
        for (int i = 0; i < N; i++) {
            M = Math.max(M, inputArray[i]);
        }
 
        int *countArray = new int[M + 1];
 
        for (int i = 0; i < N; i++) {
            countArray[inputArray[i]]++;
        }
 
        for (int i = 1; i <= M; i++) {
            countArray[i] = countArray[i - 1] + countArray[i];
        }
 
        int *outputArray = new int[N];
 
        for (int i = N - 1; i >= 0; i--) {
            outputArray[countArray[inputArray[i]] - 1] = inputArray[i];
            countArray[inputArray[i]]--;
        }
		
		delete[] countArray;
		// delete[] outputArray
}
```
