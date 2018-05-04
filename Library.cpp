#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdio>
using namespace std;
struct book{
	char book_name[100];
	char writer_name[100];
	int price;
	int isbn;
	int publish_year,publish_month,publish_day;
	void input(void){
		cout << "book_name:";
		cin >> book_name ;
		cout << "writer_name:" ;
		cin >> writer_name ;
		cout << "price:" ;
		cin >> price ;
		cout << "isbn:" ;
		cin >> isbn ;
		cout << "publish_year:";
		cin >> publish_year;
		cout << "publish_month:";
		cin >> publish_month;
		cout << "publish_day:";
		cin >> publish_day;
	}
	void print(void){
		cout << "book name:" << book_name << endl;
		cout << "writer name:" << writer_name <<endl ;
		cout << "price:" <<	price << endl;
		cout << "isbn:" << isbn << endl;
		cout << "publish year:" << publish_year << endl;
		cout << "publish month:" << publish_month << endl;
		cout << "publish day:" << publish_day << endl ;
	}
};
struct member{
	char fname[100];
	char lname[100];
	int age;
	int birth_year,birth_month,birth_day;
	char address[100];
	int phone_number;
	char mother_name[100];
	char father_name[100];
	int siblings;
	int username;
	int pass;
	void input (void){
		cout << "Enter first name:";
		cin >> fname;
		cout << "Enter last name:";
		cin >> lname;
		cout << "Enter age:";
		cin >> age;
		cout << "Enter birth Year & Month & Day:";
		cin >> birth_year;
		cin >> birth_month;
		cin >> birth_day;
		cout << "Enter address:";
		cin >> address;
		cout << "Enter phone number:";
		cin >> phone_number;
		cout << "Enter mother & fathe name:";
		cin >> mother_name;
		cin >> father_name;
		cout << "Enter number of siblings:";
		cin >> siblings;
		cout << "(attention:username and pass can be just numbers)\n";
		cout << "Enter username:";
		cin >> username;
		cout << "Enter pass:";
		cin >> pass;
	}
	void print(void){
		cout << "first name:" << fname;
		cout << "last name:" << lname;
		cout << "age:" << age;
		cout << "birth year:" << birth_year;
		cout << "birth month:" << birth_month;
		cout << "birth day:" << birth_day;
		cout << "address:" << address;
		cout << "phone number:" << phone_number;
		cout << "mother name:" << mother_name;
		cout << "father name:" << father_name;
		cout << "siblings:" << siblings;
		cout << "Enter username:" << username;
		cout << "Enter pass:" << pass;
	}
};
struct borrow_date{
	int day,month,year;
	void input (void){
		cin >> day;
		cin >> month;
		cin >> year;
	}
	void print(void){
		cout << day;
		cout << month;
		cout << year;
	}
};
struct return_date{
	int day,month,year;
	void input (void){
		cin >> day;
		cin >> month;
		cin >> year;
	}
	void print(void){
		cout << day;
		cout << month;
		cout << year;
	}
};
struct library{
	book b[111];
	member m[111];
	borrow_date bd[111];
	return_date rd[111];
};
int main(){
	library l;
	FILE *fp,*fp1;
	fp = fopen("E:books.bin","a+b");
	if(!fp){
	cout << "can not open file";
	exit(0);
	}
	fp = fopen("E:members.bin","a+b");
	if(!fp1){
	cout << "can not open file";
	exit(0);
	}
	int choose1;
	int choose2;
	int choose3;
	int i,j;
	cout << "You are:\n";
	cout << "1-Librarian\n";
	cout << "2-Member\n";
	cin >> choose1;
	switch (choose1){
		case 1:
			cout << "choose:\n";
			cout << "1-Add book:\n";
			cout << "2-Add member:\n";
			cin >> choose2;
			switch(choose2){
				case 1:
					i,j=0;
					cout << "How many books do you want to enter?";
					cin >> i;
					j=i;
					for(;i>0;i--)
						l.b[i].input();
						fwrite(&l.b[i],sizeof(l.b[111]),j,fp);
						break;
				case 2:
					i,j=0;
					cout << "How many member do you want to enter?";
					cin >> i;
					for(;j<i;j++)
						l.m[i].input();
						fwrite(&l.m[j],sizeof(l.m[111]),i,fp1);
						break;
				}
				break;
		case 2:
			cout << "1-sign in:\n";
			cout << "2-sign up:\n";
			cin >> choose3;
			switch (choose3){
				case 1:
					int username1;
					int pass1;
					cout <<"Enter username:";
					cin >> username1;
					cout <<"Enter pass:";
					cin >> pass1;
				for(i=0;i<111;i++){
				fread(&l.m[i],sizeof(l.m[i]),1,fp1);
				if(l.m[i].username==username1&&l.m[i].pass==pass1){
				l.m[i].print();
				}
				}
				
					break;
				case 2:
				l.m[1].input();
				fwrite(&l.m[1],sizeof(l.m[111]),1,fp1);
					break;
			}
			break;
	}
	

	
	fclose(fp);
	fclose(fp1);
	return 0;
}