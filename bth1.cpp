#include<stdio.h>
#include<conio.h>
int tinhgiaithua(int n);
int tinhtong(int a,int b);
int tinhdtHCN(int a,int b);
int timUCLN(int a,int b);
int kiemtraSNT(int n);
void hoanvi(int a,int b);
int KTNT(int n);

int main()
{
	int n;
	int a;
	int b;
	printf("\n\tHello World!!");
	tinhgiaithua(n);
	tinhtong(a,b);
	tinhdtHCN(a,b);
	timUCLN(a,b);
	kiemtraSNT(n);
	hoanvi(a,b);
}

int tinhgiaithua(int n)
{
	printf("\n\n\tNhap so nguyen duong N= ");
	scanf("%d",&n);
		int gt=1;
		for(int i=1;i<=n;i++)
			gt=gt*i;
	printf("\n\tGiai thua cua so nguyen duong %d! la: %d",n,gt);
return 0;
}

int tinhtong(int a,int b)
{
	int tong=0;
	printf("\n\n  TINH TONG HAI SO NGUYEN DUONG");
	printf("\n\n\tNhap so nguyen thu nhat= ");
	scanf("%d",&a);
	printf("\n\tNhap so nguyen thu hai= ");
	scanf("%d",&b);
	tong=a+b;
	printf("\n\tTong hai so nguyen vua nhap la: %d",tong);
return 0;
}

int tinhdtHCN(int a,int b)
{
	int dt=0;
	printf("\n\n  TINH DIEN TICH HINH CHU NHAT");
	printf("\n\n\tNhap chieu dai HCN= ");
	scanf("%d",&a);
	printf("\n\tNhap chieu rong HCN= ");
	scanf("%d",&b);
	dt=a*b;
	printf("\n\tDien tich HCN la: %d",dt);
return 0;
}


int timUCLN(int a,int b)
{	int i;
	printf("\n\nTIM UOC CHUNG LON NHAT");
	printf("\n\n\tNhap so nguyen thu nhat= ");
	scanf("%d",&a);
	printf("\n\tNhap so nguyen thu hai= ");
	scanf("%d",&b);

        	int k;
            if(a>b)
                k=b;
            for(int i=k;i>0;i--)
            {
            	if(a%i==0 && b%i==0)
            	printf("%d",i);
            	break;
			}	
return 0;
}


int kiemtraSNT(int n)
{
	printf("\nKIEM TRA SO NGUYEN TO");
	printf("\n\n\tNhap so nguyen N= ");
	scanf("%d",&n);
    KTNT(n);
}


void hoanvi(int a,int b)
{
	printf("\n\nHOAN VI");
	printf("\n\tNhap so A= ");
	scanf("%d",&a);
    printf("\n\tNhap so B= ");
	scanf("%d",&b);
	printf("\n\tBan da nhap: A= %d : B= %d ",a,b);
	int tam=a;
	      a=b;
	      b=tam;
	printf("\n\tSau khi hoan vi la: A= %d : B= %d ",a,b);
}


int KTNT(int n)
{
	int dem=0;
	for(int i=2;i<=n;i++)
	{
		if(n%i==0)
		dem++;
	}
	if(dem==1)
	    printf("\n\t%d la so nguyen to",n);
	else
	    printf("\n\t%d khong phai la so nguyen to",n);
return dem;
}


