//Project on Hotel Management
#include<iostream>
using namespace std;
class discount
{
	public:
		int dis,age,x,y;
		discount()
		{
				dis=0;	
		}
		void get_data()
		{
			cout<<"\n Enter Age ";
			cin>>age;
			
				cout<<"\n You Get Discount By Simply Solving a Giving Question";
				
				
				cout<<"\n Ques is-Diamond Shine Due To Which Natural Phenomena";
				cout<<"\nYour Options IS ";
				cout<<"\n1.Light Scattering \n2.Dispersion Of Light \n3.Total Internal Reflection";
				cout<<"\n\tEnter Your Choice = ";
				cin>>y;
				if(y==1)
					cout<<"\nNo Discount Is Given\nBut Don't Worry And Try Again ";
				else if(y==2)
					cout<<"\nNo Discount Is Given \nBut Don't Worry And Try Again";
				else
				{
					 cout<<"\nDiscount Is Given to You";
					 dis=age*10;
					 cout<<"  Discount Given To You Is "<<dis;
				}
				
			}
		
};

int main()
{	
    int enter,secret;
    int quant,choice,code,tot;
    //quantity
    int qroom=0,nroom=0,qpasta=0,qburger=0,qnoodles=0, qshake=0, qveg_meal=0;
   //Food item sold
     int sroom=0,spasta=0,sburger=0,snoodles=0, sshake=0, sveg_meal=0;
    //total food item
    int troom=0,tpasta=0,tburger=0,tnoodles=0, tshake=0, tveg_meal=0;
    int c,e,f,g;
    discount d;
    
    cout<<"\n\t####----------Quantity of items we have-------- ####";
    cout<<"\nRooms Information ";
    cout<<"\nDeluxe room = ";
    cin>>qroom;
    cout<<"\nNormal Single Bedded Room = ";
    cin>>nroom;
    cout<<"\nQuantity of Pasta  = ";
    cin>>qpasta;
    cout<<"\nQuantity of Burger  = ";
    cin>>qburger;
    cout<<"\nQuantity of Noodles = ";
    cin>>qnoodles;
    cout<<"\nQuantity of Shake  = ";
    cin>>qshake;
    cout<<"\nQuantity of veg meal  = ";
    cin>>qveg_meal;
    cout<<"\nPlease Make a secret Code For Fetching The Details Of Sales ";
    cout<<"\nPlease Enter The Code = ";
    cin>>code;
    secret=code;
    cout<<"\nIf You Forgot Your Secret Code Than Use Given Code TO Unlock";
    cout<<"\nSecurity Code Is = 8521212";
    system("cls") ;
  
   
   m:
   	
    cout<<"\n\n\n\t------ Please select from menu option-------";
    cout<<"\n**************************************************************";
    cout<<"\n1) Rooms\n1.Deluxe---------Rs-2000 per day\n2.Normal Rooms-----------------Rs-1000 per day";
    cout<<"\n2) Pasta          Rs-120 per piece";
    cout<<"\n3) Burger         Rs-100 per piece";
    cout<<"\n4) Noodles        Rs-150 per piece";
    cout<<"\n5) Shake          Rs-20 per piece";
    cout<<"\n6) Veg Meal       Rs-50 per piece";
    cout<<"\n7) Information regarding Sales and Collection";
    cout<<"\n8) To Know and Explore Villa's Hotel";
    cout<<"\n9) Discount";
    cout<<"\n10) Exit";
    cout<<"\nPlease Enter Your Choice=";
    cin>>choice;
    
    switch(choice) 
    {
    case 1:
    	cout<<"\n Enter The No of Rooms You Want \n1.Deluxe\n2.Normal room "; 
    	cout<<"\nEnter choice ";
    	cin>>g;
    	cout<<"\nEnter Quantity ";
    	cin>>quant;
    	cout<<"\n";
    	if(qroom+nroom-sroom>=quant)
    		{
    			if(g==1){
				
   				sroom=sroom+quant;
  				troom=troom+quant*2000;
    			cout<<"\n\t"<<quant<<" rooms allocated to you";
    			cout<<"\n\tYour amount is"<<troom;
    			}
    			else
    			{
    			
   				nroom=nroom+quant;
  				troom=troom+quant*1000;
    			cout<<"\n\t"<<quant<<" rooms allocated to you";
    			cout<<"\n\tYour amount is"<<troom;	
				}
			}
    	else
    		cout<<"\n\tOnly "<<qroom-sroom-nroom<<" Rooms Available in Hotel ";
    break;
    
    case 2:
    	cout<<"\n Enter The Pasta Quantity You Want	=	"; 
    	cin>>quant;
    	if(qpasta-spasta>=quant)
    	{
    		spasta=spasta+quant;
    		tpasta=tpasta+quant*120;
    		cout<<"\n\t"<<quant<<" 	Pastas is Ordered ";
   			cout<<"\n\tYour amount is "<<tpasta;
		 }
    	else
   			 cout<<"\n\tOnly"<<qpasta-spasta<<" Pastas Available in Hotel ";
    break;
    
    case 3:
    	cout<<"\n Enter The  Quantity of Burger You Want  = "; 
    	cin>>quant;
    	if(qburger-sburger>=quant)
    	{
    		sburger=sburger+quant;
    		tburger=tburger+quant*100;
    		cout<<"\n\t"<<quant<<" Burger is Ordered ";
    		cout<<"\n\tYour amount is"<<tburger; 
		}
    	else
    		cout<<"\n\tOnly"<<qburger-sburger<<" Burgers Available in Hotel ";
    break;
    
    case 4:
    	cout<<"\n Enter The Quantity of Noodles You Want = "; 
    	cin>>quant;
    	if(qnoodles-snoodles>=quant)
   		 {
    		snoodles=snoodles+quant;
    		tnoodles=tnoodles+quant*150;
    		cout<<"\n\t"<<quant<<" Noodles is Ordered";
    		cout<<"\n\tYour amount is = "<<tnoodles;
		}
    	else
    		cout<<"\n\tOnly "<<qnoodles-snoodles<<" Noodles Available in Hotel ";
    break;
    
    case 5:
    	cout<<"\n Enter The No Shakes You Want="; 
    	cin>>quant;
    	if(qshake-sshake>=quant)
    	{
    		sshake=sshake+quant;
    		tshake=tshake+quant*20;
    		cout<<"\n\t"<<quant<<" Shakes is Ordered";
    		cout<<"\n\tYour amount is ="<<tshake;
    	}
    	else
    		cout<<"\n\tOnly"<<qshake-sshake<<" Shakes Available in Hotel ";
    break;
    
    case 6:
    	cout<<"\n Enter The No Veg Meal You Want="; 
    	cin>>quant;
    	if(qveg_meal-sveg_meal>=quant)
    	{
    		sveg_meal=sveg_meal+quant;
    		tveg_meal=tveg_meal+quant*50;
    		cout<<"\n\t"<<quant<<" veg_meal is ordered";
    		cout<<"\n\tYour amount is = "<<tveg_meal;
    	}
    else
    	cout<<"\n\tOnly"<<qveg_meal-sveg_meal<<" Veg Meal Available in Hotel ";
    break;
    
    case 7:
    	
    	cout<<"\n\t-------Details Of Sales And Collection--------";
    	cout<<"\n***************************************************";
		cout<<"\nPlease Enter The Secret Code For Getting Details \n";
		cin>>code; 
    	if(secret==code||code==8521212)
    	{
    	//Details of Rooms in Hotel
    	cout<<"\n\nNumbers of Rooms We Had="<<qroom;
    	cout<<"\n\nNumbers of Rooms We gave for rent="<<sroom;
    	cout<<"\n\nRemaining Numbers of Rooms Deluxe = "<<qroom-sroom;
    	cout<<"\n\nRemaining Numbers of Rooms Normal = "<<qroom-nroom;
    	cout<<"\n\nTotal Rooms collection for Day ="<<troom;
    
      	//Details of Pastas in Hotel
    	cout<<"\n\nPastas We Had="<<qpasta;
    	cout<<"\n\nNumbers of Pastas We Sold="<<spasta;
    	cout<<"\n\nRemaining Pastas="<<qpasta-spasta;
    	cout<<"\n\nTotal Pasta collection for Day="<<tpasta;
    
    	//Details of Burger in Hotel
    	cout<<"\n\nBurger We Had="<<qburger;
    	cout<<"\n\nNumbers of Burger We Sold="<<sburger;
    	cout<<"\n\nRemaining Burger="<<qburger-sburger;
    	cout<<"\n\nTotal Burger collection for Day="<<tburger;
    
    	//Details of Noodles in Hotel
    	cout<<"\n\nNoodles We Had="<<qnoodles;
    	cout<<"\n\nNumbers of Noodles We Sold="<<snoodles;
    	cout<<"\n\nRemaining Noodles="<<qnoodles-snoodles;
    	cout<<"\n\nTotal Noodles collection for Day="<<tnoodles;
    
    	//Details of Shakes in Hotel
    	cout<<"\n\nShakes We Had="<<qshake;
    	cout<<"\n\nNumbers of Shakes We Sold="<<sshake;
    	cout<<"\n\nRemaining Shakes= "<<qshake-sshake;
    	cout<<"\n\nTotal Shakes collection for Day="<<tshake;
    
    	//Details of Veg Meal in Hotel
    	cout<<"\n\nVeg Meal We Had="<<qveg_meal;
    	cout<<"\n\nNumbers of Veg Meal We Sold="<<sveg_meal;
    	cout<<"\n\nRemaining Veg Meal="<<qveg_meal-sveg_meal;
    	cout<<"\n\nTotal Veg Meal collection for Day="<<tveg_meal;
   		cout<<"\n\n-----Total Collection For The Day--- =\n"<<troom+tpasta+tburger+tnoodles+tshake+tveg_meal;
        
		}
		else
		{
			cout<<"\n\t You Are Not Allowed ";
		}
    break;
    
    case 8:
    	s:
    	cout<<"\n\t--------------Enter Your Choice To Know About The Villa's Hotel--------";
    	cout<<"\n1.Address\t\t2.Explore Our Hotel\n3.Area Information\n4.Contact Us\t\t5.Exit";
    	cout<<"\nEnter Your Choice = ";
    	cin>>c;
    	switch(c)
    		{	
    			while(1)
    			{
		
    			case 1:
    				cout<<"\nAddress Of The Villa's Hotel Is = ";
    				cout<<"\nParks Colony ,Near Red Fort \nNew Delhi,India";
    				break;
    			case 2:
    				cout<<"\nExplore The Hotel";
    				cout<<"\nLuxurious 5 Star Hotel  Set In the Prime Location At Centre Of The City Near Red Fort";
    				cout<<"\n1.Facilitates\n2.Additional Ammentioc\n3.In -Room Facility \n4.Exit";
    				cout<<"\nEnter Your Choice = ";
    				cin>>e;
    				switch(e)
    				{
    					//b:
    					while(1)
    					{
    					case 1:
    						cout<<"\nFacilates\n1.Safe\n2.Fitness Facilitity\n3.Exit";
    						cout<<"\nEnter Your Choice";
    						cin>>f;
    						switch(f)
    						{
    							while(1)
    							{
								
    							case 1:
    								cout<<"\nWe Provides You A Safe For Storing Persnal Things";
    								cout<<"\nNo Fees For Our Customers\nEnjoy and Explore The Villa's Hotel";
    								break;
    							case 2:
    								cout<<"\nGym Facilitity Is Also Availaible  ";
    								cout<<"\nNo Fees For Our Customers \nEnjoy and Explore The Villa's Hotel";
    								break;
    							case 3:
    								exit(0);
    								break;
    							default:
    								cout<<"\nPlease Enter A valid Choice ";
    							}
							}
							break;
    						
    					case 2:
    						cout<<"\nAdditional Ammenties";
    						cout<<"\n1.Barber Shop\n2.Book Store\n3.House Keeping Service Daily\n4.ATM service\n5.Grocery Shop Service ";
    						cout<<"\n6.Newspaper in room/Lobby On Request\n7.Doctor On Call\n8.Emergency Sevices";
    						cout<<"\n9.Safe Deposit Box\n10.Launduary Services";
    						cout<<"\nThese All Are Services Are Provided For The Customers Comfort";
    						break;
						case 3:
							cout<<"\nIn-Room Faculty";
							cout<<"\nThe In-Room Facilities Consist Of : ";
							cout<<"\n1.Spacious- It Offers Space To Get Reharged In Hotel";
							cout<<"\n2.Amenties- Includes Luxurious Beddin And Holding";
							cout<<"\n3.Elegant Interior Design Infused With Warm Atmosphere";
							cout<<"\n4.Rooms Are Also Designed For Business end With 24-hour Internet Acess";
							cout<<"\n5.Comfortable Working Area";
							cout<<"\n6.LCD TV in Room";
							cout<<"\n7.Wake up Services ";
							cout<<"\n8.Mini-Bar in Room";
							break;
						case 4:	
							cout<<"\nExit";
							exit(0);
							break;
						default:
							cout<<"\nEnter Valid Choice";
							
						}
					}
					break;
				case 3:
					cout<<"\nArea Information";
					cout<<"\nAt Villa's Hotel - you get an vantage point from you can explore the sight";
					cout<<"\nWe Hope that the local attraction mention below will heip you\nto simplify your planning";
					cout<<"\n\n THE ATTRACTIONS ARE : ";
					cout<<"\nTEMPLE----------------------1km\nMUSEUM---------------------0.5km";
					cout<<"\nRED FORT--------------------2km\nWaterpark------------------3km";
					cout<<"\nSPORTS VENUE\nBASKET BALL COURT --Availaible at Backyard";
					cout<<"\nBASE BALL--Availaible at front";
				break;
				case 4:
					cout<<"\nCONTACT US";
					cout<<"\nTelephone  :  12 3344 6788";
					cout<<"\nFax        :  12 3444 6788";
					cout<<"\nCounter    :  12 2244 6788";
					cout<<"\nEmail Id   :  villashotel@gmail.com";
				break;
				case 5:
					cout<<"Exit";
					exit(0);
				break;
				default:
					cout<<"\nEnter Valid Choice";
					
			}
		
			}
		break;	
    case 9:
    	cout<<"\n\t\tDiscount Counter";
    	if(troom+tpasta+tburger+tnoodles+tshake+tveg_meal>0)
    	{
    		if(troom+tpasta+tburger+tnoodles+tshake+tveg_meal<100)
    		{
    			cout<<"\n\tYou Have Purchased Items Less Than 100";
    			cout<<"\n\tDo Some Purchasing To Get Benefit Of Discount";
			}
			else
    			d.get_data();
        }
        else
        {
        	cout<<"\n\tYou Have not Purchase Anything Yet";
        	cout<<"\n\tFirstly Do some Purchasing";
    	}	
    break;
	
    case 10:
    	cout<<"\n\t Thanks For Using Our Services ";
    	cout<<"\n\tYour Total Bill Is = ";
   		tot=troom+tpasta+tburger+tnoodles+tshake+tveg_meal-d.dis;
   		cout<<tot;
        exit (0) ;
    break;
    default:
    cout<<"\nPlease Select the Options Given Above";
    
   }
	goto m;
    return 0;
}
