#include <bits/stdc++.h>
#include "main.h"
#include "assembler.cpp"
#include "mipsim.hpp"
int main(int argc, char* argv[])
{
	freopen("myerr", "w", stderr);
	init();

//	fas.open(argv[1]);
//	assert(fas.is_open());
#if MANUAL
	string asp = "1", inp, oup;
	fas.open(asp + ".s");
	inp = asp + ".in";
	oup = asp + ".out";
	fin.open(inp);
	fout.open(oup);
	assert(fas.is_open() && fin.is_open() && fout.is_open());
#else
	fas.open(argv[1]);
	assert(fas.is_open());
#endif
	int m = compile();
	cerr << "compiled!" << endl;
	run(m);
#if MANUAL
	fin.close();
	fout.close();
#endif
	return 0;
}

