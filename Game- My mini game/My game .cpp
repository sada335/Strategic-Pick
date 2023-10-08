#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,p1,p2,flag;
    cout<<"***Welcome to our new game***\n";
    cout<<"Total number of ball : ";
    cin>>n;

    cout<<"\n***You can choose no of ball (1/2/3/4)***"<<endl;
    cout<<"\tPlayer-1 (User)"<<endl;
    cout<<"\tPlayer-2 (Computer)"<<endl;

    while(1)
    {
        if(n){
            cout<<"\n\tPlayer-1 (Bijoy): ";
            cin>>p1;
            n=n-p1;
            flag=1;
            cout<<" Remaining no of ball : "<<n<<endl;
        }
        if(n){
            cout<<"\n\tPlayer-2 : ";

            if(n%5==0)
                p2 = (rand() % 4) + 1 ;
            else
                p2 = n%5;
            cout<<p2;

            n = n-p2;
            flag = 2;
            cout<<"\n Remaining no of ball : "<<n<<endl;
        }
        if(n<=0)
            break;

    }

    cout<<"\n\n******Game Over!!!******"<<endl;
    if(flag==1)
        cout<<"\tPlayer-1 Wins !!!"<<endl;
    else if(flag==2)
        cout<<"\tPlayer-2 Wins !!!"<<endl;


    return 0;
}
