#include <bits/stdc++.h>
using namespace std ;

void bubble_sort (int arr[] , int n){
    for (int i = 0; i < n-1 ; i++) //for every passs
    {   
    //  cout << "pass no : " << i+1 << endl; 
        bool isShort = true; // to make adaptive as bouble short is no by default adaptive
      for (int j = 0; j < n-i-1; j++)
      {
    // cout << "comparison no : " << j+1 << endl; 
        if (arr[j]>arr[j+1]) //compare pairs
        {
            swap(arr[j],arr[j+1]);
            isShort = false;
        }
      }
      if(isShort){
        return;         // if already short then it return
      }
    }
    
}

void insertion_sort (int arr[] , int n){
    int j , key ;
    for (int i = 1; i <= n-1; i++)
    {   key = arr[i];
        j = i-1;
      while (arr[j]> key && j >= 0)
      {
        arr[j+1] = arr[j];
        j--;
      }
      arr[j+1] = key;
    }
    
}

void selection_sort (int arr[] , int n){
  for (int i = 0; i < n-1; i++)
  {   int minIndex = i;
      for (int j = i+1; j < n; j++)
      {
        if (arr[minIndex] > arr[j])
        {
          minIndex = j;
        }
      }
       swap(arr[i],arr[minIndex]);
  }
  
}

void print_arr (int arr[] , int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
        cout << endl;
}

int partition (int arr[] , int h ,int l) {
    int i = l+1;
    int j = h;
    int pivot = arr[l];
    do
    {
      while (arr[i]<=pivot)
      {
        i++;
      }
      while (arr[j]>pivot)
      {
        j--;
      }
      if (i<j)
      {
        swap(arr[i], arr[j]);
      }
    } while (i<j);
    swap(arr[l],arr[j]);
    return j;
}

void quick_sort (int arr[] , int l ,int h){
     if(l<h){
       int partitionIndex = partition(arr , h , l);
      quick_sort(arr , l, partitionIndex-1);
      quick_sort(arr , partitionIndex+1, h);
      }
}

void count_sort (int arr[], int n){
    int maxnum;
      maxnum = *max_element(arr , arr+n);
    //  int* newarr = (int *) malloc((maxnum+1)*sizeof(int));
     int* newarr = new int[maxnum+1];
    
    for (int i = 0; i <= maxnum; i++)
    {
      newarr[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
      newarr[arr[i]] = newarr[arr[i]] +1;
    }
   int i = 0;
   int j = 0;
    while (i <= maxnum)
    { 
      if(newarr[i] > 0){ 
        arr[j] = i;
        j++;
        newarr[i]--;
      }
      else{
        i++;
      }
    }
    
    delete[] newarr;
}

 int main() {

int arr[] = {9,8,7,5,28,55,6,77,8,20,99,5};

print_arr(arr , sizeof(arr)/sizeof(arr[0]));
// bubble_sort(arr , sizeof(arr)/sizeof(arr[0]));
// insertion_sort(arr , sizeof(arr)/sizeof(arr[0]));
// selection_sort(arr , sizeof(arr)/sizeof(arr[0]));
// quick_sort(arr , 0, sizeof(arr)/sizeof(arr[0])-1);
// merge_sort(arr , 0, sizeof(arr)/sizeof(arr[0])-1);  // not avail able todo!!!
count_sort(arr ,sizeof(arr)/sizeof(arr[0]));
print_arr(arr , sizeof(arr)/sizeof(arr[0]));
     return 0 ;
}