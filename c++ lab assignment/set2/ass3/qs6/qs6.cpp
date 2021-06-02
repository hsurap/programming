#include<iostream>
using namespace std;
class DM{
	public:
	int n;
	int m;
	int arr[][0];


		DM(int j,int k){
			n=j;
			m=k;
			arr[n][m];
		}
		void getdata(){
			cout<<"Enter array elements"<<endl;
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					cin>>arr[i][j];
				}
			}
		}
		void getdata0(){
			for(int i = 0; i <n; ++i)
        for(int j = 0; j <m; ++j)
        {
            arr[i][j]=0;
        }
		}
		void display(){
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					cout<<" "<<arr[i][j];
		}
		cout<<"\n";
		}
		cout<<"\n"<<endl;
		}
		DM mu(DM ob,DM ob1){
			DM t(ob.n,ob1.m);
			t.getdata0();
			for(int i = 0; i <ob.n; ++i)
        for(int j = 0; j <ob1.m; ++j)
            for(int k = 0; k <ob.m; ++k)
            {
                t.arr[i][j] += ob.arr[i][k] * ob1.arr[k][j];
            }
            return t;

		}
		};
		int main(){
			cout<<"Enter size"<<endl;
			int n;
			int m;
			cin>>n>>m;
			DM ob(n,m);
			cout<<"Enter size"<<endl;
			int n1;
			int m1;
			cin>>n1>>m1;
			DM ob1(n1,m1);
			ob.getdata();
			ob1.getdata();
			ob.display();
			ob1.display();

}

