#include <iostream>

using namespace std;

int main()
{
   int a;
   int t=1234;
   int sum =t+1000;
   int num = 1;

   cout << "1,2,3" << endl;
   cin >> a;
   if(a==1){
        cout << t;
        return 1;
    }else if(a==2){

         cout << sum;
         return 1;
    }else if(a==3){
        return 2;
    }
}
