#include <iostream>
using namespace std;
struct student{
	int id;
	string name;
	string subjects[3];
	int marks[3];
};
void addstudent(student s[]){
	
	for(int i=0;i<3;i++){
		cout<<"Input Name of student "<<i+1<<":";
		cin>>s[i].name;
		
		
		while(true){
			cout<<"Input ID of student "<<i+1<<":";
		cin>>s[i].id;
		if(cin.fail()){
			cout<<"Invalid Input!ID must be in numbers"<<endl;
			cin.clear();
			cin.ignore(1000,'\n');
		}else{
			break;
		}
		}
		
		
		
		
		
		
		for(int j=0;j<3;j++){
			cout<<"Input Name of the subject "<<j+1<<":";
			cin>>s[i].subjects[j];
			
			
			
			while(true){
				cout<<"Input Marks of "<<s[i].subjects[j]<<":";
			cin>>s[i].marks[j];
			if(cin.fail()){
				cout<<"Invalid Marks!Enter within(0-100)"<<endl;
				cin.clear();
				cin.ignore(1000,'\n');
			}else if(s[i].marks[j]<0||s[i].marks[j]>100){
				cout<<"Invalid Marks!Enter within(0-100)"<<endl;
			}else{
				break;
			}
			}
		
		
		
		
		}
	}
	
}
void displaystudent(student s[]){
	
	
		for(int i=0;i<3;i++){
		cout<<"================Student "<<i+1<<"================"<<endl;
		cout<<"Name of student:"<<s[i].name<<endl;
		cout<<"ID of student:"<<s[i].id<<endl;
		cout<<"================Result of student================"<<endl;
		for(int j=0;j<3;j++){
			cout<<"Name of Subject:"<<s[i].subjects[j]<<endl;
			cout<<"Marks of Subject:"<<s[i].marks[j]<<endl;
		}
		cout<<"-------------------------------------------------------------------"<<endl;
	}
	
}

void findid(student s[]){
	int keyid;



	while(true){
		cout<<"Enter ID to Search student:";
	cin>>keyid;
	if(cin.fail()){
		cout<<"Invalid Input!Your ID must be in numbers"<<endl;
		cin.clear();
		cin.ignore(1000,'\n');
	}else{
		break;
	}
	}





	bool found=false;
	for(int i=0;i<3;i++){
		if(keyid==s[i].id){
			cout<<"Student found!"<<endl;
			found=true;
			cout<<"Name of student:"<<s[i].name<<endl;
			break;
		}
	}
	if(!found){
		cout<<"Student not found!"<<endl;
	}
}
void marksupdate(student s[]){
	int newmarks=0;
	string name;
	int id;
	string keysubj;
	cout<<"Enter name of the student:";
	cin>>name;
	
	
	while(true){
		cout<<"Enter ID of the student:";
	cin>>id;
	if(cin.fail()){
		cout<<"Your ID must be in numbers"<<endl;
		cin.clear();
		cin.ignore(1000,'\n');
	}else{
		break;
	}
	}
	
	
	
	
	
	bool found=false;
	for(int i=0;i<3;i++){
		if(name==s[i].name&&id==s[i].id){
			cout<<"Student found!"<<endl;
			found=true;
			cout<<"Student Name:"<<s[i].name<<endl;
			cout<<"Student ID:"<<s[i].id<<endl;
			cout<<"Which subject you want to change marks:";
			cin>>keysubj;
			
		for(int j=0;j<3;j++){
			if(keysubj==s[i].subjects[j]){
		
		
		
			while(true){
				cout<<"Enter New Marks:";
			cin>>newmarks;
			if(cin.fail()){
				cout<<"Invalid Input!Enter marks within(0-100)"<<endl;
				cin.clear();
				cin.ignore(1000,'\n');
			}else if(newmarks<0||newmarks>100){
			cout<<"Invalid Input!Enter marks within(0-100)"<<endl;	
			}else{
			     break;
			}
			}
		
		
		
		
			s[i].marks[j]=newmarks;
		}
		}
		break;
	}
		
	}
if(found==false){
	cout<<"Student not found!"<<endl;
}else{
	cout<<"==========Records Updated========="<<endl;
	cout<<"Name of Subject:"<<keysubj<<endl;
	cout<<"New Marks:"<<newmarks<<endl;
}

}
void topper(student s[]){
	cout<<"================Topper Category================"<<endl;
int total;
string name;
int id;
int topper=0;
for(int i=0;i<3;i++){
	total=0;
	for(int j=0;j<3;j++){
		total=total+s[i].marks[j];
	}
	if(topper<total){
		topper=total;
		name=s[i].name;
		id=s[i].id;
		
	}
	
	
}	
	cout<<"Topper is:"<<name<<endl;
	cout<<"ID:"<<id<<endl;
	cout<<"Total marks:"<<topper<<endl;


}




int main(){
student s[3];
int choice;

do{
	cout<<"****************Welcome to Student Marking System*****************"<<endl;
	cout<<"1.Add Student"<<endl;
	cout<<"2.Display Student"<<endl;
	cout<<"3.Find Student by ID"<<endl;
	cout<<"4.Update Marks"<<endl;
	cout<<"5.Show Topper"<<endl;
	cout<<"6.Exit Program"<<endl;
	
	
	while(true){
		cout<<"Input Your choice:";
	cin>>choice;
	if(cin.fail()){
		cout<<"Invalid Input!Enter within(1-6)"<<endl;
		cin.clear();
		cin.ignore(1000,'\n');
	}else if(choice<1||choice>6){
		cout<<"Invalid Input!Enter within(1-6)"<<endl;
	}else{
		break;
	}
	}
	
	
	
	
	
	switch(choice){
		case 1:{
			addstudent(s);
			break;
		}
		case 2:{
			displaystudent(s);
			break;
		}
		case 3:{
			findid(s);
			break;
		}
		case 4:{
			marksupdate(s);
			break;
		}
		case 5:{
			topper(s);
			break;
		}
		case 6:{
			cout<<"Thank you!Program closed!"<<endl;
			break;
		}
		default:{
			cout<<"Invalid Input!";
			break;
		}
	}
	
	
}while(choice!=6);
}