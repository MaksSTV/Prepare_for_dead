#include <iostream>
#include <fstream>
#include "Types.h"
#include "Method.h"
#include "Def.h"
using namespace std; 
void Out_List(L1*& head, L1*& cur, L1*& last, ofstream& f_out) {
	Go_To(cur, head);
	while (cur->next != NULL) {
		for (int i = 0; i < cur->Str.Len; i++) {
			Go_Output(cur, i, f_out);
		}
		f_out << "->\n";
		Go_To(cur, cur->next);
	}
	for (int i = 0; i < last->Str.Len; i++) {
		Go_Output(last, i, f_out);
	}
	f_out << "->x";
}
void Delete(L1*& head, L1*& cur) {
	Go_To(cur, head);
	while (cur->next != NULL) {
		Go_To(head, cur->next);
		delete cur;
		Go_To(cur, head);
	}
	delete cur->next;
}