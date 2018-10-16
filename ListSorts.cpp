// inserting into a list
#include <iostream>
#include <list>
#include <vector>
#include<string>
#include <ctime>
#include <cstdlib>
using namespace std;
int main ()
{
  srand(time(0));
  list<int> mylist;
  list<string> mylist1;
  list<double> mylist2;
  list<char> mylist3;
  list<int> mylist4;

  list<int>::iterator it;
  list<string>::iterator it1;
  list<double>::iterator it2;
  list<char>::iterator it3;
  list<int>::iterator it4;

  // set some initial values:
  for (int i=1; i<=10; ++i) mylist.push_back(i); // 1 2 3 4 5 6 7 8 9 10
     mylist1.push_back("apple");
     mylist1.push_back( "car" );
     mylist1.push_back( "dog" );
     mylist1.push_back( "house");
     mylist1.push_back("street");
  
  for (int j=1; j<=1000; ++j) mylist2.push_back(78.15);
  for (int n=1; n<=500; ++n) mylist3.push_back('a' + rand()%26);
  for (int m=1; m<=500; ++m)  mylist4.push_back(7000000+rand()%100000);

  it = mylist.begin();
  it1 = mylist1.begin();
  it2 = mylist2.begin();
  it3 = mylist3.begin();
  it4 = mylist4.begin();
  it1++;
  it1++;
  it1++;
  it1++;
  ++it2;       // it points now to number 2     
  mylist1.insert(it1,"Gibbs");

  mylist.push_front (0+2);
  mylist.push_back (15-4);
  mylist.sort();

  --it;
  --it1;
  --it2;       // it points now to the second 20

   for (it2=mylist2.begin(); it2!=mylist2.end(); ++it2)
        std::cout << ' ' << *it2;
        std::cout << '\n';

  for (it1=mylist1.begin(); it1!=mylist1.end(); ++it1)
        std::cout << ' ' << *it1<<'\n';
        std::cout << '\n';

  for (it3=mylist3.begin(); it3!=mylist3.end(); ++it3)
        std::cout << ' ' << *it3<<'\n';
        std::cout << '\n';
  
  for (it4=mylist4.begin(); it4!=mylist4.end(); ++it4)
        std::cout << ' ' << *it4<<'\n';
        std::cout << '\n';

 cout << "mylist contains: sorted";                                             
  for (it=mylist.begin(); it!=mylist.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  mylist.reverse();
   std::cout << "mylist contains: reverse";                                             
  for (it=mylist.begin(); it!=mylist.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  return 0;
}
