#include <iostream>
#include <string>
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <fstream>
using namespace std;
int main()
{   cout<<'\a';
    int a = 5, b = 6;
    setlocale(LC_ALL, "rus");
    setlocale(LC_CTYPE, "Russian_Russia.1251");
   system("color F0");
   /* int WINAPI WinMain(
   _In_ HINSTANCE hInstance,
   _In_opt_ HINSTANCE hPrevInstance,
   _In_ LPSTR     lpCmdLine,
   _In_ int       nCmdShow
    );*/
    printf("%s%d%s%d\n","Input a = ",a," Inrut b = ",b);
    for (a=5; a>=0; a--) {
        printf("%d\n", a);
    };
    printf("Press TAB and ENTER to get a and b Address. If a less then b You'll see red screen. Program will stop, if you want to print text do it. To erase sting press ESC\n");
   const int ESC = 27, TAB = 9;
    int *p = &a, *e = &b;
    if (p ==&b)
        return 0;
    char c;
    bool m = true;
    string l;
    while (getline(cin,l)&&m)
    {
        c = cin.get();
        switch (c) {
          case ESC: break;
          case TAB:
            printf("%s%p%s%p\n", "Address a:", p, " Address b:", e);
            m = false;
        }
    }
    //system("pause");
    printf("Input new values for a and b\n");
    cin>>a;
    printf("%s%d\n","a = ", a);
    cin>>b;
    printf("%s%d\n","b = ", b);
    double y;
    y=(a*a-(2*b))/a + sqrt(b)-(3*a*b*sqrt(a));
    printf("%s%d\n","y=",y);
    system("pause");
    system("cls");
    printf("Forget what have you done before!!!\n");
    printf("Having the pleasant taste characteristic of sugar or honey; not salt, sour, or bitter. A cup of hot sweet tea\n");
    string days[7] = {"Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday"};
    for (int i=0;i<=7;i++) {
    cout<<days[i]<<endl;
    cout<<l<<"a="<<a<<"\n"<<"b="<<b<<"\n";
    }
    if (a>b) {
	printf("Inputed a is bigger then b. You must print text\n");
	system("color F2");
	cin>>l;
	}
	else system("color C0");
	cout<<'\a';
	m=true;
	getch();
	class Books {
	public: int amount;
	        int year;
	        string name;
	        string author;
	private: string describ;
	         int price;
		void show()
       { cout<<"amount is: "<<amount<<"year is: "<<year<<"name is: "<<name<<"author is: "<<author;}
       	       };
    int main(); 
	{
	Books obj1;
	Books page;
	obj1.year = 120;
	obj1.amount= 5;
	page.amount = 607;
	obj1.author = "Ernest Hemingway";
	obj1.name = "Farewell to Arms";
	printf("%s%i\t%i\t","YES BookYear and Amount:\t",obj1.year,obj1.amount);
	cout<<obj1.author<<"\t"<<obj1.name<<"\n";
	system("pause");
	} 
	   system("cls");
	   ifstream in("E:\\Voc.txt");
	   if (in.is_open())
	   { while (getline(in,l))
	    {cout<<l<<endl;}
	   }
	   in.close();
	   cout<<"End of program"<<endl;
	   system("Color 1F");
	   system("pause");
	   system("Color E0");
	return 0;
}
