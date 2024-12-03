#include <stdio.h>
#define ngay 31
void nhapsotienchitieu(float a[], int n);
void xuatchitieutungngay(float a[],int n);
float tongsochitieu(float a[], int n);
float trungbinhchitieu(float a[],int n);
int timngaycaonhat(float a[], int n);
int timngaythapnhat(float a[], int n);

int main()
{
	int n;
	float a[ngay];
	do
	{
		printf("So ngay chi tieu (28<=n<=31): ");
		scanf("%d",&n);
	}while(n<28||n>31);
	nhapsotienchitieu(a,n); printf("\n");
	xuatchitieutungngay(a,n); printf("\n");
	printf("Tong so chi tieu trong thang: %.1f\n",tongsochitieu(a,n));
	printf("Trung binh chi tieu moi ngay: %.1f\n",trungbinhchitieu(a,n));
	printf("Ngay chi tieu cao nhat: Ngay %d\n",timngaycaonhat(a,n));
	printf("Ngay chi tieu thap nhat: Ngay %d\n",timngaythapnhat(a,n));
	
	return 0;
}

void nhapsotienchitieu(float a[], int n)
{
	for(int i=0; i<n; i++)
	{
		printf("Ngay %d: ",i+1);
		scanf("%f",&a[i]);
	}
}

void xuatchitieutungngay(float a[],int n)
{
	printf("Chi tieu tung ngay: ");
	for(int i=0; i<n; i++)
	{
		printf("Ngay %d : %.1f dong\n ",i+1,a[i]);
	}
}
float tongsochitieu(float a[], int n)
{
	float S=0;
	for(int i=0; i<n; i++)
	{
		S+=a[i];
	}
	return S;
}

float trungbinhchitieu(float a[], int n)
{
	float tb=0;
	for(int i=0; i<n; i++)
	{
		tb+=a[i];
	}
	return tb/n;
}

int timngaycaonhat(float a[], int n)
{
	int max=a[0];
	int x=1;
	for(int i=0; i<n; i++)
	{
		if(max<a[i])
		{
			x=i+1;
			max=a[i];
		}
	}
	return x;
}

int timngaythapnhat(float a[],int n)
{
	int min=a[0];
	int y=1;
	for(int j=0; j<n; j++)
	{
		if(min>a[j])
		{
			y=j+1;
			min+a[j];
		}
	}
	return y;
}




















