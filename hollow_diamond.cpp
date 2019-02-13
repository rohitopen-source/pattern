#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i;
    for(i=0;i<n;i++)
    {cout<<"*"<<" ";}
    cout<<endl;
    i=0;
    while(i<n/2)
    {
        int j=0;
        while(j<n/(i+2))
        {
            cout<<"*"<<" ";
            j++;
        }
        j=0;
        while(j<2*i+1)
        {
            cout<<"  ";
            j++;
        }
        j=0;
        while(j<n/(i+2))
        {
            cout<<"*"<<" ";
            j++;
        }
        cout<<endl;
        
        i++;
    }
    i=0;
    while(i<n/2-1)
    {
        
        int j=0;
        while(j<i+2)
        {
            cout<<"*"<<" ";
            j++;
        }
        j=0;
        while(j<(n/2+1-(2*i)))
        {
            cout<<"  ";
            j++;
        }
        
        j=0;
        while(j<i+2)
        {
            cout<<"*"<<" ";
            j++;
        }
        cout<<endl;
        i++;
    
        
    }
    
    for(i=0;i<n;i++)
    {cout<<"*"<<" ";}
    
    
	return 0;
}
