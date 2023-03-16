#include<bits/stdc++.h>
using namespace std;
int b[1005][1005];
int h[4]={0};
int n;
void count(int i,int j)
{
    if(i<0 || j<0 || i>=n || j>=n)
        return ;
    if(b[i][j]!=0 && b[i][j]!=1)
    {
        b[i][j]=0;
        count(i-1,j);
        count(i,j-1);
        count(i+1,j);
        count(i,j+1);
        count(i+1,j+1);
        count(i-1,j+1);
        count(i+1,j-1);
        count(i-1,j-1);
    }
}
int main()
{
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
            b[i][j]=a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]==2)
            {
                if((i-1)>=0 && a[i-1][j]==1 && b[i-1][j]<2)
                    b[i-1][j]=2;
                if((j-1)>=0 && a[i][j-1]==1 && b[i][j-1]<2)
                    b[i][j-1]=2;
                if((i+1)<n && a[i+1][j]==1 && b[i+1][j]<2)
                    b[i+1][j]=2;
                if((j+1)<n && a[i][j+1]==1 && b[i][j+1]<2)
                    b[i][j+1]=2;
                if((i+1)<n && (j+1)<n && a[i+1][j+1]==1 && b[i+1][j+1]<2)
                    b[i+1][j+1]=2;
                if((i+1)<n && (j-1)>=0 && a[i+1][j-1]==1 && b[i+1][j-1]<2)
                    b[i+1][j-1]=2;
                if((i-1)>=0 && (j+1)<n && a[i-1][j+1]==1 && b[i-1][j+1]<2)
                    b[i-1][j+1]=2;
                if((i-1)>=0 && (j-1)>=0 && a[i-1][j-1]==1 && b[i-1][j-1]<2)
                    b[i-1][j-1]=2;
            }
            else if(a[i][j]==3)
            {
                if((i-1)>=0 && b[i-1][j]<3 && a[i-1][j]==1)
                    b[i-1][j]=3;
                if((j-1)>=0 && b[i][j-1]<3 && a[i][j-1]==1)
                    b[i][j-1]=3;
                if((i+1)<n && b[i+1][j]<3 && a[i+1][j]==1)
                    b[i+1][j]=3;
                if((j+1)<n && b[i][j+1]<3 && a[i][j+1]==1)
                    b[i][j+1]=3;
                if((i+1)<n && (j+1)<n && b[i+1][j+1]<3 && a[i+1][j+1]==1)
                    b[i+1][j+1]=3;
                if((i+1)<n && (j-1)>=0 && b[i+1][j-1]<3 && a[i+1][j-1]==1)
                    b[i+1][j-1]=3;
                if((i-1)>=0 && (j+1)<n && b[i-1][j+1]<3 && a[i-1][j+1]==1)
                    b[i-1][j+1]=3;
                if((i-1)>=0 && (j-1)>=0 && b[i-1][j-1]<3 && a[i-1][j-1]==1)
                    b[i-1][j-1]=3;
            }
            else if(a[i][j]==4)
            {
                if((i-1)>=0 && b[i-1][j]<4 && a[i-1][j]==1)
                    b[i-1][j]=4;
                if((j-1)>=0 && b[i][j-1]<4 && a[i][j-1]==1)
                    b[i][j-1]=4;
                if((i+1)<n && b[i+1][j]<4 && a[i+1][j]==1)
                    b[i+1][j]=4;
                if((j+1)<n && b[i][j+1]<4 && a[i][j+1]==1)
                    b[i][j+1]=4;
                if((i+1)<n && (j+1)<n && b[i+1][j+1]<4 && a[i+1][j+1]==1)
                    b[i+1][j+1]=4;
                if((i+1)<n && (j-1)>=0 && b[i+1][j-1]<4 && a[i+1][j-1]==1)
                    b[i+1][j-1]=4;
                if((i-1)>=0 && (j+1)<n && b[i-1][j+1]<4 && a[i-1][j+1]==1)
                    b[i-1][j+1]=4;
                if((i-1)>=0 && (j-1)>=0 && b[i-1][j-1]<4 && a[i-1][j-1]==1)
                    b[i-1][j-1]=4;
            }
            if(a[i][j]==5)
            {
                if((i-1)>=0 && b[i-1][j]<5 && a[i-1][j]==1)
                    b[i-1][j]=5;
                if((j-1)>=0 && b[i][j-1]<5 && a[i][j-1]==1)
                    b[i][j-1]=5;
                if((i+1)<n && b[i+1][j]<5 && a[i+1][j]==1)
                    b[i+1][j]=5;
                if((j+1)<n && b[i][j+1]<5 && a[i][j+1]==1)
                    b[i][j+1]=5;
                if((i+1)<n && (j+1)<n && b[i+1][j+1]<5 && a[i+1][j+1]==1)
                    b[i+1][j+1]=5;
                if((i+1)<n && (j-1)>=0 && b[i+1][j-1]<5 && a[i+1][j-1]==1)
                    b[i+1][j-1]=5;
                if((i-1)>=0 && (j+1)<n && b[i-1][j+1]<5 && a[i-1][j+1]==1)
                    b[i-1][j+1]=5;
                if((i-1)>=0 && (j-1)>=0 && b[i-1][j-1]<5 && a[i-1][j-1]==1)
                    b[i-1][j-1]=5;
            }
        }
    }
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           if(b[i][j]==5)
           {
               h[3]++;
               count(i,j);
           }
       }
   }
    for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           if(b[i][j]==4)
           {
               h[2]++;
               count(i,j);
           }
       }
   }
    for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           if(b[i][j]==3)
           {
               h[1]++;
               count(i,j);
           }
       }
   }
    for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           if(b[i][j]==2)
           {
               h[0]++;
               count(i,j);
           }
       }
   }
    for(int i=0;i<4;i++)
        cout<<h[i]<<" ";
}
