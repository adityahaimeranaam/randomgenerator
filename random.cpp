#include <iostream>
#include <time.h>
using namespace std;
int main()
{
   srand(time(0));
   cout<<(rand()%100+1);
}
