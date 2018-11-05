#ifndef STRING_S_H
#define STRING_S_H

#include "DS.h"

#define MAXSTRLEN 255
typedef unsigned char SString[MAXSTRLEN + 1];
Status StrAssign(SString&, char*);
Status StrCopy(SString&, SString);
bool StrEmpty(SString);
int StrCompare(SString, SString); //>=<
int StrLength(SString);
Status ClearString(SString&);
Status Concat(SString&, SString, SString);
Status SubString(SString&, SString, int pos, int len);
Status Index(SString, SString, int pos);
Status Replace(SString&, SString, SString);
Status StrInsert(SString&, int, SString);
Status StrDelete(SString&, int, SString);
Status DestroyString(SString);

#endif