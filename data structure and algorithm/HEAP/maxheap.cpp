#include<bits/stdc++.h>
using namespace std;


class MaxHeap{

    public:
        int *arr;
        int heap_size;
        int capacity;
        
        // Constructor
	MaxHeap(int capacity);

	// to heapify a subtree with the root at given index
	void MaxHeapify(int );

	int parent(int i) { return (i-1)/2; }

	// to get index of left child of node at index i
	int left(int i) { return (2*i + 1); }

	// to get index of right child of node at index i
	int right(int i) { return (2*i + 2); }

	// to extract the root which is the minimum element
	int extractMax();

	// Decreases key value of key at index i to new_val
	void decreaseKey(int i, int new_val);

	// Returns the minimum key (key at root) from min heap
	int getMax() { return arr[0]; }

	// Deletes a key stored at index i
	void deleteKey(int i);

	// Inserts a new key 'k'
	void insertKey(int k);

};



MaxHeap::MaxHeap(int cap)
{
    
    heap_size = 0;
	capacity = cap;
	arr = new int[cap];
}



void MaxHeap::insertKey(int k )
{
    if (heap_size == capacity)
	{
		cout << "\nOverflow: Could not insertKey\n";
		return;
	}
    heap_size++;
	int i = heap_size - 1;
	arr[i] = k;
    while(i>0 and arr[parent(i)]<arr[i])
    {
        swap(arr[parent(i)] , arr[i]);
        i = parent(i);
    }
}




void MaxHeap::decreaseKey(int i, int new_val)
{
    arr[i] = new_val;
    while(i>0 and arr[parent(i)]<arr[i])
    {
        swap(arr[parent(i)] , arr[i]);
        i = parent(i);
    }
}





int MaxHeap::extractMax()
{

    if (heap_size <= 0)
		return INT_MAX;
	if (heap_size == 1)
	{
		heap_size--;
		return arr[0];
    }


    int max = arr[0];
    arr[0] = arr[heap_size -1];
    heap_size--;
    MaxHeapify(0);
    return max;
}




void MaxHeap::deleteKey(int i)
{
    decreaseKey(i, INT_MAX);
    extractMax();
}





void MaxHeap::MaxHeapify(int i)
{
    int l = left(i);
    int r = right(i);
    int largest = i;
    if(l<heap_size and arr[l] > arr[i])
        largest = l;
    if(r<heap_size and arr[r] > arr[largest])
        largest = r;
    if(largest !=i)
    {
        swap(arr[i] , arr[largest]);
        MaxHeapify(largest);
    }
}








int main()
{
    MaxHeap h(11);
	h.insertKey(3);
	h.insertKey(2);
	h.deleteKey(1);
	h.insertKey(15);
	h.insertKey(5);
	h.insertKey(4);
	h.insertKey(45);
	cout << h.extractMax() << " ";
	cout << h.getMax() << " ";
	h.decreaseKey(2, 1);
	cout << h.getMax();
	return 0;

}