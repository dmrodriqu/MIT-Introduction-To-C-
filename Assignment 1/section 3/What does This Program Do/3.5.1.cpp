/*

What does this snippet do? Try doing out a few examples with small
numbers on paper if you’re stuck.

(Hint: Think about numbers in binary notation – in base 2.

How would you express a number as a sum of powers of 2? 

You may also find it useful to note that multiplying by 2n is 
equivalent to multiplying by 2 n times. 

You should also keep in mind the distributive property of 
multiplication: 

a(x + y) = ax + ay.)


// bob and dole are integers
int accumulator = 0; ----> declares an accumulator / initializes to 0
while(true) --> until break encountered
{
	if(dole == 0) break;  ----> if dole == 0 break encountered
	accumulator += ((dole % 2 == 1) ? bob : 0); ---> if dole is odd, bob is added to the accumulator, otherwise 0 is
	dole /= 2; --> dole is divided by 2
	bob *= 2; ---> bob is multiplied by 2
}
cout << accumulator << "\n";

/*

summary: bob is added to the accumulator if dole is odd. dole is divided
         by 2 (ignoring remainder) and bob is multiplied by 2. 
         This continues until dole is equivalent
         to 0.

*/