#include <stdio.h>

int main(){
	// instruction count (millions)
	double arithmetic_cnt = 4;
	double ld_store_cnt = 3;
	double branch_cnt = 1;

	// CPI
	double arithmetic_CPI = 1;
	double ld_store_CPI = 2;
	double branch_CPI = 3;

	// clock rate (GHz)
	double clk_rate = 2;

	// TODO:
	// Instruction count

	// TODO:
	// Average CPI

	// TODO:
	// Total CPU exec time (milliseconds)

	// TODO:
	// MIPS rating

	// Print values
	printf("Total number of instructions:	%d\n", inst_cnt);
	printf("Average CPI:			%f\n", avg_CPI);
	printf("Total execution time:		%d ms\n", exec_time);
	printf("MIPS Rating:			%f MIPS\n", MIPS);

	return 0;
}
