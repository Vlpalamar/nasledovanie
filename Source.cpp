#include"header.h"

int main()
{
	setlocale(0, "");
	Dog D("Sharic","������� �� �����","gav-gav",2,"chao-chao",0);
	D.print();
	D.SetProtect();
	D.isProtect();
	D.SetProtect();
	D.isProtect();
	D.print();
	cout << D.GetVid();

}