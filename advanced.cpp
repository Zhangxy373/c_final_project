#include<stdio.h>
#include<errno.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

// Structure definition
struct Person_type
{
	char name[10] = { 0 };
	char gender;
	float height;
	float weight;
	float bmi;
	float overweight;
	char health_condition[20] = { 0 };
};


// Calculate the BMI values and rank the health conditions for all those people.
static void calc_bmi(struct Person_type* ptr, char n_people)
{
	/*
	* ptr	   -> the structure pointer.
	* n_people -> the number of people.
	*/

	// The BMI values and health conditions (in terms of weight ranks) can be evaluated 
	// according to Equation (1) and Table 1, respectively, as in the slides.
	// You can use the strcpy_s() function to copy the strings of health conditions into the structures.
}


// Calculate the overweight percentage values for all those people.
static void calc_overweight(struct Person_type* ptr, char n_people)
{
	/*
	* ptr	   -> the structure pointer.
	* n_people -> the number of people.
	*/

	//Your code

}


// Sort structure pointers in the pointer array.
static void ascending_sorting(struct Person_type** arr, char n_people)
{
	/*
	* arr	   -> the pointer array containing the structure pointers.
	* n_people -> the number of people.
	*/
	
	// Sort the pointer array using methods like bubble/selection sorting.
}

// File reading function
void read_file(struct Person_type* ptr, char n_people, char n_name)
{
	// open a file
	FILE* fp;
	errno_t err;
	if (err = fopen_s(&fp, "data.txt", "rb") != 0)
	{
		printf("Cannot open fhe file\n");
		exit(0);
	}
	// read the file
	for ()
	{	
		// use fgets() function to read strings.
	}
	for ()
	{
		// use fgetc() function to read characters.
		// use fgetc() function to get a "\n" to eliminate.
	}
	for ()
	{
		// use fread() function to read data.
	}
	// close file
}


// File writing function
static void write_file(struct Person_type** arr, char n_people)
{
	// build a file
	FILE* fp;
	errno_t err;
	if (err = fopen_s(&fp, "advanced_result.txt", "w") != 0)
	{
		printf("Cannot open fhe file\n");
		exit(0);
	}
	// write the file
	for ()
	{
		// use fputs() function to write strings
		// use fputc() function to write characters
		// use fprintf() function to write data
	}
	// close the file
}


int main()
{

	char n_people = 8;
	char n_name = 10;

	// define a structure array containing 8 people's information
	struct Person_type people_arr[8];

	// read the file to get data
	read_file();

	// calculate the BMI values for each person
	calc_bmi();

	// calculate the overweight percentage value
	calc_overweight();

	// sort the people according to the BMI values
	// define a pointer array
	// assign values for the pointer array
	// sort the pointer array based on the BMI values
	struct Person_type* sorted_arr[8];
	ascending_sorting();

	// write the file to save the sorted structure array
	write_file();

	return 0;
}
