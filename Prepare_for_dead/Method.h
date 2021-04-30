#ifndef Method_h
#define Method_h
#pragma once
#include <iostream>
#include <fstream>
#include "Types.h"
#include "Def.h"
using namespace std;
void AddNewElem(L1*& p);
void Go_To(L1*& from, L1*& to);
void Go_NULL(L1** p);
void CurSetLen(L1* cur, ifstream& f, ofstream& f_out);
void Go_Input(L1* p, int& i, ifstream& f);
void Go_Output(L1* p, int& i, ofstream& f);
#endif // !Method_h

