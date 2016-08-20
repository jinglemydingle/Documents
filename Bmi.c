/* Write a program that calculates the user's body mass index (BMI) and categorizes 
it as underwight, normal, overweight, or obese, base on the following 
table from the United States Centers for Disease Control: 

{(below 18.5 = Underweight),
 (18.5-24.9 = Normal), 
 (25.0-29.9 = Overweight),
(30.0 and above = Obese)}. 

To calculate BMI based on weight in pounds (wtlb) 
and height in inches (htin), use this formula (rounded to tenths):
 
  ((703* wtlb)/htin^{2}\)
	
Prompt the usesr to enter wight in pounds and height in inches. */
 
 
#include <stdio.h>
#include <math.h>
 

double calculate_bmi(double height, double weight);
void categorizing_bmi(double bmi);
double gather_weight(double weight);
double gather_height(double height);


int main(void)
{
 	double height, weight, bmi;
	gather_height(height);
	gather_weight(weight);
	calculate_bmi(height,weight);
	categorizing_bmi(bmi);
	
	return(0);
}


double gather_height(double height)
{
	printf("Please enter your height in inches. \n");
	scanf("%lf", &height);
	return(height);
}

double gather_weight(double weight)
{
	printf("Please enter your weight in pounds. \n");
	scanf("%lf", &weight);
	return(weight);
}
	
 
/*calculate the bmi using formula listed above */
 
double calculate_bmi(double height, double weight)
{
	double bmi;
	
	bmi = ((weight * 703)/(height * height));
	printf("Your BMI is %.2f.", &bmi);
	
	return(bmi);
}

/*Categorizes and prints for BMI*/

void categorizing_bmi(double bmi)
{
	if (bmi<=18.5)
	{ 
		printf("You are underweight and should eat more.\n");
	}
	else if (bmi>=18.6, bmi<=24.9)
	{
		printf("You are normal weight. \n");
	}
	else if (bmi>=25.0, bmi<=29.8)
	{
		printf("You are overweight and should eat less. \n"); 
	}
	else
	{
		printf("You are obese and should stop eating. \n");
	}
	
	return;
}

