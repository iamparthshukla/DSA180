// repeating and missing numbers
// most optimised solution: summation approach

#include "iostream"
using namespace std;

void missingDuplicate (const int arr[], int n)
{
    int sum, sumSq;
    int i = 0;
    sum = n*(n+1)/2;
    sumSq = n*(n+1)*((2*n)+1)/6;
    while (i<n){
        sum -= arr[i];
        sumSq -= (arr[i]*arr[i]);
        i++;
    }

    int missingNum = ((sumSq/sum)+sum)/2;
    int duplicateNum = missingNum - sum;

    cout<<"Missing Number : "<<missingNum<<"\n";
    cout<<"Duplicate Number : "<<duplicateNum<<"\n";
}

int main()
{
    int size;
    cout<<"Enter the size:\n";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements:";
    for (int i=0; i<size; i++)
        cin>>arr[i];
    missingDuplicate(arr, size);
}

