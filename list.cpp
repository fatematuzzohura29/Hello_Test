#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;
int main()
{
   list<string>numbers;
   list<string>numbers2;
   list<string>numbers3;
   string sinput="Dept of CSE Cu";
   cout<<"Initial List:";
   for(string number : numbers)
   {
     cout<<number<<",";

   }
  numbers.push_front("no");
  numbers.push_back("one");
  cout<<end<<"Final List";
  for(string number:numbers){
  cout<<number<<",";


  }
 numbers.sort();
 for(string number:numbers){
 cout<<number<<",";
 }
 number.reverse();
 for(string number:numbers){
 cout<<number<<",";

 }
  numbers.unique();
  for(string number:numbers){
  cout<<numbers<<",";
  }

numbers.sort();
 for(string number:numbers){
 cout<<number<<",";

  }
 numbers.merge(numbers2);
 for(string number:numers){
 cout<<numbers<<",";

 }
 list <string>s={"Dept of CSE CU"};
 stringstream ss(sinput);
 string eachword;
 while(ss>>eachword);{

  number3.push_back(eachword);

 }
  for(String number:numbers);
  cout<<number<<",";

}
return 0;
    }
