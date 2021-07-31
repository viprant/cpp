#include<iostream>
#include<windows.h>
using namespace std;
void showMenu()
{
	cout<<"====================================================="<<endl;
	cout<<"================ Quiz App ============================"<<endl;
	cout<<"====================================================="<<endl;
	cout<<"\n\n\n";
	cout<<"1) New Quiz->"<<endl;
	cout<<"2) Highest Score->"<<endl;
	cout<<"3) Exit->\n\n";
}

int main()
{
	system("COLOR 20");
	
	string questions[10] = {
	"1. What is an operating system?",
    "2. What is the main function of the command interpreter?",
	"3. In Operating Systems, which of the following is/are CPU scheduling algorithms?",
	"4. Which one of the following is not a real time operating system?",
	"5. What is the degree of multiprogramming?",
	"6. The systems which allow only one process execution at a time, are called __________",
	"7. In Unix, Which system call creates the new process?",
	"8. A process can be terminated due to __________",
	"9. The address of the next instruction to be executed by the current process is provided by the __________",
	"10. The number of processes completed per unit time is known as __________"
	};	
	
	
	string options[10] = {
	"1) collection of programs that manages hardware resources 2) system service provider to the application programs 3) interface between the hardware and application programs 4) all of the mentioned",
    "1) to get and execute the next user-specified command 2) to provide the interface between the API and application program 3) to handle the files in operating system  4) none of the mentioned",
    "1)Round Robin 2)Shortest Job First 3)Priority 4)All of the mentioned",
    "1) VxWorks  2) QNX  3) RTLinux  4) Palm OS",
    "1) the number of processes executed per unit time  2) the number of processes in the ready queue  3) the number of processes in the I/O queue  4) the number of processes in memory"
    "1) uniprogramming systems  2) uniprocessing systems  3) unitasking systems   4) none of the mentioned",
	"1) fork  2) create  3) new   4) none of the mentioned",
	"1) normal exit 2) fatal error 3) killed by another process 4) all of the mentioned ",
	"1) CPU registers  2) Program counter  3) Process stack  4) Pipe",
	"1) Output  2) Throughput  3) Efficiency  4) Capacity"};
	
	int ans[10]={4,1,4,4,4,2,1,4,2};
	
	string playerName="Viprant Moon";
	int highestScore=0;
	
	char ch='y';
	
	while(ch=='y')
	{
		int currentResult=0;
		string currentPlayer;
		system("CLS");
		showMenu();
		int menu;
		cin>>menu;
		
		switch(menu)
		{
			
			case 1:
				system("COLOR 5C");
				cout<<"Enter Your Name Here: ";
				cin>>currentPlayer;
				
				for(int i=0; i<10; i++)
				{
				system("CLS");
				cout<<"============================================"<<endl;
				cout<<"=========== +++++Playing Quiz+++++ ========="<<endl;
				cout<<"============================================\n\n"<<endl;
					int op;
					cout<<"\n\n"<<questions[i]<<endl;
					cout<<options[i]<<endl<<endl;
					cout<<"Enter Option: ";
					cin>>op;
					if(op==ans[i])
					{
						currentResult++;
						if(currentResult>highestScore)
						{
							highestScore=currentResult;
							playerName = currentPlayer;
						}
					}
				}
				cout<<"\n\n Your Score: "<<currentResult<<endl;
				
			break;
			
			case 2:
				system("COLOR 76");
				system("CLS");
				cout<<"=================================="<<endl;
				cout<<"=========== +++++* Highest Score *+++++ ========="<<endl;
				cout<<"=================================="<<endl;
				cout<<"\n\n Highest Score is "<<highestScore<<" By "<<playerName<<endl;
			break;
			
			case 3:
				system("COLOR 74");
				cout<<"Thank you for Using Quiz App !...";
				exit(0);
			break;
			default:
				cout<<"Wrong Selection";
		}
		
		cout<<"\n\nDo you want to continue y/n ?";
		cin>>ch;
	}
	return 0;
}

