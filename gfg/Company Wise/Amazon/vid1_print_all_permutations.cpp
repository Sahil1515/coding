#include <bits/stdc++.h>
using namespace std;

void permute(string str,int l,int r)
{
    if(l==r)
    {
            cout<<str;
             cout<<" ";
    }
   
    else{
        for(int i=l;i<=r;i++)
        {
            swap(str[i],str[l]);
            permute(str,l+1,r);
            swap(str[i],str[l]);
        }
    }
    
}
int main() {
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    string str;
	    cin>>str;
	    permute(str,0,str.size()-1);
	    cout<<"\n";
	    
	}
	return 0;
}
