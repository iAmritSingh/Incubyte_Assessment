#include <bits/stdc++.h>
using namespace std;

// the cordinates defined as globally to store the cordinates
int x,y,z;

//variables to store the direction
char D,D1;
// a function to handle the commands given by the users
void solve(char command) {

    // to handle forward command 
    if(command=='f'){
        if(D1=='N') y++;
        else if(D1=='S') y--;
        else if(D1=='W') x--;
        else if(D1=='E') x++;
        else z++;
        
       
    }

    // to handle backward command 
    else if(command =='b'){
        if(D1=='N') y--;
        else if(D1=='S') y++;
        else if(D1=='W') x++;
        else if(D1=='E') x--;
        else z--;
    }
    // to handle left command 
    else if(command == 'l'){
        if(D1=='N') D1='W';
        else if(D1=='S') D1 = 'E';
        else if(D1=='W') D1 ='S';
        else if(D1=='E') D1='N';
        else{
            if(D=='N') D1='W';
            else if(D=='S') D1 = 'E';
            else if(D=='W') D1 ='S';
            else if(D=='E') D1='N';
        }
    }
    // to handle right command 
    else if(command == 'r'){
        if(D1=='N') D1='E';
        else if(D1=='S') D1 = 'W';
        else if(D1=='W') D1 ='N';
        else if(D1=='E') D1='S';
        else{
            if(D=='N') D1='E';
            else if(D=='S') D1 = 'W';
            else if(D=='W') D1 ='N';
            else if(D=='E') D1='S';
        }
    }
    // to handle UP command 
    else if(command == 'u'){
        if(D1!='U' && D1!='D'){
            D = D1;
        }
        D1 = 'U';
    }
    // to handle Down command 
    else{
        if(D1!='U' && D1!='D'){
            D = D1;
        }
        D1 = 'D';
    }

}
int main()
{
    
    cout<<"Enter the Initial Cordinates"<<endl;
    cout<<"x : ";
    cin>>x;
    cout<<"y : ";
    cin>>y;
    cout<<"z : "; cin>>z;
    // cin>>x>>y>>z;
    cout<<"Enter the initial Direction in capitals like (N,S,E,W) : ";
    cin>>D1;
    // I chose N as default direction for taking initial direction like U or D;
    D = 'N';
    if(D1!='U' && D1!='D') D = D1;
    
    char command;
    cout<<"---------------------------------------------------------------"<<endl;

    while(true){
        cout<<"Enter the command from (f,b,l,r,u,d) , Enter 0 to stop : ";
        cin>>command;
        if(command=='0') break;
        solve(command);
        cout<<"New Cordinates are : ("<<x<<" ,"<<y<<" ,"<<z<<")"<<endl;
        // cout<<x<<" "<<y<<" "<<z<<endl;
        cout<<"New Direction is : "<<D1<<endl;
        cout<<"---------------------------------------------------------------"<<endl;
    }
    return 0;
}