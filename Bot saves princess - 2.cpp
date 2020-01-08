#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,posmi,posmj,posp[2];
    cin>>n;
    cin>>posmi>>posmj;
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
            if(a[i][j]=='p')
            {
                posp[0]=i;
                posp[1]=j;
              
            }
            
        }
    }
    int ud,lr;
    ud=abs(posp[0]-posmi);
    lr=abs(posp[1]-posmj);
    if(posp[0]-posmi>0)
    {     
        cout<<"DOWN"<<endl;    
    }
    else if(posp[1]-posmj>0)
    {         
            cout<<"RIGHT"<<endl;                 
    }
    else
    {
    if(posp[0]-posmi<0)
    {            
                cout<<"UP"<<endl;            
    }    
    else if(posp[1]-posmj<0)
    {        
            cout<<"LEFT"<<endl;        
    }
    }
    
    
    return 0;
}
