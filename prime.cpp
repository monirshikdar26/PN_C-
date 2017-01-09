#include <iostream>
using namespace std;

int isPrime(int n);
int main()
{

int n;
cin >> n;

if(isPrime(n)==1)
cout << n << " prime number";
else
cout << n << " not prime number";
return 0;
}

int isPrime(int n)
{
if(n<=1)
return 0;

for(int i=2;i<n;i++)
{
    if(n%i==0)
       return 0;

return 1;
}

}
