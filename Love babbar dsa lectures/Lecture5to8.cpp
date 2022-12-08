#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

//! nCr:

int factorial(int n){
    int fact=1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r){
    int numerator = factorial(n);
    int denominator = factorial(r) * factorial(n-r);
    int ans = numerator/denominator;
    return ans;
}

//! prime no.

bool primeornot(int n){
    for (int i = 2; i <= n; i++)
    {
        if (n&1==0)
    {
        return 0;
    }
    }
    return 1;    
}

//! arithmetic progression

int arth(int n){
    return 3*n+7;
}

//! set bits count:

int bitscounter(int a){
    int count = 0;

    while (a!=0)
    {
        if (a&1)
        {
            count++;
        }
        a>>1;
    }
    return count;
}
int setbits(int a, int b){
    int ansA = bitscounter(a);
    int ansB = bitscounter(b);
    return ansA + ansB;
}

// ! fibonacci series:

int fibo(int n){
    int a = 0;
    int b = 1;
    int nextValue;
    if (n==a)
    {
        return a;
    }
    else if (n==b)
    {
        return b;
    }
    
    for (int i = 2; i <= n; i++)
    {
        nextValue = a + b;
        a = b;
        b = nextValue;
    }
    
    return nextValue;
    

}


int main(){
    
    //! 1 to N print:
    // int n;
    // cin>>n;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout<<i<<" ";
    // }
    
    //! Sum till N:

    // int n;
    // cin>>n;
    // int sum=0;
    // for (int i = 1; i <= n; i++)
    // {
    //     sum += i;
    // }
    // cout<<sum;

    //! Fibonacci series:

    // int n = 10;
    // int a = 0;
    // int b = 1;
    // cout<<a<<"\n"<<b<<"\n";
    // for (int i = 1; i <= n; i++)
    // {
    //     int nextNum = a + b;
    //     cout<<nextNum<<"\n";
    //     a=b;
    //     b=nextNum;
    // }

    //! Prime Number:

    // int n;
    // cin>>n;
    // bool isPrime = false;
    // for (int i = 2; i < n; i++)
    // {
    //     if (n%i==0 || n==1 || n==0)
    //     {
    //         isPrime=false;
    //         break;
    //     }else{
    //         isPrime=true;
    //     }
    // }
    // if (isPrime)
    // {
    //     cout<<"it's prime";
    // }else{
    //     cout<<"Not prime";
    // }
    
    //! Decimal to binary

    // int n;
    // cin>>n;
    // float ans = 0;
    // int i = 0;
    // while (n!=0)
    // {
    //     int bit = n&1;
    //     ans = (bit * pow(10,i))+ans;  // it will reverse a number
    //     n = n>>1;
    //     i++;
    // }
    // cout<<ans;
    

    //! Negative decimal number to binary c++ 


    //! Binary to Decimal:
    
    //* FOR DIGIT: MODULAS(%10) DIVIDE(/10)
    //* when working with bit & and >>(multiply by 2)  

    // int n;
    // cin>>n;
    // int i = 0;
    // int ans = 0;
    // while(n!=0){
    //    int digit = n%10;
    //    if(digit==1){
    //     ans = ans + pow(2,i);
    //    }
    //    n = n/10;
    //    i++;
    // }
    // cout<<ans;

    //! Reverse a Integer (Q.7 on leetcode)

    // int n;
    // cin>>n;
    // float ans = 0;
    // int i = 0;
    // while (n!=0)
    // {
    //     int digit = n % 10;
    //     if ((ans>INT_MAX/10)||(ans<INT_MIN/10))
    //     {
    //         return 0;
    //     }
    //     ans = (ans * 10)+digit;
    //     n = n/10;
    // }
    // cout<<ans;

    //! Complement of Base 10 Integer (1009 on leetcode)

    // int n;
    // cin>>n;
    // int count = n;
    // int mask = 0;
    
    // while(count!=0){
    //     mask = (mask << 1) | 1;
    //     count = count>>1;
    // }
    // int ans = (~n)&mask;
    // cout<<ans;
    

    //! simple calculator

    // cout<<"Enter digit"<<endl;
    // int a;
    // cin>>a;
    // cout<<"Enter second digit"<<endl;
    // int b;
    // cin>>b;

    // cout<<"for +: press 1"<<"\n"<<"for -: press 2"<<endl;
    // int n;
    // cin>>n;
    
    // switch (n)
    // {
    // case 1:
    //     cout<<a+b;
    //     break;
    
    // case 2:
    //     cout<<a-b;
    //     break;
    // default:
    //     cout<<"choose between 1 and 2 only";
    // }

    //! No. of notes that will be used to make N:

    // int amount;
    // cout << "Enter the amount" << endl;
    // cin >> amount;
    // int Rs100, Rs50, Rs20, Rs1;
    

    // switch (1)
    // {
    // case 1:
    //     Rs100 = amount/100;
    //     amount = amount%100;
    //     cout<<"No. of notes of 100: "<<Rs100<<endl;
    // case 2:
    //     Rs50 = amount/50;
    //     amount = amount%50;
    //     cout<<"No. of notes of 100: "<<Rs50<<endl;
    // case 3:
    //     Rs20 = amount/20;
    //     amount = amount%20;
    //     cout<<"No. of notes of 100: "<<Rs20<<endl;
    // case 4:
    //     Rs1 = amount/1;
    //     amount = amount%1;
    //     cout<<"No. of notes of 100: "<<Rs1<<endl;
    // }

    //! nCr:

    // int ans = nCr(8,2);
    // cout<<ans;

    //! prime number:

    // int n;
    // cin>>n;
    // if (primeornot(n))
    // {
    //     cout<<"its prime";
    // }
    // else{
    //     cout<<"its not prime";
    // }

    //! arithmetic progression:

    // int n;
    // cin>>n;

    // cout<<(arth(n));
    
    //! set bits:

    // int a, b;
    // cin>>a>>b;
    // cout<<"total no. of 1s in a+b: "<<setbits(a,b);

    //! fibonacci series:

    int n;
    cin>>n;

    cout<<(fibo(n));
}