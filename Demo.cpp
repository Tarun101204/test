// #include<iostream>
// using namespace std;


// int main()
// {
// int A[2][3]={3,3,3,3,3,3};
// int B[2][3]={1,1,1,1,1,1};
// int C[2][3];
// for(int i=0;i<2;i++)
//  {
//  for(int j=0;j<3;j++)
//  
//  C[i][j]=A[i][j]+B[i][j];
//  }
//  }
// cout<<"The addition of A and B matirx is :\n";
// for(int i=0;i<2;i++)
//  {
//  for(int j=0;j<3;j++)
//  {
//  cout<<C[i][j]<<" ";
//  }
//  cout<<endl;
//  }
//  cout<<endl;
    
// return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int arr[5][5];
//     for(int i= 0; i < 5 ; i++){
//         for(int j = 5; j > 0;j--) {
//             cout << "*" ;
//         }
//        cout << endl;
//     }
//     return 0;
// }

//                                         *************** sorting **************(using bubble sort)


// #include <iostream>
// using namespace std;
// int main(){
//     int n , temp;
//     cin >> n;
//     int arr[n];
//     for(int i = 0 ; i < n ; i++){
//         cin >> arr[i];
//     }
     
//     for(int pass  = 0 ; pass < n ; pass++){
//         for(int i = 0 ; i < n - pass - 1 ; i++)
//         {
//         if(arr[i] > arr[i+1]){
//             temp =  arr[i];
//             arr[i] = arr[i+1];
//             arr[i + 1] = temp;
//         }
//     }
        
//     }
//     for (int i = 0 ; i < n ; i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }
//                                         ************* code for patterns **********
// int main(){
//     int n;
//     cin>> n;
//     for(int i = 0 ; i <n ;i++){
//         for ( int j = 0 ; j < n  ; j++){
//             cout << "*" ;
//         }
//         cout << endl;
//     }
//     return 0;
// }




// int main(){
//     int n;
//     cin>> n;
//     int j;
   
//     for(int i = 0 ; i <n ;i++){
//         char ch = 'A';
//         for (  j = 0 ; j < n  ; j++)
//         {
//             cout << ch ;
//             ch = ch + 1;
//         }
//         cout << endl;
//     }
//     return 0;
// }



// int main(){
//     int n;
//     cin>> n;
//     int num = 1;
//     for(int i = 0 ; i <n ;i++){
//         for ( int j = 0 ; j < n  ; j++){
//             cout << num ;
//             num = num + 1;

//         }
//         cout << endl;
//     }
//     return 0;
// }



// int main(){
//     int n;
//     cin>> n;
    
//     for(int i = 0 ; i < n ;i++){
//         for ( int j = 0 ; j < i + 1   ; j++){
//             cout << "*" ;
//         }
//         cout << endl;
//     }
//     return 0;
// }




// n =  3
// *
// **
// ***




// int main(){
//     int n = 4;
    
    
//     for(int i = 0 ; i < n ;i++){
//         for ( int j = 0 ; j < i + 1   ; j++){
//             cout << (i + 1) ;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// 1
// 22
// 333
// 4444



//                                         ********** FLOYD'S TRIANGLE PATTERN *************
// int main(){
//     int n = 4;
    
//     int num = 1;
//     for(int i = 0 ; i < n ;i++){
//         for ( int j = 0 ; j < i + 1   ; j++){
//             cout << num ;
//             num = num + 1;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// 1
// 23
// 456
// 78910







//    int main(){
//     int n = 4;
//     for(int i = 0; i < n ;i++){
//         for ( int j = 0 ; j < i  ; j++){
//             cout << " ";
//         }
//         for ( int j = 0 ; j < n - i    ; j++){
            
//             cout << (i + 1) ;
            
//         }
//         cout << endl;
//     }
//     return 0;
// }





//                                    ************   PALINDROME NUMBER CHECKING  ******************
// #include <iostream>
// #include <string.h> // For strlen function
// using namespace std;

// bool isPalindrome(const char* str, int length) {
//     const char* start = str;           // Pointer to the start of the string
//     const char* end = str + length - 1; // Pointer to the end of the string

//     while (start < end) {
//         if (*start != *end) {
//             return false; // Not a palindrome
//         }
//         start++;
//         end--;
//     }
//     return true; // It's a palindrome
// }

// int main() {
//     char str[100]; // Array to store the input string

//     cout << "Enter a string: ";
//     cin.getline(str, 100); // Accept input from the user

//     // Calculate the length of the string using strlen
//     int length = strlen(str);

//     cout << "Length of the string: " << length << endl;

//     // Check if the string is a palindrome
//     if (isPalindrome(str, length)) {
//         cout << "The string is a palindrome." << endl;
//     } else {
//         cout << "The string is not a palindrome." << endl;
//     }

//     return 0;
// }






        //                                  ********* SUM OF DIGITS OF A NUMBER ***********

// int sum(int n ){
//     int total = 0;
//     for(int i = 0 ; n > 0 ; i++){
//         int x = n % 10;
        
//        n = n / 10;
//        total = total + x ;

//     }
//     return total;
// }
// int main(){
//     int n ;
//    cin>>n;
//     cout << "sum from 1 to n :" << sum(n);
//     return 0;
// }

//  EXAMPLE = n = 145 ; answer = 10;

//                                           **********  BINARY TO DECIMAL FROM ***********
// int binTOdecimal(int binnum){
//           int ans = 0 ;int pow  = 1;//2*0
//         while(binnum > 0){
//               int  rem = binnum %  10 ;
//                 ans += rem * pow;
//                 binnum /= 10;
//                 pow *= 2;

//         }
//         return ans;//decimal form

// }
// int main(){
//         cout<< binTOdecimal(101)<<endl;
//         return 0;
// }

//                                              ********** BITWISE OPREATOR *******

// int main(){
//        int a= 6;int b = 10;
//         cout << (a & b) << '\n';
//         cout << (a | b) << '\n';
//         cout << (a ^ b) << '\n';

// return 0;

// }



//                                               **********  checking number is prime or not ***********


// #include <iostream>
// using namespace std;

// bool isPrime(int n) {
//     if (n <= 1) return false; // Numbers less than or equal to 1 are not prime
//     for (int i = 2; i * i <= n; i++) { // Check divisors up to sqrt(n)
//         if (n % i == 0) return false; // If divisible, not prime
//     }
//     return true; // If no divisors found, it's prime
// }

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     if (isPrime(num))
//         cout << num << " is a prime number." << endl;
//     else
//         cout << num << " is not a prime number." << endl;

//     return 0;
// }



        //                                     ********** PRINTING  ALL PRIME NUMBERS UPTO  N ***************



// // Function to check if a number is prime
// bool isPrime(int n) {
//     if (n <= 1) return false;      // 0, 1 and negatives are NOT prime
//     if (n == 2) return true;       // 2 is prime
//     if (n % 2 == 0) return false;  // Eliminate even numbers > 2

//     // Check only odd divisors up to sqrt(n)
//     for (int i = 3; i * i <= n; i += 2) {
//         if (n % i == 0)
//             return false;
//     }
//     return true;
// }

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     cout << "Prime numbers up to " << n << " are: ";

//     for (int i = 2; i <= n; i++) {
//         if (isPrime(i)) {
//             cout << i << " ";
//         }
//     }

//     cout << endl;
//     return 0;
// }


//                        *************SMALLEST AND LARGEST NUMBER IN ARRAY *****************

// int main(){
//                  int arr[5];
//         int smallest = INT8_MAX ;
//         int largest = INT8_MIN;
//          for(int i = 0 ; i <5;i++){
//                  cin >> arr[i];
//          }
//          for(int i = 0 ; i <5;i++){
//                  cout<<arr[i];
//         }
//          cout << "\n";
//         for(int i =0 ; i < 5 ;i++){
//                  if(arr[i] < smallest){
//                          smallest = arr[i];
//                  }
//                  if(arr[i]>largest){
//                         largest = arr[i];
//                  }
//          }
//          cout << smallest<<'\n';
//          cout<<largest;
//  return 0;
//  }

            
       //            *********** REVERSE AN ARRAY ***********


//  int main(){
//         int n;
//         int arr[n];
//         cin>>n;
//         for(int i = 0 ; i <n;i++)
//         {
//                   cin >> arr[i];
//         }

//         for(int i = 0 ; i <n;i++)
//         {
//                   cout<<arr[i];
//         }
//         cout<<'\n';
//         for (int i = n - 1; i >= 0; i--) {
//         cout << arr[i] << " ";
//     }
 
// return 0;
// }
             
 

//                    ************ SUM AND PRODUCT UPTO N TERMS IN AN ARRAY **************

// int main(){
//         int n ;int sum = 0;int product = 1;
//         cin>>n;
//         int arr[n];
//         for(int i = 0 ;i < n ; i++){
//                cin>>arr[i]; 
//         }
//         for(int i = 0 ; i<n;i++){
//                 sum = sum + arr[i];
//         }
//         cout << sum <<" ";
//         for(int i = 0 ; i<n;i++){
//                 product = product * arr[i];
//                }
//                cout<< product ;
//                return 0;
// }




// int main() {
//     int n;
//     cout << "Enter size of array: ";
//     cin >> n;

//     int arr[n];
//     cout << "Enter array elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     cout << "Unique elements are: ";
//     for (int i = 0; i < n; i++) {
//         bool isUnique = true;

//         // Check if arr[i] appeared before
//         for (int j = 0; j < n; j++) {
//             if (i != j && arr[i] == arr[j]) {
//                 isUnique = false;
//                 break;
//             }
//         }

//         if (isUnique) {
//             cout << arr[i] << " ";
//         }
//     }
//     return 0;
// }



               //         ************* Intersection of two array********************

// int main(){
//         int n , m;
//         cin>>n;cin>>m;
//         int arr1[n];int arr2[m];
//         for(int i=0; i <n;i++){
//                 cin>>arr1[i];
//         }
//         for(int i=0; i <m;i++){
//                 cin>>arr2[i];
//         }
//         for(int i = 0;i<n;i++){
//               for(  int j=0;j<m;j++){
//                         if(arr1[i]==arr2[j]){
//                                 cout<<arr1[i]<<" ";
//                                 break;
//                         }
                       
//                 }
//         }
//         return 0;
// }



//                  ************** swap  max and min number in a array ********************

// int main(){
//         int n;
//         int arr1[n];
//         cin>>n;int temp;
//          int smallest = INT8_MAX ;
//         int largest = INT8_MIN;
        
//         for(int i =0;i<n;i++){
//                 cin>>arr1[i];
//         }
//         for(int i =0 ; i < 5 ;i++){
//                  if(arr1[i] < smallest){
//                          smallest = arr1[i];
//                  }
//                  if(arr1[i]>largest){
//                         largest = arr1[i];
//                  }
//                   temp  = smallest;
//                   smallest = largest;
//                   largest = temp;


//          }

//           cout << smallest<<'\n';
//          cout<<largest;
//  return 0;
// }



//                       **********VECTOR BASIC  Functions ************


#include<iostream>
#include<vector>
using namespace std;


// int main(){
//     vector<int>vec;
//     //cout<<"size = "<<vec.size()<<endl;
//     vec.push_back(25);
//     vec.push_back(35);
//     vec.push_back(45);

//     cout<<"after pushback size = "<<vec.size()<<endl;


//     vec.pop_back();
    
//     cout << vec.front()<<endl;

//     cout << vec.back()<<endl;

//     cout<< vec.at(0) << endl;

//     return 0 ;
// }



         //********* vector problem 1 = Single Number (leetcode = 136)*****


int main(){
        int nums;
    int ans = 0 ;
    for(int val : nums){
        ans = ans ^ val;
    }
    return 0;
}