// Prepare_for_dead.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include "Types.h"
#include "Method.h"
#include "Def.h"
using namespace std;
int main()
{
	int a = 0;
	L1 *head, *cur, *last;
	ifstream f;
	ifstream f2;
	ofstream f_out;
	Input_txt(head, cur, last,f, f2, f_out);
	In_List(head, cur, last, f, f2, f_out, a);
	Out_List(head, cur, last, f_out);
	Add_elem(head, cur, last, f, f2, f_out, a);
	Out_List(head, cur, last, f_out);
	Delete(head, cur);
	system("pause");
	return 0;
}

