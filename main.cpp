#include <iostream>
#include <bitset>

using namespace std;

int zzzz(int liczba, int nrBitu) {
    return ((~(0b1 << nrBitu)) & liczba);
}

int main(){
	
    int l1,l2;
    	cout << "podaj pierwsza liczbe" << endl;
    	cin >> l1;
    	cout << "podaj druga liczbe" << endl;
    	cin >> l2;
    	cout << "____________________________________________" << endl << endl;
        cout << "po wyzerowaniu " << l2 + 1 << " bitu twoja liczba wynosi: " << zzzz(l1, l2)<<endl;

    return 0;
}
