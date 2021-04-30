#include <iostream>
#include <fstream>
#include "Types.h"
#include "Method.h"
#include "Def.h"
using namespace std; 
int get_len(ifstream& f, ofstream& f_out) {
	char s = 'a';
	int i = 0;
	while ((s != '\n') && (!f.eof())) {
		f >> s;
		i++;
	}
	cout << i - 1<<"\n";
	
	
	return i - 1;
}
void In_List(L1*& head, L1*& cur, L1*& last, ifstream& f, ifstream& f2, ofstream& f_out, int& a) {
	f.unsetf(ios::skipws);
	AddNewElem(head);
	Go_To(cur, head);
	while (!f.eof()) {
		CurSetLen(cur, f, f_out);
		if (f.eof()) {
			Go_NULL(&cur->next);
			Go_To(last, cur);
			if (cur == head) {
				a = 1;
				
			}
			break;
		}
		AddNewElem(cur->next);
		Go_To(cur, cur->next);
	}
	f.close();
	f.open("in.txt");
	Go_To(cur, head);
	char s = 'a';
	while (cur->next != NULL) {
		for (int i = 0; i <= cur->Str.Len; i++) {
			Go_Input(cur, i, f);
		}
		Go_To(cur, cur->next);
	}
	for (int i = 0; i <= last->Str.Len; i++) {
		Go_Input(last, i, f);
	}
	f_out << "Полученный список:\n";
}
void Input_txt(L1*& head, L1*& cur, L1*& last, ifstream& f, ifstream& f2, ofstream& f_out) {
	f.open("in.txt");
	f2.open("in2.txt");
	f_out.open("out.txt");
	if ((f.bad()) || (f_out.bad()) || (f2.bad())) {
		cout << "Durak.";
		return;
	}
}