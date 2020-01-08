#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,posm[2],posp[2];
    cin>>n;
    char a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]=='m')
            {
                posm[0]=i;
                posm[1]=j;
                
            }
            if(a[i][j]=='p')
            {
                posp[0]=i;
                posp[1]=j;
              
            }
            
        }
    }
    int ud,lr;
    ud=abs(posp[0]-posm[0]);
    lr=abs(posp[1]-posm[1]);
    if(posp[0]-posm[0]>0)
    { 
        while(ud--)
        {
            cout<<"DOWN"<<endl;
        }
        
    
    }
    else
    {
            while(ud--)
            {
                cout<<"UP"<<endl;
            }
    }
    
    if(posp[1]-posm[1]>0)
    { 
        while(lr--)
        {
            cout<<"RIGHT"<<endl;
        }
    }
    else
    {
        while(lr--)
        {
            cout<<"LEFT"<<endl;
        }
    }
    return 0;
}
