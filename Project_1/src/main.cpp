#include <stdio.h>
#include <math.h>

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

	// Total instruction count
	double inst_cnt = arithmetic_cnt + ld_store_cnt + branch_cnt;

	// Average CPI
	// Calculate CPI for each instruction type
	double CPI_arith = arithmetic_cnt * arithmetic_CPI;
	double CPI_load = ld_store_cnt * ld_store_CPI;
	double CPI_branch = branch_cnt * branch_CPI;

	// Add CPIs together, divide by total number of instructions
	double avg_CPI = (CPI_arith + CPI_load + CPI_branch) / inst_cnt;

	// Total CPU exec time (milliseconds)
	double exec_time = (inst_cnt * avg_CPI) / clk_rate;
	
	// MIPS rating
	double clk_rate_MHz = clk_rate * pow(10.0, 3.0);	// convert clock rate from GHz to MHz
	double MIPS = clk_rate_MHz / avg_CPI;

	// Print values
	printf("Total number of instructions:	%.2f million\n", inst_cnt);
	printf("Average CPI:			%.2f\n", avg_CPI);
	printf("Total execution time:		%.2f ms\n", exec_time);
	printf("MIPS Rating:			%.2f MIPS\n", MIPS);

	return 0;
}
