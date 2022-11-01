#include <iostream>
using namespace std;
int main() {
	//	const int s = 10;
	////	int mas[5];
	////	for (int i = 0; i <= 5; i++) {
	////		cin >> mas[i];
	////	}
	////	for (int i = 0; i <= 5; i++) {
	////		cout << mas[i] << ' ';
	////	}
	//	int m[s];
	//	for (int i = 0; i < s; i++) {
	//		cin >> m[i];
	//	}
	//	for (int i = 0; i < s; i++) {
	//	cout << m[i] << ' ';
	//	}
	//	cout << endl;
	//	int l = 0;
	//	for (int i = 0; i < s; i++) {
	//		if (m[i] > 0) l++;
	//	}
	//	cout << " >0" << l << endl;
		//1
		//const int s = 10;
		//int m[s];
		//	for (int i = 0; i < s; i++) {
		//	cin >> m[i];
		//}
		//for (int i = 0; i < s; i++) {
		//}
		//for (int i = 9;  i >= 0; i--) {
		//	cout << m[i] << ' ' ;
		//}
		//2
		/*const int s = 8;
		int sum = 0;
		 int m[s];
			for (int i = 0; i < s; i++) {
		cin >> m[i];
		 }
		for (int i = 0; i < s; i++) {
			cout << m[i] << ' '<<endl;
		}
		for (int i = 0; i < s; i++) {
			if (i % 2 != 0) i++;
			sum += i;

		}
		cout << sum;*/
		//3
		//const int s = 5;
		//int proiz = 1;
		//int m[s];
		//for (int i = 0; i < s; i++) {
		//	cin >> m[i];
		//}
		//for (int i = 0; i < s; i++) {
		//	cout << m[i] << ' ' ;
		//}
		//for (int i = 0; i < s; i++) {
		//	if (i % 2 == 0) {
		//		proiz *= m[i];
		//	}
		//	cout << endl;

		//}
		//cout << proiz;
		//4
	//const int a = 7;
	//int m[7];
	//int k = 0;
	//for (int i = 0; i < 7; i++) {
	//	cin >> m[i];
	//	if (m[i] % 3 != 0 && m[i] % 5 == 0) {
	//		k++;
	//	}
	//}
	//for (int i = 0; i < 7; i++) {
	//	cout << m[i] << ' '<< endl;
	//}
	//	cout << k << ' ';
	//5
	const int s = 9;
	int sum = 0;
	int ar = 0;
	int k = 0;
	int m[s];
	for (int i = 0; i < s; i++) {
		cin >> m[i];
	}
	for (int i = 0; i < s; i++) {
		sum += i;
		cout << m[i] << ' ' << endl;
	}
	for (int i = 0; i < s; i++) {
		if (i % 2 != 0) k++;
		ar = sum/k ;

	}
	cout << ar<< "=sr";
	}

