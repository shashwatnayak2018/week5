#include<iostream>
using namespace std;
//array
//choose pivot
//l and h
//partition at the pivot
//again quicksort each sub-array
//pivot at the last element of sub-array
//partition
//stop when l=h
int partition(int arr[], int low, int high)
{
	//arr[pivot] is arr[high]
	int i = low;
	int temp;
	int pivot = high;
	for(int j = low;j<high;j++)
	{
		if(arr[j]<arr[pivot])
		{
			
			//swap arr[i] and arr[j]
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
		}
	}
	//swap arr[i+1] and arr[pivot]
	int x;
	x = arr[i];
	arr[i] = arr[pivot];
	arr[pivot] = x;
	return (i);
}
void quicksort(int arr[], int low, int high)
{
	int pivot;
	if(low<high)
	{
		pivot = partition(arr,low,high);
		quicksort(arr,low,pivot-1);
		quicksort(arr,pivot+1,high);
	}
}
int main()
{
	int n;
	int arr[n];
	//ask for the value of n
	cout<<"Enter the number of elements of the array"<<endl;
	cin>>n;
	//ask for the elements of the array
	for(int i=0; i<n ; i++)
	{
		cout<<"enter an element of the array"<<endl;
		cin>>arr[i];
	}
	quicksort(arr,0,n-1);
	//print the elements of the sorted array
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"-";
	}
	return 0;
}
