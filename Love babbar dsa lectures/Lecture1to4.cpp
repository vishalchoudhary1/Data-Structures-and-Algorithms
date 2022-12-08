#include <iostream>
using namespace std;

int main()
{

    //! question 1
    // int a=1;
    // int b = a+1;
    // if ((a=3)==b)
    // {
    //     cout<<"hi ",a;
    // }
    // else{
    //     cout<<a+1;
    // }

    //! question 2
    // char a = 'A';
    // if (a>='a' && a<='z')
    // {
    //     cout<<"its lowercase";
    // }
    // else if(a>='A' && a<='Z'){
    //     cout<<"its uppercase";
    // }
    // else{
    //     cout<<"enter a char only";
    // }

    //! question 3
    // int i=1;
    // int n;
    // int sum=0;
    // cin>> n;
    // while (i<=n)
    // {
    //     sum=sum+i;
    //     i=i+2;
    // }
    // cout<<"value of sum is: "<<sum<<endl;

    //! question 4
    // int n;
    // cout<<"Enter a positive no."<<"\n";
    // cin>>n;
    // int i=2;
    // bool isPrime = true;
    // if (n==0 || n==1)
    // {
    //     isPrime = false;
    // }
    // //* loop so that we can check n is prime or not.
    // while (i<n)
    // {
    //     if (n%i==0)
    //     {
    //         isPrime=false;
    //         break;
    //     }
    //     i=i+1;
    // }
    // //* showing output
    // if (isPrime==true)
    // {
    //     cout<<"its prime";
    // }
    // else{
    //     cout<<"its not prime";
    // }

    //! pattern 1

    // int row = 1;
    // while (row<=4)
    // {
    //     int col=1;
    //     while (col<=4)
    //     {
    //         cout<<"*";
    //         col=col+1;
    //     }
    //     cout<<endl;
    //     row=row+1;
    // }

    //! pattern 2
    // int input;
    // cin>>input;
    // int row = 1;
    // while (row<=input){
    //     int col = 1;
    //     while (col<=input){
    //         cout<<col;
    //         col=col+1;
    //     }
    //     cout<<endl;
    //     row=row+1;
    // }

    //! pattern 3
    // int input;
    // cin>>input;
    // int row = 1;
    // while (row<=input){
    //     int col = 1;
    //     while (col<=input){
    //         cout<<input-col+1;
    //         col=col+1;
    //     }
    //     cout<<endl;
    //     row=row+1;
    // }

    //! pattern 4
    // int count = 1;
    // int input;
    // cin>>input;

    // int row = 1;
    // while(row<=input){
    //     int col = 1;
    //     while(col<=input){
    //         cout<<count<<" ";
    //         count = count + 1;
    //         col = col + 1;
    //     }
    //     cout<<endl;
    //     row = row + 1;
    // }

    //! pattern 5
    // int input;
    // cin>>input;
    // int row = 1;

    // while(row<=input){
    //     int col = 1;
    //     while(col<=row){
    //         cout<<"*";
    //         col = col + 1;
    //     }
    //     cout<<endl;
    //     row = row + 1;
    // }

    //! pattern 6          TRY THIS ONE AGAIN
    // int input;
    // cin>>input;
    // int row = 0;

    // while(row<input){
    //     int col = 0;
    //     while(col<input-row){
    //         cout<<"*";
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    //! pattern 7
    // int input;
    // cin>>input;
    // int row = 1;

    // while(row<=input){
    //     int col = 1;
    //     while(col<=row){
    //         cout<<row;
    //         col = col + 1;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    //! pattern 8
    // int input;
    // cin>>input;
    // int row = 1;
    // int count = 1;
    // while(row<=input){
    //     int col = 1;
    //     while(col<=row){
    //         cout<<count;
    //         col++;
    //         count++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    //! pattern 9
    // int input;
    // cin>>input;
    // int row = 1;
    // while(row<=input){
    //     int col = 1, value=row;
    //     while(col<=row){
    //         cout<<value;
    //         col++;
    //         value++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    //! pattern 10            TRY THIS ONE AGAIN
    // int input;
    // cin>>input;
    // int row = 1;   // row + col - 1
    // while(row<=input){
    //     int col = 1;
    //     while(col<=row){
    //         cout<<row+col-1;   // when col++ int will also ++
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    //! pattern 11
    // int input;
    // cin>>input;
    // int row = 1;

    // while(row<=input){
    //     int col=1;
    //     while(col<=row){
    //         cout<<row-col+1;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    //! pattern 12
    // int input;
    // cin>>input;
    // int row = 1;

    // while(row<=input){
    //     int col=1;
    //     while(col<=input){
    //         char ch = 'A'+row-1;
    //         cout<<ch;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    //! pattern 13
    // int input;
    // cin>>input;
    // int row = 1;

    // while(row<=input){
    //     int col=1;
    //     while(col<=input){
    //         char ch = 'A'+col-1;
    //         cout<<ch;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    //! pattern 14
    // int input;
    // cin>>input;
    // int row = 1;
    // int count = 1;
    // while(row<=input){
    //     int col=1;
    //     while(col<=input){
    //         char ch = 'A'+count-1;
    //         cout<<ch;
    //         col++;
    //         count++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    //! pattern 15
    // int input;
    // cin>>input;
    // int row = 1;
    // while(row<=input){
    //     int col=1;
    //     while(col<=input){
    //         char ch = 'A'+row+col-2; // formula explained in lecture 4 32:00
    //         cout<<ch;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    //! pattern 16
    // int input;
    // cin>>input;
    // int row = 1;
    // while(row<=input){
    //     int col=1;
    //     char ch = 'A'+row+col-2;
    //     while(col<=input){
    //         cout<<ch;
    //         ch++;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    //! pattern 17
    // int input;
    // cin>>input;
    // int row = 1;

    // while(row<=input){
    //     int col=1;
    //     while(col<=row){
    //         char ch = 'A'+row-1;
    //         cout<<ch;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    //! pattern 18
    // int input;
    // cin>>input;
    // int row = 1;
    // int value=0;;
    // while(row<=input){
    //     int col=1;
    //     while(col<=row){
    //         char ch = 'A'+value;
    //         cout<<ch;
    //         col++;
    //         value++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    //! pattern 19
    // int input;
    // cin>>input;
    // int row = 1;
    // int value=0;
    // while(row<=input){
    //     int col=1;
    //     while(col<=row){
    //         char ch = 'A'+row+col-2;
    //         cout<<ch;
    //         col++;
    //         value++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    //! pattern 20
    // int input;
    // cin>>input;
    // int row = 1;

    // while(row<=input){
    //     int col=1;
    //     char ch = 'A'+input-row;
    //     while(col<=row){
    //         cout<<ch;
    //         ch++;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    //! pattern 21
    // int input;
    // cin>>input;
    // int row = 1;

    // while(row<=input){

    //     int space=input-row;
    //     while(space){
    //         cout<<" ";
    //         space--;
    //     }
    //     int col=1;
    //     while(col<=row){
    //         cout<<"*";
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    //! pattern 22
    // int input;
    // cin>>input;
    // int row = 1;

    // while(row<=input){
    //     int col=1;
    //     while(col<=input-row+1){
    //         cout<<"*";
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    //! pattern 23
    // int input;
    // cin>>input;
    // int row = 1;

    // while(row<=input){
    //     int space = row - 1;
    //     while(space){
    //         cout<<" ";
    //         space--;
    //     }
    //     int col=1;
    //     while(col<=input-row+1){
    //         cout<<"*";
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    //! pattern 24
    // int input;
    // cin>>input;
    // int row = 1;

    // while(row<=input){
    //     int space = row - 1;
    //     while(space){
    //         cout<<" ";
    //         space--;
    //     }
    //     int col=1;
    //     while(col<=input-row+1){
    //         cout<<row;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    //! pattern 25
    // int input;
    // cin>>input;
    // int row = 1;

    // while(row<=input){
    //     int space = input - row;
    //     while(space){
    //         cout<<" ";
    //         space--;
    //     }
    //     int col=1;
    //     while(col<=row){
    //         cout<<row;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    //! pattern 26
    // int input;
    // cin>>input;
    // int row = 1;

    // while(row<=input){
    //     int space = row - 1;
    //     while(space){
    //         cout<<" ";
    //         space--;
    //     }
    //     int col=1;
    //     int value = input - row + 1;
    //     while(col<=input-row+1){
    //         cout<<value;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    //! pattern 27
    // int input;
    // cin>>input;
    // int row = 1;

    // while(row<=input){
    //     int space = row - 1;
    //     while(space){
    //         cout<<" ";
    //         space--;
    //     }
    //     int col=1;
    //     int value = input - row + 1;
    //     while(col<=input-row+1){
    //         cout<<value;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    //! pattern 28
    // int input;
    // cin>>input;
    // int row = 1;

    // while(row<=input){
    //     int space = row - 1;
    //     while(space){
    //         cout<<" ";
    //         space--;
    //     }
    //     int col=1;
    //     int value = row;
    //     while(col<=input-row+1){
    //         cout<<value;
    //         col++;
    //         value++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    //! pattern 29 (another way of same 28 question)
    // int input;
    // cin>>input;
    // int row = 1;

    // while(row<=input){
    //     int space = row - 1;
    //     int value = row;
    //     while(space){
    //         cout<<" ";
    //         space--;
    //     }
    //     int col=input;

    //     while(col>=row){
    //         cout<<value;
    //         col--;
    //         value++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    //! pattern 30
    // int input;
    // cin>>input;
    // int row = 1;
    // int value = 1;
    // while(row<=input){
    //     int space = input - row;

    //     while(space){
    //         cout<<" ";
    //         space--;
    //     }
    //     int col=1;

    //     while(col<=row){
    //         cout<<value;
    //         col++;
    //         value++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    //! pattern 31
    // int input;
    // cin>>input;
    // int row = 1;

    // while(row<=input){
    //     int space = input - row;

    //     while(space){
    //         cout<<" ";
    //         space--;
    //     }
    //     // for 2nd triangle
    //     int col=1;
    //     while(col<=row){
    //         cout<<col;
    //         col++;
    //     }
    //     // for 3rd triangle
    //     int value = row - 1;
    //     while(value){
    //         cout<<value;
    //         value--;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    //! pattern 32
    // int input;
    // cin>>input;
    // int row = 1;

    // while(row<=input){
    //     int value = input + row;
    //     int col=1;
    //     while(col<=input){
    //         cout<<value;
    //         value++;
    //     }
    //     // for 2nd triangle

    //     while(col<=row){
    //         cout<<col;
    //         col++;
    //     }
    //     // for 3rd triangle
    //     // int value = row - 1;
    //     // while(value){
    //     //     cout<<value;
    //     //     value--;
    //     // }
    //     cout<<endl;
    //     row++;
    // }

    //! pattern 32

    int input, value, col;
    cin >> input;

    int row = 0;
    while (row < input)
    {
        col = input - row;
        value = 0;
        while (value < col) {
            cout << 1 + value++ << " ";
        }

        col = 2 * row;
        value = 0;
        while (value++ < col)
            cout << "* ";

        col = input - row;
        value = 0;
        while (value < col)
            cout << col - value++ << " ";

        row++;
        cout << endl;
    }
}