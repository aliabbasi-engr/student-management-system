#include <iostream>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <windows.h>
#include <cstdlib>
#include <fstream>
#include <cstdio>

#define STUDENT_INFO_FILE "Files/StudentInfo.txt"
#define STUDENT_GRADES_FILE "Files/StudentGrades.txt"
#define SAVED_STUDENT_INFO_FILE "c:/Users/Ali Abbasi/Desktop/StudentInfo.txt"
#define SAVED_STUDENT_GRADES_FILE "c:/Users/Ali Abbasi/Desktop/StudentGrades.txt"
#define Mathematic 1
#define Physics 2
#define ComputerBasis 3
#define Chemistry 4
#define Literature 5
#define Arabic 6
#define English 7
#define Yes 1
#define yes 1
#define No 0
#define no 0

using namespace std;

struct StudentInfo{
	int studentId;
	string name;
	string family;
	int birthYear;
	int entranceYear;
	string fatherName;
	int nationalId;
};

struct StudentGrades{
	int studentId;
	float mathematic;
	float physics;
	float computerBasis;
	float chemistry;
	float literature;
	float arabic;
	float english;
};

void reorder();
void addStudent(StudentInfo);
int removeStudentInfo(int);
StudentInfo getStudent(int);
StudentGrades getStudentGrades(int);
void addStudentGrades(StudentGrades);
float studentAverage(StudentGrades);
float studentVariance(StudentGrades);
float maximumGrade(StudentGrades);
float minimumGrade(StudentGrades);
int removeStudentGrades(int);
float showStudentGrade(int, int);
void turnStudentGrade(int, int);
void changeStudentGrade(int, int, int);
void menustyle(int);
int startfunction(int);

int main()
{
    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
    int f=0;
    char x[60]={'T','H','I','S',' ','I','S',' ','A','N',' ','E','D','U','C','A','T','I','O','N','A','L',' ','P','R','O','G','E','C','T','\n',' ',' ',' ',' ','C','R','E','A','T','E','D',' ','B','Y',' ','A','L','I',' ','A','B','B','A','S','I',' ',' ',' ',' '};
    for (int i=0; i<=59; i++)
    {
        for (int z=0; z<=12999999; z++)
        {
			f++;
        }
        cout<<x[i];
    }
    cout<<"\n\n";
    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);
    cout<<"PRESS ANY KEY TO START TEST MODE"<<"\n";
    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);    
    getch();
    system("CLS");
    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
	cout<<"Add new student"<<"\n";
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 0 | FOREGROUND_INTENSITY);
	cout<<"Remove student info"<<"\n";
	cout<<"Update student info"<<"\n";
	cout<<"Show student info"<<"\n";
	cout<<"Add student grades(single)"<<"\n";
	cout<<"Add student grades(multiple)"<<"\n";
	cout<<"Remove certain student grade"<<"\n";
	cout<<"Remove student grades(multiple)"<<"\n";
	cout<<"Update certain student grade"<<"\n";
	cout<<"Save files to desktop"<<"\n";
	cout<<"Close App"<<"\n";
    int i=1;
    int q;
    int c = 0;
    while(1)
    {
        c = 0;
        switch((c=getch())) 
        {
        case 119://key up
            {
				i--;
				if (i<=0)
				{
					i=11;
				}
				menustyle(i);
			}
            break;
        case 115://key down
            {
				i++;
				if (i>=12)
				{
					i=1;
				}
				menustyle(i);
			}
			break;
		case 113://key enter
			{
				q=i;
				if (q==11)
				{
					return 0;
                }
                startfunction(q);            
			}
            break;
        default:
            SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);                            
            cout << endl << "Unknown key entered" <<'\a' << endl;  // not arrow
            SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 0 | FOREGROUND_INTENSITY);
            getch();
            system("CLS");
            menustyle(i);
            break;
        }
    }
    cout<<"\n";
    system("PAUSE");
    return EXIT_SUCCESS;
}

void menustyle(int q)
{
	system("CLS");
	if (q==1)
	{
		system("CLS");
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
		cout<<"Add new student"<<"\n";
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 0 | FOREGROUND_INTENSITY);
		cout<<"Remove student info"<<"\n";
		cout<<"Update student info"<<"\n";
		cout<<"Show student info"<<"\n";
		cout<<"Add student grades(single)"<<"\n";
		cout<<"Add student grades(multiple)"<<"\n";
		cout<<"Remove certain student grade"<<"\n";
		cout<<"Remove student grades(multiple)"<<"\n";
		cout<<"Update certain student grade"<<"\n";
		cout<<"Save files to desktop"<<"\n";
		cout<<"Close App"<<"\n";
	}
	else if (q==2)
	{
		system("CLS");
		cout<<"Add new student"<<"\n";
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
		cout<<"Remove student info"<<"\n";
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 0 | FOREGROUND_INTENSITY);
		cout<<"Update student info"<<"\n";
		cout<<"Show student info"<<"\n";
		cout<<"Add student grades(single)"<<"\n";
		cout<<"Add student grades(multiple)"<<"\n";
		cout<<"Remove certain student grade"<<"\n";
		cout<<"Remove student grades(multiple)"<<"\n";
		cout<<"Update certain student grade"<<"\n";
		cout<<"Save files to desktop"<<"\n";
		cout<<"Close App"<<"\n";
	}
	else if (q==3)
	{
		system("CLS");
		cout<<"Add new student"<<"\n";
		cout<<"Remove student info"<<"\n";
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
		cout<<"Update student info"<<"\n";
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 0 | FOREGROUND_INTENSITY);
		cout<<"Show student info"<<"\n";
		cout<<"Add student grades(single)"<<"\n";
		cout<<"Add student grades(multiple)"<<"\n";
		cout<<"Remove certain student grade"<<"\n";
		cout<<"Remove student grades(multiple)"<<"\n";
		cout<<"Update certain student grade"<<"\n";
		cout<<"Save files to desktop"<<"\n";
		cout<<"Close App"<<"\n";
	}
	else if (q==4)
	{
		system("CLS");
		cout<<"Add new student"<<"\n";
		cout<<"Remove student info"<<"\n";
		cout<<"Update student info"<<"\n";
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
		cout<<"Show student info"<<"\n";
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 0 | FOREGROUND_INTENSITY);
		cout<<"Add student grades(single)"<<"\n";
		cout<<"Add student grades(multiple)"<<"\n";
		cout<<"Remove certain student grade"<<"\n";
		cout<<"Remove student grades(multiple)"<<"\n";
		cout<<"Update certain student grade"<<"\n";
		cout<<"Save files to desktop"<<"\n";
		cout<<"Close App"<<"\n";
	}
	else if (q==5)
	{
		system("CLS");
		cout<<"Add new student"<<"\n";
		cout<<"Remove student info"<<"\n";
		cout<<"Update student info"<<"\n";
		cout<<"Show student info"<<"\n";
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
		cout<<"Add student grades(single)"<<"\n";
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 0 | FOREGROUND_INTENSITY);
		cout<<"Add student grades(multiple)"<<"\n";
		cout<<"Remove certain student grade"<<"\n";
		cout<<"Remove student grades(multiple)"<<"\n";
		cout<<"Update certain student grade"<<"\n";
		cout<<"Save files to desktop"<<"\n";
		cout<<"Close App"<<"\n";
	}
	else if (q==6)
	{
		system("CLS");
		cout<<"Add new student"<<"\n";
		cout<<"Remove student info"<<"\n";
		cout<<"Update student info"<<"\n";
		cout<<"Show student info"<<"\n";
		cout<<"Add student grades(single)"<<"\n";
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
		cout<<"Add student grades(multiple)"<<"\n";
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 0 | FOREGROUND_INTENSITY);
		cout<<"Remove certain student grade"<<"\n";
		cout<<"Remove student grades(multiple)"<<"\n";
		cout<<"Update certain student grade"<<"\n";
		cout<<"Save files to desktop"<<"\n";
		cout<<"Close App"<<"\n";
	}
	else if (q==7)
	{
		system("CLS");
		cout<<"Add new student"<<"\n";
		cout<<"Remove student info"<<"\n";
		cout<<"Update student info"<<"\n";
		cout<<"Show student info"<<"\n";
		cout<<"Add student grades(single)"<<"\n";
		cout<<"Add student grades(multiple)"<<"\n";
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
		cout<<"Remove certain student grade"<<"\n";
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 0 | FOREGROUND_INTENSITY);
		cout<<"Remove student grades(multiple)"<<"\n";
		cout<<"Update certain student grade"<<"\n";
		cout<<"Save files to desktop"<<"\n";
		cout<<"Close App"<<"\n";
	}
	else if (q==8)
	{
		system("CLS");
		cout<<"Add new student"<<"\n";
		cout<<"Remove student info"<<"\n";
		cout<<"Update student info"<<"\n";
		cout<<"Show student info"<<"\n";
		cout<<"Add student grades(single)"<<"\n";
		cout<<"Add student grades(multiple)"<<"\n";
		cout<<"Remove certain student grade"<<"\n";
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
		cout<<"Remove student grades(multiple)"<<"\n";
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 0 | FOREGROUND_INTENSITY);
		cout<<"Update certain student grade"<<"\n";
		cout<<"Save files to desktop"<<"\n";
		cout<<"Close App"<<"\n";
	}
	else if (q==9)
	{
		system("CLS");
		cout<<"Add new student"<<"\n";
		cout<<"Remove student info"<<"\n";
		cout<<"Update student info"<<"\n";
		cout<<"Show student info"<<"\n";
		cout<<"Add student grades(single)"<<"\n";
		cout<<"Add student grades(multiple)"<<"\n";
		cout<<"Remove certain student grade"<<"\n";
		cout<<"Remove student grades(multiple)"<<"\n";
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
		cout<<"Update certain student grade"<<"\n";
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 0 | FOREGROUND_INTENSITY);
		cout<<"Save files to desktop"<<"\n";
		cout<<"Close App"<<"\n";
	}
	else if (q==10)
	{
		system("CLS");
		cout<<"Add new student"<<"\n";
		cout<<"Remove student info"<<"\n";
		cout<<"Update student info"<<"\n";
		cout<<"Show student info"<<"\n";
		cout<<"Add student grades(single)"<<"\n";
		cout<<"Add student grades(multiple)"<<"\n";
		cout<<"Remove certain student grade"<<"\n";
		cout<<"Remove student grades(multiple)"<<"\n";
		cout<<"Update certain student grade"<<"\n";
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
		cout<<"Save files to desktop"<<"\n";
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 0 | FOREGROUND_INTENSITY);
		cout<<"Close App"<<"\n";
	}
	else if (q==11)
	{
		system("CLS");	
		cout<<"Add new student"<<"\n";
		cout<<"Remove student info"<<"\n";
		cout<<"Update student info"<<"\n";
		cout<<"Show student info"<<"\n";
		cout<<"Add student grades(single)"<<"\n";
		cout<<"Add student grades(multiple)"<<"\n";
		cout<<"Remove certain student grade"<<"\n";
		cout<<"Remove student grades(multiple)"<<"\n";
		cout<<"Update certain student grade"<<"\n";
		cout<<"Save files to desktop"<<"\n";
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
		cout<<"Close App"<<"\n";
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 0 | FOREGROUND_INTENSITY);
	}        
}

int startfunction(int n)
{
    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
    cout<<"\n\n\n";
        if (n==1)
        {
      		StudentInfo studentInfo;
      		cout<<"Enter StudentId: ";
		    cin>>studentInfo.studentId;
		    cout<<"Enter Name: ";
		    cin>>studentInfo.name;
		    cout<<"Enter Family: ";
		    cin>>studentInfo.family;
		    cout<<"Enter BirthYear: ";
		    cin>>studentInfo.birthYear;
		    cout<<"Enter EntranceYear: ";
		    cin>>studentInfo.entranceYear;
		    cout<<"Enter FatherName: ";
		    cin>>studentInfo.fatherName;
		    cout<<"Enter NationalId: ";
		    cin>>studentInfo.nationalId;
            addStudent(studentInfo);
            SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
            cout<<"\n"<<"Student was added successfully"<<"\n"<<"Select another function using UP and DOWN and Enter";
            SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
            reorder();
        }
        else if (n==2)
        {
            StudentInfo studentInfo;
            int studentId;
            cout<<"Enter SudentId: ";
		    cin>>studentId;
		    studentInfo = getStudent(studentId);
		    if(studentInfo.studentId==0)
		    {
				SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);
				cout<<"There is no student with this Id"<<'\a'<<"\n"<<"Select another function using UP and DOWN and Enter"<<"\n";
				SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
            }
		    else
            {
                removeStudentInfo(studentId);
		        SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                cout<<"\n"<<"Student was removed successfully"<<"\n"<<"Select another function using UP and DOWN and Enter";
                SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
            }
        }
        else if (n==3)
        {
            StudentInfo studentInfo;
		    int studentId;
		    cout<<"Enter StudentId: ";
		    cin>>studentId;
		    studentInfo = getStudent(studentId);
		    if(studentInfo.studentId==0)
		    {
				SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);
				cout<<"There is no student with this Id"<<'\a'<<"\n"<<"Select another function using UP and DOWN and Enter"<<"\n";
				SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
            }
		    else
		    {
                SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_INTENSITY);
                cout<< studentInfo.name <<"\t" << studentInfo.family <<"\t"<< studentInfo.birthYear <<"\t"<< studentInfo.entranceYear <<"\t"<< studentInfo.fatherName <<"\t"<< studentInfo.nationalId;
		    	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
                removeStudentInfo(studentId);
		    	cout<<"\n";
		        studentInfo.studentId=studentId;
		        cout<<"Enter new Name: ";
		        cin>>studentInfo.name;
		        cout<<"Enter new Family: ";
		        cin>>studentInfo.family;
		        cout<<"Enter new BirthYear: ";
		        cin>>studentInfo.birthYear;
		        cout<<"Enter new EntranceYear: ";
		        cin>>studentInfo.entranceYear;
		        cout<<"Enter new FatherName: ";
		        cin>>studentInfo.fatherName;
		        cout<<"Enter new NationalId: ";
		        cin>>studentInfo.nationalId;
                addStudent(studentInfo);
                SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                cout<<"\n"<<"Student info was updated successfully"<<"\n"<<"Select another function using UP and DOWN and Enter";
                SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
            }
        }
        else if (n==4)
        {
            int studentId;
		    cout<<"Enter StudentId: ";
		    cin>>studentId;   
            StudentInfo studentInfo;
            studentInfo = getStudent(studentId);
            if(studentInfo.studentId==0)
		    {
				SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);
				cout<<"There is no student info with this Id"<<'\a'<<"\n"<<"Select another function using UP and DOWN and Enter"<<"\n";
				SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
            }
		    else
		    {
                SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		        cout<< studentInfo.name <<"\t"<< studentInfo.family <<"\t"<< studentInfo.birthYear <<"\t"<< studentInfo.entranceYear <<"\t"<< studentInfo.fatherName <<"\t"<< studentInfo.nationalId;
		        cout<<"\n";
		        StudentGrades studentGrades;
		        studentGrades=getStudentGrades(studentId);
		        if(studentInfo.studentId==0)
		        {
					SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);
					cout<<"There is no student grade with this Id"<<'\a'<<"\n"<<"Select another function using UP and DOWN and Enter"<<"\n";
					SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
                }
                else
		        {
                    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_INTENSITY);
                    cout<<"Mathematic: "<<studentGrades.mathematic<<"\n";
                    cout<<"Physics: "<<studentGrades.physics<<"\n";
                    cout<<"ComputerBasis: "<<studentGrades.computerBasis<<"\n";
                    cout<<"Chemistry; "<<studentGrades.chemistry<<"\n";
                    cout<<"Literature: "<<studentGrades.literature<<"\n";
                    cout<<"Arabic: "<<studentGrades.arabic<<"\n";
                    cout<<"English: "<<studentGrades.english<<"\n";
		            cout<<"Average: "<<studentAverage(studentGrades)<<"\n";
		            cout<<"Variance: "<<studentVariance(studentGrades)<<"\n";
				    cout<<"MaximumGrade: "<<maximumGrade(studentGrades)<<"\n";
                    cout<<"MinimumGrade: "<<minimumGrade(studentGrades)<<"\n";
                    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                    cout<<"Select another function using UP and DOWN and Enter";
                    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
				}
            }
        }
        else if (n==5)
        {
            StudentGrades studentGrades;
            cout<<"Enter SudentId: ";
		    cin>>studentGrades.studentId;
            cout<<"\t"<<"Enter Mathematic grade: "; 	   
		    cin>>studentGrades.mathematic;
            cout<<"\t"<<"Enter Physics grade: ";	   
		    cin>>studentGrades.physics;
            cout<<"\t"<<"Enter computerBasis grade: ";	   
		    cin>>studentGrades.computerBasis;
            cout<<"\t"<<"Enter Chemistry grade: ";	   
		    cin>>studentGrades.chemistry;
            cout<<"\t"<<"Enter Literature grade: "; 	   
		    cin>>studentGrades.literature;
            cout<<"\t"<<"Enter Arabic grade: ";	   
		    cin>>studentGrades.arabic;
            cout<<"\t"<<"Enter English grade: ";	   
		    cin>>studentGrades.english;	
		    addStudentGrades(studentGrades);
		    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
            cout<<"\n"<<"Student grades was added successfully"<<"\n"<<"Select another function using UP and DOWN and Enter";
            SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
            reorder();
        }
        else if (n==6)
        {
            int n;
            cout<<"How many Students you want to add? ";
            cin>>n;
		    for (int i=1; i<=n; i++)
		    {
				StudentGrades studentGrades;
				cout<<"\n\n";
				cout<<"Enter ";
				switch(i)
				{
				case 1:
					cout<<"1st";
					break;
				case 2:
					cout<<"2nd";
					break;
				case 3:
					cout<<"3rd";
					break;
				default:
					cout<<i<<"th";
					break;
		    }
		    cout<<" StudentId: ";
		    cin>>studentGrades.studentId;
            cout<<"\t"<<"Enter Mathematic grade: "; 	   
		    cin>>studentGrades.mathematic;
            cout<<"\t"<<"Enter Physics grade: ";	   
		    cin>>studentGrades.physics;
            cout<<"\t"<<"Enter ComputerBasis grade: ";	   
		    cin>>studentGrades.computerBasis;
            cout<<"\t"<<"Enter Chemistry grade: ";	   
		    cin>>studentGrades.chemistry;
            cout<<"\t"<<"Enter Literature grade: "; 	   
		    cin>>studentGrades.literature;
            cout<<"\t"<<"Enter Arabic grade: ";	   
		    cin>>studentGrades.arabic;
            cout<<"\t"<<"Enter English grade: ";	   
		    cin>>studentGrades.english;	
		    addStudentGrades(studentGrades);
		    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
            cout<<"\n"<<"Students grades was added successfully";
            SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
            reorder();    
        }
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		cout<<"\n"<<"Select another function using UP and DOWN and Enter";
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);    
        }
        else if (n==7)
        {
            StudentGrades studentGrades;
		    int studentId;
		    int gradeNumber;
		    cout<<"Enter StudentId: ";
		    cin>>studentId;
		    studentGrades = getStudentGrades(studentId);
		    if(studentGrades.studentId==0)
		    {
				SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);
				cout<<"There is no student with this Id"<<'\a'<<"\n"<<"Select another function using UP and DOWN and Enter"<<"\n";
				SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
            }
		    else
		    {
				cout<<"Enter LessonNumber:(1 Mathematic/2 Physics/3 ComputerBasis/4 Chemistry/5 Literature/6 Arabic/7 English) ";
				cin>>gradeNumber;
				if (gradeNumber<=0 && gradeNumber>=8)
				{
					SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);
					cout<<"Unable to find grade"<<'\a'<<"\n"<<"Select another function using UP and DOWN and Enter"<<"\n";
					SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
				}
				else
				{
					SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_INTENSITY);                
					showStudentGrade(studentId, gradeNumber);
					SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
					int answer;
					cout<<"\n"<<"Are you sure you want to remove this lesson grade?(1 Yes/2 No) ";
					cin>>answer;
					if (answer==2)
					{
						SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
						cout<<"Operation has stoped";
						cout<<"\n"<<"Select another function using UP and DOWN and Enter";
						SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
					}
					if (answer==1)
					{
						turnStudentGrade(studentId, gradeNumber);
						reorder();
						SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
						cout<<"\n"<<"Student grade was removed successfully"<<"\n"<<"Select another function using UP and DOWN and Enter";
						SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
					}
					else
					{
						SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);
						cout<<"Wrong input"<<'\a'<<"\n"<<"Select another function using UP and DOWN and Enter"<<"\n";
						SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
					}
				}
            }
        }
        else if (n==8)
        {
            int n;
            cout<<"How many Students Grades you want to remove? ";
            cin>>n;
		    for (int i=1; i<=n; i++)
		    {
			    int studentId;
			    StudentGrades studentGrades;
                cout<<"\n\n";
                cout<<"Enter ";
		        switch(i)
		        {
			    case 1:
					cout<<"1st";
					break;
		 	    case 2:
					cout<<"2nd";
					break;
			    case 3:
					cout<<"3rd";
					break;
			    default:
					cout<<i<<"th";
					break;
		        }
		        cout<<" StudentId: ";
		        cin>>studentId;
			    removeStudentGrades(studentId);	
			    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                cout<<"\n"<<"Student grades was removed successfully";
                SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
			    reorder();
        	}
        	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
            cout<<"\n"<<"Select another function using UP and DOWN and Enter";
            SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
        }
        else if (n==9)
        {
            StudentGrades studentGrades;
		    int studentId;
		    int gradeNumber;
		    int newGrade;
		    cout<<"Enter StudentId: ";
		    cin>>studentId;
		    studentGrades = getStudentGrades(studentId);
		    if(studentGrades.studentId==0)
		    {
				SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);
				cout<<"There is no student with this Id"<<'\a'<<"\n"<<"Select another function using UP and DOWN and Enter"<<"\n";
				SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
            }
		    else
		    {
				cout<<"Enter LessonNumber:(1 Mathematic/2 Physics/3 ComputerBasis/4 Chemistry/5 Literature/6 Arabic/7 English) ";
				cin>>gradeNumber;
				if (gradeNumber<=0 && gradeNumber>=8)
				{
					SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);
					cout<<"Unable to find grade"<<'\a'<<"\n"<<"Select another function using UP and DOWN and Enter"<<"\n";
					SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
				}
				else
				{
					SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE | FOREGROUND_INTENSITY);                
					showStudentGrade(studentId, gradeNumber);
					SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
					cout<<"\n"<<"Enter new grade: ";
					cin>>newGrade;
					changeStudentGrade(studentId, gradeNumber, newGrade);
					SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
					cout<<"\n"<<"Student grade was removed successfully"<<"\n"<<"Select another function using UP and DOWN and Enter";
					SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
					reorder();                    
				}
            }
        }
        else if (n==10)
        {
            CopyFile(STUDENT_INFO_FILE, SAVED_STUDENT_INFO_FILE, TRUE);
            CopyFile(STUDENT_GRADES_FILE, SAVED_STUDENT_GRADES_FILE, TRUE);
            SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
            cout<<"Files saved successfully"<<"\n"<<"Select another function using UP and DOWN and Enter";
            SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 15 | FOREGROUND_INTENSITY);
        }
        else if (n==11)
        {
            return 0;
        }
        SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 0 | FOREGROUND_INTENSITY);
}

void reorder()
{
}

void addStudent(StudentInfo studentInfo)
{
    ofstream myfile;
	myfile.open(STUDENT_INFO_FILE, ios_base::app | ios_base::out);
	myfile<<studentInfo.studentId<<" ";
	myfile<<studentInfo.name<<" ";
	myfile<<studentInfo.family<<" ";
	myfile<<studentInfo.birthYear<<" ";
	myfile<<studentInfo.entranceYear<<" ";
	myfile<<studentInfo.fatherName<<" ";
	myfile<<studentInfo.nationalId<<"\n";
	myfile.close();
}

int removeStudentInfo(int studentId)
{
    ifstream studentInfo(STUDENT_INFO_FILE);
    ofstream temp("Files/temp.txt");
    bool studentFound=false;
    int inputStudentId;
    string inputName;
    string inputFamily;
    int inputBirthYear;
    int inputEntranceYear;
    string inputFatherName;
    int inputNationalId;
    while(studentInfo >> inputStudentId >> inputName >> inputFamily >> inputBirthYear >> inputEntranceYear >> inputFatherName >> inputNationalId)
    {
        if(studentId!=inputStudentId)
		{
            temp << inputStudentId << ' ' << inputName << ' ' << inputFamily << ' ' << inputBirthYear << ' ' << inputEntranceYear << ' ' << inputFatherName << ' ' << inputNationalId << endl;
        }
        else
		{
            studentFound = true;
        }
    }
    studentInfo.clear();
    studentInfo.seekg(0, ios::beg);
    studentInfo.close();
    temp.close();
    remove(STUDENT_INFO_FILE); 
    rename("Files/temp.txt",STUDENT_INFO_FILE);
    if(studentFound)
	{
        return 1;
    }
    else
	{
        return 0;
    }
}

StudentInfo getStudent(int studentId)
{
    ifstream studentInfoStream(STUDENT_INFO_FILE);
    int inputStudentId;
    string inputName;
    string inputFamily;
    int inputBirthYear;
    int inputEntranceYear;
    string inputFatherName;
    int inputNationalId;
    while(studentInfoStream >> inputStudentId >> inputName >> inputFamily >> inputBirthYear >> inputEntranceYear >> inputFatherName >> inputNationalId)
    {
		StudentInfo studentInfo;
        if(studentId==inputStudentId)
		{
			studentInfo.studentId=inputStudentId;
			studentInfo.name=inputName;
			studentInfo.family=inputFamily;
			studentInfo.birthYear=inputBirthYear;
			studentInfo.entranceYear=inputEntranceYear;
			studentInfo.fatherName=inputFatherName;
			studentInfo.nationalId=inputNationalId;
			return studentInfo;
        }   
    }
    StudentInfo studentInfo;
    studentInfo.studentId=0;
    return studentInfo;
} 

StudentGrades getStudentGrades(int studentId)
{
    ifstream studentGradesStream(STUDENT_GRADES_FILE);
    int inputStudentId;
	float inputMathematic;
	float inputPhysics;
	float inputComputerBasis;
	float inputChemistry;
	float inputLiterature;
	float inputArabic;
	float inputEnglish;
    while(studentGradesStream >> inputStudentId >> inputMathematic >> inputPhysics >> inputComputerBasis >> inputChemistry >> inputLiterature >> inputArabic >> inputEnglish)
    {
		StudentGrades studentGrades;
        if(studentId==inputStudentId)
		{
			studentGrades.studentId=inputStudentId;
			studentGrades.mathematic=inputMathematic;
			studentGrades.physics=inputPhysics;
			studentGrades.computerBasis=inputComputerBasis;
			studentGrades.chemistry=inputChemistry;
			studentGrades.literature=inputLiterature;
			studentGrades.arabic=inputArabic;
			studentGrades.english=inputEnglish;
			return studentGrades;
        }   
    }
    StudentGrades studentGrades;
    studentGrades.studentId=0;
    return studentGrades;
}

void addStudentGrades(StudentGrades studentGrades)
{
    ofstream myfile;
	myfile.open(STUDENT_GRADES_FILE, ios_base::app | ios_base::out);
	myfile<<studentGrades.studentId<<" ";
	myfile<<studentGrades.mathematic<<" ";
	myfile<<studentGrades.physics<<" ";
	myfile<<studentGrades.computerBasis<<" ";
	myfile<<studentGrades.chemistry<<" ";
	myfile<<studentGrades.literature<<" ";
	myfile<<studentGrades.arabic<<" ";
	myfile<<studentGrades.english<<"\n";
	myfile.close();
}

float studentAverage(StudentGrades studentGrades)
{
	float a=0;
	float b=0;
	float c=0;
	float d=0;
	float e=0;
	float f=0;
	float g=0;
	int counter=0;
	if (studentGrades.mathematic!=-1)
	{
        a =studentGrades.mathematic;
		counter++;
	}
    if (studentGrades.physics!=-1)
	{
		b =studentGrades.physics;
        counter++;
	}
    if (studentGrades.computerBasis!=-1)
	{
		c =studentGrades.computerBasis;
        counter++;
	}
    if (studentGrades.chemistry!=-1)
	{
		d =studentGrades.chemistry;
        counter++;
	}
    if (studentGrades.literature!=-1)
	{
		e =studentGrades.literature;
        counter++;
	}
    if (studentGrades.arabic!=-1)
	{
		f =studentGrades.arabic;
        counter++;
	}
    if (studentGrades.english!=-1)
	{
		g =studentGrades.english;
        counter++;
	}
	float s=a+b+c+d+e+f+g;
	float avg;
	avg=s/(float)counter;
	return avg;
}

float studentVariance(StudentGrades studentGrades)
{
		float originalAvg=studentAverage(studentGrades);
		float a=0;
		float b=0;
		float c=0;
		float d=0;
		float e=0;
		float f=0;
		float g=0;
		int counter=0;
		if (studentGrades.mathematic!=-1)
		{
			a =(originalAvg-studentGrades.mathematic)*(originalAvg-studentGrades.mathematic);
			counter++;
		}
		if (studentGrades.physics!=-1)
		{
			b =(originalAvg-studentGrades.physics)*(originalAvg-studentGrades.physics);
			counter++;
		}
		if (studentGrades.computerBasis!=-1)
		{
			c =(originalAvg-studentGrades.computerBasis)*(originalAvg-studentGrades.computerBasis);
			counter++;
		}
		if (studentGrades.chemistry!=-1)
		{
			d =(originalAvg-studentGrades.chemistry)*(originalAvg-studentGrades.chemistry);
			counter++;
		}
		if (studentGrades.literature!=-1)
		{
			e =(originalAvg-studentGrades.literature)*(originalAvg-studentGrades.literature);
			counter++;
		}
		if (studentGrades.arabic!=-1)
		{
			f =(originalAvg-studentGrades.arabic)*(originalAvg-studentGrades.arabic);
			counter++;
		}
		if (studentGrades.english!=-1)
		{
			g =(originalAvg-studentGrades.english)*(originalAvg-studentGrades.english);
			counter++;
		}
		float s=a+b+c+d+e+f+g;
		float variance;
		variance=s/(float)counter;
		return variance;      
}

float maximumGrade(StudentGrades studentGrades)
{
	float x[7];
	x[0]=studentGrades.mathematic;
	x[1]=studentGrades.physics;
	x[2]=studentGrades.computerBasis;
	x[3]=studentGrades.chemistry;
	x[4]=studentGrades.literature;
	x[5]=studentGrades.arabic;
	x[6]=studentGrades.english;
    float maximumGrade;
	maximumGrade=x[0];
	for (int i=1; i<=6; i++)
	{
		if(maximumGrade<x[i])
		{
			maximumGrade=x[i];
		}
	}
	return maximumGrade;
}

float minimumGrade(StudentGrades studentGrades)
{
	float x[7];
	if (studentGrades.mathematic!=-1)
	{
		x[0]=studentGrades.mathematic;
	}
	else
	{
		x[0]=9999;
	}
	if (studentGrades.physics!=-1)
	{
		x[1]=studentGrades.physics;
	}
	else
	{
		x[1]=9999;
	}
	if (studentGrades.computerBasis!=-1)
    {
		x[2]=studentGrades.computerBasis;
    }
	else
	{
		x[2]=9999;
    }
	if (studentGrades.chemistry!=-1)
    {
		x[3]=studentGrades.chemistry;
    }
	else
	{
		x[3]=9999;
    }
	if (studentGrades.literature!=-1)
    {
		x[4]=studentGrades.literature;
    }
	else
	{
		x[4]=9999;
    }
	if (studentGrades.arabic!=-1)
    {
		x[5]=studentGrades.arabic;
    }
	else
	{
		x[5]=9999;
    }
	if (studentGrades.english!=-1)
    {
		x[6]=studentGrades.english;
    }
	else
	{
		x[6]=9999;
    }
	float minimumGrade;
	minimumGrade=x[0];
	for (int i=1; i<=6; i++)
	{
		if(minimumGrade>x[i])
		{
			minimumGrade=x[i];
		}
	}
	return minimumGrade;
}

int removeStudentGrades(int studentId)
{
	ifstream studentGrades(STUDENT_GRADES_FILE);
    ofstream temp("Files/temp.txt");
    bool studentFound=false;
	int inputStudentId;
	float inputMathematic;
	float inputPhysics;
	float inputComputerBasis;
	float inputChemistry;
	float inputLiterature;
	float inputArabic;
	float inputEnglish;
    while(studentGrades >> inputStudentId >> inputMathematic >> inputPhysics >> inputComputerBasis >> inputChemistry >> inputLiterature >> inputArabic >> inputEnglish)
    {
        if(studentId!=inputStudentId)
		{
            temp << inputStudentId << ' ' << inputMathematic << ' ' << inputPhysics << ' ' << inputComputerBasis << ' ' << inputChemistry << ' ' << inputLiterature << ' ' << inputArabic << ' ' << inputEnglish << endl;
        }
        else
		{
            studentFound = true;
        }
    }
    studentGrades.clear();
    studentGrades.seekg(0, ios::beg);
    studentGrades.close();
    temp.close();
    remove(STUDENT_GRADES_FILE); 
    rename("Files/temp.txt",STUDENT_GRADES_FILE);
    if(studentFound)
	{
        return 1;
    }
    else
	{
        return 0;
    }
}

float showStudentGrade(int studentId, int gradeNumber)
{	
	StudentGrades studentGrades;
	studentGrades = getStudentGrades(studentId);
	if (gradeNumber==1)
	{
		cout<<studentGrades.mathematic;
	}
	if (gradeNumber==2)
	{
		cout<<studentGrades.physics;
	}
	if (gradeNumber==3)
	{
		cout<<studentGrades.computerBasis;
	}
	if (gradeNumber==4)
	{
		cout<<studentGrades.chemistry;
	}
	if (gradeNumber==5)
	{
		cout<<studentGrades.literature;
	}
	if (gradeNumber==6)
	{
		cout<<studentGrades.arabic;
	}
	if (gradeNumber==7)
	{
		cout<<studentGrades.english;
	}
}

void turnStudentGrade(int studentId, int gradeNumber)
{
    StudentGrades studentGrades;
    studentGrades=getStudentGrades(studentId);
	if (gradeNumber==1)
	{
		studentGrades.mathematic=-1;
	}
	if (gradeNumber==2)
	{
		studentGrades.physics=-1;
	}
    if (gradeNumber==3)
	{
		studentGrades.computerBasis=-1;
	}
	if (gradeNumber==4)
	{
		studentGrades.chemistry=-1;
	}
	if (gradeNumber==5)
	{
		studentGrades.literature=-1;
	}
	if (gradeNumber==6)
	{
		studentGrades.arabic=-1;
	}
	if (gradeNumber==7)
	{        
		studentGrades.english=-1;
    }
    removeStudentGrades(studentId);
	addStudentGrades(studentGrades);
	reorder();
}

void changeStudentGrade(int studentId, int gradeNumber, int newGrade)
{
	StudentGrades studentGrades;
    studentGrades=getStudentGrades(studentId);
	removeStudentGrades(studentId);
	if (gradeNumber==1)
	{
		studentGrades.mathematic=newGrade;
	}
	if (gradeNumber==2)
	{
		studentGrades.physics=newGrade;
	}
    if (gradeNumber==3)
	{
		studentGrades.computerBasis=newGrade;
	}
	if (gradeNumber==4)
	{
		studentGrades.chemistry=newGrade;
	}
	if (gradeNumber==5)
	{
		studentGrades.literature=newGrade;
	}
	if (gradeNumber==6)
	{
		studentGrades.arabic=newGrade;
	}
	if (gradeNumber==7)
	{        
		studentGrades.english=newGrade;
    }
	addStudentGrades(studentGrades);
	reorder();
}
