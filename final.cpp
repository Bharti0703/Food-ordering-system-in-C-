//ADMIN USERNAME: ADMIN
//ADMIN PASSWORD: A1234
#include<iostream>
#include<time.h>
#include<process.h>
#include<windows.h>
#include<cstring>
#include<string.h>
#include<ctype.h>
#include<conio.h>

using namespace std;
//structure to use store costumer details
struct details 
{
	string name;
	string password;
    int hno;
	string area;
	string email;
	string mobile;
};
struct details s[100];

struct soup
{
    int no;
    string soup_name;
    float price;
};
struct snacks
{
    int no;
    string snacks_name;
    float price;
};
struct south
{
    int no;
    string south_name;
    float price;
};
struct pizza
{
    int no;
    string pizza_name;
};
struct beverages
{
    int no;
    string bev_name;
    float price;
};    
struct desserts
{
    int no;
    string des_name;
    float price;
};

soup sou[10]={{1,"TOMATO SOUP",80},{2,"MUSHROOM SOUP",80},{3,"LENTIL SOUP",100},{4,"VEGETABLE SOUP",110}};
snacks sn[10]={{1,"CHHOLE BHATURE",100},{2,"CHHOLE SAMOSE",80},{3,"PAV BHAJI",70},{4,"SPRING ROLL",70},{5,"FRENCH FRIES",80},{6,"CHILLI POTATO",80},{7,"PANEER TIKKA",120}};
pizza piz[10]={{1,"Cheese Pizza"},{2,"Onion Pizza"},{3,"Tomato Pizza"},{4,"Capsicum Pizza"}};
south so[12]={{1,"IDLY SAMBHAR",70},{2,"FRIED IDLY",60},{3,"PLAIN DOSA",70},{4,"MASALA DOSA",90},{5,"RAWA DOSSA",100},{6,"PANEER DOSA",120},{7,"ONION UTTAPAM",130},{8,"TOMATO UTTAPAM",130},{9,"MIX. VEG UTTAPAM",140}};
beverages bev[10]={{1,"HOT COFFEE",40},{2,"COLD COFFEE",60},{3,"HERBAL TEA",30}};
desserts des[10]={{1,"GULAB JAMUN",50},{2,"RASHMALAI",60},{3,"FRUIT PASTRY",60},{4,"CHOCO LAVA CAKE",80}};

//GLOBAL VARIABLES
char m;
int tot=0,y=0,temp_no,dish_price;
int t=0,c=0,ch=0,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a=0,b1=0,b2=0,b3=0,b4=0,b5=0,b6=0,b7=0,b8=0,b9=0,d=0,c1=0,c2=0;
int d1=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0,c10=0,c11=0,d2=0,d3=0,e=0,e1=0,e2=0,e3=0,e4=0,e5=0,f1=0,f2=0,f3=0,f4=0,f5=0,f6=0,f=0;
int temp_h_no,x;
int flag = 1, i, j = 0, count = 0, caps = 0;
int special = 0, numbers = 0,tota,pin,smal=0;
string temp_name , temp_password1, temp_password2, temp_email;
string temp_mobile, temp_area, pizza_name,un ,pwd;
string creditcard,dish_name;

//FUNCTIONS IN PROGRAM
void payment();
void mainmenu();
void menu();
void bill();
void snacks();
void soup();
void beverages();
void south();
void pizza();
void desserts();
void signup();
void account_check();
void login();
void userlogin();
void adminlogin();
void adminmenu();
void foodlist();
void search();
void add();
void adduser();
void searchuser();
void del();

int main()
{
    int choice;
	do
    {
        system("color E");
	    system("cls");
	    cout<<"\n\n\t\t======================================================\n";
	    cout<<"\t\t\tWELCOME TO food ordering system \n";
	    cout<<"\t\t======================================================\n\n\n";
		cout<<"\t\t  * * * * * * * * * * * * * * * * * * * * * * * * * *\n";
        cout<<"\t\t  *                   1.ADMIN LOGIN                 *\n";
        cout<<"\t\t  *                   2.USER  LOGIN                 *\n";
        cout<<"\t\t  *                   3.EXIT                        *\n";
		cout<<"\t\t  * * * * * * * * * * * * * * * * * * * * * * * * * *\n\n\n";
		cout<<"Enter your choice\t";
		cin>>choice;
		switch (choice) 
        {
		case 1:
			system("cls");
			system("color 3");
			adminlogin();
			break;
		case 2: 
			system("cls");
			system("color 9");
			userlogin();
			break;
        case 3: exit(0);
		default:
			cout<<"\nPlease Enter the valid choice\n";
			break;
	    }
    }while(choice!=3);
	return 0;
}
void adminmenu()
{   
    int ch;
    system("cls");
	system("color 5");
    cout<<"\n\n\t\t======================================================\n";
	cout<<"\t\t\tWELCOME TO food ordering system \n";
	cout<<"\t\t======================================================\n\n\n";
	cout<<"\t\t------------------------------------------------------\n" ;
	cout<<"\t\t-                    Admin Log in                    -\n";
	cout<<"\t\t------------------------------------------------------\n\n\n";
    cout<<"\t\tHELLO "<<un;
    cout<<"\n\t\tWhat do you like to do\n\n\n";
    cout<<"\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n";
	cout<<"\t\t* 1.View all items                                      *\n";
    cout<<"\t\t* 2.Search Food                                         *\n";
    cout<<"\t\t* 3.Add Food                                            *\n";
    cout<<"\t\t* 4.Delete Food                                         *\n";
    cout<<"\t\t* 5.Add user                                            *\n";
    cout<<"\t\t* 6.Search user                                         *\n";
	cout<<"\t\t* 7.Exit                                                *\n";
    cout<<"\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n\n";
    label:
	cout<<"\n\n\n\t\tSELECT ONE OF THE OPTION FROM ABOVE";
    cout<<"\n\t\tPress 0 to go back to main";
    cin>>t;
    switch(t)
    {
        case 1:system("color 1");
                system("cls");
			    foodlist();
                break;
        case 2:system("color 2");
                system("cls");
			    search();
                break;
        case 3:system("color 4");
                system("cls");
			    add();
                break;
        case 4:system("cls");
                system("color 3");
			    del();
                break;
        case 5:system ("cls");
                system("color 5");
			    adduser();
                break;
        case 6:system ("cls");
                system("color 5");
			    searchuser();
                break;
        case 7:system ("cls");
                break;
        case 0:main();
               break;
        default:cout<<"please enter valid option";
                goto label;
    }
}
void adduser()
{
	signup();
	account_check();
	getch();
	adminmenu();
}
void searchuser()
{	
	cout<<"\t\t===================================================================\n";
    cout<<"\t\t\t\t\tAdmin Menu\n";
    cout<<"\t\t===================================================================\n\n\n";
	cout<<"\t\t===================================================================\n";
    cout<<"\t\t\t\t\tSearch user\n";
    cout<<"\t\t===================================================================\n\n\n";
	string search_email;
	cin.ignore();
	cout<<"Enter the email of user you want to search : ";
	getline(cin,search_email);
	int o=0;
	for ( o = 0; o < 100; o++) 
	{
		if (search_email==s[o].email)
		{
			cout<<"\n\nAccount Found!!\n\n";
			cout<<  "User Name           :  "<<s[o].name;
			cout<<"\nHouse Number        :  "<<s[o].hno;
			cout<<"\nArea                :  "<<s[o].area;
			cout<<"\nMobile Number       :  "<<s[o].mobile;
			cin.ignore();
			adminmenu();
			break;
		}
	}
	if (o == 100) 
	{
		cout<<"Account does not exist \n";
		cout<<"First Create new account!!\n\n";
		cin.ignore();
		adminmenu();
	}
	getch();
}
void del()
{
	int ch, id;
	dlabel:
	system("cls");
    cout<<"\t\t===================================================================\n";
    cout<<"\t\t\t\t\tDelete Food\n";
    cout<<"\t\t===================================================================\n\n\n";
	cout<<"\t\t~~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~~\n";
    cout<<"\t\t~                            MENU                                 ~\n";
    cout<<"\t\t~ 1. SOUP                                                         ~\n";
    cout<<"\t\t~ 2. SNACKS                                                       ~\n";
    cout<<"\t\t~ 3. SOUTH INDIAN                                                 ~\n";
    cout<<"\t\t~ 4. PIZZA                                                        ~\n";
    cout<<"\t\t~ 5. BEVERAGES                                                    ~\n";
    cout<<"\t\t~ 6. DESSERTS                                                     ~\n";
    cout<<"\t\t~~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~~\n\n";
    cout<<"Enter in which type u want to del item \n";
	cout<<"Press 0 to go back\n";
    cin>>ch;
	switch(ch)
	{
		case 1:cout<<"Enter Id no of the food you want to delete ";
    			cin>>id; int ai;for(ai=0;ai<10;ai++)
                {   if((id==sou[ai].no)&&(sou[ai].no!=0))
                    {
                    cout<<"Deleted Food item  !!\n";
                    cout<<"Food name :"<<sou[ai].soup_name;
                    cout<<"\nPrice :"<<sou[ai].price<<"\n";
					sou[ai].no=0;
					getch();}
					}
                if(ai==10)
                {cout<<"Food item does not exist!!!!! ";}
				goto dlabel;
                break;
        case 2:cout<<"Enter Id no of the food you want to delete ";
    			cin>>id;int bi;for(bi=0;bi<10;bi++)
                {   if((id==sn[bi].no)&&(sn[bi].no!=0))
                    {
                    cout<<"Deleted Food item  !!\n";
                    cout<<"Food name :"<<sn[bi].snacks_name;
                    cout<<"\nPrice :"<<sn[bi].price<<"\n";
					sn[bi].no=0;
					getch();}
					}
                if(bi==10)
                {cout<<"Food item does not exist!!!!! ";}
				goto dlabel;
                break;
        case 3:cout<<"Enter Id no of the food you want to delete ";
    			cin>>id;int ci;for(ci=0;ci<12;ci++)
                {   if((id==so[ci].no)&&(so[ci].no!=0))
                    {
                    cout<<"Deleted Food item !!\n";
                    cout<<"Food name :"<<so[ci].south_name;
                    cout<<"\nPrice :"<<so[ci].price<<"\n";
					so[ci].no=0;
					getch();}
					}
                if(ci==12)
                {cout<<"Food item does not exist!!!!! ";}
				goto dlabel;
                break;
        case 4:cout<<"Enter Id no of the food you want to delete ";
    			cin>>id;int di;for(di=0;di<10;di++)
                {   if((id==piz[di].no)&&(piz[di].no!=0))
                    {
                    cout<<"Deleted Food item !!\n";
                    cout<<"Food name :"<<piz[di].pizza_name<<"\n";
					piz[di].no=0;
					getch();}
					}
                if(di==10)
                {cout<<"Food item does not exist!!!!! ";}
				goto dlabel;
                break;
        case 5:cout<<"Enter Id no of the food you want to delete ";
    			cin>>id;int ei;for(ei=0;ei<10;ei++)
                {   if((id==bev[ei].no)&&(bev[ei].no!=0))
                    {
                    cout<<"Deleted Food item !!\n";
                    cout<<"Food name :"<<bev[ei].bev_name;
                    cout<<"\nPrice :"<<bev[ei].price<<"\n";
					bev[ei].no=0;
					getch();}
					}
                if(ei==10)
                {cout<<"Food item does not exist!!!!! ";}
				goto dlabel;
                break;
        case 6:cout<<"Enter Id no of the food you want to delete ";
    			cin>>id;int fi;for(fi=0;fi<10;fi++)
                {   if((id==des[fi].no)&&(des[fi].no!=0))
                    {
                    cout<<"Deleted Food item !!\n";
                    cout<<"Food name :"<<des[fi].des_name;
                    cout<<"\nPrice :"<<des[fi].price<<"\n";
					des[fi].no=0;
					getch();}
					}
                if(fi==10)
                {cout<<"Food item does not exist!!!!! ";}
				goto dlabel;
                break;
        case 0:adminmenu();
	}
}
void add()
{
	int ch;
	dlabel:
	system("cls");
    cout<<"\t\t===================================================================\n";
    cout<<"\t\t\t\t\tAdd Food\n";
    cout<<"\t\t===================================================================\n\n\n";
	cout<<"\t\t~~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~~\n";
    cout<<"\t\t~                            MENU                                 ~\n";
    cout<<"\t\t~ 1. SOUP                                                         ~\n";
    cout<<"\t\t~ 2. SNACKS                                                       ~\n";
    cout<<"\t\t~ 3. SOUTH INDIAN                                                 ~\n";
    cout<<"\t\t~ 4. PIZZA                                                        ~\n";
    cout<<"\t\t~ 5. BEVERAGES                                                    ~\n";
    cout<<"\t\t~ 6. DESSERTS                                                     ~\n";
    cout<<"\t\t~~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~~\n\n";
    cout<<"Enter in which type u want to add item \n";
	cout<<"Press 0 to go back\n";
    cin>>ch;
	switch(ch)
	{
		case 1:for(int i=0;i<10;i++)
				{if(sou[i].no==0)
				{	sou[i].no=i+1;
					cout<<"Enter dish name :";
					cin.ignore();
					getline(cin,dish_name);
					cout<<"Enter price :";
					cin>>dish_price;
					sou[i].soup_name=dish_name;
					sou[i].price=dish_price;
					cout<<"Added Successfully!!!";
					getch();
					goto dlabel;
					break;
				}}
				break;
		case 2:for(int i=0;i<10;i++)
				{if(sn[i].no==0)
				{	sn[i].no=i+1;
					cout<<"Enter dish name :";
					cin.ignore();
					getline(cin,dish_name);
					cout<<"Enter price :";
					cin>>dish_price;
					sn[i].snacks_name=dish_name;
					sn[i].price=dish_price;
					cout<<"Added Successfully!!!";
					getch();
					goto dlabel;
					break;
				}}
				break;
		case 3:for(int i=0;i<10;i++)
				{if(so[i].no==0)
				{	so[i].no=i+1;
					cout<<"Enter dish name :";
					cin.ignore();
					getline(cin,dish_name);
					cout<<"Enter price :";
					cin>>dish_price;
					so[i].south_name=dish_name;
					so[i].price=dish_price;
					cout<<"Added Successfully!!!";
					getch();
					goto dlabel;
					break;
				}}
				break;	
		case 4:for(int i=0;i<10;i++)
				{if(piz[i].no==0)
				{	piz[i].no=i+1;
					cout<<"Enter dish name :";
					cin.ignore();
					getline(cin,dish_name);
					piz[i].pizza_name=dish_name;
					cout<<"Added Successfully!!!";
					getch();
					goto dlabel;
					break;
				}}
				break;	
		case 5:for(int i=0;i<10;i++)
				{if(bev[i].no==0)
				{	bev[i].no=i+1;
					cout<<"Enter dish name :";
					cin.ignore();
					getline(cin,dish_name);
					cout<<"Enter price :";
					cin>>dish_price;
					bev[i].bev_name=dish_name;
					bev[i].price=dish_price;
					cout<<"Added Successfully!!!";
					getch();
					goto dlabel;
					break;
				}}
				break;
		case 6:
				for(int i=0;i<10;i++)
				{if(des[i].no==0)
				{	des[i].no=i+1;
					cout<<"Enter dish name :";
					cin.ignore();
					getline(cin,dish_name);
					cout<<"Enter price :";
					cin>>dish_price;
					des[i].des_name=dish_name;
					des[i].price=dish_price;
					cout<<"Added Successfully!!!";
					getch();
					goto dlabel;
					break;
				}}
				break;
		case 0: adminmenu();
	}
}
void search()
{
	int id;
    int choic;
	dlabel:
	system("cls");
    cout<<"\t\t==============================================================\n";
    cout<<"\t\t\t\t\t  Search Food\n";
    cout<<"\t\t==============================================================\n\n\n";
    cout<<"\t\t~~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~~\n";
    cout<<"\t\t~                            MENU                                 ~\n";
    cout<<"\t\t~ 1. SOUP                                                         ~\n";
    cout<<"\t\t~ 2. SNACKS                                                       ~\n";
    cout<<"\t\t~ 3. SOUTH INDIAN                                                 ~\n";
    cout<<"\t\t~ 4. PIZZA                                                        ~\n";
    cout<<"\t\t~ 5. BEVERAGES                                                    ~\n";
    cout<<"\t\t~ 6. DESSERTS                                                     ~\n";
    cout<<"\t\t~~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~~\n\n";
    cout<<"Enter in which type u want to search \n";
    cout<<"Press 0 to go back\n";
    cin>>choic;
    switch(choic)
    {
		
        case 1:cout<<"Enter Id no of the food you want to search ";
    			cin>>id;int gi;
				for(gi=0;gi<10;gi++)
                {   if((id==sou[gi].no)&&(sou[gi].no!=0))
                    {
                    cout<<"Food item found !!\n";
                    cout<<"Food name :"<<sou[gi].soup_name;
                    cout<<"\nPrice :"<<sou[gi].price<<"\n";
					getch();}
					}
                if(i==10)
                {cout<<"Food item does not found!!!!! ";}
				goto dlabel;
                break;
        case 2:cout<<"Enter Id no of the food you want to search ";
    			cin>>id;int ki;
				for(ki=0;ki<10;ki++)
                {   if((id==sn[ki].no)&&(sn[ki].no!=0))
                    {
                    cout<<"Food item found !!\n";
                    cout<<"Food name :"<<sn[ki].snacks_name;
                    cout<<"\nPrice :"<<sn[ki].price<<"\n";
					getch();}
					}
                if(ki==10)
                {cout<<"Food item does not found!!!!! ";}
				goto dlabel;
                break;
        case 3:cout<<"Enter Id no of the food you want to search ";
    			cin>>id;int hi;
				for(hi=0;hi<12;hi++)
                {   if((id==so[hi].no)&&(so[hi].no!=0))
                    {
                    cout<<"Food item found !!\n";
                    cout<<"Food name :"<<so[hi].south_name;
                    cout<<"\nPrice :"<<so[hi].price<<"\n";
					getch();}
					}
                if(hi==12)
                {cout<<"Food item does not found!!!!! ";}
				goto dlabel;
                break;
        case 4:cout<<"Enter Id no of the food you want to search ";
    			cin>>id;int ii;
				for(ii=0;ii<10;ii++)
                {   if((id==piz[ii].no)&&(piz[ii].no!=0))
                    {
                    cout<<"Food item found !!\n";
                    cout<<"Food name :"<<piz[ii].pizza_name<<"\n";
					getch();}
					}
                if(ii==10)
                {cout<<"Food item does not found!!!!! ";}
				goto dlabel;
                break;
        case 5:cout<<"Enter Id no of the food you want to search ";
    			cin>>id;int ji;
				for(ji=0;ji<10;ji++)
                {   if((id==bev[ji].no)&&(bev[ji].no!=0))
                    {
                    cout<<"Food item found !!\n";
                    cout<<"Food name :"<<bev[ji].bev_name;
                    cout<<"\nPrice :"<<bev[ji].price<<"\n";
					getch();}
					}
                if(ji==10)
                {cout<<"Food item does not found!!!!! ";}
				goto dlabel;
                break;
        case 6:cout<<"Enter Id no of the food you want to search ";
    			cin>>id;int li;
				for(li=0;li<10;li++)
                {   if((id==des[li].no)&&(des[li].no!=0))
                    {
                    cout<<"Food item found !!\n";
                    cout<<"Food name :"<<des[li].des_name;
                    cout<<"\nPrice :"<<des[li].price<<"\n";
					getch();}
					}
                if(li==10)
                {cout<<"Food item does not found!!!!! ";}
				goto dlabel;
                break;
        case 0:adminmenu();
    }
}
void foodlist()
{
    cout<<"\t\t==============================================================\n";
    cout<<"\t\t\t\t\tList Of Food\n";
    cout<<"\t\t==============================================================\n\n\n";
    cout<<"\t\t-------------------------------------------------------\n";
    cout<<"\t\t-                        SOUPS                        -\n";
    for(int i=0;i<10;i++)
    {
        if(sou[i].no!=0)
        {
            cout<<"\t\t- "<<sou[i].no<<" "<<sou[i].soup_name<<"  \t\t\t\tRs."<<sou[i].price;
            cout<<" -\n";
        }
    }
    cout<<"\t\t-------------------------------------------------------\n";

   cout<<"\t\t--------------------------------------------------------\n";
   cout<<"\t\t-                      SNACKS                          -\n";
    for(int i=0;i<10;i++)
    {
        if(sn[i].no!=0)
        {
            cout<<"\t\t- "<<sn[i].no<<" "<<sn[i].snacks_name<<"    \t\t\t\t"<<"Rs."<<sn[i].price;
            cout<<" -\n";
        }
    }
    cout<<"\t\t--------------------------------------------------------\n";
    
    cout<<"\t\t-------------------------------------------------------\n";
    cout<<"\t\t-                    SOUTH INDIAN FOOD                -\n";
    for(int i=0;i<12;i++)
    {
        if(so[i].no!=0)
        {
            cout<<"\t\t- "<<so[i].no<<" "<<so[i].south_name<<"   \t  \t\t\tRs."<<so[i].price;
            cout<<" -\n";
        }
    }
    cout<<"\t\t--------------------------------------------------------\n";
    cout<<"\t\t---------------------------------------------------------\n";
	cout<<"\t\t-                           PIZZAS                      -\n";
	for(int i=0;i<10;i++)
    {
        if(piz[i].no!=0)
        {
            cout<<"\t\t- "<<piz[i].no<<" "<<piz[i].pizza_name<<" \t\t\t\t\t";
            cout<<"-\n";
        }
    }
    cout<<"\t\t---------------------------------------------------------\n";
    cout<<"\t\t---------------------------------------------------------\n";
    cout<<"\t\t-                     BEVERAGES                         -\n";
    for(int i=0;i<10;i++)
    {
        if(bev[i].no!=0)
        {
            cout<<"\t\t- "<<bev[i].no<<" "<<bev[i].bev_name<<"    \t\t\t      \t  Rs."<<bev[i].price;
            cout<<" -\n";
        }
    }
    cout<<"\t\t---------------------------------------------------------\n";
    cout<<"\t\t---------------------------------------------------------\n";
    cout<<"\t\t-                         DESERTS                       -\n";
    for(int i=0;i<10;i++)
    {
        if(des[i].no!=0)
        {
            cout<<"\t\t- "<<des[i].no<<" "<<des[i].des_name<<"   \t\t\t\t  Rs."<<des[i].price;
            cout<<" -\n";
        }
    }
    cout<<"\t\t---------------------------------------------------------\n\n\n\n";
    cout<<"Press O to go back";
    int choi;
    cin>>choi;
    if(choi==0)
        adminmenu();
}
void adminlogin()//The admin login screen
{
	system("cls");
	system("color 3");
    cout<<"\n\n\t\t======================================================\n";
	cout<<"\t\t\t  WELCOME TO food ordering system \n";
	cout<<"\t\t======================================================\n\n\n";
	cout<<"\t\t------------------------------------------------------\n" ;
	cout<<"\t\t-                    Admin Log in                    -\n";
	cout<<"\t\t------------------------------------------------------\n\n\n";
    label:
	cout<<"\n\t\tPlease enter your user name: ";
	cin>>un;
	cout<<"\t\tPlease enter your user password: ";
	char c;
	string passw;
    p:
    c=getch();
	cout<<"*";
	if(c!=13)
    {
	passw=passw+c;
	goto p;
	}
	pwd=passw;
	if ((un == "Admin") && (pwd == "A1234"))//Admin name and password authentication
		adminmenu();
	else if ((un == "ADMIN") && (pwd == "A1234"))//Admin name and password authentication
		adminmenu();
	else if ((un == "admin") && (pwd == "A1234"))//Admin name and password authentication
		adminmenu();
	else
	{
		back:
		system("cls");
		system("color A");
		cout << "\t\t------------------------------------------------------\n";
		cout << "\t\t-                FOOD ORDERING SYSTEM                - \n";
		cout<<"\t\t------------------------------------------------------\n" ;
		cout<<"\t\t-                    Admin Log in                    -\n";
		cout<<"\t\t------------------------------------------------------\n\n\n";
		cout << "\t\t * * * * * * * * * * * * * * * * * * * * * * * * * *\n";
		cout << "\t\t *            Invalid user Name or Password!       *\n";
		cout << "\t\t * * * * * * * * * * * * * * * * * * * * * * * * * *\n\n\n"; ;
		cout << "1 Re enter\n2 forgot password or username\n3 Main menu:\n";
		cout<<"Please enter your choice\n";
		int ch;
		cin >> ch;
		string mobile;
		switch (ch)
		{
		case 1:goto label;
			break;
		case 2:cout<<"\n\nPlease enter your mobile number";
				cin>>mobile;
				if(mobile=="9988776655")
				{
					cout<<"\nYour username is ADMIN \nYour password is 'A1234'";
					goto label;
				}
				else
				{
					cout<<"\nINVALID MOBILE NUMBER";
					goto back;
				} 
		case 3:
			system("cls");
			main();
			break;
		}
	}
}
void userlogin()
{
	int choice;
	do
    {
        system("color D");
	    system("cls");
	    cout<<"\n\n\t\t======================================================\n";
	    cout<<"\t\t\tWELCOME TO food ordering system \n";
	    cout<<"\t\t======================================================\n\n\n";
		cout<<"\t\t* * * * * * * * * * * * * * * * * * * * * * * *\n";
        cout<<"\t\t*                    1.SIGNUP                 *\n";
        cout<<"\t\t*                    2.LOGIN                  *\n";
        cout<<"\t\t*                    3.EXIT                   *\n";
		cout<<"\t\t* * * * * * * * * * * * * * * * * * * * * * * *\n\n\n";
		cout<<"Enter your choice\n";
		cout<<"Press 0 to go back to main ";
		cin>>choice;
		switch (choice) 
        {
		case 1:
			system("cls");
			system("color 3");
			signup();
			account_check();
			break;
		case 2: 
			system("cls");
			system("color 9");
			login();
			break;
        case 3: exit(0);
		case 0: main();
		default:
			cout<<"\nPlease Enter the valid choice\n";
			break;
	    }
    }while(choice!=3);
}
//THIS FUNCTION IS USED TO SIGN IN NEW USER TO PROGRAM
void signup()
{
	cout<<"\n\n\t\t======================================================\n";
	cout<<"\t\t\tWELCOME TO food ordering system \n";
	cout<<"\t\t======================================================\n\n\n";
	cout<<"\t\t\t\tSIGNUP\n\n\n";
    cin.ignore();
    name:
	cout<<"Enter Your name \t\t\t";
	//TAKE NAME AS INPUT
	getline(cin,temp_name);
	//CHECK WHETHER NAME IS VALIDATE OR NOT
    for (i = 0; temp_name[i] != '\0'; i++) 
    {
		if (!((temp_name[i] >= 'a' && temp_name[i] <= 'z') || (temp_name[i] >= 'A' && temp_name[i] <= 'Z') || (isspace(temp_name[i])))) 
        {
			cout<<"Please enter valid name \n";
            goto name;
			break;
		}
	}
	//TAKE HOUSE NUMBER AS INPUT
    cout<<"Enter Your House Number \t\t";
    cin>>temp_h_no;
	cin.ignore();
    email:
    cout<<"Enter Your Email \t\t\t";
	getline(cin,temp_email);
	//CHECK WHETHER EMAIL IS VALIDATE OR NOT
    for (i = 0; temp_email[i] != '\0'; i++) 
    {
		if (temp_email[i] == '@' || temp_email[i] == '.')
        {
            count ++;
        }
	}
    if(count<2)
    {
        cout<<"INVALID EMAIL\n";
        count=0;
        goto email;
    }
	//TAKE AREA AS INPUT
    cout<<"Enter your area \t\t\t";
    getline(cin, temp_area);
    password:
	//TAKE PASSWORD AS INPUT
	cout<<"Enter Password \t\t\t\t";
	char c;
	string pass;
    p:
    c=getch();
	cout<<"*";
	if(c!=13)
    {
	pass=pass+c;
		goto p;
	}
	temp_password1=pass;
    int l=0;
	//CHECK THE LENGTH OF PASSWORD
	//ATLEAST GREATER THAN 6
    for(int i=0; temp_password1[i]!='\0';i++)
    {
        l++;
    }
    if(!((l>7) && (l<13)))
    {
        cout<<"\n!!password must be between 8 to 12!!\n";
        l=0;
        goto password;
    }
	//CHECK THE STRENGTH OF PASSWORD
	for (i = 0; temp_password1[i] != '\0';i++) 
	{
		if (temp_password1[i] >= 'A' && temp_password1[i] <= 'Z')
			caps++;

		else if (temp_password1[i] >= 'a' && temp_password1[i]<= 'z')
			smal++;

		else if (temp_password1[i] >= '0' && temp_password1[i]<= '9')
			numbers++;

		else if (temp_password1[i] == '@' || temp_password1[i] == '&' || temp_password1[i] == '#' || temp_password1[i]== '*' || 
		temp_password1[i] == '!' || temp_password1[i] == '$' || temp_password1[i] == '%' || temp_password1[i]== '^')
			special++;
	}
	if (!(caps >= 1 && smal >= 1 && numbers >= 1 && special >= 1))
	{
		cout<<"\n\nPlease Enter the strong password, Your password must contain";
		cout<<" atleast one uppercase, Lowercase, Number and special character\n\n";
		goto password;
	}
	//CONFIRM PASSWORD
	cout<<"\nConfirm Password \t\t\t";
	string passw;
	char n;
    g:
    n=getch();
	cout<<"*";
	if(n!=13)
	{
	passw=passw+n;
	    goto g;
	}
	temp_password2=passw;
    if(temp_password1!=temp_password2 )  
    {
        cout<<"\n!!PASSWORD MISMATCH!!\n";
        goto password;
    }
    int len=0;
    mobile:
	cout<<"\nEnter Your Mobile Number \t\t";
	getline(cin, temp_mobile);
	//CHECK MOBILE NUMBER IS VALIDATE OR NOT 
    for(int i=0; temp_mobile[i]!='\0';i++)
    {
        len++;
		if(!isdigit(temp_mobile[i]))
		{
			cout<<"\n!!INVALID MOBILE NUMBER!!\n";
        	len=0;
        	goto mobile;	
		}
    }
	//CHECK THE LENGTH OF MOBILE NUMBER
    if(len!=10)
    {
        cout<<"\n!!INVALID MOBILE NUMBER!!\n";
        len=0;
        goto mobile;
    }
}
//THIS FUNCTION IS USED TO CHECK WHETHER ACCOUNT EXIST OR NOT
void account_check()
{
	for (i = 0; i < 100; i++) 
	{
		//TO CHECK WHETHER ACCOUNT ALREADY EXISTED OR NOT
		if (temp_email==s[i].email)
		{   //EXECUTE IF ACCOUNT ALREADY EXISTED 
			cout<<"\n\nAccount Already Existed !!\n\n";
			cin.ignore();
			break;
		}
	}
	if (i == 100) 
	{	//IF ACCOUNT DOES NOT EXISTED STORE INFORMATION IN STRUCTURE AND CREATE NEW ACCOUNT
		s[j].name=temp_name;
		s[j].hno = temp_h_no;
		s[j].area=temp_area;
		s[j].password =temp_password1;
		s[j].email=temp_email;
		s[j].mobile=temp_mobile;
		j++;
		cout<<"\n\n\nAccount Successfully Created!!\n\n";
		cin.ignore();
	}
}
//THIS FUNCTION IS USED TO LOGIN IN THE PROGRAM
void login()
{
	int r,m,le=0;
	cout<<"\n\n\t\t======================================================\n";
	cout<<"\t\t\t  WELCOME TO food ordering system \n";
	cout<<"\t\t======================================================\n\n\n";
	cout<<"\t\t\tLOGIN\n\n";
	email:
	cin.ignore();
	//TAKE EMAIL AS INPUT
    cout<<"Enter Your Email \t\t\t";
	getline(cin,temp_email);
	//CHECK WHETHER EMAIL IS VALID OR NOT
	for (i = 0; temp_email[i] != '\0'; i++) 
    {
		if (temp_email[i] == '@' || temp_email[i] == '.')
        {
            count ++;
        }
	}
    if(count<2)
    {
        cout<<"INVALID EMAIL\n";
        count=0;
        goto email;
    }
    password:
	//TAKE PASSWORD AS INPUT
	cout<<"Enter Password \t\t\t\t";
	string pass;
	char n;
    g:
    n=getch();
	cout<<"*";
	if(n!=13)
	{
	pass=pass+n;
	    goto g;
	}
	temp_password1=pass;
	int l=0;
	//CHECK WHETHER PASSWORD IS VALID OR NOT
    for(int i=0; temp_password1[i]!='\0';i++)
    {
        l++;
    }
    if(!((l>7) && (l<13)))
    {
        cout<<"\n!!password must be between 8 and 12!!\n";
        l=0;
        goto password;
    }
	for (i = 0; temp_password1[i] != '\0';i++) 
	{
		if (temp_password1[i] >= 'A' && temp_password1[i] <= 'Z')
			caps++;
		else if (temp_password1[i] >= 'a' && temp_password1[i]<= 'z')
			smal++;
		else if (temp_password1[i] >= '0' && temp_password1[i]<= '9')
			numbers++;
		else if (temp_password1[i] == '@' || temp_password1[i] == '&' || temp_password1[i] == '#' || temp_password1[i]== '*' || 
		  temp_password1[i] == '!' || temp_password1[i] == '$' || temp_password1[i] == '%' || temp_password1[i]== '^')
			special++;
	}
	if (!(caps >= 1 && smal >= 1 && numbers >= 1 && special >= 1))
	{
		cout<<"\n\nPlease Enter the strong password, Your password must contain";
		cout<<" atleast one uppercase, Lowercase, Number and special character\n\n";
		goto password;
	}
	for (i = 0; i < 100; i++)
    {
		if (s[i].email==temp_email) 
        {
			if (s[i].password==temp_password1) 
			{
				cout<<"\nYour are successfully log in";
				cin.ignore();
				mainmenu();
			}
			else 
			{
				//EXECUTE WHEN PASSWORD IS INCORRECT 
				incorrect:
				cout<<"\n\nInvalid Password!!!\n\n\n";
				cout<<"Please Choose any number from below\n";
				cout<<"\t 1 RETRY \n\t 2 FORGOT PASSWORD \n\t 3 GO BACK TO MAIN";
				cout<<"\n\n\tPLEASE ENTER YOUR CHOICE";
				cin>>r;
				switch (r)
				{
					case 1: goto password;
							break;
					case 2: mobile:
							//LOG IN WITH MOBILE NUMBER
							cin.ignore();
							cout<<"Enter Your Mobile Number \t\t";
							getline(cin, temp_mobile);
   							for(int i=0; temp_mobile[i]!='\0';i++)
    						{
        						le++;
								if(!isdigit(temp_mobile[i]))
								{
									cout<<"\n!!INVALID MOBILE NUMBER!!\n";
        							le=0;
        							goto mobile;	
								}
    						}
    						if(le!=10)
    						{
        						cout<<"\n!!INVALID MOBILE NUMBER!!\n";
        						le=0;
        						goto mobile;
    						}
							if(temp_mobile==s[i].mobile)
							{
								cout<<"\nYour password is "<<s[i].password;
								goto password;
							}
							else
							{
								cout<<"\nIncorrect mobile number \n\n";
								cout<<"\t 1. FOR RETRY \n\t 2.GO BACK\n";
								cout<<"\tEnter your choice";
								cin>>m;
								switch (m)
								{
									case 1: goto mobile;
											break;
									case 2: goto incorrect;
											break;
								}
							}
							break;
					case 3: userlogin();
							break;
				}
			}
		}
	}
	if(i==100)
	{
		cout<<"\n\nAccount doesn't exist, Please signup!!\n\n";
		cin.ignore();
		userlogin();
	}
}
//THIS FUNCTION IS THE MAINMENU OF THE PROGRAM
void mainmenu() 
{
	system("color 6");
	system("cls");
	cout<<"\n\n\t\t======================================================\n";
	cout<<"\t\t\tWELCOME TO food ordering system \n";
	cout<<"\t\t======================================================\n\n\n";
    cout<<"!!!!You are successfully logged in!!!!!\n\n";
    cout<<"Hello ";
	cout<<temp_name;
	system("color 6");
	cout<<"\nWhat do you like to do\n\n";
    cout<<"\t\t* * * * * * * * * * * * * * * * * * * * * * * *\n";
	cout<<"\t\t* 1. MENU                                     *\n";
    cout<<"\t\t* 2. BILL                                     *\n";
    cout<<"\t\t* 3. PAYMENT                                  *\n";
    cout<<"\t\t* 4. EXIT                                     *\n";
	cout<<"\t\t* 5. BACK TO LOGIN PAGE                       *\n";
	cout<<"\t\t* 0. BACK TO MAIN                             *\n";
    cout<<"\t\t* * * * * * * * * * * * * * * * * * * * * * * *\n\n";
    label:
	cout<<"\n\n\n\t\tSELECT ONE OF THE OPTION FROM ABOVE";
    cin>>t;
    switch(t)
    {
        case 1:system("color 1");
                system("cls");
			    menu();
                break;
        case 2:system("color 2");
                system("cls");
			    bill();
                break;
        case 3:system("cls");
			    system("color 5");
                payment();
                break;
        case 4:system("cls");
			    exit(0);
                break;
		case 5:system("color 4");
                system("cls");
			    main();
                break;
		case 0:main();
        default:cout<<"please enter valid option";
                goto label;
    }
}
void menu()
{
    cout<<"\t\t~~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~~\n";
    cout<<"\t\t~                            MENU                                 ~\n";
    cout<<"\t\t~ 1. SOUP                                                         ~\n";
    cout<<"\t\t~ 2. SNACKS                                                       ~\n";
    cout<<"\t\t~ 3. SOUTH INDIAN                                                 ~\n";
    cout<<"\t\t~ 4. PIZZA                                                        ~\n";
    cout<<"\t\t~ 5. BEVERAGES                                                    ~\n";
    cout<<"\t\t~ 6. DESSERTS                                                     ~\n";
    cout<<"\t\t~~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~ ~~~\n\n";
    cout<<"Please Enter your choice :";
    cout<<"\nPRESS 0 TO GO BACK";
    cin>>c;
    do
	{
			if(c==1)
			{
				system("cls");
				soup();
			}
			if(c==2)
			{
				system("cls");
				snacks();
			}
			if(c==3)
			{
				system("cls");
				south();
			}
			if(c==4)
			{
				system("cls");
				pizza();
			}
			if(c==5)
			{
				system("cls");
				beverages();
			}
			if(c==6)
			{
				system("cls");
  				desserts();
  		    }
			else
			{
				cout<<"\n invalid input \nPlease enter valid number";
			}
	}
	while(c!=0);
		if(c==0)
		{
			system("cls");
			mainmenu();
		}
}
void soup()
{
    system("cls");
    system("color 1");
    cout<<"\t\t-------------------------------------------------------\n";
    cout<<"\t\t-                        SOUPS                        -\n";
    for(int i=0;i<10;i++)
    {
        if(sou[i].no!=0)
        {
            cout<<"\t\t- "<<sou[i].no<<" "<<sou[i].soup_name<<"  \t\t\t\tRs."<<sou[i].price;
            cout<<" -\n";
        }
    }
    cout<<"\t\t-------------------------------------------------------\n";
    cout<<"Please enter which soup would you like to have ";
    cout<<"\nPRESS 0 TO GO BACK TO MAIN MENU\n\n";
    do
	{	cout<<"Enter choice:  ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"selected\nEnter quantity  :";
				cin>>a1;
				cout<<endl;
				break;
			case 2: cout<<"selected\nEnter quantity  :";
					cin>>a2;
				cout<<endl;
				break;
			case 3:cout<<"selected\nEnter quantity  :";
				cin>>a3;
				cout<<endl;
				break;
			case 4:cout<<"selected\nEnter quantity  :";
				cin>>a4;
				cout<<endl;
				break;
            case 5:cout<<"selected\nEnter quantity  :";
				cin>>a5;
				cout<<endl;
				break;
			case 6:cout<<"selected\nEnter quantity  :";
				cin>>a6;
				cout<<endl;
				break;
			default:cout<<"invalid input\n";
					cout<<"Please enter valid input\n";
		}
	}while(ch!=0);
	if(ch==0)
	{
		system("cls");
		menu(); 
	}
}
void snacks()
{
    system("cls");
    system("color 2");
    cout<<"\t\t--------------------------------------------------------\n";
    cout<<"\t\t-                      SNACKS                          -\n";
    for(int i=0;i<10;i++)
    {
        if(sn[i].no!=0)
        {
            cout<<"\t\t- "<<sn[i].no<<" "<<sn[i].snacks_name<<"    \t\t\t\t"<<"Rs."<<sn[i].price;
            cout<<" -\n";
        }
    }
    cout<<"\t\t--------------------------------------------------------\n";
    cout<<"Please enter which SNACKS would you like to have ";
    cout<<"\n PRESS 0 TO GO BACK TO MAIN MENU\n";
    do
	{
        cout<<"Enter choice:  ";
		cin>>a;
		if (a==1)
		{	
			cout<<"selected\nenter quantity  :";
			cin>>b1;
			cout<<endl;
			break;
		}
		else if(a==2)
		{
			cout<<"selected\nenter quantity  :";
			cin>>b2;
			cout<<endl;
			break;
		}
		else if(a==3)
		{
			cout<<"selected\nenter quantity  :";
			cin>>b3;
			cout<<endl;
			break;
		}
		else if(a==4)
		{
			cout<<"selected\nenter quantity  :";
			cin>>b4;
			cout<<endl;
			break;
		}
		else if(a==5)
		{
			cout<<"selected\nenter quantity  :";
			cin>>b5;
			cout<<endl;
			break;
		}
		else if(a==6)
		{
			cout<<"selected\nenter quantity  :";
			cin>>b6;
			cout<<endl;
			break;
		}
		else if(a==7)
		{
			cout<<"selected\nenter quantity  :";
			cin>>b7;
			cout<<endl;
			break;
		}
        else if(a==8)
		{
			cout<<"selected\nenter quantity  :";
			cin>>b8;
			cout<<endl;
			break;
		}
        else if(a==9)
		{
			cout<<"selected\nenter quantity  :";
			cin>>b9;
			cout<<endl;
			break;
		}
		else
		{
			cout<<"\n invalid input\nPlease enter valid input\n";
        }
    }
	while(a!=0);
	if(a==0)
	{
		system ("cls");
		menu();
	}	
}
void south()
{
    system("cls");
    system("color 4");
    south:
    cout<<"\t\t-------------------------------------------------------\n";
    cout<<"\t\t-                    SOUTH INDIAN FOOD                -\n";
    for(int i=0;i<12;i++)
    {
        if(so[i].no!=0)
        {
            cout<<"\t\t- "<<so[i].no<<" "<<so[i].south_name<<"   \t  \t\t\tRs."<<so[i].price;
            cout<<" -\n";
        }
    }
    cout<<"\t\t--------------------------------------------------------\n";
    cout<<"Please enter which south indian food would you like to have ";
    cout<<"\n PRESS 0 TO GO BACK TO MAIN MENU\n";
    do{
		cout<<"Enter choice  : ";cin>>d;
		if (d==1)
		{	
			cout<<"selected\nenter quantity  :";
			cin>>c1;
			cout<<endl;
			break;
		}
		else if(d==2)
		{
			cout<<"selected\nenter quantity  :";
			cin>>c2;
			cout<<endl;
			break;
		}
		else if(d==3)
		{
			cout<<"selected\nenter quantity  :";
			cin>>c3;
			cout<<endl;
			break;
		}
		else if(d==4)
		{
			cout<<"selected\nenter quantity  :";
			cin>>c4;
			cout<<endl;
			break;
		}
		else if(d==5)
		{
			cout<<"selected\nenter quantity  :";
			cin>>c5;
			cout<<endl;
			break;
		}
		else if(d==6)
		{
			cout<<"selected\nenter quantity  :";
			cin>>c6;
			cout<<endl;
			break;
		}
		else if(d==7)
		{
			cout<<"selected\nenter quantity  :";
			cin>>c7;
			cout<<endl;
			break;
		}
		else if(d==8)
		{
			cout<<"selected\nenter quantity  :";
			cin>>c8;
			cout<<endl;
			break;
		}
		else if(d==9)
		{
			cout<<"selected\nenter quantity  :";
			cin>>c9;
			cout<<endl;
			break;
		}
        else if(d==10)
		{
			cout<<"selected\nenter quantity  :";
			cin>>c10;
			cout<<endl;
			break;
		}
		else if(d==11)
		{
			cout<<"selected\nenter quantity  :";
			cin>>c11;
			cout<<endl;
			break;
		}
		else
		{
			cout<<"\n invalid input\nPlease enter valid input";
        }
	}
	while(d!=0);
	if(d==0)
	{
		system ("cls");
		menu();
	}
}
void pizza()
{
    int ch1,p;
    system("cls");
    system("color 5");
    cout<<"\t\t---------------------------------------------------\n";
	cout<<"\t\t-                         PIZZAS                  -\n";
	for(int i=0;i<10;i++)
    {
        if(piz[i].no!=0)
        {
            cout<<"\t\t- "<<piz[i].no<<" "<<piz[i].pizza_name<<"     \t\t\t\t ";
            cout<<" -\n";
        }
    }
    cout<<"\t\t---------------------------------------------------\n";
		cout<<"\nPlease Enter which Flavour would you like to have?:";
        cout<<"\n PRESS 0 TO GO BACK TO MAIN MENU\n";
		cin>>ch1;
    if(ch1==0)
	{
		system ("cls");
		menu();
	}
    if(ch1>=1 && ch1<5)
	{
		cout<<"\n1) Small Rs.90\n"<<"2) Regular Rs.200\n"<<"3) Large Rs.300\n";
		cout<<"\nChoose Size Please:";
		cin>>p;
        if(p==1)
		{
			cout<<"\nselected\nenter quantity\n";
			cin>>d1;
		}
		else if (p==2)
		{
			cout<<"\nselected\nenter quantity\n";
			cin>>d2;
		}
		else if(p==3)
		{
			cout<<"\nselected\nenter quantity\n";
			cin>>d3;
        }
    }
}
void beverages()
{
    system("cls");
    system("color C");
    cout<<"\t\t------------------------------------------------------\n";
    cout<<"\t\t-                    BEVERAGES                       -\n";
    for(int i=0;i<10;i++)
    {if(bev[i].no!=0)
        {
            cout<<"\t\t- "<<bev[i].no<<" "<<bev[i].bev_name<<"    \t\t   \t\tRs."<<bev[i].price;
            cout<<"-\n";
        }}
    cout<<"\t\t------------------------------------------------------\n";
    cout<<"Please enter your choice";
    cout<<"\n PRESS 0 TO GO BACK TO MAIN MENU\n";
    do
	{
        cout<<"Enter choice:  ";
        cin>>e;
		if(e==1)
		{
			cout<<"selected\nenter quantity  :";
			cin>>e1;
			cout<<endl;
			break;
		}
		else if(e==2)
		{
			cout<<"selected\nenter quantity  :";
			cin>>e2;
			cout<<endl;
			break;
		}
		else if(e==3)
		{
			cout<<"selected\nenter quantity  :";
			cin>>e3;
			cout<<endl;
			break;
		}
        if(e==4)
		{
			cout<<"selected\nenter quantity  :";
			cin>>e4;
			cout<<endl;
			break;
		}
		else if(e==5)
		{
			cout<<"selected\nenter quantity  :";
			cin>>e5;
			cout<<endl;
			break;
		}
		else
		{
			cout<<"!!invalid input!!\nPlease enter valid input";
        }
	}
	while(e!=0);
	if(e==0)
	{
		system ("cls");
		menu();
	}
}
void desserts()
{
    system("cls");
    system("color A");
    cout<<"\t\t-----------------------------------------------\n";
    cout<<"\t\t-                 DESERTS                     -\n";
    for(int i=0;i<10;i++)
    {
        if(des[i].no!=0)
        {
            cout<<"\t\t- "<<des[i].no<<" "<<des[i].des_name<<"   \t\t\tRs."<<des[i].price;
            cout<<" -\n";
        }
    }
    cout<<"\t\t-----------------------------------------------\n";
    cout<<"Please enter your choice";
    cout<<"\n PRESS 0 TO GO BACK TO MAIN MENU\n";
    do
	{
        cout<<"Enter choice:  ";
		cin>>f;
		if(f==1)
		{	
			cout<<"selected\nenter quantity  :";
			cin>>f1;
			cout<<endl;
			break;
		}
		else if(f==2)
		{
			cout<<"selected\nenter quantity  :";
			cin>>f2;
			cout<<endl;
			break;
		}
		else if(f==3)
		{
			cout<<"selected\nenter quantity  :";
			cin>>f3;
			cout<<endl;
			break;
		}
		else if(f==4)
		{
			cout<<"selected\nenter quantity\n";
			cin>>f4;
			cout<<endl;
			break;
		}
    	else if(f==5)
		{
			cout<<"selected\nenter quantity  :";
			cin>>f5;
			cout<<endl;
			break;
		}
		else if(f==6)
		{
			cout<<"selected\nenter quantity\n";
			cin>>f6;
			cout<<endl;
			break;
		}
		else
		{
			cout<<"!!invalid input!!\nPlease enter valid input";
		}
	}
	while(f!=0);
	if(f==0)
	{
		system ("cls");
		menu();
	}	
}
//TO CALCULATE BILL AFTER ORDER
void bill()
{
    system("color E");
    char z,b;
    int total=0;
	time_t rawtime;struct tm * timeinfo;time ( &rawtime );timeinfo = localtime ( &rawtime );
	cout<< (asctime (timeinfo));
    cout<<"\t\t\t=============================================================\n";
    cout<<"\t\t\t=                      FOOD ORDERING SYSTEM                 =\n";
    cout<<"\t\t\t=============================================================\n";
	cout<<"\n\nDISHES\t\t\t\t\t\tPRICE\t\t\tQUANTITY \n\n"<<endl;
//       SOUP ORDER
	if(a1>0)
	{
		cout<<sou[0].soup_name<<"\t\t\t\t=\t"<<sou[0].price*a1<<" \t\t\t "<<a1<<"\n";
		total+=(sou[0].price*a1);
		y++;
	}
	if(a2>0)
	{
		cout<<sou[1].soup_name<<"\t\t\t\t=\t"<<sou[1].price*a2<<" \t\t\t "<<a2<<"\n";
		total+=(sou[1].price*a2);
		y++;
	}
	if(a3>0)
	{
		cout<<sou[2].soup_name<<"\t\t\t\t=\t"<<sou[2].price*a3<<" \t\t\t "<<a3<<"\n";
		total+=(sou[2].price*a3);
		y++;
	}
	if(a4>0)
	{
		cout<<sou[3].soup_name<<"\t\t\t\t=\t"<<sou[3].price*a4<<" \t\t\t "<<a4<<"\n";
		total+=(sou[3].price*a4);
		y++;
	}
	if(a5>0)
	{
		cout<<sou[4].soup_name<<"\t\t\t\t=\t"<<sou[4].price*a5<<" \t\t\t "<<a5<<"\n";
		total+=(sou[4].price*a5);
		y++;
	}
	if(a6>0)
	{
		cout<<sou[5].soup_name<<"\t\t\t\t=\t"<<sou[5].price*a6<<" \t\t\t "<<a6<<"\n";
		total+=(sou[5].price*a6);
		y++;
	}
//    Snacks ORDER
	if(b1>0)
	{
		cout<<sn[0].snacks_name<<"\t\t\t\t=\t"<<sn[0].price*b1<<" \t\t\t "<<b1<<"\n";
		total+=(sn[0].price*b1);
		y++;
	}
	if(b2>0)
	{
		cout<<sn[1].snacks_name<<"\t\t\t\t=\t"<<sn[1].price*b2<<" \t\t\t "<<b2<<"\n";
		total+=(sn[1].price*b2);
		y++;
	}
	if(b3>0)
	{
		cout<<sn[2].snacks_name<<"\t\t\t\t=\t"<<sn[2].price*b3<<" \t\t\t "<<b3<<"\n";
		total+=(sn[2].price*b3);
		y++;
	}
	if(b4>0)
	{
		cout<<sn[3].snacks_name<<"\t\t\t\t=\t"<<sn[3].price*b4<<" \t\t\t "<<b4<<"\n";
		total+=(sn[3].price*b4);
		y++;
	}
	if(b5>0)
	{
		cout<<sn[4].snacks_name<<"\t\t\t\t=\t"<<sn[4].price*b5<<" \t\t\t "<<b5<<"\n";
		total+=(sn[4].price*b5);
		y++;
	}
	if(b6>0)
	{
		cout<<sn[5].snacks_name<<"\t\t\t\t=\t"<<sn[5].price*b6<<" \t\t\t "<<b6<<"\n";
		total+=(sn[5].price*b6);
		y++;
	}
	if(b7>0)
	{
		cout<<sn[6].snacks_name<<"\t\t\t\t=\t"<<sn[6].price*b7<<" \t\t\t "<<b7<<"\n";
		total+=(sn[6].price*b7);
		y++;
	}
	if(b8>0)
	{
		cout<<sn[7].snacks_name<<"\t\t\t\t=\t"<<sn[7].price*b8<<" \t\t\t "<<b8<<"\n";
		total+=(sn[7].price*b8);
		y++;
	}
	if(b9>0)
	{
		cout<<sn[8].snacks_name<<"\t\t\t\t=\t"<<sn[8].price*b9<<" \t\t\t "<<b9<<"\n";
		total+=(sn[8].price*b9);
		y++;
	}
//    south indian food order
	if(c1>0)
	{
		cout<<so[0].south_name<<"\t\t\t\t=\t"<<so[0].price*c1<<" \t\t\t "<<c1<<"\n";
		total+=(so[0].price*c1);
		y++;
	}
	if(c2>0)
	{
		cout<<so[1].south_name<<"\t\t\t\t=\t"<<so[1].price*c2<<" \t\t\t "<<c2<<"\n";
		total+=(so[1].price*c2);
		y++;
	}
	if(c3>0)
	{
		cout<<so[2].south_name<<"\t\t\t\t=\t"<<so[2].price*c3<<" \t\t\t "<<c3<<"\n";
		total+=(so[2].price*c3);
		y++;
	}
	if(c4>0)
	{
		cout<<so[3].south_name<<"\t\t\t\t=\t"<<so[3].price*c4<<" \t\t\t "<<c4<<"\n";
		total+=(so[3].price*c4);
		y++;
	}
	if(c5>0)
	{
		cout<<so[4].south_name<<"\t\t\t\t=\t"<<so[4].price*c5<<" \t\t\t "<<c5<<"\n";
		total+=(so[4].price*c5);
		y++;
	}
	if(c6>0)
	{
		cout<<so[5].south_name<<"\t\t\t\t=\t"<<so[5].price*c6<<" \t\t\t "<<c6<<"\n";
		total+=(so[5].price*c6);
		y++;
	}
	if(c7>0)
	{
		cout<<so[6].south_name<<"\t\t\t\t=\t"<<so[6].price*c7<<" \t\t\t "<<c7<<"\n";
		total+=(so[6].price*c7);
		y++;
	}
	if(c8>0)
	{
		cout<<so[7].south_name<<"\t\t\t\t=\t"<<so[7].price*c8<<" \t\t\t "<<c8<<"\n";
		total+=(so[7].price*c8);
		y++;
	}
	if(c9>0)
	{
		cout<<so[8].south_name<<"\t\t\t\t=\t"<<so[8].price*c9<<" \t\t\t "<<c9<<"\n";
		total+=(so[8].price*c9);
		y++;
	}
	if(c10>0)
	{
		cout<<so[9].south_name<<"\t\t\t\t=\t"<<so[9].price*c10<<" \t\t\t "<<c10<<"\n";
		total+=(so[9].price*c10);
		y++;
	}
	if(c11>0)
	{
		cout<<so[10].south_name<<"\t\t\t\t=\t"<<so[10].price*c11<<" \t\t\t "<<c11<<"\n";
		total+=(so[10].price*c11);
		y++;
	}
//    PIZZA
	if(d1>0)
	{
		cout<<"SMALL PIZZA\t\t\t\t=\t"<<90*d1<<" \t\t\t "<<d1<<"\n";
		total+=(90*d1);
		y++;
	}
	if(d2>0)
	{
		cout<<"MEDIUM PIZZA\t\t\t\t=\t"<<200*d2<<" \t\t\t "<<d2<<"\n";
		total+=(200*d2);
		y++;
	}
	if(d3>0)
	{
		cout<<"LARGE PIZZA\t\t\t\t=\t"<<300*d3<<" \t\t\t "<<d3<<"\n";
		total+=(300*d3);
		y++;
	}	
//   beverages order
	if(e1>0)
	{
		cout<<bev[0].bev_name<<"\t\t\t\t=\t"<<bev[0].price*e1<<" \t\t\t "<<e1<<"\n";
		total+=(bev[0].price*e1);
		y++;
	}
	if(e2>0)
	{
		cout<<bev[1].bev_name<<"\t\t\t\t=\t"<<bev[1].price*e2<<" \t\t\t "<<e2<<"\n";
		total+=(bev[1].price*e2);
		y++;
	}
	if(e3>0)
	{
		cout<<bev[2].bev_name<<"\t\t\t\t=\t"<<bev[2].price*e3<<" \t\t\t "<<e3<<"\n";
		total+=(bev[2].price*e3);
		y++;
	}
	if(e4>0)
	{
		cout<<bev[3].bev_name<<"\t\t\t\t=\t"<<bev[3].price*e4<<" \t\t\t "<<e4<<"\n";
		total+=(bev[3].price*e4);
		y++;
	}
	if(e5>0)
	{
		cout<<bev[4].bev_name<<"\t\t\t\t=\t"<<bev[4].price*e5<<" \t\t\t "<<e5<<"\n";
		total+=(bev[4].price*e5);
		y++;
	}
//   deserts function
	if(f1>0)
	{
		cout<<des[0].des_name<<"\t\t\t\t=\t"<<des[0].price*f1<<" \t\t\t "<<f1<<"\n";
		total+=(des[0].price*f1);
		y++;
	}
	if(f2>0)
	{
		cout<<des[1].des_name<<"\t\t\t\t=\t"<<des[1].price*f2<<" \t\t\t "<<f2<<"\n";
		total+=(des[1].price*f2);
		y++;
	}
	if(f3>0)
	{
		cout<<des[2].des_name<<"\t\t\t\t=\t"<<des[2].price*f3<<" \t\t\t "<<f3<<"\n";
		total+=(des[2].price*f3);
		y++;
	}
	if(f4>0)
	{
		cout<<des[3].des_name<<"\t\t\t\t=\t"<<des[3].price*f4<<" \t\t\t "<<f4<<"\n";
		total+=(des[3].price*f4);
		y++;
	}
	if(f5>0)
	{
		cout<<des[4].des_name<<"\t\t\t\t=\t"<<des[4].price*f5<<" \t\t\t "<<f5<<"\n";
		total+=(des[4].price*f5);
		y++;
	}
	if(f6>0)
	{
		cout<<des[5].des_name<<"\t\t\t\t=\t"<<des[5].price*f6<<" \t\t\t "<<f6<<"\n";
		total+=(des[5].price*f6);
		y++;
	}
//       total  bill	
	cout<<"\n\n\nTOTAL BILL    =   "<<total<<endl<<"TOTAL DISHES  =  "<<y<<endl;
	tot+=total;
    tota=total;
	cout<<"\n\n\t\t\t\tTHANK YOU "<<temp_name<<"\n";
    cout<<"\t\t\t\tPLEASE COME AGAIN \n";
	cout<<"\t\t\t\t HAVE A NICE DAY\n\n";
	cout<<"\nPRESS 0 TO GO BACK";		
	cin>>z;
	if(z=='0')
	{
		a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,b1=0,b2=0,b3=0,b4=0,b5=0,b6=0,b7=0,b8=0,b9=0,c1=0,c2=0,c3=0,c4=0,c5=0;
		c6=0,c7=0,c8=0,c9=0,c10=0,c11=0,d1=0,d2=0,d3=0,e1=0,e2=0,e3=0,e4=0,e5=0,f1=0,f2=0,f3=0,f4=0,f5=0,f6=0;
		b++;	
		system("cls");
		mainmenu();	
	}
}
void payment()
{
    int cho;
    cout<<"\t\t\t=============================================================\n";
    cout<<"\t\t\t=                      FOOD ORDERING SYSTEM                 =\n";
    cout<<"\t\t\t=============================================================\n\n";
	if(tota==0)
	{
		cout<<"\t\t\t    All bill paid";
		getch();
		mainmenu();
	}
    cout<<"\t\t\t\t\tPAY YOUR BILL \n\n";
    cout<<"\t\tTOTAL AMOUNT : "<<tota;
    cout<<"\n\nMODE OF PAYMENT\n1.BY CASH\n2.BY CARD\n\n";
    cout<<"Enter your choice: ";
    cin>>cho;
    if(cho==1)
    {
        int amt;
        cout<<"Enter amount :";
        cin>>amt;
        if(amt<tota)
        {
            cout<<"Amount insufficient\n";
            payment();
        }
        else if(amt==tota)
        {
            cout<<"\nPAYMENT SUCCESSFULL";
            cout<<"\nTHANK YOU : )";
            cout<<"\nPLEASE COME AGAIN";
            cout<<"\nYour order will be deliver in 30 mins";
			tota=0;
            getch();
            mainmenu();
        }
        else
        {
            int charge=0;
            charge= amt-tota;
            amt= amt-charge;
            cout<<"Your change : "<<charge;
            cout<<"\nPAYMENT SUCCESSFULL";
            cout<<"\nTHANK YOU : )";
            cout<<"\nPLEASE COME AGAIN";
            cout<<"\nYour order will be deliver in 30 mins";
			tota=0;
            getch();
            mainmenu();
        }
    }
    else if(cho==2)
    {
        credit:
        cout<<"Please enter your credit card number";
        cin>>creditcard;
        if(creditcard.length()!=12)
        {
            cout<<"\nInvalid Card number ";
            cout<<"\nIt must be of 12 digits";
            getch();
            goto credit;
        }
        for(int i=0;i<12;i++){
            if(!isdigit(creditcard[i])){
                cout<<"\nInvalid Card number ";goto credit; 
            }}
        cout<<"Enter Your Pin";
        char c;
	    string pin;
        p:
        c=getch();
	    cout<<"*";
	    if(c!=13)
        {pin=pin+c;
		goto p;}
        cout<<"\n\nPAYMENT SUCCESSFULL";
        cout<<"\nTHANK YOU : )";
        cout<<"\nPLEASE COME AGAIN";
        cout<<"\nYour order will be deliver in 30 mins";
		tota=0;
        getch();
        mainmenu();}
}
//                                         THE END
