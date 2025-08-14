#include <iostream>
using namespace std;
class TicTacToe{
char x [9]={'0','1','2','3','4','5','6','7','8'};
public:
void display_board (){
cout<<"\t"<<x[0]<<"|"<<x[1]<<"|"<<x[2]<<endl;
cout<<"\t"<<"_|_|_\n";
cout<<"\t"<<x[3]<<"|"<<x[4]<<"|"<<x[5]<<endl;
cout<<"\t"<<"_|_|_\n";
cout<<"\t"<<x[6]<<"|"<<x[7]<<"|"<<x[8]<<endl;

}
void input (char c){
    int v=1;
    while (v==1)
    {
    int area;
    cin>>area;
    if (x[area]!= 'x' && x[area]!= 'o'){
        x [area]= c;
        break;}
    else{
        cout<<"this slot is not empty\n";
        display_board();
        ;}}}
bool isWinner(){
    if ((x[0]==x[1] && x[1]==x[2]) ||
    (x[3]==x[4] && x[4]==x[5]) ||
    (x[6]==x[7] && x[7]==x[8]) ||
    (x[0]==x[3] && x[3]==x[6]) ||
    (x[1]==x[4] && x[4]==x[7]) ||
    (x[2]==x[5] && x[5]==x[8]) ||
    (x[0]==x[4] && x[4]==x[8]) ||
    (x[2]==x[4] && x[4]==x[6]))
        return true;   
    else 
        return false;}       
bool isDraw(){
    if(x[0]=='0'||x[1]=='1'||x[2]=='2'||x[3]=='3'||x[4]=='4'||x[5]=='5'||x[6]=='6'||x[7]=='7'||x[8]=='8')
        return false;
    else 
        return true;
}

};
int main(){
cout<<"welcome to Tic Tac Toe game !\n";
cout<<"-----------------------------\n";
string player1 , player2; 
cout <<"Enter player 1 's name (x) : \n";
cin >> player1;
cout <<"Enter player 2 's name (o) : \n";
cin >> player2;
int i=1;
while(i==1){ 
char opion;
TicTacToe obj1;
while (!obj1.isDraw())
{
    int num;
    char y;
    y='x';
    cout<<player1<<" 's turn "<<"("<<y<<")"<<"\n";
    cout<<"choose the slot and write its number \n";
    obj1.display_board();
    obj1.input(y);
    if (obj1.isWinner()){
    cout<<player1<<" wins.\n";
    obj1.display_board();
    break;}
    if(obj1.isDraw()){
        cout<<"Game is draw\n";
        obj1.display_board();
        break;}

    y='o';
    cout<<player2<<" 's turn "<<"("<<y<<")"<<"\n";
    cout<<"choose the slot and write its number \n";
    obj1.display_board();
    obj1.input(y);
    if (obj1.isWinner()){
    cout<<player2<<" wins.\n";
    obj1.display_board();
    break;}
    
    if(obj1.isDraw()){
        cout<<"Game is draw\n";
        obj1.display_board();
        break;}
    }
 cout<<"Do you want to play again ? (Y/N): "<<endl;
 cin>>opion;
 if (opion=='Y'||opion=='y')
     i=1;
 else
     i=0;
}
    return 0;
}