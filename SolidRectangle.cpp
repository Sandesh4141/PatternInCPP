//solid rectangle of n rows and columns
#include <iostream>
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter no of Rows:-"<<endl;
    cin>>row;
    cout<<"Enter no of Colums:"<<endl;
    cin>>col;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}