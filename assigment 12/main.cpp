



#include <cmath>
#include <iostream>
#include <ctime>
#include <cerrno>
#include <string>
#include <cstring>

using namespace std;
//cubing function
double cube(double a)
{
	return a*a*a;
};

//cuberoot function
double cuberoot(double a)
{
return std::cbrt(a);

};
int main()

{
cout<<"Tyler Dewalt CS1C MON WED 2:30-4:50"<<endl;

cout<<"Part one \n"<<endl;
	 // make time variable
	    time_t tt;
	    // make container to store time
	    // localtime()
	    struct tm * ti;

	    // using the time function
	    time (&tt);

	    // Using localtime()
	    ti = localtime(&tt);

	    cout << "1A: Current Day, Date and Time is: "<<endl;
	         cout<< asctime(ti)<<endl;

	   cout<<"1B: The Day, Date and Time 88 days from today is: "<<endl;

	  tt= (tt+ (60*60*60*88));
	  ti = localtime(&tt);
	   	   cout<<asctime(ti)<<endl;

	   	struct tm jul ={0,0,0, 25, 6, 119};
	   	struct tm dec ={0,0,0, 24, 12, 119};
	   	time_t a = mktime(&jul);
	   	time_t b = mktime(&dec);

        // std::cout << std::ctime(&b);
        //std::cout << std::ctime(&a);




	           double difference = std::difftime(b, a) / (60 * 60 * 24);
	           cout<<" 1C:The number of days between july 25 and december 24th is "<<endl;
	           cout << difference << " days" << std::endl;


cout<<"Part two \n"<<endl;


double value =-2;

errno=0;
cout<<"The cout of sqrt(-2) is :"<<endl;
cout<<sqrt(value)<<endl;
cout<<"The error of sqrt(-2) is :"<<endl;
cout<<strerror(errno)<<"\n"<<endl;

value =0;
errno=0;
cout<<"The cout of 1/sin(0) :"<<endl;
cout<<1/(sin(value))<<endl;
cout<<"The error of 1/sin(0) :"<<endl;
cout<<strerror(errno)<<"\n"<<endl;

value =-2;
errno=0;
cout<<"The cout of the natural log(-2) is :"<<endl;
cout<<log(value)<<endl;
cout<<"The error of the natural log(-2) is :"<<endl;
cout<<strerror(errno)<<"\n"<<endl;

cout<<"subtraction of unsigned ints"<<endl;
cout<< 10000000000000000000 +4  - 10000000000000000000;

cout<<"\n Part three \n"<<endl;



cout<<"testing the cube of 3 using a pointer function array :"<<endl;
double value2 =3;
double (*ptr_arr[])(double) = {cube, cuberoot};

cout<< (*ptr_arr[0])(value2)<<endl;

cout<<"testing the cuberoot  of 27 using a pointer function array :"<<endl;;

value2 =27;
cout<< (*ptr_arr[1])(value2)<<endl;


cout<<"part 4"<<endl;

/*
int e =65;
char d;
d=e;
cout<<d;
*/

cout<<"the number of bits for all the letters in the alphabet(uppercase and lowercase) + the numbers of 1-10";
for (int i = 65;i<91;i++)
{
	char letter=0;
	int bits=0;
	letter=i;

	cout <<letter<<endl;

	if(i&1)
	bits++;
	if(i&2)
	bits++;
	if(i&4)
	bits++;
	if(i&8)
	bits++;
	if(i&16)
	bits++;
	if(i&32)
	bits++;
	if(i&64)
	bits++;
	cout<<"has "<<bits<<"bits"<<endl;



}

for (int i = 48;i<57;i++)
{
	char letter=0;
	int bits=0;
	letter=i;

	cout <<letter<<endl;

	if(i&1)
	bits++;
	if(i&2)
	bits++;
	if(i&4)
	bits++;
	if(i&8)
	bits++;
	if(i&16)
	bits++;
	if(i&32)
	bits++;
	if(i&64)
	bits++;
	cout<<"has "<<bits<<"bits"<<endl;
}

for (int i = 97;i<123;i++)
{
	char letter=0;
	int bits=0;
	letter=i;

	cout <<letter<<endl;

	if(i&1)
	bits++;
	if(i&2)
	bits++;
	if(i&4)
	bits++;
	if(i&8)
	bits++;
	if(i&16)
	bits++;
	if(i&32)
	bits++;
	if(i&64)
	bits++;
	cout<<"has "<<bits<<"bits"<<endl;
}


	  return 0;

};
