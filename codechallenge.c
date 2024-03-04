#include <stdio.h>

#include <math.h>


int main() {

	double a;
	double b;

	printf("This Apps will calculate the hypoteunus value\n"); //The message to display regarding our app
	//get the first value
	printf("Enter your first value: \n"); //Request line command of the first value
	scanf("%lf", &a);
	//get the second value
	printf("Enter your second value: \n"); //Request for the second value
		scanf("%lf", &b); //lf double format characterr

	double c = sqrt((a * b) + (b * b));

	printf("The hypoteunus: %f\n", c); // the result of our hypoteunus value	

	return 0;

}
