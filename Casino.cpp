// Game of the  Roullete

# include <iostream>
# include <stdlib.h>
# include<iomanip>
# include <time.h>

using namespace std;

int main()
{
	cout<<"*********************************************************************"<<endl;
	cout<<"\t\t\t WELCOME TO CASINO ROYALE"<<endl;
	
	cout<<"\n";
	cout<<"************************************************************************"<<endl;
	
	
	cout<<"\t\t\t Game of the Roullette"<<endl;
	cout<<"---------------------------------------------------------------------------"<<endl;
	
	int PoolAmt,choice,Magicno;
	
	int Guessno,flag=0;
	float BetAmt=1;
	//char ch;
	srand(time(0));
	
    Magicno=rand()	%36+1;
    
    cout<<Magicno;
    cout<<"Enter the Pool amount between 1000 and 5000"<<endl;  // For the Ouput Purpose ,Convience and Processing Purpose
    cin>>PoolAmt;
    cout<<endl;                      //endl where processing is done
   
	do
	{
      cout<<endl
          <<"Menu"
          <<endl
		  <<"1.  Jackpot Number   :1 to 36"
		  <<endl
		  <<"2.  Chit-Pat         :Choose odd or Even(o/e) "
		  <<endl
		  <<"3.  Fifty-Fifty      :Which half is the magic number(1/2)  "
		  <<endl
		  <<"4.  Pau-Pau          :Which Quarter is the magic number ?(1/2/3/4)  "
		  <<endl
		  <<"5.  Quit "
		  <<endl
		  <<endl;  
	  cout<<" Enter your choice for playing the GAME OF ROULLETE between 1 and 5 "<<endl;
      cin>>choice;	
	      
		  switch(choice)
		  {
			 case 1:{
			 	     
					 cout<<"Enter the BetAmount"<<endl;
					 cin>>BetAmt;
					 cout<<endl;
					 cout<<"***RULES OF JACK-POT***"<<endl<<endl;
					 cout<<"If you win this round your BetAmount will be double"<<endl;
			 	     cout<<"If you lose this round your BetAmount will be zero"<<endl<<endl;
			 	     
				     cout<<"Enter the Guess no for the MagicNo"<<endl;   // For the Finer Details 
				     cin>>Guessno;
					 
					  if(Guessno==Magicno)
					  {
					    BetAmt=BetAmt*2; 	
					    PoolAmt=PoolAmt+BetAmt;
					    cout<<"Hoorah,You have Won Rs."<<BetAmt<<endl;
					    cout<<"PoolAmount after winning the Game  :"<<PoolAmt<<endl<<endl;
					  }
					  else
					  {
					  	  
						  cout<<"Sorry,You have lose the Game"<<endl;
					  	  cout<<"Magic Number is  :"<<Magicno<<endl<<endl;
						  //cout<<BetAmt;
						  PoolAmt=PoolAmt-BetAmt;
					      BetAmt=0;
						  cout<<"Oops',BetAmount for this game after losing is : "<<BetAmt<<endl;
						  cout<<"Oops',PoolAmount after losing the Game  :"<<PoolAmt<<endl<<endl;
					  }
					  if(PoolAmt<1000)
					  {
					  	flag=1;
					    goto next;    //forcily termiante from if,switch case, do while 
					  
					  }
				  break;
				 } 
		case  2:   {
			         cout<<"Enter the BetAmount"<<endl;
					 cin>>BetAmt;
					 cout<<endl;
					 cout<<"***RULES OF CHIT-PAT***"<<endl<<endl;
					 cout<<"If you win this round your BetAmount will be added by 50% of it"<<endl;
			 	     cout<<"If you lose this round your BetAmount will be zero"<<endl<<endl;
			 	     char ch;
				     cout<<"Choose 'o' for ODD and  'e' for EVEN of the  MagicNo in the game of Roullette"<<endl;
				     cin>>ch;
					 
					  if(ch=='e'||ch=='E')
					  {
					    int n=Magicno%2;
					    if(n==0)
					    {
						BetAmt=float(BetAmt+(BetAmt*0.5)); 	
					    PoolAmt=PoolAmt+BetAmt;
					    cout<<"Hoorah,You have Won Rs."<<BetAmt<<endl;
					    cout<<"PoolAmount after winning the Game  :"<<PoolAmt<<endl;
					   }
					    else
					    {
					  	   
						  cout<<"Sorry,You have lose the Game"<<endl;
					  	  cout<<"Magic Number is  :"<<Magicno<<endl;
						  
						  PoolAmt=PoolAmt-BetAmt;
					      BetAmt=0;
						  cout<<"BetAmount for this game  after losing is : "<<BetAmt<<endl;
						  cout<<"PoolAmount after losing the Game  :"<<PoolAmt<<endl;
					    }
					  
				     }
					  else if(ch=='o'||ch=='O')
					  {
					  
					   int n=Magicno%2;
					    if(n==1)
					    {
						BetAmt=float(BetAmt+(BetAmt*0.5)); 	
					    PoolAmt=PoolAmt+BetAmt;
					    cout<<"Hoorah,You have Won Rs."<<BetAmt<<endl<<endl;
					    cout<<"PoolAmount after winning the Game  :"<<PoolAmt<<endl;
					   }
					    else
					    {
					  	   
						  cout<<"Sorry,You have lose the Game"<<endl<<endl;
					  	  cout<<"Magic Number is  :"<<Magicno<<endl<<endl;
						  
						  PoolAmt=PoolAmt-BetAmt;
					      BetAmt=0;
						  cout<<"BetAmount for this game after losing is : "<<BetAmt<<endl;
						  cout<<"PoolAmount after losing the Game  :"<<PoolAmt<<endl;
					    }
				     }
					  
					  if(PoolAmt<1000)
					  {
					  	flag=1;
					  	goto next;
				       
					  }
				      
					  
					 break;
			        } 
			     
	case  3:   {
			         cout<<"Enter the BetAmount"<<endl;
					 cin>>BetAmt;
					 cout<<"***RULES of Fifty-Fifty***"<<endl<<endl;
					 cout<<"If you win this round your BetAmount will be added by 75% of it"<<endl;
			 	     cout<<"If you lose this round your BetAmount will be zero"<<endl<<endl;
			 	     
					 int half;
				     
					 cout<<"Enter the half where the Magic number could be (i.e 1st or 2nd Half) "<<endl;
				     cin>>half;
					 cout<<endl;
					 
					 if(half==1)
					 {
					   
					   if(Magicno>=1 && Magicno<=18)  
					   {
					    BetAmt=float(BetAmt+(BetAmt*0.75)); 	
					    PoolAmt=PoolAmt+BetAmt;
					    cout<<"Hoorah,You have Won Rs."<<BetAmt<<endl;
					    cout<<"PoolAmount after winning the Game  :"<<PoolAmt<<endl;
					   }
					   else
					   {  
					  	  cout<<"Sorry,You have lose the Game"<<endl;
					  	  cout<<"Magic Number is  :"<<Magicno<<endl<<endl;
						  
						  PoolAmt=PoolAmt-BetAmt;
					      BetAmt=0;
						  cout<<"Oops',BetAmount for this game after losing is : "<<BetAmt<<endl;
						  cout<<"Oops',PoolAmount after losing the Game  :"<<PoolAmt<<endl;
					   } 
				     }
					  
					  
					 else if(half==2)
					 {
					   
					   if(Magicno>=18 && Magicno<=36)   // Imagine Roullette Like Circle of 36 parts .Half of it is :18
					   {
					    BetAmt=float(BetAmt+(BetAmt*0.75)); 	
					    PoolAmt=PoolAmt+BetAmt;
					    cout<<"Hoorah,You have Won Rs."<<BetAmt<<endl;
					    cout<<"PoolAmount after winning the Game  :"<<PoolAmt<<endl;
					   }
					   else
					   {  
					  	  cout<<"Sorry,You have lose the Game"<<endl;
					  	  cout<<"Magic Number is  :"<<Magicno<<endl<<endl;
						  
						  PoolAmt=PoolAmt-BetAmt;
					      BetAmt=0;
						  cout<<"BetAmount for this game after losing is : "<<BetAmt<<endl;
						  cout<<"PoolAmount after losing the Game  :"<<PoolAmt<<endl;
					   } 
				     }
					  if(PoolAmt<1000)
					  {
					  	flag=1;
					  	goto next;
				       
					  }
				      
					  
					 break;
			        } 
			        
	case  4:   {
			         cout<<"Enter the BetAmount"<<endl;
					 cin>>BetAmt;
					 cout<<endl;
					 cout<<"***RULES of Pau-Pau***"<<endl<<endl;
					 cout<<"If you win this round your BetAmount will be added by 85% of it"<<endl;
			 	     cout<<"If you lose this round your BetAmount will be zero"<<endl<<endl;
			 	     
					 int quarter;
				     
					 cout<<"Enter the quarter where the Magic number could be (i.e 1st,2nd,3rd,4th ) "<<endl;
				     cin>>quarter;
					 cout<<endl;
					 
					 if(quarter==1)
					 {
					   
					   if(Magicno>=1 && Magicno<=9)   
					   {
					    BetAmt=float(BetAmt+(BetAmt*0.85)); 	
					    PoolAmt=PoolAmt+BetAmt;
					    cout<<"Hoorah,You have Won Rs."<<BetAmt<<endl;
					    cout<<"PoolAmount after winning the Game  :"<<PoolAmt<<endl;
					   }
					   else
					   {  
					  	  cout<<"Sorry,You have lose the Game"<<endl;
					  	  cout<<"Magic Number is  :"<<Magicno<<endl<<endl;
						  
						  PoolAmt=PoolAmt-BetAmt;
					      BetAmt=0;
						  cout<<"BetAmount for this game after losing is : "<<BetAmt<<endl;
						  cout<<"Oops',PoolAmount after losing the Game  :"<<PoolAmt<<endl;
					   } 
				     }
					  
					  
					 else if(quarter==2)
					 {
					   
					   if(Magicno>9 && Magicno<=18)   // Imagine Roullette Like Circle of 36 parts .
					   {
					    BetAmt=float(BetAmt+(BetAmt*0.85)); 	
					    PoolAmt=PoolAmt+BetAmt;
					    cout<<"Hoorah,You have Won Rs."<<BetAmt<<endl;
					    cout<<"PoolAmount after winning the Game  :"<<PoolAmt<<endl;
					   }
					   else
					   {  
					  	  cout<<"Sorry,You have loose the Game"<<endl;
					  	  cout<<"Magic Number is  :"<<Magicno<<endl<<endl;
						  
						  PoolAmt=PoolAmt-BetAmt;
					      BetAmt=0;
						  cout<<"Oops',BetAmount for this game after losing is : "<<BetAmt<<endl;
						  cout<<"Oops',PoolAmount after losing the Game  :"<<PoolAmt<<endl;
					   } 
				     }
				     
				     else if(quarter==3)
					 {
					   
					   if(Magicno>18 && Magicno<=27)   // Imagine Roullette Like Circle of 36 parts .quarter of it is :9
					   {
					    BetAmt=float(BetAmt+(BetAmt*0.85)); 	
					    PoolAmt=PoolAmt+BetAmt;
					    cout<<"Hoorah,You have Won Rs."<<BetAmt<<endl;
					    cout<<"PoolAmount after winning the Game  :"<<PoolAmt<<endl;
					   }
					   else
					   {  
					  	  cout<<"Sorry,You have lose the Game"<<endl;
					  	  cout<<"Magic Number is  :"<<Magicno<<endl<<endl;
						  
						  PoolAmt=PoolAmt-BetAmt;
					      BetAmt=0;
						  cout<<"Oops',BetAmount for this game after losing is : "<<BetAmt<<endl;
						  cout<<"Oops',PoolAmount after losing the Game  :"<<PoolAmt<<endl;
					   } 
				     }
					  
					 else if(quarter==4)
					 {
					   
					   if(Magicno>27 && Magicno<=36)   // Imagine Roullette Like Circle of 36 parts .quarter of it is :9
					   {
					    BetAmt=float(BetAmt+(BetAmt*0.85)); 	
					    PoolAmt=PoolAmt+BetAmt;
					    cout<<"Hoorah,You have Won Rs."<<BetAmt<<endl;
					    cout<<"PoolAmount after winning the Game  :"<<PoolAmt<<endl;
					   }
					   else
					   {  
					  	  cout<<"Sorry,You have loose the Game"<<endl;
					  	  cout<<"Magic Number is  :"<<Magicno<<endl<<endl;
						  
						  PoolAmt=PoolAmt-BetAmt;
					      BetAmt=0;
						  cout<<"'Oops',BetAmount for this game after losing is : "<<BetAmt<<endl;
						  cout<<"'Oops',PoolAmount after losing the Game  :"<<PoolAmt<<endl;
					   } 
				     } 
					  
					  if(PoolAmt<1000)
					  {
					  	flag=1;
					  	goto next;
				       
					  }
				      
					  
					 break;
			        } 		        
	case    5:   { 
	               cout<<endl;
				   cout<<"Thank,You for Playing with Us"<<endl;	
	  	           break;
	             }		     		  
	default:
			  	  {
				    cout<<"\n";
					cout<<"Please Enter Valid Choice Between 1 and 5"<<endl; 
				  }
			  }
			  	
	}while(choice!=5);
	
	next:
	if(flag==1)
	{
		cout<<"\n";
		cout<<"Sorry You Can't play the Games as your Bet Amount is Less than 1000"<<endl;
	}
	
	return 0;
}
