#include<stdio.h> // PROJECT OWNER: YAKUP EMIRHAN DINCEL
#include<string.h> // management password: 202040 // appointment id: 66401 
struct yedincel // github.com/yedincel
{
	//---- management sys. veriable
    char name[50];
    char disease[50];
    int  room,age;
    char phone [50];
    //---- appointment sys. veriable
    char day[50];
    char time[50];
} 
x[100];
	//---- main monitor veriable
	int sys;
	//---- management sys. veriable
	int i, g, num, sum, n, password, c, q;
	//---- appointment sys. veriable
	int id, y, z, d, stock, total, ent;
	char ch;

main (yed)
{	
printf("Please Enter Your Choice\n\n1. Management System\n2. Appointment System\n\nOption : ");  // Management S. Password: 202040 - Appointment S. Password: 66401
scanf("%d", &sys);
system("cls");

	if(sys==1) // Management System Login.
    {	printf("\n*** Management System ***\n");    
		printf("\nPlease enter your password: ");
		scanf("%d", &password);
			
		if(password == 101020 || password == 202040 || password == 303060)
		{
		printf("-Login Successful-\n");
			
	    	while(c!=6)
	    	{	
		printf("\n   Enter Your Choice   \n");
	        printf("\n1. Add Information\n2. View Information\n3. Search\n4. Edit Information\n5. Delete Information\n6. Exit\n\nOption : ");
	        scanf("%d",&c);//choice for option
	        fflush(stdin);//making it clear
	        
	        if(c==1)//add
	        {
	            system("cls");
	            add();
	        }
	        else if(c==2)//view
	        {
	            system("cls");
	            view();
	        }
	        else if(c==3)//search
	        {
	            system("cls");
	            search();
	        }
	        else if(c==4)//edit
	        {
	            system("cls");
	            edit();
	        }
	        else if(c==5)//delete
	        {
	            system("cls");
	            del();
	        }
	        else if(c==6)
	        {
	            write();
	            return 0;
	        }
	        else
	        {
	            system("cls");
	            printf("\n\nInvalid input, try again");
	        }
	        printf("\n\n");
		} 
		}
		else
		{
		printf("Login failed");
		} 		
    } 
    
	else if(sys == 2) // Appointment System Login
	{
	printf("\n*** Appointment System ***\n\n");
	printf("Please enter your id: ");
	scanf("%d", &id);
	if (id == 66401 || id == 66402 || id == 66403)
	{	
	printf("-Login Successful-\n\n");
	
    while(y!=4)
    {
    	printf("Enter Your Chocie\n");
    	printf("\n1. Make Appointments\n2. View Appointment\n3. Cancel Appointment\n4. Exit\n\nOption: ");
    	scanf("%d",&y);//choice for option
    	fflush(stdin);//making it clear
        
    		if(y==1) // make
    		{
    		system("cls");
        	make(); 
		}
		else if(y==2) // document
		{
		system("cls");
		document();	
		}
		else if(y==3) // cancel
		{
		system("cls");
		cancel();		
		}
		else if(y==4)
		{	
		write();
		return 0;		
		}
		else
		{
		system("cls");
		printf("\n\nInvalid input, please try again");
		}		
		printf("\n\n");
	}
	}
	else	
	printf("Login Failed");
	} 
}	
//***************MANAGEMENT SYSTEM***************
void add()
{
    printf("\n\n");
    printf("Already data inputed on the database = %d\n\n",num);//how many inputs
    printf("How many entry do you want to add : ");
    scanf("%d",&n);
    sum=n+num;
    for(i=num; i<sum; i++)
    {
        printf("\n");
        fflush(stdin);
        printf("Enter patient's name : ");
        gets(x[i].name);
       	fflush(stdin);
        printf("Enter age : ");
        scanf("%d",&x[i].age);
        fflush(stdin);
        printf("Enter disease : ");
        gets(x[i].disease);
       	fflush(stdin);
        printf("Enter room number : ");
        scanf("%d",&x[i].room);
       	fflush(stdin);
        printf("Enter phone number: ");
        gets(x[i].phone);
       	fflush(stdin);
       	printf("\n\n");
        num++;
        printf("--------------------");
    }
}
void view()
{
    for(i=0; i<num; i++)
    {
        printf("\n");
        printf("Serial number :%d\n",i);
        printf("Name : ");
        puts(x[i].name);
        printf("Age : %d\n", x[i].age);
        printf("Disease : ");
        puts(x[i].disease);
        printf("Room number: %d\n", x[i].room);
        printf("Phone number: ");
       	puts(x[i].phone);
        printf("--------------------");
    }
}
void search()
{
    int s,h,f;
    char u[100];
    printf("By what do you want to search ?\n");
    printf("1.Serial Number\n2.Name\n3.Age\n4.Disase\n5.Room Number\n6.Phone Number\n\nOption : ");
    scanf("%d",&h);
    if(h==1)
    {
        printf("Enter serial number of the patient: ");
        scanf("%d",&s);
        if(s<num)
        {
            printf("\n");
            printf("Serial number: %d\n",s);
            printf("Name: ");
            puts(x[s].name);
            printf("Age: %d\n",x[s].age);
            printf("Disease: ");
            puts(x[s].disease);
            printf("Room number: %d\n",x[s].room);
            printf("Phone number: ");
            puts(x[s].phone);
        }
        else
        printf("\n\nNot Found\n\n");
    }
    else if(h==2)
    {
        int f=1;
        fflush(stdin);
        printf("Enter name: ");
        gets(u);
        fflush(stdin);
        for(g=0; g<num; g++)
        {
            if(strcmp(u,x[g].name)==0)
            {
	            printf("\n");
	            printf("Serial number: %d\n",g);
	            printf("Name: ");
	            puts(x[g].name);
	            printf("Age: %d\n",x[g].age);
	            printf("Disease: ");
	            puts(x[g].disease);
	            printf("Room number: %d\n",x[g].room);
	            printf("Phone number: ");
	            puts(x[g].phone);
                    f=0;
            }
        }
    	if(f==1)
        printf("\nNot Found\n");
    }
    else if(h==3)
    { 
        int f=1;
        printf("Enter age: ");
        scanf("%d",&f);
        fflush(stdin);
        for(g=0; g<num; g++)
        {
            if(f==x[g].age)
            {   
		    printf("\n");
	            printf("Serial number: %d\n",g);
	            printf("Name: ");
	            puts(x[g].name);
	            printf("Age: %d\n",x[g].age);
	            printf("Disease: ");
	            puts(x[g].disease);
	            printf("Room number: %d\n",x[g].room);
	            printf("Phone number: ");
	            puts(x[g].phone);
                    f=0;
            }
        }
    	if(f==1)
        printf("\nNot Found\n");
    }
    else if(h==4)
    {
        int f=1;
        fflush(stdin);
        printf("Enter disease: ");
        gets(u);
        fflush(stdin);
        for(g=0; g<num; g++)
        {
            if(strcmp(u,x[g].disease)==0)
            {
	            printf("\n");
	            printf("Serial number: %d\n",g);
	            printf("Name: ");
	            puts(x[g].name);
	            printf("Age: %d\n",x[g].age);
	            printf("Disease: ");
	            puts(x[g].disease);
	            printf("Room number: %d\n",x[g].room);
	            printf("Phone number: ");
	            puts(x[g].phone);;
                    f=0;
            }
        }
        if(f==1)
        printf("Not found\n\n");
    }
    else if(h==5)
    {
        int f=1;
        printf("Enter room number: ");
        scanf("%d",&f);
        fflush(stdin);
        for(g=0; g<num; g++)
        {
            if(f==x[g].room)
            {
	            printf("\n");
	            printf("Serial number: %d\n",g);
	            printf("Name: ");
	            puts(x[g].name);
	            printf("Age: %d\n",x[g].age);
	            printf("Disease: ");
	            puts(x[g].disease);
	            printf("Room number: %d\n",x[g].room);
	            printf("Phone number: ");
	            puts(x[g].phone);
                    f=0;
            }
        }
        if(f==1)
        printf("Not Found"); 
    }
    else if(h==6)
    {
	int f=1;
	fflush(stdin);
        printf("Enter phone number: ");
        gets(u);
        fflush(stdin);
        for(g=0; g<num; g++)
        {
            if(strcmp(u,x[g].phone)==0)
            {
	            printf("\n");
	            printf("Serial number: %d\n",g);
	            printf("Name: ");
	            puts(x[g].name);
	            printf("Age: %d\n",x[g].age);
	            printf("Disease: ");
	            puts(x[g].disease);
	            printf("Room number: %d\n",x[g].room);
	            printf("Phone number: ");
	            puts(x[g].phone);
                    f=0;
            }
        }
        if(f==1)
        printf("Not Found\n\n");
    }
    else
    printf("\n\nInvalid input\n\n");
}
void edit()
{
    int q,p;
    fflush(stdin);
    printf("What do you want to edit ?\n");
    printf("Enter your option\n");
    printf("1.Name\n2.Disease\n3.Age\n4.Room number\n5.Phone number\n\n");
    printf("Option : ");
    scanf("%d",&q);//option
    if(q<=5)
    {
        printf("Enter the serial no of that patient (0 - %d) = ", num-1);
        scanf("%d",&p);//serial number
        if(p<num)
        {
            if(q==1)
            {
                fflush(stdin);
                printf("Enter the new name= ");
                gets(x[p].name);
            } 
            else if(q==2)
            {
                fflush(stdin);
                printf("Enter the new disease= ");
                gets(x[p].disease);
            }
            else if(q==3)
            {
                fflush(stdin);
                printf("Enter the new age= ");
                scanf("%d",&x[p].age);
            }
            else if(q==4)
            {
                fflush(stdin);
                printf("Enter the new room number= ");
                scanf("%d",&x[p].room);
            }
            else if(q==5)
            {
                fflush(stdin);
                printf("Enter the new phone number= ");
                gets(x[p].phone);
            }
        }
        else
        {
            printf("\n\nInvalid serial number\nTry again !!\n\n");
        }
    }
    else
    {
        printf("\n\nInvalid option\nTry again!!\n\n");
    }
}
void del()
{
    int f,h;
    printf("Enter the serial number of the patient that you want to delete (0 - %d) = ", num-1);
    scanf("%d",&f);
    if(f<num)
    {
        printf("What do you want ?\n");
        printf("1.Delete all record\n2.Delete name\n3.Delete age\n4.Delete disease\n5.Delete room number\n6.Delete phone number\n\nOption : ");
        scanf("%d",&h);

        if(h==1)
        {
            while(f<num)
            {
                strcpy(x[f].name,x[f+1].name);
                strcpy(x[f].disease,x[f+1].disease);
                x[f].age=x[f+1].age;
                x[f].room=x[f+1].room;
                strcpy(x[f].phone,x[f+1].phone);
                f++;
            }
            num--;
        }
        else if(h==2)
        {
        strcpy(x[f].name,"-No Data-");
        }
        else if(h==3)
        {
        x[f].age=0;	
        }
        else if(h==4)
        {         
        strcpy(x[f].disease,"-No Data-");
        }
        else if(h==5)
        {
        x[f].room=0;
        }
        else if(h==6)
        {
        strcpy(x[f].phone,"-No Data-");
        }
    }
    else
    printf("\n\nInvalid serial number\n");
}
//***************APPOÝNMENT SYSTEM***************
void make()
{	
    printf("\n");
    stock=0;
    ent=1;
    total = stock + ent;

	for(i; i<total; i++)
	{	
	printf("Please select day:\n- Monday\n- Tuesday\n- Wendsday\n- Thursday\n- Friday\n- Saturday\n\nDay: ");
	gets(x[i].day); 
	fflush(stdin);
	printf("Please select time: ");
	gets(x[i].time);
	printf("\n\n------------------");
	stock++;
	}
}
void document()
{
	for(i=0; i<stock; i++)
    {
        printf("\n");
        printf("Appointment day: ");
        puts(x[i].day);
        printf("Appointment time: ");
	puts(x[i].time); 
        printf("\n------------------");
    }
}
void cancel()
{	
	printf("Are you sure? Y(yes) or N(no): ");
	ch = getchar();
	
	if(ch == 'Y' || ch== 'y')
   { 
	int d=0;
    	if(d < stock)
	{
        stock--;
        printf("\nAppointment canceled.");
        printf("\n--------------------");
	}
	else 
	{
	printf("No Data");
	}	
	}
  	else if (ch=='N' || ch=='n')
   {
    	system("cls");  
   }
}
