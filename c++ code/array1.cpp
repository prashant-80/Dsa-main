#include<iostream>
using namespace std;

int main()
{
// int mat[3][3]={5,6,7,   1,4,9,   6,7,3};    //[row][column];

// cout<<"3*3 matrix\n\n";
// for (int i = 0; i < 3; i++)
// {
//     /* code */for (int  j = 0; j < 3; j++)
//     {
//         /* code */    cout<<mat[i][j]<<" ";
        
//     }
//     cout<<"\n";
// }

int mat[3][3];
int mat2[3];
int i,j;

cout<<"enter the matrix 1";
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        cin>>mat[i][j];
    }
}

    cout<<"enter the matrix 2";
for(int i=0;i<3;i++)
{
    
    
        cin>>mat2[i];
    
}

cout<<"The 2d matrix is \n";
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        cout<<"\t"<<mat[i][j];
    }
    cout<<"\n";
}
cout<<"The array is ";
for(int i=0;i<3;i++)
{
    
    
        cout<<mat2[i];
        cout<<"\n";
    
}

    
     




    
    
// }
// cout<<"matrix\n\n";
// for(int i=0;i<3;i++)
// {
//     for(int j=0;j<3;j++) 
//     {
//         if(mat[i][j]%2==0)
//         cout<<mat[i][j];
//     }
//     cout<<"\n";
// }



 
    return 0;
}