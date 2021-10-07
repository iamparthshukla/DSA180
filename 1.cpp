// sort color: sort array of 0's, 1's and 2's
// most optimised solution: Dutch nation flag algo

#include "iostream"
#include "algorithm"
using namespace std;

void sort(int arr[], int n) {
    int lo = 0;
    int mid = 0;
    int hi  = n-1;

    while (mid<=hi) {
        switch (arr[mid]) {
            case 0:
                swap(arr[lo], arr[mid]);
                lo++;
                mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid], arr[hi]);
                hi--;
                break;
        }
    }
}

int main()
{
    int size;
    cout<<"Enter the size: \n";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements: \n";
    for (int i=0; i<size; i++)
        cin>>arr[i];
    sort(arr, size);
    for (int i=0; i<size; i++)
        cout<<arr[i];
}