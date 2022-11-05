#include<iostream>
#include<iomanip>
#include<string>
#include<math.h>

int numbersArray();
int schoolGrades();
int schoolGradesArray();
int checkForRepettativeCharacters();
int sortTheNumbersSmallestToLargest();
int sortingSchoolGrades();

using namespace std;
int main()
{
	numbersArray();
	schoolGrades();
	schoolGradesArray();
	checkForRepettativeCharacters();
	sortTheNumbersSmallestToLargest();
	sortingSchoolGrades();
	getchar();
	return 0;
}
int numbersArray()
{
	char GoorNo = 'z';
	cout << "this function will return the sum of an array and print it out in reverse order" << endl;
	cout << "would you like to use this program? y/n" << endl;
	cin >> GoorNo;
	if (GoorNo == 'n') { return 45; }
	/* in this program i will be creating an array of 5 numbers, fiding the sum, and printing the array in reverse order */
	int numbers[5]{ 1,2,3,4,5 };
	int total = 0;
	for (int index = 0; index < 5; index++)
	{
		total += numbers[index];
	}
	cout << total << endl;
	for (int index = 4; index < 5 && index >= 0; index--)
	{
		cout << numbers[index];
	}
	return 10;
}
int schoolGrades()
{
	char GoorNo = 'z';
	cout << "the next function is school grades, this will print out the average of the grades and tell you if if the students are above the average test score or not" << endl;
	cout << "would you like to use this program? y/n" << endl;
	cin >> GoorNo;
	if (GoorNo == 'n') { return 35; }
/*this program will get user input of five student grades, find the averages and see if the studnets grade is above the class average*/
	int num1, num2, num3, num4, num5;
	double total = 0.0;
	cout << "enter 5 grades plz" << endl;
	cin >> num1 >> num2 >> num3 >> num4 >> num5;
	total = num1 + num2 + num3 + num4 + num5;
	total = total / 5;
	cout << "total average of the grades are " << total << endl;
	// now we got to find and see if each of the students grades are above the average
	if (num1 < total) 
	{
		cout << "student 1 is lower then average with a score of " << num1;
	}
	else if (num2 < total) 
	{
		cout << "student 2 is lower then average with a score of " << num2;

	}
	else if (num3 < total) 
	{
		cout << "student 3 is lower then average with a score of " << num3;

	}
	else if (num4 < total) 
	{
		cout << "student 4 is lower then average with a score of " << num4;

	}
	else if (num5 < total) 
	{
		cout << "student 5 is lower then average with a score of " << num5;

	}

	return 20;
}
int schoolGradesArray()
{
	char GoorNo = 'z';
	cout << "this function will do the samething as the previouse function its ju8st we are storing it into an array" << endl;
	cout << "would you like to use this function? y/n" << endl;
	cin >> GoorNo;
	if (GoorNo == 'n') { return 55; }
	/* in this programm i will be using the same style as the schoolgrades [programm the only differance is we are using an array to store the data and print it*/

	int schoolGrades[5];
	double total = 0.0;

	for (int index = 0; index < 5;index++)
	{
		cout << "Eneter a students grade " << endl;
		cin >> schoolGrades[index];
		total += schoolGrades[index];
	}
	cout << total << " is the total " << endl;
	total = total / 5;
	cout << "the average test score is " << total << endl;
	// check to see if some students fell below average test scores

	for (int index = 0; index < 5; index++)
	{
		if (schoolGrades[index] < total) {
			cout << "student number " << index+1 << " has a below average test score " << endl;
		}
	}

	return 30;
}
int checkForRepettativeCharacters()
{
	char GoorNo = 'z';
	cout << "in this function we will see if the word you entered has any repetative letters" << endl;
	cout << "would you like to use this function? y/n" << endl;
	cin >> GoorNo;
	if (GoorNo == 'n') { return 65; }
	int index = 0, increment = 0, passes = 0;
	string str3;
	char letter;

	cout << "type in a word" << endl;
	cin >> str3;

	letter = str3[index];
	for (int index = 0; index <= str3.length(); index++)
	{
		if (str3[index] == letter )
		{
			increment++;
			if (increment >= 2)
			{
				cout << "this word has " << increment << " or more of the same letters in it" << endl;
				return 66;
			}
		}
		else if (index == str3.length())
		{
			index = 0;
			increment = 0;
			letter = str3[index+passes];
			passes++;
		}
	}
	cout << "this word has zero fo the same letters in it " << endl;
	return 60;
}
int sortTheNumbersSmallestToLargest()
{
	char GoorNo = 'z';
	cout << "this function will sort the entered numbers from largest to smallest" << endl;
	cout << "would you like to use this function? y/n" << endl;
	cin >> GoorNo;
	if (GoorNo == 'n') { return 75; }
	const int SIZE = 8;
	int numbersList[SIZE]{8,1,55,66,32,44,3,12};
	int smallestIndex, location, temp;
	for (int index = 0; index < SIZE; index++)
	{
		// index starts at zero
		smallestIndex = index;
			for (location = index + 1; location < SIZE; location++)
			{
				// find the smalles number
				if (numbersList[location] < numbersList[smallestIndex])
				{
					// put the location of the smallest number in the vareable smallest numberIndex
					smallestIndex = location;
				}
			}
			// now switch the numbers
			temp = numbersList[smallestIndex];
			numbersList[smallestIndex] = numbersList[index];
			numbersList[index] = temp;
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << numbersList[i] << endl;
	}
	return 60;
}
int sortingSchoolGrades()
{
	char GoorNo = 'z';
	cout << "this function will sort the students grades from smallest to largest and will display the average score of the class of 8" << endl;
	cout << "would you like to use this function? y/n" << endl;
	cin >> GoorNo;
	if (GoorNo == 'n') { return 85; }
	const int length = 8;
	int grades[length];
	double total = 0.0;
	int z = 0;
	cout << "please enter the students grades " << endl;
	for (int i = 0; i < 8; i++)
	{
		cin >> grades[i];
	}
	while (z < length) 
	{
		total += grades[z];
		z++;
	}
	total = total / length;
	cout << "the average score is " << total << endl;
	for (int i = 0; i < 8; i++)
	{
		cout << grades[i] << endl;;
	}
	// now we are going to sort the grades from smallest to largest
	int smallestIndex, location, temp;
	for (int index = 0; index < length; index++)
	{
		// index starts at zero
		smallestIndex = index;
		for (location = index + 1; location < length; location++)
		{
			// find the smalles number
			if (grades[location] < grades[smallestIndex])
			{
				// put the location of the smallest number in the vareable smallest numberIndex
				smallestIndex = location;
			}
		}
		// now switch the numbers
		temp = grades[smallestIndex];
		grades[smallestIndex] = grades[index];
		grades[index] = temp;
	}
	for (int i = 0; i < length; i++) 
	{
		cout << endl << grades[i] << endl;
	}
	return 10;
}
