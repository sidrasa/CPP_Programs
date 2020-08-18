/*
 Write a program to input an integer N and print the sum of all its even digits and sum of all its odd digits separately.
Digits mean numbers, not the places! That is, if the given integer is "13245", even digits are 2 & 4 and odd digits are 1, 3 & 5.
Input format :
 Integer N
Output format :
Sum_of_Even_Digits Sum_of_Odd_Digits
(Print first even sum and then odd sum separated by space)
Constraints
0 <= N <= 10^8
Sample Input 1:
1234
Sample Output 1:
6 4
Sample Input 2:
552245
Sample Output 2:
8 15
Explanation for Input 2:
For the given input, the even digits are 2, 2 and 4 and if we take the sum of these digits it will come out to be 8(2 + 2 + 4) and similarly, if we look at the odd digits, they are, 5, 5 and 5 which makes a sum of 15(5 + 5 + 5). Hence the answer would be, 8(evenSum) <single space> 15(oddSum)
*/

#include <iostream>
using namespace std;

int main()
{
	int n,sum1=0,sum2=0,odd,even,i;
	cin>>n;
	while(n>0)
	{
		i = n%10;
		if(i%2==0)
		{
			even = i;
			sum1 += even; //Even sum
		}
		if(i%2!=0)
		{
			odd = i;
			sum2 += odd;  //Odd sum	
		}
		
		n=n/10;
	}
	cout<<sum1<<" "<<sum2<<endl;
	
}
