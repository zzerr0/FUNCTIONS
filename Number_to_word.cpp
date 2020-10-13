#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  string s1[] = { "one","two","three","four","five","six","seven","eight","nine"};
  int a, b;
  cin>>a>>b;
  for( int n = a; n <= b; n++){
    if( n <= 9){
      cout<<s1[n-1]<<endl;
    }
    else{
      if( n%2 == 0){
        cout<<"even"<<endl;
      }
      else{
        cout<<"odd"<<endl;
      }
    }
  }
  
  return 0;
}
