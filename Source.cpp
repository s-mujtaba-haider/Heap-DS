#include<iostream>
using namespace std;
class MinHeap {
	int* arr;
	int capacity;
	int heap_size;
public:
	MinHeap() {
		capacity = 0;
		arr = new int[capacity];
		heap_size = 0;
	}
	MinHeap(int s) {
		capacity = s;
		arr = new int[s];
		heap_size = 0;
	}
	int Getmin() {
		return arr[0];
	}
	int SecondMin() {
		return arr[1];
	}
	int ThirdMin() {
		return arr[2];
	}
	int parent(int i) {
		return (i - 1) / 2;
	}
	int leftchild(int i) {
		return 2 * i + 1;
	}
	int rightchild(int i) {
		return 2 * i + 2;
	}
	void Insert(int k) {
		if (heap_size >= capacity) {
			cout << "No Space" << endl;
		}
		int i = heap_size + 1;
		arr[i] = k;
		while (i != 0 && arr[parent(i)] > arr[i])
		{
			swap(&arr[i], &arr[parent(i)]);
			i = parent(i);
		}
	}
	void swap(int* x, int* y) {
		int temp = *x;
		*x = *y;
		*y = temp;
	}
	void Delete() {

	}
};