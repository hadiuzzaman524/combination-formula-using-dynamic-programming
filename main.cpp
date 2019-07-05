#include <iostream>
using namespace std;
	int m[10][10];
int combination(int n,int r)
{
    for(int i=0; i<10;i++)
	{
	    for(int j=0;j<=i;j++)
	    {
	        if(j==0)
	        m[i][j]=1;

	     else if(i==j)
	       m[i][j]=1;
	       else

	    m[i][j]=m[i-1][j-1]+m[i-1][j];

	    }
	}
	for(int i=0;i<10;i++)
    {
        for(int j=0; j<=i; j++)
            cout<<m[i][j]<< " ";
        cout<<endl;
    }
	return m[n][r];

}
int main() {
    int n,r;
    cout<< "enter nCr: ";
    cin>>n>>r;

	int x=combination(n,r);
	cout<<x<<endl;

	return 0;
}
