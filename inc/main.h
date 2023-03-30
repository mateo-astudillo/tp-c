#pragma once
#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
#include <windows.h>
#define CLEAR "cls"
#else
#include <unistd.h>
#define CLEAR "clear"
#endif

int getInt(int min, int max);
int menu(int first, int last, char *options[last]);
