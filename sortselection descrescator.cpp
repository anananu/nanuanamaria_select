#include<iostream>
#include<limits.h>

using namespace std;
int V[100];
int n;
int main()
{cout<<"n=";cin>>n;
  for(int i=1;i<=n;i++)
     {cout<<"V["<<i<<"]=";
      cin>>V[i];}

  for(int i=1;i<=n-1;i++)
     {int maxim=INT_MIN;
      int locul=0;
      for(int j=i;j<=n;j++)
        {if (V[j]>maxim) {maxim=V[j];
                          locul=j;}}
        swap(V[i],V[locul]);}

cout<<endl<<"Sortate "<<endl;
for(int i=1;i<=n;i++)
    cout<<V[i]<<" ";
}
