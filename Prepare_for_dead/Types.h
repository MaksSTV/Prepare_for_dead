#ifndef Types_h
#define Types_h
#pragma once

struct Stroka {
	int Len;
	char* sym;
};

struct L1 {
	Stroka Str;
	L1* next;
};
#endif // !Types_h
