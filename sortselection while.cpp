#include<iostream>
#include<limits.h>

using namespace std;
int V[100];
int n;
int main()
{
    cout<<"n=";
    cin>>n;
    int i=1;
    while (i<=n)
    {
        cout<<"V["<<i<<"]=";
        cin>>V[i];
        i++;
    }
    i=1;
    while(i<=n-1)
    {
        int minim=INT_MAX;
        int locul=0;
        int j=i;
        while(j<=n)
        {
            {
                if (V[j]<minim)
                {
                    minim=V[j];
                    locul=j;
                }
                j++;
            }
            swap(V[i],V[locul]);
        }
        i++;
    }

    cout<<endl<<"Sortate "<<endl;
    i=1;
    while(i<=n)
    {
        cout<<V[i]<<" ";
        i++;
    }
}
