#include<iostream>
using namespace std;
int main(){
    long double   x,y;
    long double   enteredPassword;
    long double   AccountMobileNum;
    long double   accountNum;
    long double   accountPassword;
    long double   DOB;
    cout<<"WELCOME TO SUYASH BANK'S ATM"<<endl;
    cout<<"PLEASE ENTER YOUR FIVE DIGIT ACCOUNT NUMBER"<<endl;
    accountNum=12345;
    accountPassword=1111;
    DOB=11112001;

    cin>>x;
    
    if (x==accountNum)
    {
        cout<<"WELCOME MR. SUYASH KHANDARE"<<endl<<"PLEASE ENTER YOUR PASSWORD"<<endl;
        
        cin>>enteredPassword;
        if(enteredPassword==accountPassword){
            cout<<"ONE MORE VARIFICATION "<<endl<<"PLEASE ENTER YOUR DATE OF BIRTH (IN THE FORMAT OF DD/MM/YYYY WITHOUT SPACES) "<<endl;
            cin>>y;
            
            if(DOB==y){
                cout<<"WELCOME TO SUYASH'S ATM,"<<endl<<"CHOOSE OPTIONS FROM GIVEN LIST"<<endl;
                cout<<"            PRESS 1 FOR WITHDRAW CASH"<<endl;
                cout<<"            PRESS 2 FOR DIPOSITE CASH"<<endl;
                cout<<"            PRESS 3 FOR CHECK BALANCE"<<endl;
                cout<<"            PRESS 4 FOR TRANSFER MONEY"<<endl;
                cout<<"            PRESS 5 FOR UPDATE MOBILE NUMBER"<<endl;
               
                int  f,features,balance;
                long  withdrawAmount,totalAmount,depoAmount;
                long  amount=depoAmount-withdrawAmount;
                totalAmount=50000;
                cin>>features;
                
                do
                {
                 switch (features)
                {
                case 1:
                    cout<<"ENTER THE AMOUNT TO WITHDRAW"<<endl;
                    cin>>withdrawAmount;
                    cout<<"COLLECT YOUR CASH RUPEES - "<<withdrawAmount<<endl;
                    cout<<"REMAINING BALANNCE - "<<withdrawAmount-totalAmount<<endl;
                    cout<<"THANKS FOR CHOOSING SUYASH'S BANK :) ";
                    break;
                case 2:
                    cout<<"ENTER AMOUNT TO DIPOSITE"<<endl;
                    cin>>depoAmount;
                    cout<<"MONEY DEPOSITED - "<<depoAmount<<endl;
                    cout<<"NEW BALANCE - "<<depoAmount+totalAmount<<endl;
                    cout<<"THANKS FOR CHOOSING SUYASH'S BANK :) ";
                    break;
                case 3:
                    cout<<"YOUR REMAINING BALANCE IS - "<<totalAmount<<endl;
                    cout<<"THANKS FOR CHOOSING SUYASH'S BANK :) ";    
                    break;
                default:
                cout<<"YOU CHOOSEN WRONG INPUT, PLEASE CHOOSE CORRECT OPTION"<<endl;
                cout<<"THANKS FOR CHOOSING SUYASH'S BANK :) ";
                    break;
                }
                } while (features>=3);
                
            }
            else{
                cout<<"WRONG DATE OF BIRTH"<<endl;
            }
        }
        else{
            cout<<" WRONG PASSWORD !! "<<endl;
        }

    }else{
        cout<<"WRONG ACCOUNT NUMBER,PLEASE ENTER VALID ACCOUNT NUMBER"<<endl;
    }
    
return 0; 
}
