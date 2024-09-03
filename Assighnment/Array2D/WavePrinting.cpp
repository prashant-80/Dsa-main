#include<iostream>
using namespace std;
int main()
{
    
    int arr[3][3];
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
       int direction=0;
       int n=3;
        for(int j=0;j<n;j++)
        {
            //even column -> down to up 
                // if(j%2==0)
                // {
                //     for(int i=2;i>=0;i--)
                //     {
                //         cout<<arr[i][j]<<" ";
                //     }
                // }

                // else
                // {   
                //  for(int i=0;i<3;i++)
                //     {
                //         cout<<arr[i][j]<<" ";
                //     }
                // }

            //alternate approach
            for(int i=0;i<n;i++){
                if(direction==0){
                    cout<<arr[n-i-1][j]<<" ";
                }
                else if(direction==1){
                    cout<<arr[i][j]<<" ";
                }
            }
            direction=(direction+1)%2;

        }

}