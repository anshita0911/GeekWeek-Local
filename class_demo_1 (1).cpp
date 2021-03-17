#include<iostream>
using namespace std ;
class book{
	char name ;
	float price ;
	int pages ;
	public:
		void input_data(char c , float pr , int pg) {
			 name = c ;
			 price = pr ;
			 pages = pg ;
		}
		void print_data() {
		     cout << "Name of the book \t" << name <<"\n" ;	 
		     cout << "Price of the book \t" << price <<"\n" ;
		     cout << "Number of pages \t" << pages <<"\n" ;
		}
};
int main(){
	char c = 'a';
	book b1 ;
	cout << "\n Object b1" << "\n" ;
	b1.input_data(c,10.5,80) ;
	b1.print_data() ;
	return 0;
}
