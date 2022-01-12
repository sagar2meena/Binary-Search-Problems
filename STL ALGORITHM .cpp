#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<algorithm>
#include<set>
#include<unordered_set>

using namespace std;

int main()
{   // static array
   /* array<int,4>  arr = {1,2,3,4};
    cout<<arr[2];
    cout<<arr.size()<<endl;
    */
    // dynamic Array
    /*
    vector<int> ar;
    cout<<ar.capacity();
    ar.push_back(1);
    ar.push_back(2);
    cout<<ar.capacity()<<endl;;
    cout<<ar.size();    
    cout<<ar.at(1)<<endl;
    cout<<ar.front()<<" "<<ar.back()<<endl;
    ar.pop_back();
    cout<<ar.back()<<endl;
     cout<<ar.capacity();
     vector<int> a(4 , 2);
     for(int i: a)
     {
         cout<<i<<" ";
     }    */

     // deque
    
     /* deque<int> d;
     d.push_back(1);
     d.push_front(2);
     d.pop_back();
     for( int i: d)
     {
         cout<<i<<" ";
     }
     d.push_back(2);
     d.push_back(3);
     d.push_back(4);
     cout<<endl;
     cout<<d.at(3);
     cout<<d.empty();
     cout<<"\n before erase "<<d.size()<<endl;
     d.erase(d.begin(), d.begin()+1);
     cout<<"after erase : "<<d.size();
     */
     // doubly linked list
     /*
     list<int> l;

     l.push_back(1);
     l.push_front(2);

     for( int i: l)
     {
         cout<<i<<" ";
     }
     // erase time comlexity 
     l.erase(l.begin());
     
     for( int i: l)
     {
         cout<<i<<" ";
     }
     cout<<" size of list "<<l.size()<<endl;
     list<int> n(5 ,100);
    for( int i: n)
     {
         cout<<i<<" ";
     }
     */ 
    // stack :
    /*
    stack<string> s;
    s.push("sagar");
    s.push("kaminA");
    s.push("meena");
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.push("alone ");
    cout<<s.top();
    cout<<"\n"s.size()<<endl;
    */
   // Queue
   /*
   queue<string> q;
   q.push("sagar");
   q.push("meena");
   q.push("chal_nikal");

   cout<<"first element "<<q.front()<<endl;
   q.pop();
   cout<<" first Element "<<q.front()<<endl;
   cout<<"size of queue "<<q.size()<<endl;
   */
  // Priority Queue
  // Max Heap

  /*
  priority_queue<int> q;
  // Mini Heap
  priority_queue<int,vector<int>,greater<int>> mini;
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  int n = q.size();
  for(int i=0;i<n;i++)
  {
      cout<<q.top()<<endl;
      q.pop();
  }
  cout<<endl;
  mini.push(1);
  mini.push(2);
  mini.push(3);

  int m = mini.size();
  cout<<m<<endl;
  for( int i=0;i<m;i++)
  {
      cout<<mini.top()<<" ";
      mini.pop();
  }
  */



 // MAp
 /*
    set<int> s;
    s.insert(5);
    s.insert(10);
    s.insert(520);
    s.insert(34);
    s.insert(556);
    for( auto i : s)
    {
        cout<<i<<" ";
    }
    set<int>::iterator it =s.begin();
    it++;
    it++;
    s.erase(it);
    cout<<endl;
     for( auto i : s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<" -5 is present =>"<<s.count(-5)<<endl;
    set<int>::iterator itr = s.find(10);
    cout<<*itr<<endl;
    for( auto it= itr ; it!=s.end() ; it++)
    {
        cout<<*it<<" ";
    }
    */
    // MAP
    /*
    map<int,string> m;
    m[1] = "sagar";
    m[2] = "meena";
    m[13] = "kamina";
    for( auto i : m){
        cout<<i.first;
        cout<<"\n"<<i.second<<endl;
    }
    cout<<" Before Erase: "<<endl;
    cout<<" finding 13 : "<<m.count(13)<<endl;
    m.erase(13);
    cout<<" After Erase : "<<endl;
    cout<<" finding 13 : "<<m.count(13)<<endl;
    auto it = m.find(2);
    for( auto i = it ; i!= m.end() ; i++)
    {
        cout<<(*i).first<<endl;
    }
    */
   /*
   vector<int> arr ;
   arr.push_back(1);
   arr.push_back(2);
   arr.push_back(3);
   arr.push_back(5);

   cout<<" finding five "<<binary_search(arr.begin() , arr.end() , 5)<<endl;
   cout<<"lower Bound "<<lower_bound(arr.begin() , arr.end(),3)-arr.begin()<<endl;
   cout<<" Upper bound "<<upper_bound(arr.begin(),arr.end(),2)-arr.begin()<<endl;

   int a = 3;
   int b = 5;
   cout<<max(a,b);
   cout<<endl;
   cout<<min(a,b)<<endl;
   swap(a,b);
   cout<<" a -> "<<a<<endl;
   string s = "abcd";
   cout<<s<<endl;
   reverse(s.begin(),s.end());
   cout<<s<<endl;
   vector<int> tr = {3,5,2,6,5,8,2};
   rotate(tr.begin(),tr.begin()+1,tr.end());
   for( auto i : tr)
   {
       cout<<i<<" ";
   }
   cout<<endl;
   sort(tr.begin(),tr.end());
     for( auto i : tr)
   {
       cout<<i<<" ";
   }
   */
    // insert log(n) , delete log(n)
  /*  set<int>s;
    s.insert(1);
    s.insert(-1);
    s.insert(3);
    s.insert(-10);
    s.insert(6);
    s.insert(5);
    for( auto i:s)
    {
        cout<<i<<" ";
    }
    cout<<"\n"<<s.size()<<"\n";
    // lower bound and upper bound
    cout<<*s.lower_bound(2)<<"\n";
    cout<<(s.upper_bound(6) == s.end())<<"\n";
    cout<<*s.lower_bound(4)<<"\n";
    s.erase(s.begin());
    s.erase(5);
      for( auto i:s)
    {
        cout<<i<<" ";
    }
    // Multisate :- insert log(n) , delete log(n)
    cout<<"\n";
    multiset<int> m;
    m.insert(1);
    m.insert(1);
    m.insert(2);
    m.insert(3);
    m.insert(2);
    for( auto i:m)
    {
        cout<<i<<" ";
    }
    m.erase(s.find(5));
    cout<<"\n";
    for( auto i:m)
    {
        cout<<i<<" ";
    }
      // unordered set , insertion 1 , deletion 1 , worst case o(n),o(n)
    unordered_set<int> u;
    u.insert(1);
    u.insert(2);
    u.insert(3);
    u.insert(4);
    u.insert(5);
    cout<<"\n";
    u.erase(3);
    u.erase(u.begin());
    for( auto i: u)
    {
        cout<<i<<" ";
    }
    */

    return 0;
}   