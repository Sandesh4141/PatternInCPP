#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout<<"Enter no of row:";
    cin>>row;
    cout<<"Enter no of Columns:";
    cin>>col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    


    return 0;
}