/**********************************************************
*  PEMROGRAMAN C++: MUDAH & CEPAT MENJADI MASTER C++      *
*                                                         *
*  Oleh    : Budi Raharjo                                 *
*  Email   : mbraharjo@gmail.com                          *
*                                                         *
*  Website : www.best-informatic.com                      *
*                                                         *
***********************************************************/
/*DI Tingkatkan kembali oleh
/**********************************************************
*  PEMROGRAMAN C++                                        *
*                                                         *
*  Author  : Gesa Rizky Nugraha                           *
*  Email   : gesarizkynugraha@gmail.com                   *
*                                                         *
*  Website : karenabelajar.blogspotcom                    *
*                                                         *
***********************************************************/
#include <iostream>

using namespace std;

int main()
{
  int a, b;
  int x, y;
  cout<<"Masukan input :"<<endl;
  cout<<"a : ";cin>>a;
  cout<<"b : ";cin>>b;
  cout<<"x : ";cin>>x;
  cout<<"y : ";cin>>y;
  cout<<"a: "<<a<<endl;
  cout<<"b: "<<b<<endl;
  a += b;		// a = a + b;
  cout<<"Setelah statemen a += b";
  cout<<", a: "<<a<<endl;

  cout<<"x: "<<x<<endl;
  cout<<"y: "<<y<<endl;
  x -= y;		// x = x – y;
  cout<<"Setelah statemen x -= y";
  cout<<", x: "<<x<<endl;

  return 0;	
}
