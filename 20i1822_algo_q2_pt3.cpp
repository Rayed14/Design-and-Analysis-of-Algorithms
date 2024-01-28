//Rayed Muhammad Saeed
//20i1822
//Question Number 2
//Bottom up Iterative program

#include <iostream>
#include<algorithm>
using namespace std;

int bottom_up_plot_divide(int *price,int size)
{
    int arr[size];
    arr[0]=0;
    for(int i=0;i<size;i++)
    {
        int q=-1000000;
        for(int j=0;j<i;j++)
        {
            q=max(q,price[j]+arr[i-j-1]);
        }
        arr[i]=q;
    }
    return arr[size];
}

int main()
{
    int s; //variable to take the size of the plot from user
    cout<<"Enter the size of the plot ";
    cin>>s;
    int size = s/100;
    int pr[8]={15000,75000,120000,135000,150000,255000,255000,300000};
    cout<<"\nThe final amount after max plot division is: ";
    cout<<bottom_up_plot_divide(pr,size)<<endl;
    return 0;
}