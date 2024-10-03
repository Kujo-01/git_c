#include <iostream>  
#include <vector>
#include <string>
using namespace std;

//  int main () {
//     cout<<"Welcome to the first program in C++" <<endl;
//    //  int x = 10;
//    //  char y = 't';
//    //  float f =3.4;
//    //  bool b = true;
//    //  //data type -> int , x -> variable
//    //  cout<<x<<endl<<y<<endl<<f<<endl<<b;
//    //  return 0;

//    int *ptr;
//    int k = 5;
//    ptr = &k;
//    // cout<<*ptr<<" "<<*&k;

//    vector <int> arr;

//    for(int i =0; i<=100; i++){
//       arr.push_back(i);
//    }
//    for(int i =0; i<=100; i++){
//       cout<<arr[i]<<"->";
//    }
//    // arr.push_back(5);
//    // cout<<arr[0];

//  }

class book{
   public:
      string name;
};

int main(){
   book book1;
   book1.name = "lauda";

   cout<<book1.name;
}

 // namespace is needed for 'cout' to print anything
 //iostream is a header file (library)
 //