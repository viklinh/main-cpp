#include<bits/stdc++.h>
#include<fstream>
using namespace std;

void nhapmang(int *a, int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap a["<<i<<"]=";
		cin>>*(a+i);
	}
}

void sapxep(int *a, int n)
{
	for(int i=0;i<n-1;i++)
	   for(int j=n-1;j>i;j--)
	      if(a[j]>a[j-1]) swap(a[j],a[j-1]);
	cout<<endl<<"Mang sau khi sap xep la: ";
	for(int i=0;i<n;i++)
	   cout<<"\t"<<*(a+i);
	fstream f;
	f.open("file.txt",ios::out);
	f<<"Mang sau khi sap xep la:";
	for(int i=0;i<n;i++)
	   f<<"\t"<<*(a+i);
	f.close();
}

void tong(int *a, int n)
{
	int T=0;
	for(int i=0;i<n;i++)
	   if(a[i]%3==0&&a[i]%4==0) T+=a[i];
	if(T==0) cout<<endl<<"======================================================================================="
	<<endl<<"Mang khong co phan tu nao chia het cho ca 3 va 4";
	else cout<<endl<<"======================================================================================="
	<<endl<<"Tong cac phan tu chia het cho ca 3 va 4 la:"<<T;
}

void chenso2023(int *a, int n)
{
	int *b = new int [n+1];
	*(b+0)=2023;
	for(int i=0;i<=n;i++)
	   b[i+1]=a[i];
	cout<<endl<<"======================================================================================="
	<<endl<<"Mang sau khi chen so la: ";
	for(int i=0;i<n+1;i++)
	   cout<<"\t"<<*(b+i);
	
}

void kiemtra(int *a, int n)
{
	int kt=0;
	for(int i=0;i<n;i++)
	   if(a[i]>100) kt=1;
	   else kt=0;
	if(kt==1) cout<<endl<<"======================================================================================="
	<<endl<<"Mang hop le vi tat ca cac phan tu deu >100";
	else cout<<endl<<"======================================================================================="
	<<endl<<"Mang khong hop le vi trong mang co phan tu<100";
}

int main()
{
	int n;
	do
	{
		cout<<"Nhap so phan tu trong mang: ";
		cin>>n;
	} while(n<0);
	int *a = new int [n];
	nhapmang(a,n);
	sapxep(a,n);
	tong(a,n);
	chenso2023(a,n);
	kiemtra(a,n);
	return 0;
}


