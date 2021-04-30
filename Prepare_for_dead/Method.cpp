#include <iostream>
#include <fstream>
#include "Types.h"
#include "Def.h"
#include "Method.h"
using namespace std;
void AddNewElem(L1*& p) {
	p = new L1;
}
void Go_To(L1*& from, L1*& to) {
	from = to;
}
void Go_NULL(L1** p) {
	*p = NULL;
}
void CurSetLen(L1* cur, ifstream& f, ofstream& f_out) {
	cur->Str.Len = get_len(f, f_out);
	cur->Str.sym = new char[cur->Str.Len];
}
void Go_Input(L1* p, int& i, ifstream& f) {
	f >> p->Str.sym[i];
}
void Go_Output(L1* p, int& i, ofstream& f) {
	f << p->Str.sym[i];
}