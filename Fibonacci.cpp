#include<iostream>
using namespace std;
 
int fibonacci(int n)
{
	//Kasus dasar
    if (n <= 1)
        return n;
    //Kasus Rekrusif
    else
    	return fibonacci(n-1) + fibonacci(n-2);
}

int main ()
{
	//Inisialisasi variabel
	int n;
	//Input variabel
	cout << "Input Nilai\t\t: "; cin>>n;
	//Output Hasil
    cout << "Bilangan Fibonacci\t: " << fibonacci(n);

    return 0;
}
