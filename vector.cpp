#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
  
  vector<int> tablica_1;
    
  for(int i=1; i<=10; i++)
        tablica_1.push_back(i);
        
  for(int i=0; i<10; i++)
        cout << tablica_1[i] << "   ";
        
  cout << endl;
  
  cout << "____________________________________________" << endl << endl;
  
  list<int> tablica_2;
  
  for(int i=1; i<=10; i++)
        tablica_2.push_back(i);
        
  for(auto i=tablica_2.begin(); i!=tablica_2.end(); ++i)
        cout << *i << "   ";
  
}
