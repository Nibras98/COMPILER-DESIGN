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
        sum += num[i];
    }

    average = sum / n;
    cout << "Average = " << average;

    return 0;
}
