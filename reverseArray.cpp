#include <iostream>

using namespace std;

// reverse array
void reverseArr(int arr[], int start, int end);

// print reversed array
void printArr(int arr[], int size);

int main() {
	int start = 0,
		end = 0,
		size = 0,
		arr[1000];

	// read in size
	cin >> size;

	// read in actual values into array
	for (int i = 0; i < size; ++i) {
		cin >> arr[i];
	}

	start = 0;
	end = size - 1;

	reverseArr(arr, start, end);
	printArr(arr, size);

	return 0;
}

void reverseArr(int arr[], int start, int end) {
	int temp = 0;

	while (start < end) {
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		start++;
		end--;
	}
}

void printArr(int arr[], int size) {
	for (int i = 0; i < size; ++i) {
		cout << arr[i] << " ";
	}
}
