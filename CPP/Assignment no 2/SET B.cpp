// SET B

// 1) Write a C++ program to accept ‘n’ float numbers, store them in an array and print the 
// alternate elements of an array. (Use dynamic memoryallocation)

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    float* arr = new float[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }

    cout << "Alternate elements of the array: ";
    for (int i = 0; i < n; i += 2) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    return 0;
}


// 2) Write a C++ program to modify contents of an integer array.(Use Call by reference)

#include <iostream>
using namespace std;

void modifyArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    modifyArray(arr, size);
    
    cout << "Modified array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}


// 3)Write a C++ program to calculate area and circumference of a Circle. (Use default 
// argument, scope resolution operator and manipulator.)
