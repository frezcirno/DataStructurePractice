#include<iostream>
using namespace std;
#include"BookIndex.h"
int main() {
	FILE* f = fopen("BookInfo.txt", "r"), *g = fopen("BookIdx.txt", "w");
	if(f && g) {
		IdxListType idxlist;
		InitIdxList(idxlist);
		int BookNo;
		while(!feof(f)) {
			GetLine(f);//to buf
			ExactKeyWord(BookNo);
			InsIdxList(idxlist, BookNo);
		}
		Save(g, idxlist);
		fclose(f); fclose(g);
		return 0;
	} else return 1;
}


void InitIdxList(IdxListType& idxlist) {
	for()
		idxlist.last = 0;
}
void GetLine(FILE f);
void ExactKeyWord(ElemType& bno);
Status InsIdxList(IdxListType& idxlist, ElemType bno);
void Save(FILE g, IdxListType idxlist);


void GetWord(int i, HString& wd) {
	char* p = *(wdlist.item + i);
	StrAssign(wd, p);
}//GetWord
int Locate(IdxListType idxlist, HString wd, bool& exist) {
	int i, m;
	for(i = idxlist.last - 1; (m = StrCompare(idxlist.item[i].keyword, wd)) > 0; --i);
	if(!m) {
		exist = TRUE;
		return i;
	} else {
		exist = FALSE;
		return i + 1;
	}
}//Locate
Status InsertNewKey(IdxListType& idxlist, int i, int bno);
Status InsertBook(IdxListType& idxlist, int bno);