#ifndef Def_h
#define Def_h
#pragma once

#include <iostream>
#include <fstream>
#include "Types.h"
using namespace std;
int get_len(ifstream& f, ofstream& f_out);
void In_List(L1*& head, L1*& cur, L1*& last, ifstream& f, ifstream& f2, ofstream& f_out, int& a);
void Input_txt(L1*& head, L1*& cur, L1*& last, ifstream& f, ifstream& f2, ofstream& f_out);
void Out_List(L1*& head, L1*& cur, L1*& last, ofstream& f_out);
void Add_elem(L1*& head, L1*& cur, L1*& last, ifstream& f, ifstream& f2, ofstream& f_out, int& a);
void Delete(L1*& head, L1*& cur);
#endif // !Def_h


