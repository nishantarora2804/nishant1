#include <iostream>
using namespace std;
int main()
{
int len, sum = 0;
cout << "Enter the no. of students in the class" << endl;
cin >> len;
int *marks = new int[len];
cout << "Enter the marks of each student" << endl;
for( int i = 0; i < len; i++ )
{
cin >> marks[i];
}
for( int i = 0; i < len; i++ )
{
sum += marks[i];
}
cout << "sum is " << sum << endl;
delete[] marks;
return 0;
}
