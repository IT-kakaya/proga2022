#include <fstream>
#include <iostream>
#include <map>
#include <string.h>
#include <algorithm>
using namespace std;
 
int main()
{
  setlocale(LC_ALL, "rus");
  ifstream F ("hw9.txt");
  string s; 
  map <string, int> mp; 
  map <string, int> :: iterator it;  
  while(!F.eof()) 
  {
    F>>s; 
    transform(s.begin(), s.end(), s.begin(),  ::tolower); 
    
    if(s.find(".") != -1)
    {     
      s.replace(s.find("."),2, "");
    }
    else if(s.find(",") != -1)
    {     
      s.replace(s.find(","),2, "");
    }
    else if(s.find("’") != -1)
    {
      s.replace(s.find("’"),4, "");
      mp["s"] += 1;
    }
    
    it = mp.find(s); 
    
    if (it == mp.end()) { 
      mp[s] = 1;  
    }
    else{
      it->second++; 
    }
    
  }
  F.close(); 
  it = mp.begin(); 
  ofstream F2 ("hw9n.txt"); 
  for (int i = 0; it != mp.end(); it++, i++) {
    if(it->second > 1){
      F2 <<it->first << " [" << it->second << "]\n"; 
    }
  }
  F2.close();
}
