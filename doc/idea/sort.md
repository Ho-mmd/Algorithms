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

## Insertion Sort

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

## Bubble Sort

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

## Merge Sort

-----------------------------------------

## Heap Sort

-----------------------------------------

## Quick Sort

-----------------------------------------
