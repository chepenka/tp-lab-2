#include <string>
template<typename T> void msort(T* mas, int len)
{
	if (len != 1) {
		int buf = len / 2, i, j, k;
		T* masleft = new T[buf];
		T* masright = new T[len - buf];
		for (i = 0; i < buf; i++) {
			masleft[i] = mas[i];
		}
		for (i; i < len; i++) {
			masright[i - buf] = mas[i];
		}
		msort(masleft, buf);
		msort(masright, len - buf);
		i = 0; // for left
		j = 0; // for right
		k = 0; // for mas
		while (k < len) {
			if (masleft[i] < masright[j]) {
				mas[k] = masleft[i];
				i++;
				k++;
			}
			else {
				mas[k] = masright[j];
				j++;
				k++;
			}
			if (i >= buf) {
				for (k; k < len; k++) {
					mas[k] = masright[j];
					j++;
				}
				break;
			}
			if (j >= len - buf) {
				for (k; k < len; k++) {
					mas[k] = masleft[i];
					i++;
				}
				break;
			}
		}
		delete[] masleft;
		delete[] masright;
	}
}
template<> void msort(char** mas, int len) {
	if (len != 1) {
		int buf = len / 2, i, j, k;
		char** masleft = new char*[buf];
		char** masright = new char*[len - buf];
		for (i = 0; i < buf; i++) {
			masleft[i] = mas[i];
		}
		for (i; i < len; i++) {
			masright[i - buf] = mas[i];
		}
		msort(masleft, buf);
		msort(masright, len - buf);
		i = 0; // for left
		j = 0; // for right
		k = 0; // for mas
		while (k < len) {
			if (strlen(masleft[i]) < strlen(masright[j])) {
				mas[k] = masleft[i];
				i++;
				k++;
			}
			else {
				mas[k] = masright[j];
				j++;
				k++;
			}
			if (i >= buf) {
				for (k; k < len; k++) {
					mas[k] = masright[j];
					j++;
				}
				break;
			}
			if (j >= len - buf) {
				for (k; k < len; k++) {
					mas[k] = masleft[i];
					i++;
				}
				break;
			}
		}
		delete[] masleft;
		delete[] masright;
	}
	
}