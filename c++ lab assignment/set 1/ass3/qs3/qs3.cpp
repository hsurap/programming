 #include <iostream>
using namespace std;
inline int cube(int c)
{
    int ans=c*c*c;
    return ans;
}
int main()
{
    int c;
    cin>>c;
    cout<<cube(c);
}

