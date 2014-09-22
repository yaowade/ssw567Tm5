#include <iostream>

using namespace std;
char a[10];
char b[10];
char c[10];
char d[10];
char t[50];
int w = 0;

void test(char q[])
{
	void input();
	int i = 0;
	int la = strlen(q);
	while (q != '\0')
	{
		if (q[i] >= '0' && q[i] <= '9')
			i++;
		else
			break;
	}
	if (i == la){
		cout << "input valid " << endl;

	}
	else{
		cout << "input invalid" << endl;
		w += 1;
	}

}
void teststr(char q[])
{
	int i = strlen(q);
	if (i >= 20){
		cout << "the string is too long" << endl;
		w += 1;
	}
	else
		cout << "the string is valid" << endl;
}
void input()
{
	cout << "please input the length of the pool" << endl;
	cin >> a;
	cout << "please input the width of the pool" << endl;
	cin >> b;
	cout << "please input the depth of the pool at the shallow" << endl;
	cin >> c;
	cout << "please input the depth of the pool at the deep" << endl;
	cin >> d;
	cout << "please input the text string identify the customer" << endl;
	cin >> t;
}
void success()
{
	if (w >= 1){
		cout << "error detected,please try again" << endl;
		w = 0;
		input();
		test(a);
		test(b);
		test(c);
		test(d);
		teststr(t);
		success();
	}
	else
	{
		cout << "Congratulations! All input is valid\r" << endl;
	}

}
int main()
{
	input();
	test(a);
	test(b);
	test(c);
	test(d);
	teststr(t);
	success();
}



