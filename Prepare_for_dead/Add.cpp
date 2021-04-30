#include <iostream>
#include <fstream>
#include "Types.h"
#include "Method.h"
#include "Def.h"
using namespace std;
void Add_elem(L1*& head, L1*& cur, L1*& last, ifstream& f, ifstream& f2, ofstream& f_out, int& a) {
	AddNewElem(cur);
	CurSetLen(cur, f2, f_out);
	int b = 0;
	if (cur->Str.Len == 0) {
		b = 1;
	}
	f2.close();
	f2.open("in2.txt");
	for (int i = 0; i <= cur->Str.Len; i++) {
		Go_Input(cur, i, f2);
	}
	f_out << "\n\nПолученный дополнительный элемент: ";
	for (int i = 0; i < cur->Str.Len; i++) {
		Go_Output(cur, i, f_out);
	}
	f_out << "\n";
	
	if (b == 0) {
		Go_To(last->next, cur);
		Go_NULL(&cur->next);
		Go_To(last, cur);
		if (a == 1) {
			Go_To(head, cur);
		}
	}
		f_out << "\nОтредактированный список:\n";
	
}