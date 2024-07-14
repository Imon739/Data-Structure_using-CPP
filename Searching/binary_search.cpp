#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size, i, j;
    cin >> size;
    int arr[size];
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }
    int pos = -1, temp;
    int low = 0, high = size - 1, middle;

    for(i=0; i<size-1; i++)
    {
        for(j=0; j<size-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    int val;
    cin >> val;

    while(low <= high)
    {
        middle = (low + high) / 2;
        if (val == arr[middle])
        {
            pos = middle;
            break;
        }
        else if (val < arr[middle])
        {
            high = middle - 1;
        }
        else
        {
            low = middle + 1;
        }
    }

    if(pos == -1)
        printf("not found\n");
    else
        printf("found");

    return 0;
}
