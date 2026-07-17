// convert into Generic code

#include<iostream>
using namespace std;

template <class T>
void Display(T Arr[], int size)
{
    int i = 0;

    for(i = 0; i < size; i++)
    {
        cout<< Arr[i] << "\t"; 
    }

    cout<< endl;
}

template <class T>
T Summation(T Arr[], int size)
{
    int i = 0;
    T Sum = 0;

    for(i = 0; i < size; i++)
    {
         Sum = Sum + Arr[i];
    }

    return Sum;

}

int main()
{
    double Brr[] = {10.2,20.2,30.2,40.2,50.2};
    int Crr[] = {10,20,30,40,50};

    Display(Brr, 5);

    cout<< Summation(Brr, 5)<<"\n";

    Display(Crr,5);

    cout<<Summation(Crr, 5)<<"\n";

    return 0;
}