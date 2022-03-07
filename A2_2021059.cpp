#include <iostream>

using namespace std;

//8
int Mystrlen(const char* s2) {
	int i = 0;
	for (; s2[i] != '\0'; i++) {

	}


	return i;

}

//1
char* Mystrcpy(char* s1, const char* s2) {

	for (int i = 0; s2[i] != '\0'; i++) {

		s1[i] = s2[i];
	}

	return s1;
}

//2
char* Mystrncpy(char* s1, const char* s2, size_t n) {
	for (int i = 0; i < n; i++) {
		s1[i] = s2[i];
	}
	return s1;

}


char* Mystrcat(char* s1, const char* s2) {
	int x = Mystrlen(s1);
	for (int i = x; s2[i-x] != '\0'; i++) {
		s1[i] = s2[i-x];
	}
	return s1;


}
//6

char* Mystrcat(char* s1, const char* s2, size_t n){
	int x = Mystrlen(s1);
	for(int i=x;(i-x)<n;i++)
		s1[i] = s2[i - x];

	return s1;
}


//5

int Mystrcmp(const char* s1, const char* s2) {
	for (int i = 0; s1[i] != '\0'||s2[i]!='\0'; i++) {
		
		if (s1[i] > s2[i]) {
			return 1;

		}

		if (s1[i] < s2[i]) {
		
			return -1;
		}
		
		return 0;
	}
	
	
}

//4

 int Mystrcmp(char* s1, const char* s2, size_t n) {
	for (int i = 0; i < n; i++) {
		if (s1[i] > s2[i]) {
			return 1;

		}

		if (s1[i] < s2[i]) {

			return -1;
		}

		return 0;


	}

}
 //7
 char* mystrtok(char* s1, const char s2)
 {
	 static char* input = NULL;

	 if (s1 != NULL)
		 input = s1;
	
	 if (input == NULL)
		 return NULL;

	 char* result = new char[Mystrlen(input) + 1];
	 int i = 0;

	 for (; input[i] != '\0'; i++) {

		
		 if (input[i] != s2)
			 result[i] = input[i];

		 else {
			 result[i] = '\0';
			 input = input + i + 1;
			 return result;
		 }
	 }
	 result[i] = '\0';
	 input = NULL;

	 return result;
 }
 



 int main() {

	 char s2[100] = { 'h','e','l','l','o',' ','w','o','r','l','d' };
	 char s1[100] = { 'a','h','m','a','d' };

	 cout << "-----choose and option-----" << endl << endl;
	 cout << "1. copy string and return string1" << endl;
	 cout << "2. copy x number of characters from string and return" << endl;
	 cout << "3. concatenate string " << endl;
	 cout << "4. concatenate string til x" << endl;
	 cout << "5. Compare two string and return " << endl;
	 cout << "6. Comapre two strings to x numbers " << endl;
	 cout << "7. Split into tokens" << endl;
	 cout << "8. tell the length of the string " << endl;

	 int a;
	 int y;
	 int h;
	 char x;
	 cin >> x;

	 switch (x) {

	 case '1':
		 Mystrcpy(s1, s2);
		 cout << "the string has been copied " << endl;
		 break;
	 case '2':
		 int x;
		 cout << "Enter x: ";
		 cin >> x;
		 Mystrncpy(s1, s2, x);
		 cout << "the string has been copied to n chars" << endl;
		 break;

	 case '3':
		 Mystrcat(s1, s2);
		 cout << "the string has been cuncatinated" << endl;
		 cout << s1;
		 break;

	 case '4':
		 cout << "enter x: ";
		 cin >> a;

		 Mystrcat(s1, s2, a);
		 cout << s1;
		 break;

	 case '5':

		 y = Mystrcmp(s1, s2);
		 if (y == 1) {
			 cout << "length of string s1 is greater " << endl;

		 }
		 else if (y == 0) {
			 cout << "the length is equal " << endl;

		 }
		 else if (y == -1) {
			 cout << "The length of the string s1 is shorter";
		 }

		 break;

	 case '6':

		 cout << endl << "Enter the length x: ";

		 int z;
		 cin >> z;
		 h = Mystrcmp(s1, s2, z);
		 if (h == 1) {
			 cout << "length is greater " << endl;

		 }
		 else if (h == 0) {
			 cout << "the length is equal " << endl;

		 }
		 else if (h == -1) {
			 cout << "The length of the string is shorter";
		 }


		 break;


	 case '7':
	 {
		 char* ptr = mystrtok(s2, ' ');
		 cout << ptr << endl;

		
		 while (ptr != NULL) {
			 
			 ptr = mystrtok(NULL, ' ');
			 cout << ptr << endl;
		 }
	 }
			 break;


	 case '8':
		 cout << "the length of the string is: " << Mystrlen(s2);

		 break;
		 }

	 }
 
