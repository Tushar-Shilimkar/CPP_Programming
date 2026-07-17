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

int main()
{
    double Brr[] = {10.2,20.2,30.2,40.2,50.2};

    Display(Brr, 5);

    return 0;
}