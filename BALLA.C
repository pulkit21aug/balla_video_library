			    #include<stdio.h>

			    #include<string.h>

			    #include<conio.h>

			    #include<stdlib.h>

			    #include<graphics.h>

			    #include<dos.h>



  struct emp
    {
     char name[200];
       };

     struct emp e;

     long int recsize;

     FILE *fp,*ft;

     void add(void);
     void read(void);
     void addh(void);
     void readh(void);
     void holl();
     void boll();
     void lov();
     void search();
     void searchh();


    void search()
     {
      char nam[200];
      int flag=0;
      clearviewport();

      outtextxy(100,100,"enter the name of movie");
      gotoxy(25,15);
      fflush(stdin);
      gets(nam);
      rewind(fp);
	 while(fread(&e,recsize,1,fp)==1)
	    {

		if(strcmp(e.name,nam)==0)
	       {
	       flag=1;
		break;
		}
		else

		 flag=0;

	  }
	if(flag==1)
	{
	 clearviewport();
	 outtextxy(100,120,"match found");
	 }
	 else
	 {
	  clearviewport();
	  outtextxy(100,130,"sorry");
       }

    }

   void searchh()
   {
    char namh[200];
      int flag=0;
      clearviewport();

      outtextxy(100,100,"enter the name of movie");
      gotoxy(25,15);
      fflush(stdin);
      gets(namh);
      rewind(ft);
	 while(fread(&e,recsize,1,ft)==1)
	    {

		if(strcmp(e.name,namh)==0)
	       {
	       flag=1;
		break;
		}
		else

		 flag=0;

	  }
	if(flag==1)
	{
	 clearviewport();
	 outtextxy(100,120,"match found");
	 }
	 else
	 {
	  clearviewport();





	  outtextxy(100,130,"sorry");
       }

    }

    void lov()

    {    char pul;
	int sha;
	clearviewport();

	  do
	{
	 outtextxy(100,120,"1.HOLLY WOOD");
	 outtextxy(100,140,"2.BOLLY WOOD");
	 outtextxy(100,160,"3.EXIT");
	 outtextxy(100,180,"plz enter  your choice");
	 gotoxy(40,10);
	 fflush(stdin);
	 scanf("%d",&sha);
	 switch(sha)
	 {
	  case 1:
		  holl();
		  break;
	  case 2:
		      boll();
		     break;
	    case 3:
			 exit(0);
			   break;
	      default:
			      fflush(stdin);
		       clearviewport();
		       outtextxy(200,120,"wrong choice");
		      break;
      }


		  fflush(stdin);
		   delay(600);
		   clearviewport();
		   fflush(stdin);
		  outtextxy(80,100,"continue ? (y/n)");
		 fflush(stdin);
		 gotoxy(35,8);
		 scanf("%c",&pul);
  }              while(pul =='y');
		 fflush(stdin);

    }


    void boll()
    {
       char cont;
       int choice;
       int gd=DETECT,gm;
       initgraph(&gd,&gm,"c:\\tc\\bgi");


	setbkcolor(4);

	    settextstyle(6,0,3);

	fflush(stdin);
       fp=fopen("rmb.dat","r+");
       if(fp==NULL)
    {
       fp=fopen("rmb.dat","w+");
       if(fp==NULL)
     {
	clearviewport();
	outtextxy(100,100,"file not loaded");
	exit(0);
     }
   }
       recsize=sizeof(e);
       do
     {
	   fflush(stdin);
	   clearviewport();
	   outtextxy(150,60,"**BOLLY WOOD**");
	   outtextxy(150,100,"1.ADD RECORD");
	   outtextxy(150,120,"2.SEE RECORD");
	   outtextxy(150,140,"3.SEARCH");
	   outtextxy (150,160,"4.GO BACK");
	   outtextxy(150,180,"enter ur choice ?");
	   gotoxy(40,10);
	   fflush(stdin);
	   scanf("%d",&choice);

	   fflush(stdin);
	   switch(choice)
       {
	  case 1:

			add();
			break;

	  case 2:
			read();
			break;

	 case 3:
			 search();
			break;
	 case 4:        lov();
			break;
	 default:      fflush(stdin);
		       clearviewport();
		       outtextxy(200,120,"wrong choice");
		      break;
    }

		  fflush(stdin);
		   delay(600);
		   clearviewport();
		   fflush(stdin);
		  outtextxy(80,100,"continue ? (y/n)");
		 fflush(stdin);
		 gotoxy(35,8);
		 scanf("%c",&cont);
  }              while(cont=='y');
		 fflush(stdin);


		}


   void add()
   {



	       clearviewport();



	       outtextxy(80,100," enter name ");
	       gotoxy(30,8);
	       gets(e.name);
	       fwrite(&e,recsize,1,fp);


	 }

   void read()
   {
	      clearviewport();
	      fflush(stdin);

	      rewind(fp);
	       settextstyle(6,0,2);
	      while(fread(&e,recsize,1,fp)==1)
	      {

		 outtextxy(100,120,e.name);
		 getch();
		 clearviewport();
	       }


	      clearviewport();
	     settextstyle(6,0,3);

      }

      loading(void)
      {
	    int gd=DETECT,gm;
	    int i=0,j=200 ;
	    initgraph(&gd,&gm,"c:\\tc\\bgi");


 setbkcolor(4);
 settextstyle(7,0,3);
 setcolor(YELLOW);
 outtextxy(130,100,"PULKIT SOFT LTD");
delay(1000);
setcolor(WHITE);
outtextxy(195,140,"presents");
delay(1000);
 setcolor(GREEN);
 outtextxy(200,180,"RMB");
  delay(2000);
 clearviewport();
 setcolor(YELLOW);
 settextstyle(1,0,3);
 outtextxy(130,100,"BALLA VIDEO LIBRARY");
delay(2500);
 clearviewport();

	    setbkcolor(4);

	    settextstyle(4,0,3);
	    outtextxy(290,320,"loadiing");
	    for(i=0;i<600;i++)
 {
	     for(j=0;j<=30;j++)
  {
	     putpixel(10+i,350+j,WHITE);

	     delay(0);
  }
  }


	       return(0);
    }


    void holl()
    {
       char conth;
       int choiceh;
       int gd=DETECT,gm;
       initgraph(&gd,&gm,"c:\\tc\\bgi");



       clearviewport();
	setbkcolor(4);

	    settextstyle(6,0,3);

	fflush(stdin);
       ft=fopen("rmbh.dat","r+");
       if(ft==NULL)
    {
       ft=fopen("rmbh.dat","w+");
       if(ft==NULL)
     {
	clearviewport();
	outtextxy(100,100,"file not loaded");
	exit(0);
     }
   }
       recsize=sizeof(e);
       do
     {
	   fflush(stdin);
	   clearviewport();
	   outtextxy(150,60,"**HOLLY WOOD**");




	   outtextxy(150,100,"1.ADD RECORD");
	   outtextxy(150,120,"2.SEE RECORD");
	   outtextxy(150,140,"3.SEARCH");





	   outtextxy (150,160,"4.GO BACK");
	   outtextxy(150,180,"enter choice");
	   gotoxy(40,10);
	   fflush(stdin);
	   scanf("%d",&choiceh);

	   fflush(stdin);
	   switch(choiceh)
       {
	  case 1:

			addh();
			break;

	  case 2:
			readh();
			break;

	 case 3:
			searchh();
			break;
	 case 4:
			lov();
			 break;
	 default:      fflush(stdin);
		       clearviewport();
		       outtextxy(200,120,"wrong choice");
		      break;








    }

		  fflush(stdin);
		   delay(600);
		   clearviewport();
		   fflush(stdin);
		  outtextxy(80,100,"continue ? (y/n)");
		 fflush(stdin);
		 gotoxy(35,8);
		 scanf("%c",&conth);
  }              while(conth=='y');
		 fflush(stdin);


    }


   void addh()
   {



	       clearviewport();



	       outtextxy(80,100," enter name ");
	       gotoxy(30,8);
	       gets(e.name);
	       fwrite(&e,recsize,1,ft);


	 }

   void readh()
   {
	      clearviewport();
	      fflush(stdin);

	      rewind(ft);
	       settextstyle(6,0,2);
	      while(fread(&e,recsize,1,ft)==1)
	      {

		 outtextxy(100,120,e.name);
		 getch();
		 clearviewport();
	       }


	      clearviewport();
	     settextstyle(6,0,3);

      }

    void main()
    {
		   int gd=DETECT,gm;

       initgraph(&gd,&gm,"c:\\tc\\bgi");

       loading();
       delay(0);
	clearviewport();
	setbkcolor(4);

	    settextstyle(6,0,3);

		fflush(stdin);
		lov();

		 fclose(ft);
		  fclose(fp);
		  getch();
		 closegraph();
		 restorecrtmode();
    }