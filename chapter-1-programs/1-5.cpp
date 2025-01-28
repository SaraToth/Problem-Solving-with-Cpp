#include <iostream>
using namespace std;

int main() {
    string X;
    string N(" ");

    cout<<"Choose a letter and press enter: \n";
    cin>>X;

    cout<<"\n ****************** \n \n";
    cout<<N + N + X + N + X + N + X + " \n";
    cout<<N + X + N + N + N + N + N + X + "\n";
    cout<<X + "\n" + X + "\n" + X + "\n" + X + "\n" + X + "\n";
    cout<<N + X + N + N + N + N + N + X + "\n";
    cout<<N + N + X + N + X + N + X + " \n";
    cout<<"\n \n ****************** \n";

    return 0;
}

/* 
OUTPUT: 

  X X X
 X     X
X
X
X
X
X
 X     X
  X X X



*/