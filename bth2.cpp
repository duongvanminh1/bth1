#include<stdio.h>
#include<conio.h>
#include<math.h>
void nhapmang(int a[10],int n);
void xuatmang(int a[10],int n);
int max(int a[10],int n);
void tinhtich(int a[10],int n);
int demsnt(int a[10],int n);
void tongnt(int a[10],int n);
void nhapx(int a[10],int m,int n);
void sapxepmang(int a[10],int n);




int main()//1. H�m main() cho ph�p nh�p s� ph�n tu cua mang
{
	int n;
	int a[10];
	int x;
	int m;
	printf("\nNhap so phan tu cua mang= ");
	scanf("%d",&n);
	nhapmang(a,n);
	xuatmang(a,n);
	max(a,n);
	tinhtich(a,n);
	demsnt(a,n);
	tongnt(a,n);
	nhapx(a,m,n);
	sapxepmang(a,n);
}



//2. Nh�p mang m�t chi�u g�m n ph�n tu l� s� nguy�n
void nhapmang(int a[10],int n)
{
	int i;
	for(int i=0;i<n;i++)
	{
	    printf("\nNhap phan tu thu a[%d]= ",i);
	    scanf("%d",&a[i]);
    }
}



//3. Xu�t mang vua nh�p
void xuatmang(int a[10],int n)
{
	 printf("\nPhan tu cua mang la:  ");
	for(int i=0;i<n;i++)
	{
	    printf("  %d  .  ",a[i]);
    }
}



//4. T�m gi� tri lon nh�t trong mang
int max(int a[10],int n)
{
	int max=a[0];
	for(int i=0;i<n;i++)
	    if(max<a[i])
	       max=a[i];
	printf("\n\nGia tri lon nhat mang la: %d",max);
}



//5. T�nh t�ch c�c ph�n tu trong trong mang.
void tinhtich(int a[10],int n)
{
	int tich=1;
	int i;
	printf("\n\nTich cac phan tu trong mang la: ");
	for(int i=0;i<n;i++)
	{
	   tich=tich*a[i];
	}
	printf("%d",tich);
}



//6. ��m v� t�nh tung c�c ph�n tu nguy�n tu trong mang
bool ktsnt(int n)
{
	if(n<2)
	{
		return false;
	}
	else if(n>2)
	{
		if(n%2==0)
		{
			return false;
	    }
	    for(int i=3;i<=sqrt((float)n);i+=2)
	    {
		    if(n%i==0)
	    	{
			    return false;
		    }
	    }
    }
    return true;
}
int demsnt(int a[10],int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(ktsnt(a[i])==true)
		{
			dem++;
		}
	}
	printf("\n\nSo luong cac so nguyen to la: %d",dem);
}
void tongnt(int a[10],int n)
{
	int tong=0;
	for(int i=0;i<n;i++)
	{
		if(ktsnt(a[i])==true)
		{
			tong=tong+a[i];
		}
	}
	printf("\n\nTong cac so nguyen to cua mang la: %d",tong);
}



//7. Nhap v�o mot gi� tri x, in vi tr� c�c phan tu c� gi� tri bang x (neu c�), nguoc lai xu�t th�ng b�o.
//Nhap X
void nhapx(int a[10],int m,int n)
{
	printf("\n\nNhap vao gia tri X= ");
	scanf("%d",&m);
	{
	for(int i=0;i<n;i++)
	    {
		    if(m==a[i])
	        printf("\nVi tri phan tu co gia tri bang X la: a[%d]",i);
    	}
    }
	printf("\nKhong co vi tri phan tu nao bang X");
}

void sapxepmang(int a[10],int n)
{
	int tam;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				tam=a[i];
				a[i]=a[j];
				a[j]=tam;
			}
		}
	}
	printf("\n\nMang sap xep theo thu tu tang dan la: ");
	for(int i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}





