#include<iostream>
#include<string>
#include<bits/stdc++.h>


using namespace std;
int main()
{
  list<string>doc_1;
  list<string>doc_2;
  string doc_1 ={"Data is the new oil of the digital economy"};
  string doc_2 ={"Data is a new oil"};

  cout<<"Initial List";
  for(string number:doc_1 );
  {
     cout<<number<<",",
  }
//numbers.push_front("no");
  //numbers.push_back("one");
  cout<<end<<"Final List";
  for(string number:doc_1){
  cout<<number<<",";
}


 doc_1.sort();
 for(string number:doc_1){
 cout<<number<<",";
 }

doc_1.merge(doc_2);
 for(string number:doc_2){
 cout<<number<<",";
 }

 doc_2.sort();
 for(string number:doc_2){
 cout<<number<<",";


 }
 doc_2.merge(doc_1);
 for(string number:doc_1){
 cout<<number<<",";
 }


 doc_1.unique();
  for(string number:doc_1){
  cout<<number<<",";

   doc_2.unique();
  for(string number:doc_2){
  cout<<number<<",";
  }

  for(string w1;list 1)
{
    for(string w2:list 2)
      {

       if(w1==w2)

    count ++;
    }


list<string>list 1;
list <string>list 2;
list<string>common_list ;
list<string>set_intensection;
set_intensection (

list.begin(),list 1.endl;
list.begin(),list 2.endl;
back_inserter (common-list));
}








