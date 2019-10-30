#include <iostream>
#include <string.h>

template<class T> 
 bool comp(T arg1, T arg2) {
	if (arg2 > arg1) {
		return 1;
	}
	else{
		return 0;
	}
};

template<> 
bool comp(char* arg1,char* arg2) {
	//if (strcmp(arg1, arg2) > 0) {
	if (strlen(arg1) < strlen(arg2)) {
		return 1;
	}
	else {
		return 0;
	}
};

template<class T>
static void merged(T* A, int beg, int end) {
	int il = beg;
	T* tmp = new T [end-beg+1];
	//T tmp[end - beg];
	int mid = (end+beg) / 2;
	int ir = mid+1;
	for (int i = beg; i <= end; i++) {
	//	if (A[il] < A[ir]) {
		if ((il<=mid)&&((ir>end)||comp(A[il], A[ir]))) {//r>l
			tmp[i-beg] = A[il];
			il++;
		}
		else {
			tmp[i-beg] = A[ir];
			ir++;
		}
	}
	for (int j = beg; j <= end; j++) {
		A[j] = tmp[j-beg];
	//	printf("%d", A[j]);
	}
}

template<class T>
static void grind(T* A, int beg, int end) {
	if (beg<end) {
		grind(A,beg,(end+beg)/2);
		grind(A, (beg + end) / 2 + 1,end);
		merged(A, beg, end);
	}
	//return;
}

template<class T>
static void msort(T* A, int n) {
	int beg = 0;
	int end = n-1;
	grind(A, beg, end);
}


