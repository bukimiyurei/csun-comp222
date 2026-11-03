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

	// Instruction count
	double inst_cnt = arithmetic_cnt + ld_store_cnt + branch_cnt;

	// Average CPI
	// Calculate CPI for each instruction type
	double CPI_arith = arithmetic_cnt * arithmetic_CPI;
	double CPI_load = ld_store_cnt * ld_store_CPI;
	double CPI_branch = branch_cnt * branch_CPI;

	// Add CPIs together, divide by total number of instructions
	double avg_CPI = (CPI_arith + CPI_load + CPI_branch) / inst_cnt;

	// TODO:
	// Total CPU exec time (milliseconds)
	// (inst_cnt * avg_CPI) / clk_rate
	double exec_time = 2.0;
	

	// TODO:
	// MIPS rating
	double MIPS = 5.0;

	// Print values
	printf("Total number of instructions:	%.2f million\n", inst_cnt);
	printf("Average CPI:			%.2f\n", avg_CPI);
	printf("Total execution time:		%.2f ms\n", exec_time);
	printf("MIPS Rating:			%.2f MIPS\n", MIPS);

	return 0;
}
