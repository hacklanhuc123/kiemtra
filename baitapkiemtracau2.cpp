#include <iostream>
using namespace std;
int main(){
	float a , b , c , sum;
	cout<< " nhap vao diem toan";
	cin>>a;
	cout<< " nhap vao diem ly";
	cin>>b;
	cout<< " nhap vao diem hoa";
	cin>>c;
	sum = (a + b +c )/3;
	cout<< " diem trung binh la" << sum;
	if (sum>=8 ){
		cout << " xep loai gioi";
	}
	if ( 6<=sum && sum < 7){
		cout << " xep loai kha ";
	}
	if ( 5<=sum && sum<6){
		cout << " xep loai trung binh";
	}
	if (sum<5){
		cout << " xep loai yeu";
	}
}
