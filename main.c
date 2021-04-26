#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<windows.h>
void groceries();
void electronics();
void interiors();
void fashion();
void review();
void login();
void reg();
void firstpage();FILE *fpointer;
char singleLine[1000],name[100],ch,str[1000],chi[1000],str2[1000],cc[100];
int choice,choose,num,a,n,b[100],i,j,m,z,c[100],q,d[100],t,p,e[100],quant1,quant2,g,quant3,k,q,rate,l;
float quant,total,totale=0,totald=0,totalf=0,totali=0,total1=0,total2=0,total3=0,total4=0,total5=0,total6=0,total7=0,total10 = 0,total11 = 0,total12 = 0,total13 = 0,total14 = 0,total15 = 0,total16 = 0,total17 = 0,total18 = 0,total19 = 0,total20 = 0,total21 = 0,total22 = 0,total23 = 0,total24 = 0,total25 = 0;
struct user
{
    char pass[20];
    char username[20];
    char fname[20];
    char lname[20];
}u, U;

struct Review
{
	int flag, rating;
	char name[20];
}rec[10];

int hash(int m)
{
	int slots = 10; //assume number of slots available in hash table is 10
	int r;
	r = m % slots;
	return r;
}

void main()
{

    SYSTEMTIME stime;
    GetSystemTime(&stime);
    system("COLOR F1");
    fpointer = fopen("groceries1.txt\0","r");

    while (1)
    {

        int ch;
        printf("[1] : Register:  \n");
        printf("[2] : Login:  \n");
        printf("[3] : Exit:  \n");
        printf("\n   Enter your choice :  ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            reg();
            break;

        case 2:
            login();
            break;

        case 3:
            exit(0);
        default:
            printf("Invalid Choice! ");
            break;
        }

}
}
void groceries()
{
    SYSTEMTIME stime;
    GetSystemTime(&stime);//used to get the system time
    FILE *fp;
    fp = fopen("groceries1.txt","a");//Opening file in append mode (form of a write mode) as i want to write contents into a file
    printf("Items available :-1.White Rice :- 50 per Kg\n2.Red Rice :- 40 per kg\n3.Ashirwaad Wheat :- 50 per kg\n4.Surf Exel Powder :- 45 per kg\n5.Bathing Soap :- 50 per qnty\n6.Glass CLeaner :-200 per qnty\n7.Room Freshner :- 400/qnty");
    printf("\nEnter the number of grocerry items you want\n");
    scanf("%d",&m);
    printf("\nEnter the corresponding key to buy the product \n");
    for(j=0;j<m;j++)
    {
        scanf("%d",&b[j]);
    }
    for(j=0;j<m;j++)
    {
    switch(b[j])
    {
    case 1: printf("Enter the quantity of White rice you want to add to the cart \n");
                    scanf("%f",&quant);
                    total1=  quant * 50;
                    printf("\n%f is the cost \n",total1);
                    fprintf(fp,"%f kgs of White rice ,Cost Rs%f - %d / %d / %d\n",quant,total1,stime.wDay,stime.wMonth,stime.wYear);//Writes content into a file
                    break;
    case 2:  printf("Enter the quantity of Red rice you want to add to the cart \n");
                    scanf("%f",&quant);
                    total2 =  quant * 40;
                    printf("\n%f is the cost\n",total2);
                    fprintf(fp,"%f kgs of Red rice which cost Rs%f - %d / %d / %d\n",quant,total2,stime.wDay,stime.wMonth,stime.wYear);
                    break;
    case 3: printf("Enter the quantity of Aashirwaad Wheat you want to add to the cart \n");
                    scanf("%f",&quant);
                    total3 = quant * 50;
                    printf("\n%f is the cost \n",total3);
                    fprintf(fp,"%f kgs of Aashirwad wheat which cost Rs%f - %d / %d / %d\n",quant,total3,stime.wDay,stime.wMonth,stime.wYear);
                    break;
    case 4: printf("Enter the quantity of Surf Exel Powder you want to add to the cart \n");
                    scanf("%f",&quant);
                    total4 =  quant * 45;
                    printf("\n%f is the cost\n",total4);
                    fprintf(fp,"%f kgs of Surf Exel which cost Rs%f - %d / %d / %d\n",quant,total4,stime.wDay,stime.wMonth,stime.wYear);
                    break;
    case 5: printf("Enter the number of Bathing Soaps you want add to the cart \n");
                    scanf("%d",&num);
                    total5 =  num * 50;
                    printf("\n%f is the cost\n",total5);
                     fprintf(fp,"%d of Bathing Soap which cost Rs%f - %d / %d / %d\n",num,total5,stime.wDay,stime.wMonth,stime.wYear);
                    break;
    case 6: printf("Enter the number of Glass Cleaning Liquid you want add to the cart \n");
                    scanf("%d",&num);
                    total6 =  num * 200;
                    printf("\n%f is the cost \n",total6);
                      fprintf(fp,"%d of Glass Cleaning Liquid which cost Rs%f - %d / %d / %d\n",num,total6,stime.wDay,stime.wMonth,stime.wYear);
                    break;
    case 7: printf("Enter the number of Room Freshner Spray you want add to the cart \n");
                    scanf("%d",&num);
                    total7=  num * 400;
                    printf("\n %f is the cost \n",total7);
                     fprintf(fp,"%d  of Room Freshner which cost Rs%f - %d / %d / %d\n",num,total7,stime.wDay,stime.wMonth,stime.wYear);
                    break;
    default:printf("Invalid choice \n");

}
}
totald= total1+total2+total3+total4+total5+total6+total7;
    printf("Price was %f\n",totald);
if(totald>3000)
{
    totald = totald-totald*(10.0/100);
    printf("You get 10 precent discount the price is %f\n",totald);
}
else
printf(" \n\n Total of groceries is %f \n",totald);
fclose(fp);
}
void electronics()
{
    SYSTEMTIME stime;
    GetSystemTime(&stime);
    FILE *fp;
    fp = fopen("groceries1.txt","a");
    printf("Electronic Gadgets available are \n");
    printf("1.One plus 8T  Rs 45,000 \n");
    printf("2.IPHONE 12 Rs 1,00,000 \n");
    printf("3.Samsung Galaxy M20 Rs 20,000\n");
    printf("4.Samsung 8K Display 64 inch T.V Rs 4,00,000\n");
    printf("5.Sony Bravia 8K Display 64 inch Rs 4,00,000\n");
    printf("Enter the number of items you want out of the list above\n");
    scanf("%d",&z);
    printf("Enter the corresponding key/keys of the products you want\n");
    for(t=0;t<z;t++)
    {
    scanf("%d",&c[t]);
    }
    for(t=0;t<z;t++)
    {
    switch(c[t])
    {
    case 1: printf("Enter the number of One Plus 8T smart Phones you want\n");
    scanf("%d",&quant1);
    total10 = quant1*45000;
    printf("Cost is %f \n",total10);
    fprintf(fp,"%d One Plus 8T which cost Rs%f - %d / %d / %d\n",quant1,total10,stime.wDay,stime.wMonth,stime.wYear);
    break;
    case 2: printf("Enter the number of IPHONE 12 smart Phones you want\n");
    scanf("%d",&quant1);
    total11 = quant1*100000;
    printf("Cost is %f \n",total11);
    fprintf(fp,"%d IPHONE 12 which cost Rs%f - %d / %d / %d\n",quant1,total11,stime.wDay,stime.wMonth,stime.wYear);
    break;
    case 3: printf("Enter the number of Samsung Galaxy M20 smart Phones you want\n");
    scanf("%d",&quant1);
    total12 = quant1*20000;
    printf("Cost is %f \n",total12);
    fprintf(fp," %d Samsung Galaxy M20 which cost Rs%f - %d / %d / %d\n",quant1,total12,stime.wDay,stime.wMonth,stime.wYear);
    break;
    case 4: printf("Enter the number of Samsung 8K Display 64 inch T.V you want\n");
    scanf("%d",&quant1);
    total13 = quant1*400000;
    printf("Cost is %f \n",total13);
    fprintf(fp," %d Samsung 8K Display 64 inch which cost Rs%f - %d / %d / %d\n",quant1,total13,stime.wDay,stime.wMonth,stime.wYear);
    break;
    case 5: printf("Enter the number of Sony Bravia 8K Display 64 inch T.V you want\n");
    scanf("%d",&quant1);
    total14 = quant1*400000;
    printf("Cost is %f \n",total14);
    fprintf(fp," %d Sony Bravia 8K Display 64 inch which cost Rs%f - %d / %d / %d\n",quant1,total14,stime.wDay,stime.wMonth,stime.wYear);
    break;
    default:printf("Invalid Argument \n");
    }
    }
    totale = total10 + total11 + total12 + total13 + total14;
    printf("The price was %f",totale);
    if(totale>30000)
{
    totale = totale-totale*(15.0/100);
    printf("You get 15 percent discount the price is %f",totale);
}
else
    printf("Total cost of electronics equipments is %f \n",totale);
    fclose(fp);
}
void interiors()
{
    SYSTEMTIME stime;
    GetSystemTime(&stime);
    FILE *fp;
    fp = fopen("groceries1.txt","a");
    printf("1.Curtains Rs 4000\n2.Sofa Set Rs 15,000\n3.Bed Rs 20,000\n4.Pillows Rs 3,000\n5.Chairs Rs 15,000\n6.Tables Rs 10,000\n");
    printf("Enter the number of items from the list you want \n");
    scanf("%d",&p);
    printf("Enter the corresponding key/keys of the items you want to buy \n");
    for(i=0;i<p;i++)
    {
    scanf("%d",&d[i]);
    }
    for(i=0;i<p;i++)
    {
    switch(d[i])
        {
    case 1: printf("Enter the number of curtain sets you want to buy \n");
    scanf("%d",&quant2);
    total15 = quant2*4000;
    printf("Cost is %f \n",total15);
    fprintf(fp,"%d Curtain sets which cost Rs%f - %d / %d / %d\n",quant2,total15,stime.wDay,stime.wMonth,stime.wYear);
    break;
    case 2: printf("Enter the number of Sofa sets you want to buy \n");
    scanf("%d",&quant2);
    total16 = quant2*15000;
    printf("Cost is %f \n",total16);
    fprintf(fp,"%d Sofa set which cost Rs%f - %d / %d / %d\n",quant2,total16,stime.wDay,stime.wMonth,stime.wYear);
    break;
    case 3: printf("Enter the number of Bed sets you want to buy \n");
    scanf("%d",&quant2);
    total17 = quant2*20000;
    printf("Cost is %f \n",total17);
    fprintf(fp,"%d Bed set which cost Rs%f - %d / %d / %d\n",quant2,total17,stime.wDay,stime.wMonth,stime.wYear);
    break;
    case 4: printf("Enter the number of Pillows you want to buy \n");
    scanf("%d",&quant2);
    total18 = quant2*3000;
    printf("Cost is %f \n",total18);
    fprintf(fp,"%d Pillows which cost Rs%f - %d / %d / %d\n",quant2,total18,stime.wDay,stime.wMonth,stime.wYear);
    break;
    case 5: printf("Enter the number of chairs you want to buy \n");
    scanf("%d",&quant2);
    total19 = quant2*15000;
    printf("Cost is %f \n",total19);
    fprintf(fp,"%d Chairs which cost Rs%f - %d / %d / %d\n",quant2,total19,stime.wDay,stime.wMonth,stime.wYear);
    break;
    case 6: printf("Enter the number of tables you want to buy \n");
    scanf("%d",&quant2);
    total20= quant2*10000;
    printf("Cost is %f \n",total20);
    fprintf(fp,"%d Tables which cost Rs%f - %d / %d / %d\n",quant2,total20,stime.wDay,stime.wMonth,stime.wYear);
    break;
    default:printf("Invalid argument \n");
    break;
    }
    }
    totalf = total15+total16+total17+total18+total19+total20;
     printf("The price was %f\n",totalf);
    if(totalf>20000)
{
    totalf = totalf-totalf*(10.0/100);
    printf("You get 10 percent discount the price is %f\n",totalf);
}
else
    printf("The total cost of Interiors and Households is %f \n",totalf);
    fclose(fp);
}
void fashion()
{
    SYSTEMTIME stime;
    GetSystemTime(&stime);
    FILE *fp;
    fp = fopen("groceries1.txt","a");
    printf("1.T-Shirt Rs 500\n 2.Shoes Rs 600\n3.Pants Rs 700\n4.Frocks Rs 800\n5.Sunglases Rs 200\n");
    printf("Enter the no of items u want to purchase from the above list \n");
    scanf("%d",&g);
    printf("Enter the corresponding key/keys to purchase the item \n");
    for(i=0;i<g;i++)
    {
    scanf("%d",&e[i]);
    }
    for(i=0;i<g;i++)
    {
    switch(e[i])
    {
    case 1: printf("Enter the number of T-shirts you want to buy \n" );
    scanf("%d",&quant3);
    total21 = quant3*500;
    printf("Cost is %f\n",total21);
    fprintf(fp,"%d T-shirts which cost Rs%f - %d / %d / %d\n",quant3,total21,stime.wDay,stime.wMonth,stime.wYear);
    break;
    case 2: printf("Enter the number of Shoes you want to buy \n" );
    scanf("%d",&quant3);
    total22 = quant3*600;
    printf("Cost is %f\n",total22);
    fprintf(fp,"%d Shoes which cost Rs%f - %d / %d / %d\n",quant3,total22,stime.wDay,stime.wMonth,stime.wYear);
    break;
    case 3: printf("Enter the number of Pants you want to buy \n" );
    scanf("%d",&quant3);
    total23 = quant3*700;
    printf("Cost is %f\n",total23);
    fprintf(fp,"%d Pants which cost Rs%f - %d / %d / %d\n",quant3,total23,stime.wDay,stime.wMonth,stime.wYear);
    break;
    case 4: printf("Enter the number of Frocks you want to buy \n" );
    scanf("%d",&quant3);
    total24 = quant3*800;
    printf("Cost is %f\n",total24);
    fprintf(fp,"%d Frocks which cost Rs%f - %d / %d / %d\n",quant3,total24,stime.wDay,stime.wMonth,stime.wYear);
    break;
    case 5: printf("Enter the number of Sunglases you want to buy \n" );
    scanf("%d",&quant3);
    total25 = quant3*200;
    printf("Cost is %f\n",total25);
    fprintf(fp,"%d Sunglases which cost Rs%f -2 %d / %d / %d\n",quant3,total25,stime.wDay,stime.wMonth,stime.wYear);
    break;
    default:printf("Invalid argument\n");
    }
    }
    totali = total21+total22+total23+total24+total25;
    printf("The price was %f\n",totali);
    if(totali>3000)
{
    totali = totali-totali*(10.0/100);
    printf("You get 10% discount the price is %f\n",totali);
}
else
    printf("Total cost of Fashion/design items are %f\n",totali);
    fclose(fp);
}
void review()
{
    int rt;
   char name[100],sugg[1000];
   FILE *fptr;

   // use appropriate location if you are using MacOS or Linux
   fptr = fopen("input.txt","a");

   if(fptr == NULL)
   {
      printf("Error!");
   }

   jump: printf("Enter your Name and Ratings:(1-5) ");
   scanf("%s %d",name,&rt);
   if(rt>5)
   {
    printf("\nInvalid entry\n");
   goto jump;
   }
   printf("Thankyou for rating your experience with us");
   fprintf(fptr,"%s %d\n",name,rt);
   fclose(fptr);

	int m, k, rating, loc, i, n, j;
	FILE *in, *outp;
	printf("\nHow many old ratings for our code you want to see ? ");
	scanf("%d", &n);
	in = fopen("input.txt", "r");
	if (n <= 10)
	{
		for (k = 0; k<10; k++)
			rec[k].flag = 0;
		for (i = 0; i<n; i++)
		{
			fscanf(in, "%s%d", name, &rating);
			loc = hash(rating);
			if (rec[loc].flag == 0)
			{
				strcpy(rec[loc].name, name);
				rec[loc].rating= rating;
				rec[loc].flag = 1;
			}
			else
			{
				for (j = loc + 1; j % 10<10; j++)
				{
					if (rec[j % 10].flag == 0)
					{
						strcpy(rec[j % 10].name, name);
						rec[j % 10].rating= rating;
						rec[j % 10].flag = 1;
						break;
					}
				}
			}
		}
		fclose(in);
		printf("\n\nThe History of reviews is as follows: ");
		for (i = 0; i<10; i++)
		{
			if (rec[i].flag == 1)
				printf("\n%s     %d ", rec[i].name, rec[i].rating);
			else
				printf("\n##");
		}
		outp = fopen("reviews.txt", "w");
		for (i = 0; i<10; i++)
		{
			if (rec[i].flag != 0)
				fprintf(outp, "%s | %d\n", rec[i].name, rec[i].rating);
			else
			fprintf(outp, "# | #\n");
		}
		fclose(outp);
	}
	else
		printf("\n We have record of only 10 Reviews till now !! ");
}
void reg()
{
    struct user U;
    FILE *fp;
    system("cls");
    puts("\n\n\t\t\t\t\t*CREATE ACCOUNT*\n\n");
    printf("\t\tEnter First Name: ");
    fflush(stdin);//Clear the screen
    gets(U.fname);
    printf("\n\t\tEnter Last Name: ");
    gets(U.lname);
    printf("\n");
    printf("\n\t\tEnter Username: ");
    scanf("%s",U.username);
    printf("\n");
    printf("\n\t\tEnter Password: ");
    scanf("%s",U.pass);
    fp = fopen ("username.txt", "ab+");//Open a binary file in append mode for writing at the end of the file.
    if (fp == NULL)
    {
        printf("\nError opened file\n");
        exit (1);
    }
    fwrite(&U, sizeof(struct user), 1, fp);
    fclose (fp);
    system("cls");
    printf("\n\t\t\t\t\tAccount Created Successfully.");
    printf("\n\t\tPress any key to continue...");
    getch();
    system("cls");
}
void login()
{
    SYSTEMTIME stime;
    GetSystemTime(&stime);
    int log1, log2;
    char uname[20],pss[20];
    FILE *fp;
    struct user u;
    system("cls");
    printf("\n\n\t\t\t\t\t*LOGIN*\n\n");
    printf("\t\tEnter Username: ");
    scanf("%s",uname);
    printf("\n");
    printf("\n\t\tEnter Password: ");
    scanf("%s",pss);
    fp=fopen("username.txt","rb+");//Open file for both reading and writing
    if(fp==NULL)
    {
        printf("\nFile not found\n");
        return 1;
    }
    while(fread(&u, sizeof(struct user), 1, fp)){//While user has entered a username compare it if it matches display correct else access is denied
        log1 = strcmp(uname,u.username);
        log2 = strcmp(pss,u.pass);
        if(log1 == 0 && log2 == 0)
        {
            printf(" \n\t\t\t\t\tUsername And Password is Correct.\n");
            printf("\n\t\tPress any key to continue...");
            getch();
            printf("\n\n\n\t\t\t\t\tWelcome %s %s ", u.fname,u.lname);
             printf("\nEnter your name \n");
    scanf("%s",name);
    printf("\nHello %s .We from KK Enterprises welcome you to Online Shopping \n.\n.",name);
    printf("Do want to see History of purchases (1) for Yes (0) or No \n");
    scanf("%d",&q);
    if(q==1)
    {
    printf("\n\n\nHistory of purchase is \n");
    while(!feof(fpointer))
    {
    fgets(singleLine,1000,fpointer);//Reading a string into a file copies contents of fpointer to the singline variable
    puts(singleLine);//Prints singleline variable contents
    }
    fclose(fpointer);
    }

    while(1)
    {
    printf("\nDo you want to proceed if Yes press (1 )else press(0)\n");
    scanf("%d",&k);
    if(k==1)
    {

         printf("\n1.Groceries\n2.Electronic Gadgets\n3.Interiors/Households\n4.Fashion \n");
    printf("\nPlease enter the corresponding key of the category under which your purchase comes\n");
    scanf("%d",&a);
    switch(a)
    {
    case 1 :groceries();
    break;
    case 2: electronics();
    break;
    case 3:interiors();
    break;
    case 4:fashion();
    break;
    default:printf("Invalid choice\n");
    break;
    }
    total = totald+ totalf+totale+totali;
    printf("\nYour Bill is %f \n",total);
    printf("\nEnter ur Address\n");
   scanf("%s",chi);
   printf("\n Product will be delivered to %s by %d/%d/%d \n",chi,stime.wDay+1,stime.wMonth,stime.wYear);
   review();
}
else
    exit(1);
}
            getch();
            break;
        }

    }
    if(log1 != 0 && log2 != 0){
        printf(" \n\t\t\t\t\tUsername And Password is Incorrect.\n");

        printf("\n\t\tPress any key to continue...");
        getch();
    }

    fclose(fp);
    system("cls");

}
