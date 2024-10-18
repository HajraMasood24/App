#include <iostream>
#include <conio.h>
using namespace std;
void mnpg();
void menu();
string placeorder();
string feedback();
int op;
string o;
int q;
main()
{
	mnpg();
	menu();
	placeorder();
	feedback();
}

void mnpg() 
{
	cout<<"###################################################################"<<endl;
    cout<<" 	 	   		@@                                       	   "<<endl; 
	cout<<" 	       		@@                                         		"<<endl; 
    cout<<"  	       		@@      @@@  @@@@ @@@@ @@@@                		 "<<endl; 
	cout<<" 	      		@@     @   @  @@   @@  @                      "<<endl; 
	cout<<"   	       		@@  @@ @@@@@  @@   @@  @@@                   "<<endl; 
	cout<<" 		 @@     @@@@@@ @   @  @@   @@  @@@@@          		 "<<endl; 
	cout<<"  		 @@				 		                      	 "<<endl; 
	cout<<" 		 @@       @@@  @  @ @@@@  @@@   @@@            		 "<<endl; 
    cout<<"  		 @@      @   @ @  @ @  @ @   @ @   @				"<<endl; 
	cout<<"  	 	 @@      @   @ @  @ @  @ @   @ @@@@             			"<<endl; 
    cout<<"  		 @@@@@@@  @@@   @@  @  @  @@ @  @@@@@            		 "<<endl; 
    cout<<"                                	 	    @                      		 "<<endl; 
	cout<<"                           	 	  @@                         "<<endl; 
 	cout << "**************************************************************" << endl;
    cout << "		* 		  Where every sip tells a story     *" 				<< endl;
    cout << "		*  	 Coffee  •  Comfort  •  Community       *" 				<< endl;
    cout << "**************************************************************" << endl;
	cout<<"		1.Menu"<<endl;
	cout<<"		2.Place Order "<<endl;
	cout<<"		3.Total bill(in process)"<<endl;
	cout<<"		4.Feedback"<<endl;
	cout<<"##################################################################"<<endl;
	cout<<"Select an option:";
	cin>>op;	
}
void menu()
{
	if(op==1)
	{
		cout<<"-----------------------------------------------------------------"<<endl;
		cout<<"                           Main Menu                             "<<endl;
		cout<<"-----------------------------------------------------------------"<<endl;
		cout<<"   COFFEE                                "<<endl;
		cout<<"      - Espresso   ______________________Rs.750"<<endl;
		cout<<"      - Cappuccino  _____________________RS.650"<<endl;
		cout<<"      - Latte   _________________________Rs.800"<<endl;
		cout<<"      - Americano  ______________________Rs.500"<<endl;
		cout<<"                                                   "<<endl;
		cout<<"   TEA                                             "<<endl;
		cout<<"     -Special Chai  ____________________Rs.100  "<<endl;
		cout<<"     -Green Tea   ______________________Rs.150"   <<endl;
		cout<<"     -Chai Latte   _____________________Rs.200"<<endl;
		cout<<"                                                      "<<endl;
		cout<<"   DESSERTS                                           "<<endl;
		cout<<"     -brownies  _______________________Rs.600(3pcs)"<<endl;
		cout<<"     -Cheesecake  _____________________Rs.300"<<endl;
		cout<<"     -Cookies  ________________________Rs.300(3pcs)"<<endl;
	}
}
string placeorder()
{
	string o;
	int q;
	string allo;
	cout <<"Place your order here(type 'done' to finish ordering):"<<endl;
	while(true)
	{
		cout<<"ITEM:"<<endl;
		cin>>o;
		
		if(o=="done")
		{
			break;
		}
		cout<<"Qunatity:";
		cin>>q;
		allo+="Items:" + o +",Quantity: " +to_string(q)+"\n";
	}
	cout<<"Order placed successfully!"<<endl;
	cout<<"Click anywhere on the screen"<<endl;
	getch();
	system ("cls");
	return allo;
}
string feedback()
{
	string fb;
	cout<<"FEEDBACK:"<<endl;
	cin>>fb;
	cout<<"Thank You for giving us your feedback";
	return fb;
}



