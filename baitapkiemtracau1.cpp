#include <iostream>
using namespace std;
int main(){
	int n ;
	cout<< " nhap vao nam can kiem tra";
	cin>> n ;
	if ( n%4==0 && n%100!=0 | n%400==0 );{
	cout << " Nam nay la nam nhuan";
	}
	else {
	cout << " Nam Nay la nam khong nhuan";
	}
}

