#include<iostream>


using namespace std;
char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int choice,row,colum;
char turn ='x';
bool draw=false;
void display()
{ system("cls");
	  cout<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t      T I C K   C R O S S   G A M E\n\n";
cout<<"\t\t\t\t\t\t\t\t    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n\n";
    cout<<endl<<endl<<endl;
    
    cout<<"\t\t\t\t\t\t\t\t\t\tR U L E S\n";
    cout<<"\t\t\t\t\t\t\t\t\t\t_________\n\n";
    cout<<"\t\t\t\t\t 1-> PLAYER [X]  \t\t\t\t\t\t\t 2-> PLAYER [O]  \n";
    cout<<"\t\t\t\t\t    ___________  \t\t\t\t\t\t\t     ___________   \n\n";
   
    cout<<endl<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t        |     |       \n";
    cout<<"\t\t\t\t\t\t\t\t\t     "<<board[0][0]<<"  |  "<<board[0][1]<<"  |  "<<board[0][2]<<"   \n";
    cout<<"\t\t\t\t\t\t\t\t\t _______|_____|_______\n";
    cout<<"\t\t\t\t\t\t\t\t\t        |     |       \n";
    cout<<"\t\t\t\t\t\t\t\t\t     "<<board[1][0]<<"  |  "<<board[1][1]<<"  |  "<<board[1][2]<<"   \n";
    cout<<"\t\t\t\t\t\t\t\t\t _______|_____|_______\n";
    cout<<"\t\t\t\t\t\t\t\t\t        |     |       \n";
    cout<<"\t\t\t\t\t\t\t\t\t     "<<board[2][0]<<"  |  "<<board[2][1]<<"  |  "<<board[2][2]<<"   \n";
    cout<<"\t\t\t\t\t\t\t\t\t        |     |       \n";
    cout<<endl<<endl<<endl;

}


void player()
{
	
if(turn=='x')
{
	cout<<"\t\t\t\t\t\t\t\t\tPLAYER 1 ST [X]TURN =";
}
if(turn=='o')
{
	cout<<"\t\t\t\t\t\t\t\t\tPLAYER 2 ND [O]TURN=";
}
cin>>choice;

switch(choice)
{
	
	case 1: row=0;colum=0;break;
	case 2: row=0;colum=1;break;
	case 3: row=0;colum=2;break;
	case 4: row=1;colum=0;break;
	case 5: row=1;colum=1;break;
	case 6: row=1;colum=2;break;
	case 7: row=2;colum=0;break;
	case 8: row=2;colum=1;break;
	case 9: row=2;colum=2;break;
	
	default:
		cout<<"INVALID CHOICE";
		break;
}
if(turn =='x'&&board[row][colum]!='x'&&board[row][colum]!='o')
{
	board[row][colum]='x';
	turn ='o';
}

else if(turn =='o'&&board[row][colum]!='x'&&board[row][colum]!='o')
{
	board[row][colum]='o';
	turn='x';
}
else
{
	cout<<"BOX ALREADY FILLED !\n\n";
	player();
	
}
display();
}




bool game_over()   // bool function is used to hold the true and false value 

{
	
	for(int i=0;i<3;i++)
	{
		if(board[i][0]==board[i][1]&&board[i][0]==board[i][2]||board[0][i]==board[1][i]&&board[0][i]==board[2][i])
		
		
		return false;
		if(board[0][0]==board[1][1]&&board[0][0]==board[2][2]||board[0][2]==board[1][1]&&board[0][2]==board[2][0])
	
		return false;
}
	for(int i=0;i<3;i++)
	for(int j=0;j<3;j++)
	if(board[i][j]!='x'&&board[i][j]!='o')
	{
		return true;
	}
	

 draw=true;
	return false;
	
}


int main()
{ 
while(game_over())
{

display();
player();
game_over();


}
if(turn=='x'&& draw == false)
{
	cout<<"\t\t\t\t\t\t\t\t\t C O N G R A T U L A T I O N \n\n";
	cout<<"\t\t\t\t\t\t\t\t\t*****************************\n\n";
	 cout<<"\t\t\t\t\t\t\t\t\t PLAYER 2 ST WINS \n\n";
}
if(turn=='o'&& draw == false)
{
	
	cout<<"\t\t\t\t\t\t\t\t\t C O N G R A T U L A T I O N \n";
	cout<<"\t\t\t\t\t\t\t\t\t*****************************\n\n";
	cout<<"\t\t\t\t\t\t\t\t\t\t    PLAYER 1 nd WINS \n\n";
}

if(turn!='o'&& draw!=false)
{   cout<<"\t\t\t\t\t\t\t\t\t G A M E  O V E R  D R A W\n\n";
	cout<<"\t\t\t\t\t\t\t\t\t*****************************\n\n";
	
	
}
}

