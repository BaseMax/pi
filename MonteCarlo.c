// Max Base
// Monte-Carlo Calculation of Pi
// GitHub.com/BaseMax/pi
// A better and alternative way to create random number: https://github.com/BaseMax/SecureRandStringC
#include <stdlib.h>
#include <stdio.h>

double pi(int loop) {
	int count=0;
	for(int i=0;i<loop;i++) {
		double a=(double)rand()/RAND_MAX;
		double b=(double)rand()/RAND_MAX;
		if(1>=a*a+b*b)
			count++;
	}
	return (double)count/loop*4;
}

int main() {
	int loop=100000; // increase this value to get more digits of PI number
	srand(10102020); // more secure rand...
	printf("PI is %g\n", pi(loop));
	return 0;
}
