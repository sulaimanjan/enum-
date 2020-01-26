/*
'enum' that is a enumerated data type.
enum is useful for defining user defined data types means.
As a programmer we can define our own data types.
There are a lot of data types to given in C++ like integer float, double and so on.
If at all you want to define your own data type you can define but  we  can not introduce something new
Departments
CS, ECE , IT , CIVIL we have to use these existing data type only and define them.
So let us see examples where we can use enum, first example in your application in our program .
you are using department names like computer science department electronic communication engineering department and information technology and civil engineering department. You have to use these departments in your application like a student belongs to which a department you want to check.
How do you want to store information or employee or faculty belongs to which department. So there is something related to department. Now the question is how do we represent department. will you writ The name of the department name of the department means it will be a string, ECE.
It's a string, now working with string is little time consuming because it's not one letter.
It's a set of characters. We want to make it faster. So mostly in daily life we find that if you have some commonly used terms or words we define codes for
them. We define codes so in programming this is very common that if you have a limited set of words commonly used then you can assign codes for them and you can use codes so for this departments. I can give codes like let's say this is
cs -1 , ECE- 2 , IT-3, Civil- 4
the department number one and this is two, this is three and this is  four, now one means the CS, Two means electronics like this. So we can use numbers instead of using strings.
So this will be faster and easy also for programming.
We can give the codes similarly here if you are using days then Monday is 0 Tuesdays 1 then Wednesdays
at 2 and so on and these are playing cards.

See these are all the shapes so there are 4 different shapes of cards club spade Diamond and heart.

Let us look at typedef that is type definition.
What is this.
So for explanation I have taken one example here.
So if you see this example I have some variables.
All these are of type Integer these are off type integer, now variable names if you see M1 M2 M3, r1
r2 r3.
So what is this.
See I have not use meaningful name a readable name.
So usually programmers they will have the habit of doing this like you when you are learning no C++
now for quickly practicing you will give the names like this you will not give lengthy names or more
meaningful names and that will become your habit.
So even in your real projects or the major projects also you will follow the same thing.
So give them names like this and if this type of names are given they are not readable and if the project
is becoming Lengthy and is taking much time it is very tough for you to work on the project because you
yourself cannot figure out what is m1 what is m2 today you wrote something.
Tomorrow you come back to work and again you read the code.
What is this m1 I forgot for what I declare.
So this type of problem arises if you're not using readable or meaningful name.
So this issue is readability issue right.
Again I tell you it's a readability issue not what I want this.
I want to make those variable meaningful so if not the names if I cannot give names at least this datatypes should tell me what is that.
So yes that I can do it using typedef. So let us do it. I will define it I guess. So actually this m1, m2, m3  Three are the marks, r1 r2 r3 are roll numbers both are of integer type.
So here I will define typedef. So this is type definition integer marks. And one more typedef. integer. Roll number.
Inside main function I would declare the variable now m1 m2 and m3
I will declare them off type marksm1 m2 m3 then r1 r2 r3 are of type roll number.
So r1, r2 r3. These are the roll no's, what are the roll numbers.
What is it. integer type. these are useful for defining user defined data type. Yes we have our own data type now. Now there's nothing but the change of name of integer.


*/






# include <iostream>
using namespase std ;

enum day {mon, thu , wed, thu, fri, sat, sun} ;
int main (){
day d ;
d=nom ;

cout << d << endl;
}
