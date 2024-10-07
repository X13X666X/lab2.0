// Lab_02.cpp
// < ×àïëÿ Ìàêñèì >
// Ëàáîðàòîðíà ðîáîòà ¹ 2.
// Ë³í³éí³ ïðîãðàìè.
// Âàð³àíò 34
#include <iostream>

using namespace std;
int main()
{
	double a; // âõ³äíèé ïàðàìåòð
	double z1; // ðåçóëüòàò îá÷èñëåííÿ 1-ãî âèðàçó
	//double z2; // ðåçóëüòàò îá÷èñëåííÿ 2-ãî âèðàçó
	cout << "a = "; cin >> a;
	z1 = (cos(a)+sin(a))/(cos(a)-sin(a));
	z2 = tan(2*a)+1/cos(2*a);
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}
