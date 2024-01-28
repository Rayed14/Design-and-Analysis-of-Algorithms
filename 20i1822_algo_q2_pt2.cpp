//Rayed Muhammad Saeed
//20i1822
//Question Number 2
//Top down with memoization program

#include <iostream>
#include<algorithm>
using namespace std;

int memoized_plot_divide2(int *price,int size,int *r)
{
    int q;
    if (r[size]>=0)
    {
        return r[size];
    }
    if(size==0)
    {
        q=0;
    }
    else
    {
        q=-1000000;
        for(int i=0;i<size;i++)
        {
            q=max(q,price[i]+memoized_plot_divide2(price,(size-1)-i,r));
        }
        r[size]=q;
        return q;
    }
}

int memoized_plot_divide(int *price,int size)
{
    int arr[size];
    for(int i=0;i<size;i++)
    {
        arr[i]=-1000000;
    }
    return memoized_plot_divide2(price,size,arr); 
}

int main()
{
    int s; //variable to take the size of the plot from user
    cout<<"Enter the size of the plot ";
    cin>>s;
    int size = s/100;
    int pr[8]={15000,75000,120000,135000,150000,255000,255000,300000};
    cout<<"\nThe final amount after max plot division is: ";
    cout<<memoized_plot_divide(pr,size)<<endl;
    return 0;
}