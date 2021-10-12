#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
class ncc
{
	private:
		char mancc[10];
		char tenncc[30];
		char dchi[50];
	public:
		void nhap();
		void xuat();
};
class hang
{
	private:
		char tenh[20];
		float dgia;
		int sluong;
	public:
		void nhap();
		void xuat();
		friend class phieu;
};
class phieu
{
	private:
		char map[20];
		char nlap[15];
		ncc a;
		hang *x;
		int n;
	public:
		void nhap();
		void xuat();
};
void ncc::nhap()
{
	cout << "Ma NCC: ";		fflush(stdin);	gets(mancc);
	cout << "Ten NCC: ";	fflush(stdin);	gets(tenncc);
	cout << "Dia chi: ";	fflush(stdin);	gets(dchi);	
}
void ncc::xuat()
{
	cout << setw(15) << "Ma NCC: " << setw(15) << mancc;
	cout << setw(15) << "Ten NCC: " << setw(15) << tenncc << endl;
	cout << setw(15) << "Dia chi: " << setw(15) << dchi << endl;
}
void hang::nhap()
{
	cout << "Ten hang: ";	fflush(stdin);	gets(tenh);
	cout << "Don gia: "; 	cin >> dgia;
	cout << "So luong: "; 	cin >> sluong;
}
void hang::xuat()
{
	cout << setw(15) << tenh << setw(15) << dgia << setw(15) << sluong;
}
void phieu::nhap()
{
	cout << "Ma phieu: ";	fflush(stdin);	gets(map);
	cout << "Ngay lap: "; 	fflush(stdin); 	gets(nlap);
	a.nhap();
	cout << "So hang: ";	cin >> n;
	x = new  hang[n];
	for(int i=0; i<n; i++)
		x[i].nhap();
}
void phieu::xuat()
{
	cout << setw(40) << "PHIEU NHAP HANG" << endl;
	cout << setw(15) << "Ma phieu: " << setw(15) << map;
	cout << setw(15) << "Ngay lap" << setw(15) << nlap << endl;
	a.xuat();
	cout << setw(15) << "Ten hang" << setw(15) << "Don gia" << setw(15) << "So luong" << setw(15) << "Thanh tien "<< endl;
	for(int i=0; i<n; i++)
		x[i].xuat();
	float thanhtien;
	for (int i=0; i<n; i++)
	{
		thanhtien =  x[i].dgia*x[i].sluong;
		cout << setw(15) << thanhtien << endl;
	}
	float sum = 0;
	for (int i=0; i<n; i++)
		sum = sum + x[i].dgia*x[i].sluong;
	cout << setw(30) << "Cong thanh tien" << setw(15) << sum;	
}
int main()
{
	phieu t;
	t.nhap();
	t.xuat();
	return 0;
}