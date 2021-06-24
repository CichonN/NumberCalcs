// ------------------------------------------------------------------------------------------
// Name: Neina Cichon
// Abstract: Number Calculations
// Date: 2020-09-11
// ------------------------------------------------------------------------------------------

// ------------------------------------------------------------------------------------------
// Includes
// ------------------------------------------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>
#include<math.h>


// ------------------------------------------------------------------------------------------
// Constants
// ------------------------------------------------------------------------------------------
const int cintNumber = 41;
// ------------------------------------------------------------------------------------------
// Prototypes
// ------------------------------------------------------------------------------------------

// ------------------------------------------------------------------------------------------
// Name: main
// Abstract: This is where the program starts
// ------------------------------------------------------------------------------------------
void main()
{
	//Problem 1
	int intIndex = 0;

	//Problem 2
	int intIndexA = 0;
	int intSumTotal = 0;

	//Problem 3
	int intIndexB = 0;
	int intOddSumTotal = 0;

	//Problem 4
	int intIndexC = 0;
	int intEvenSumTotal = 0;

	// Problem 5
	int intIndexD = 0;
	int intThirdSum = 0;


	//Problem 6
	int intNumber = -1;
	double dblSquareRoot = 0;

	//Problem 7
	int intGrade = 0;
	int intGradeTotal = 0;
	int intIndexE = 0;
	char chrLetterGrade = ' ';
	int intAverage = 0;

	//Problem 8
	int intSumOfMultiples = 0;
	int intIndexF = 0;

	//Problem 9
	char chrUCLetter;
	char chrLCLetter;
	

	//Problem 10
	int intGuess = 0;
	int intIndexG = 0;

	// ------------------------------------------------------------------------------------------
	// Problem #1 –	Print whole numbers from 1 to 100
	// ------------------------------------------------------------------------------------------
	
	printf("-------------------------------------------------------------------------\n");
	printf("Problem 1");
	printf("\n-------------------------------------------------------------------------\n");

	printf("Whole numbers: \n");

	for(intIndex = 1; intIndex <= 100; intIndex += 1)
	{
		printf("%d, ", intIndex);
	}
	printf("\n");

	// ------------------------------------------------------------------------------------------
	// Problem #2 –	Add all whole numbers from 1 to 100 and print total
	// ------------------------------------------------------------------------------------------
	printf("\n-------------------------------------------------------------------------\n");
	printf("Problem 2");
	printf("\n-------------------------------------------------------------------------\n");

	for (intIndexA = 1; intIndexA <= 100; intIndexA += 1)
	{
		intSumTotal += intIndexA;
	}

	printf("Sum of numbers 1 to 100: %d, \n\n", intSumTotal);

	// ------------------------------------------------------------------------------------------
	// Problem #3 –	Add all ODD whole numbers from 7 to 313 and print total
	// ------------------------------------------------------------------------------------------
	printf("\n-------------------------------------------------------------------------\n");
	printf("Problem 3");
	printf("\n-------------------------------------------------------------------------\n");

	for (intIndexB = 7; intIndexB <= 313; intIndexB += 2)
	{
		intOddSumTotal += intIndexB;
	}

	printf("Sum of odd numbers from 7 to 313: %d, \n\n", intOddSumTotal);

	// ------------------------------------------------------------------------------------------
	// Problem #4 –	Add all EVEN whole numbers from -2 to -146 and print total
	// ------------------------------------------------------------------------------------------
	printf("\n-------------------------------------------------------------------------\n");
	printf("Problem 4");
	printf("\n-------------------------------------------------------------------------\n");

	for (intIndexC = -2; intIndexC >= -146; intIndexC -= 2)
	{
		intEvenSumTotal += intIndexC;
	}

	printf("Sum of even numbers from -2 to -146: %d, \n\n", intEvenSumTotal);


	// ------------------------------------------------------------------------------------------
	// Problem #5 –	Add every 3rd number from 2000 to -60 and print total
	// ------------------------------------------------------------------------------------------
	printf("\n-------------------------------------------------------------------------\n");
	printf("Problem 5");
	printf("\n-------------------------------------------------------------------------\n");

	for (intIndexD = 2000; intIndexD >= -60; intIndexD -= 3)
	{
		intThirdSum += intIndexD;
	}

	printf("Sum of every 3rd number from 2000 to -60: %d, \n\n", intThirdSum);


	// ------------------------------------------------------------------------------------------
	// Problem #6 –	Print out square root of user input number (1 to 100)
	// ------------------------------------------------------------------------------------------
	printf("\n-------------------------------------------------------------------------\n");
	printf("Problem 6");
	printf("\n-------------------------------------------------------------------------\n");

	//Get user input
	do
	{
		printf("Please enter a number between 1 and 100: ");
		scanf_s("%d", &intNumber);

		if (intNumber >= 0 && intNumber <= 100)
		{
			dblSquareRoot = sqrt(intNumber);
			break;
		}

	} 
	while (intNumber < 0 || intNumber > 100);

	printf("The square root of %d is %lf\n\n", intNumber, dblSquareRoot);


	// ------------------------------------------------------------------------------------------
	// Problem #7 –	Calculate average of test scores (0 to 100) and the letter grade. -1 to end
	// ------------------------------------------------------------------------------------------
	printf("\n-------------------------------------------------------------------------\n");
	printf("Problem 7");
	printf("\n-------------------------------------------------------------------------\n");

	//Get user input
	do
	{

		printf("Enter a test score from 0 to 100 (-1 to end): ");
		scanf_s("%d", &intGrade);

		if (intGrade >= 0 && intGrade <= 100)
		{
			intGradeTotal += intGrade;
			intIndexE += 1;
		}
	} while (intGrade != -1);

		intAverage = (intGradeTotal / intIndexE);

	switch (intAverage / 10)
	{
		case 10:
		case 9:
			chrLetterGrade = 'A';
			break;
		case 8:
			chrLetterGrade = 'B';
			break;
		case 7:
			chrLetterGrade = 'C';
			break;
		case 6:
			chrLetterGrade = 'D';
			break;
		default:
			chrLetterGrade = 'F';
			break;
	}


	printf("The average was %d and the letter grade is %c\n\n", intAverage, chrLetterGrade);


	// ------------------------------------------------------------------------------------------
	// Problem #8 –	Print sum of all multiples of 3 or 5 from 0-1000.
	// ------------------------------------------------------------------------------------------
	printf("\n-------------------------------------------------------------------------\n");
	printf("Problem 8");
	printf("\n-------------------------------------------------------------------------\n");

	for (intIndexF = 0; intIndexF < 1000; intIndexF += 1)
	{
		if (intIndexF % 3 == 0 || intIndexF % 5 == 0) //check if multiple of 3
		{
			intSumOfMultiples += intIndexF;
		}
	}

	printf("Sum of all multiples of 3 and 5 (from 1 to 1000): %d, \n\n", intSumOfMultiples);


	// ------------------------------------------------------------------------------------------
	// Problem #9 –	Get uppercase letter from user. Display it as both upper and lowercase. (NO built-in function )
	// ------------------------------------------------------------------------------------------
	printf("\n-------------------------------------------------------------------------\n");
	printf("Problem 9");
	printf("\n-------------------------------------------------------------------------\n");

	//Get user input
	do
	{
		printf("Please enter an uppercase letter (A to Z): ");
		scanf_s("\n%c", &chrUCLetter);

	} while (chrUCLetter < 'A' || chrUCLetter > 'Z');

	chrLCLetter = chrUCLetter + 32;

	printf("\nYour letter in uppercase: %c ", chrUCLetter);
	printf("\nYour letter in lowercase: %c \n\n\n", chrLCLetter);

	// ------------------------------------------------------------------------------------------
	// Problem #10 - Hangman
	// ------------------------------------------------------------------------------------------
	printf("\n-------------------------------------------------------------------------\n");
	printf("Problem 10 ");
	printf("\n-------------------------------------------------------------------------\n");

	intIndexG = 1;

	printf("Let's play a game!! \n");
		//Get user input
	do
	{
		printf("\nGuess a number between 1 and 100: ");
		scanf_s("\n%d", &intGuess);
		if (intIndexG < 8)
		{
			if (intGuess >= 1 && intGuess <= 100)
			{
				if (intGuess == cintNumber)
				{
					printf("*********************************************\n\n");
					printf("CONGRATULATIONS! YOU WON!\n\n");
					printf("*********************************************\n\n");
					printf("");
					printf("\n             ___________");
					printf("\n            '._==_==_=_.'");
					printf("\n            .-\\:      /-.");
					printf("\n           | (|:. 1   |) |");
					printf("\n            '-|:.     |-'");
					printf("\n              \\::.    /");
					printf("\n               '::. .'");
					printf("\n                 ) (");
					printf("\n               _.' '._");
					printf("\n              =========\n\n\n");



					break;
				}
				else if (intGuess > cintNumber)
				{
					printf("\nToo high. Try Again.");
					intIndexG += 1;
				}
				else
				{
					printf("\nToo low. Try Again.");
					intIndexG += 1;
				}
				
			}
			else
			{
				printf("\nNumber not in range. Try Again.");
			}
		}
		else
		{
			printf("\n-------------------------------------------------------------------------\n");
			printf("\n\t\t\t\tGAME OVER\n");
			printf("\n\t\t\t\tYOU LOSE\n");
			printf("\n-------------------------------------------------------------------------\n");

			printf("  +---+\n");
			printf("  |   |\n");
			printf("  O   |\n");
			printf(" /|%c  |\n", 92);
			printf(" / %c  |\n", 92);
			printf("      |\n");
			printf("=========\n");

			break;
		}

	} while (intGuess != cintNumber || intIndexG <= 8);

	printf("\n-------------------------------------------------------------------------");
	printf("\nThis program brought to you by Neina Cichon\n\n");

	system("pause");
}

