#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <cmath>

using namespace std;

// Шаблоны классов
//
//template <class T, class T2>
//class Array {
//private:
//	T2 len;
//	T* arr;
//public:
//	Array(T* a1, T2 len) {
//		this->len = len;
//		arr = new T[len];
//		for (int a = 0; a < len; a++)
//			*(arr + a) = *(a1 + a);
//	}
//
//	void get() {
//		for (int a = 0; a < len; a++)
//			cout << *(arr + a) << " ";
//		
//		cout << endl;
//	}
//
//	~Array() {
//		delete[] arr;
//	}
//};



// Шаблоны функций

template <typename T, typename T2>
void printarr(T* arr, int len) {
	for (T2 i = 0; i < len; i++)
		cout << *(arr + i) << " ";


	cout << endl;
	
}




// Характеристики пк

//class PC {
//protected:
//	int diagonal;
//	string os;
//public:
//	PC(int diagonal, string os) {
//		this->diagonal = diagonal;
//		this->os = os;
//	}
//
//	void get_info() {
//		cout << "OS: " << os << ". Diagonal: " << diagonal << endl;
//	}
//};
//
//class laptop: public PC {
//private:
//	float weigth;
//public:
//	laptop(int diagonal, string os, float weight): PC(diagonal, os) {
//		this->weigth = weight;
//	}
//
//	void get_info() {
//		PC::get_info();
//		cout << "Weight: " << weigth << endl;
//	}
//};

int main() {
	setlocale(LC_ALL, "RU");

	// Шаблоны классов


	/*int arr[] = { 1, 2, 4, 3, 5 };
	Array<int, int> obj1(arr, 5);
	obj1.get();

	float arr1[] = { 3.3f, 7.9f, 3.0f };
	Array<float, int> obj2(arr1, 3);
	obj2.get();
	
	float arr3[] = { 3.3f, 7.9f, 3.0f, 6, 7, 8, 9, 10010110 };
	Array<float, int> obj3(arr3, 8);
	obj3.get();*/


	// Шаблоны функций

	int arr2[] = { 3, 5, 7, 8, 9, -5, 11 };
	printarr<int, int>(arr2, 7);

	float arr3[] = { 1, 2, 3, 4, 5, 6, -7 };
	printarr<float, int>(arr3, 7);

	float arr4[] = { 3, 3, 3, 3, -5, 6, -7 };
	printarr<float, int>(arr4, 7);





	// Продолжение

	/*laptop win(16, "Windows", 1.8f);
	win.get_info();*/

	return 0;
}