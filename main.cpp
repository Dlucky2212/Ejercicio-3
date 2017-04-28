#include <iostream>

using namespace std;

//3 Comprobar de si el numero es par o impar
int comprobar( int a){
	while ( a > 0){
		if ( a % 2 == 0){
			cout << " Es par";
			return 0;
		}
		else{
			cout << " Es impar";
			return 0;
	}
	return 0;
}
}
int main()
{
    int a;
    cin >> a;
    comprobar(a);
}
