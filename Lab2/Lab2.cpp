#include<stdint.h>
#include<stdlib.h>
#include<string.h>

#pragma bss_seg("bss_quest1")
char quest1[12];

#pragma bss_seg("bss_quest4")	
char quest4[15];


int main() {
	//This is part of question 1
	char on_stack[12];
	for (int i = 0; i < strlen(on_stack); i++)
	{
		on_stack[i] = quest1[i];
	}

	//This is part of question 2
	char* on_heap = (char*) malloc(13);
	static char mv_data[13];
	for (int i = 0; i < strlen(on_heap); i++)
	{
		mv_data[i] = on_heap[i];
	}

	//This is for question 3
	char on_s[14] = "12345678901234";
	char* mv_stack = _strdup(on_s);

	//This is for question 4
	static char DATA[15];
	for (int i = 0; i < strlen(DATA); i++)
	{
		quest4[i] = DATA[i];
	}

	//This is for question 5
	static const char in_text[4] = "Matt";
	static char to_data[4];
	for (int i = 0; i < strlen(in_text); i++)
	{
		to_data[i] = in_text[i];
	}

}
