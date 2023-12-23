#include<stdio.h>
#include<math.h>


// Calculate the BMI value for each person.
static void calc_bmi(float(*infos)[2], float* bmis, char n_people)
{
	/*
	* infos    ->  denotes the pointer pointing to the 1D array infos[0];
	* bmis     ->  denotes the pointer pointing to the first address of array bmis;
	* n_people ->  denotes the number of people.
	*/

	// Your code.
}

// Calculate the value of overweight percentage for each person.
static void calc_overweight(float(*infos)[2], char* gender, float* overweight, char n_people)
{
	/*
	* infos		 ->  denotes the pointer pointing to the 1D array infos[0];
	* gender     ->  denotes the pointer pointing to the gender array;
	* overweight ->  denotes the pointer pointing to the overweight array;
	* n_people	 ->	 denotes the number of people.
	*/

	// Your code.
}

// Based on the BMI values, sort the bmis and sorted_index arrays through methods like bubble/selection sorting.
static void ascending_sorting(float* bmis, char* sorted_index, char n_people)
{
	/*
	* bmis         ->  denotes the pointer pointing to the first address of array bmis;
	* sorted_index ->  denotes the pointer pointing to the sorted_index array;
	* n_people	   ->  denotes the number of people.
	*/

	// Your code.
}

// Display the result in a terminal window
static void display(const char** names, char* gender, float* bmis, float* overweight, char* sorted_index, char n_people)
{
	/*
	* names		  ->  denotes the pointer pointing to the names array;
	* gender	  ->  denotes the pointer pointing to the gender array; 
	* bmis		  ->  denotes the pointer pointing to the bmis array;
	* overweight  ->  denotes the pointer pointing to the overweight array;
	* sorted_index ->  denotes the pointer pointing to the sorted_index array;
	* n_people	  ->  denotes the number of people.
	*/

	printf("\nThe health condition of these people\n\n");
	printf("%8s", "Name");
	printf("%10s", "Gender");
	printf("%10s", "BMI");
	printf("%28s", "health condition");
	printf("%22s", "Overweight\n\n");
	for ()
	{
		printf("%7s", /*sorted name*/);
		printf("%8c", /*sorted gender*/);
		printf("%16f", /*sorted BMI values*/);
		if ()
			printf("%23s", "Severe obesity");
		else if ()
			printf("%23s", "Moderate obesity");
		else if ()
			printf("%23s", "Mild obesity");
		else if ()
			printf("%23s", "obesity");
		else if ()
			printf("%23s", "Normal range");
		else
			printf("%23s", "Underweight");
		printf("%20f", /*sorted overweight*/);
		printf(" %%\n\n");
	}
	printf("\n");
}

int main()
{
	const char* names[] = { "Song","Zhou","Chen","Wang","Zhao","Yao","Shen","Liu" };
	char gender[] = { 'M','F','M','M','F','M','F','F' };
	float infos[8][2] = { {177.3,66.1},{162.8,52.9},{180.6,103.7},{172.3,71.4},{183.0,91.6},{158.4,57.2},
							{166.1,79.0},{178.4,85.3} };
	char n_people = 8;	//Number of people

	//Calculate the BMI values for each person
	float bmis[8];
	calc_bmi(/*formal arguments*/);

	//Sort the people according to the BMI values
	char sorted_index[8] = { 0,1,2,3,4,5,6,7 };
	ascending_sorting(/*formal arguments*/);

	// Calculate the overweight percentage values
	float overweight[8];
	calc_overweight(/*formal arguments*/);

	// Display the result in a terminal window
	display(/*formal arguments*/);

	return 0;
}
