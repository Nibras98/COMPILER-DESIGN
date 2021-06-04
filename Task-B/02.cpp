
#include <iostream>
using namespace std;

int main()
{
    int n, i;
    double sum=0;
    double average;

    cout << "Enter the numbers of data: ";
    cin >> n;
     float num[n];


    for(i = 0; i < n; i++)
    {
        cout  << "Enter number " << i + 1 <<":";
        cin >> num[i];

    }
    double max = num[0];
    for (i = 0; i < n; i++)
    {
        if (max < num[i])
            max = num[i];
    }
    double min = num[0];

    for (i = 0; i < n; i++)
    {
        if (min > num[i])
            min = num[i];
    }
    cout << "Largest element : " << max;
    cout << "\nSmallest element : " << min;

}

