#include <stdio.h>
#include <string.h>

// Function to compute GCD of two integers
int gcd(int a, int b)
{
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
//Function to check if str1 and str2 can be divided bt a common string

char* gcdOfStrings(char* str1, char* str2)
{
	// Check if they have non-zero GCD string by comparing their prefixes
	if (strlen(str1) + strlen(str2) != strlen(str2) + strlen(str1)) 
	{
		return "";
	}
// Get the GCD of the two lengths
int gcdLength = gcd(strlen(str1), strlen(str2));

// Find the substring of the GCD length and check if it's the GCD string
for (int i = 0; i < gcdLength; ++i)
{
	if (str1[i] != str2[i])
	{
		return "";
	}
}

//Return the GCD string
static char gcdString[1000]; //assuming the gcd string fits within 1000 characters
strncpy(gcdString, str1, gcdLength);
gcdString[gcdLength] = '\0'; // Null terminate the strng
return gcdString;
}
