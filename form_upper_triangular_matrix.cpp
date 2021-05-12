#include<iostream>
using namespace std;
int main()
{
    int i,j,n,k,a,x;
    float mat[100][100],factor,divisor;
    //reading the matrix
    cout<<"enter the order of the  square matrix\n";
    cin>>n;
    cout<<"enter the elements row wise\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){
            cin>>mat[i][j];
        }
         }
         cout<<"your entered matrix is:\n";
         for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
         }
         //calculation of upper triangular matrix
         i=j=0;
         while(i<n-1 && j<n-1)
         {
             divisor = mat[i][j];
             mat[i][j] = 1.0;
             for(k=j+1;k<n;k++)
             {
                 mat[i][k] = mat[i][k]/divisor*1.0; 
             }
                 for(a=i+1;a<n;a++)
                 {
                     factor = mat[a][j];
                     mat[a][j] = 0.0;
                     for(x=j+1;x<n;x++)
                     {
                         mat[a][x] = mat[a][x] - mat[i][x]*factor*1.0;
                     }
                     }
                  
                    i++;
                    j++;
                    } 
                    //time for the result now!
                    cout<<"upper triangular matrix :\n";
                    for(i=0;i<n;i++){
                        for(j=0;j<n;j++)
                        {
                            cout<<mat[i][j]<<" ";
                        }
                        cout<<"\n";
                    }
                    return 0;
                            }