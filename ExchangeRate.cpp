#include <stdio.h>

int main() {
	
	const float RATE_USD = 1233.1;
	const float RATE_JPY = 9.87;
	const float RATE_EUR = 1337.17;
	const float RATE_CNY = 193.56;
	const float RATE_GBP = 1605.91;
	
	float outputUSD = 0;
	float outputJPY = 0;
	float outputEUR = 0;
	float outputCNY = 0;
	float outputGBP = 0;
	
	int return1000, return500, return100, return50, return10;
	
	float rate[]= {RATE_USD,RATE_JPY,RATE_EUR,RATE_CNY,RATE_GBP};
	
	printf("Put in the amount of money you want to exchange with(Won) : ");
	int inputWon;
	scanf("%d", &inputWon); 
	
	int menuNum;
	do {
		printf("Select a number (1:USD, 2:JPY, 3:EUR, 4:CNY, 5.GBP) : ");
		scanf("%d", &menuNum);
	} while (menuNum < 1 || menuNum > 5);
	  
	
		int i = menuNum - 1;
		int output = (int)((float)inputWon / rate[i]);
		int balance = (int)((float)inputWon - (float)output*rate[i])/10*10;
		int outbalance = balance;
	
		return1000 = balance/1000;
		balance = balance - return1000*1000;
		return500 = balance/500;
		balance = balance - return500*500;
		return100 = balance/100;
		balance = balance - return100*100;
		return50 = balance/50;
		balance = balance - return50*50;
		return10 = balance/10;
		balance = balance - return10*10;
		
		//print
		printf("1000: %d, 500: %d, 100: %d, 50: %d, 10: %d\n", return1000, return500, return100, return50, return10);
		printf("Base exchange rate : %6.2f\n", rate[i]);
		printf("Exchange result\n");
		printf("Exchange %d\n", output);
		printf("Balnce : %d Won\n", outbalance);
}
