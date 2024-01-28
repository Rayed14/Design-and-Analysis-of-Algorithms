//Rayed Muhammad Saeed
//20i1822
//Question Number 2
//Top down without memoization program

#include <iostream>
#include<algorithm>
using namespace std;

int plot_divide(int *price,int size)
{
    if(size==0)
    {
        return 0;
    }
    else 
    {   
        int q=-10000000;
        for(int i=0;i<size;i++)
        {
            q=max(q,price[i]+plot_divide(price,(size-1)-i));
        }
        return q;
    }
}

int main()
{
    int s; //variable to take the size of the plot from user
    cout<<"Enter the size of the plot ";
    cin>>s;
    int size = s/100;
    int pr[8]={15000,75000,120000,135000,150000,255000,255000,300000};
    cout<<"\nThe final amount after max plot division is: ";
    cout<<plot_divide(pr,size)<<endl;
    return 0;
}