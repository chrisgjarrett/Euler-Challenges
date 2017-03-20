
#include "stdafx.h"
#include <iostream>

//Function declaration
int recursiveFibonacci(int maxValue, int term_kMinus1, int term_kMinus2, int nextTerm, int cumulativeSum);


using namespace std;
int main()
{
	int answer;
	int maxLimit = 4000000;
	int initialKMinus1 = 2;
	int initialKMinus2 = 1;
	int initialCumSum = initialKMinus1;

	//Initialise cumSum as 3, since 1st two terms are assumed
	answer = recursiveFibonacci(maxLimit, initialKMinus1, initialKMinus2, 0, initialCumSum);
	
	cout << answer << endl;
	return 0;
}



int recursiveFibonacci(int maxValue, int term_kMinus1, int term_kMinus2, int nextTerm, int cumulativeSum) {





		nextTerm = term_kMinus1 + term_kMinus2;
		
		if (nextTerm >= maxValue) {
		return cumulativeSum;
		}

		else {
		term_kMinus2 = term_kMinus1;
		term_kMinus1 = nextTerm;


		//Only sum even terms
		if (nextTerm % 2 == 0)
		{
			cumulativeSum = cumulativeSum + nextTerm;
			
		}
		
		return(recursiveFibonacci(maxValue, term_kMinus1, term_kMinus2, nextTerm, cumulativeSum));
	}
	

}


