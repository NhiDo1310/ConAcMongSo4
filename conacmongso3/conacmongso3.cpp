#include <stdio.h>
#include<Windows.h>
#include<conio.h>
#define MAX 100
#include <math.h>
void NhapN(long& n)
{
	printf("\nNhap Vao So Nguyen : ");
	scanf_s("%ld", &n);
}
void XuatN(long n)
{
	printf("So Ban Vua Nhap Vao La:%ld", n);
}

int XuLyDuLieu(int a[], long n)
{
	int i = 0;
	while (n != 0)
	{
		a[i] = n % 10;
		n = n / 10;
		i++;
	}
	return i;
}

void LietKeCacChuSo(int a[], long n)
{
	int s = XuLyDuLieu(a, n);
	printf("\nCac Chu So Cua So %ld La:", n);
	for (int k = s - 1; k >= 0; k--)
	{
		printf("%4d", a[k]);
	}
}
void ChuSoDauTien(int a[], long n)
{
	int s = XuLyDuLieu(a, n);
	printf("\nChu So Dau Tien Cua %ld La:%d", n, a[s - 1]);
}

void TongCacChuSo(int a[], long n)
{
	int s = XuLyDuLieu(a, n);
	int tong = 0;
	for (int k = s - 1; k >= 0; k--)
	{
		tong += a[k];
	}
	printf("\nTong Cac Chu So Cua So %ld La:%d", n, tong);
}

void ChuSoLonNhat(int a[], long n)
{
	int s = XuLyDuLieu(a, n);
	int max = a[0];
	for (int k = 1; k < s; k++)
	{
		if (a[k] > max)
		{
			max = a[k];
		}
	}
	printf("\nChu So Lon Nhat Cua So %ld La:%d", n, max);
}
void DemSoChuSo(int a[], long n)
{
	int s = XuLyDuLieu(a, n);
	printf("\nSo Luong Cac Chu So Cua So %ld La:%d", n, s);
}
void HoanVi(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}
void KiemTraChuSoKhacNhauDoiMot(int a[], long n)
{
	int s = XuLyDuLieu(a, n);
	int dem = 0;
	for (int k = 0; k < s; k++)
	{
		for (int l = k + 1; l < s; l++)
		{
			if (a[k] > a[l])
			{
				HoanVi(a[k], a[l]);
			}
		}
	}
	printf("\nSo %ld Co Cac Chu So Khac Nhau Doi Mot Hay Khong ? ", n);
	for (int k = 1; k < s; k++)
	{
		if (a[k] != a[k - 1])
		{
			dem++;
		}
	}
	if (dem == s - 1)
	{
		printf("\nYES");
	}
	else
	{
		printf("\nNO");
	}
}

void MeNu()
{
	int a[MAX];
	long n, tieptuc;
quaylai:NhapN(n);
	printf("\n");
	XuatN(n);
	printf("\n");
	LietKeCacChuSo(a, n);
	printf("\n");
	ChuSoDauTien(a, n);
	printf("\n");
	TongCacChuSo(a, n);
	printf("\n");
	ChuSoLonNhat(a, n);
	printf("\n");
	DemSoChuSo(a, n);
	printf("\n");
	KiemTraChuSoKhacNhauDoiMot(a, n);
	printf("\n");
	printf("\nBan co muon tiep tuc thuc hien chuong trinh hay khong ? Neu co bam phim C,nguoc lai bam bat ky 1 phim nao khac de ket thuc!");
	tieptuc = _getch();
	if (tieptuc == 'c' || tieptuc == 'C')
	{
		system("cls");
		goto quaylai;
	}
}

int main()
{
	printf("-------------MENU-----------");
	printf("\n1.Viet chuong trinh nhap so nguyen lon N co k chu so.\n-tim chu so hang dau tien cua N.\n-tinh tong cac chu so cua N.\n-tim chu so lon nhat trong k chu so do.\n-dem so chu so cua N.\n-N co phai la so co cac chu so khac nhau doi mot khong?");
	printf("\n3.Nhap n>=1.Tinh S(n)=1-2+3-4+...+(-1)^n-1*n.");
	printf("\n4.nhap n>=1.Tinh S(n)= 1+1/2+1/3+...+1/n");
	printf("\n5.nhap n>=1.Tinh S(n)=1+1/3+1/5+...+1/2n+1");
	printf("\n6.nhap n>=1.Tinh S(n)= 1/1*2+1/2*3+...+1/n*(n+1)");
	printf("\n7.nhap n>=1.Tinh S(n)=1/2+2/3+...+n/n+1");
	printf("\n8. nhap n>=0.Tinh S(n)= 1/2+3/4+...+2n+1/2n+2");
	printf("\n9.Nhap x,n. Tinh(x,n)=x^n");
	printf("\n10.Nhap x,n. Tinh S(x,n)=x+x^2+x^3+...+x^n");
	printf("\n11.Nhap x,n. Tinh S(x,n)=-x+x^2-x^3+...+(-1)^n*x^n");
	printf("\n---------------------------");
	int bai;
	printf("\nvui long nhap mot bai de chay:");
	scanf_s("%d", &bai);
	switch (bai) {
	case 1: {
		MeNu();
		/*int themang, i, tong, m, temp;
		int dem = 0;
		int max = 0;
		tong = 0;
		int a = 0;
		long n;
		do
		{
			printf("\nNhap vao so nguyen duong n: ");
			scanf_s("%d", &n);
		} while (n < 0 && printf("\nSo n phai lon hon hoac bang 0!!"));
		themang = n;
		do
		{
			i = themang % 10;
		} while (themang /= 10);

		printf("\nChu so dau tien la %d", i);
		while (n > 0)
		{
			m = n % 10;
			tong = tong + m;
			n = n / 10;
		}
		printf("\nTong cac chu so cua so da cho:%d", tong);
		temp = n;
		do {
			printf("\n------------------------------");
			printf("\nnhap lai so nguyen duong n: ");
			scanf_s("%d",  &n);
		} while (n < 0 && printf("\nSo n phai lon hon hoac bang 0!!"));
		temp = n;
		if (n == 0)
			max = 0;
		do
		{
			i = n % 10;
			if (i > max)
			{
				max = i;
			}
		} while (n /= 10);
		printf("\nChu so lon nhat trong trong %d la: %d", temp, max);
		for(i=1; i<n; i++){
			dem++;
		}
		printf("\nso n co %d chu so", dem);*/
				
	}break;
	case 3: {
		int n;
		printf("\nnhap so nguyen N:");
		scanf_s("%d", &n);
		if (n < 1)
			printf("\nvui long nhap so n lon hon hoac bang 1");
		long S = 0;
		long tmp = 1;
		for (int i = 1; i <= n; i++)
		{
			S += tmp * i;
			tmp *= -1;
		}
		printf("\nTong la 1-2+3-4+...+(-1)^n-1*n:%ld", S);
	}break;
	case 4: {
		int n;
		float S;
		S = 0;
		printf("\nnhap so nguyen n: ");
		scanf_s("%d", &n);
		if (n < 1)
			printf("\nvui long nhap so n lon hon hoac bang 1");
		for (int i = 1; i <= n; i++) {
			S = S + (float)1 / i;
		}
		printf("\ntong 1+1/2+1/3+...+1/n la:%.2f", S);
	}break;
	case 5: {
		int  n;
		float S;
		S = 0;
		printf("\nnhap so nguyen n: ");
		scanf_s("%d", &n);
		if (n < 1)
			printf("\nvui long nhap so n lon hon hoac bang 1");
		for (int i = 1; i <= n; i++) {
			S = S + (float)1 / ((2 * i) + 1);
		}
		printf("\ntong cua 1+1/3+1/5+...+1/2n+1:%.2f", S);
	}break;
	case 6: {
		int n;
		float S;
		S = 0;
		printf("\nnhap so nguyen n: ");
		scanf_s("%d", &n);
		if (n < 1)
			printf("\nvui long nhap so n lon hon hoac bang 1");
		for (int i = 1; i <= n; i++) {
			S = S + (float)1 / (i * (i + 1));
		}
		printf("\ntong cua 1/1*2+1/2*3+...+1/n*(n+1) la:%.2f ", S);
	}break;
	case 7: {
		int n;
		float S;
		S = 0;
		printf("\nnhap so nguyen n: ");
		scanf_s("%d", &n);
		if (n < 1)
			printf("\nvui long nhap so n lon hon hoac bang 1");
		for (int i = 1; i <= n; i++) {
			S = S + (float)i / (i + 1);
		}
		printf("\ntong cua 1/2+2/3+...+n/n+1:%.2f", S);
	}break;
	case 8: {
		int i, n;
		float S;
		S = 0;
		printf("\nnhap so nguyen n: ");
		scanf_s("%d", &n);
		if (n <= 0)
			printf("\nvui long nhap so n lon hon 0");
		for (int i = 1; i <= n; i++) {
			S = S + (float)(2 * i + 1) / (2 * i + 2);
		}
		printf("\ntong 1/2+3/4+...+2n+1/2n+2 la:%.2f", S);
	}break;
	case 9: {
		float  x, n, so_mu;
		printf("\nnhap so nguyen x trong x^n:");
		scanf_s("%f", &x);
		printf("\nnhap so nguyen n trong x^n:");
		scanf_s("%f", &n);
		if (x == 0)
			printf("\nphep tinh co ket qua bang: 0");
		for (int i = 0; i <= n; i++)
			so_mu = pow(x, n);
		printf("\nket qua phep tinh x^n la:%f", so_mu);
	}break;
	case 10: {
		int n;
		float x, T = 1, S = 0;
		printf("\nNhap vao so x: ");
		scanf_s("%f", &x);
		printf("\nNhap vao so n: ");
		scanf_s("%d", &n);
		for (int i = 1; i <= n; i++) {
			T = T * x;
			S = S + T;
		}
		printf("\nket qua bieu thuc x+x^2+x^3+...+x^n la:%f", S);
	}break;
	case 11: {
		int n, x;
		printf("\n-nhap vao so nguyen n  : ");
		scanf_s("%d", &n);
		printf("\n-nhap vao so nguyen x : ");
		scanf_s("%d", &x);
		if (n >= 1)
			printf("\ndau vao hop le ");
		else
			printf("\n  dau vap khong hop le ");
		while (n < 1) {
			printf("\nVui long nhap n lon hon hoac bang 1 ");
		}
		float S = 0;
		S = 0;
		for (int i = 1; i <= n; i++) {
			S = S + pow(-1, i) * pow(x, i);

		}
		printf("\n tong la %.2f", S);

	}break;
	default:
		printf("\ndau vao khong hop le, vui long nhap lai!");

	}
	return 0;
}