// convert into Generic code

#include<iostream>
using namespace std;

void Display(double Arr[], int size)
{
    int i = 0;

    for(i = 0; i < size; i++)
    {
        cout<< Arr[i] << "\t"; 
    }

    cout<< endl;
}

double Summation(double Arr[], int size)
{
    int i = 0;
    double Sum = 0.0;

    for(i = 0; i < size; i++)
    {
         Sum = Sum + Arr[i];
    }

    return Sum;

}

int main()
{
    double Brr[] = {10.2,20.2,30.2,40.2,50.2};

    Display(Brr, 5);

    cout<< Summation(Brr, 5)<<"\n";

    return 0;
}