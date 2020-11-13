  #include<iostream>
  using namespace std;
  int main()
  {
      int n;
      cin>>n;
      int x,y;
      cin>>x>>y;
      int ar[x][y];
      for(int i=0;i<x;i++)
      {
          for(int j=0;j<y;j++)
          {
              cin>>ar[i][j];
          }
      }
      int r=0,c=y-1;
      while(r<x&&c>=0)
      {
          if(ar[r][c]==n)
          {
              cout<<"yes";
              break;
          }
          else if(ar[r][c]<n)
          {
              r++;
          }
          else
            c--;
      }
  }
