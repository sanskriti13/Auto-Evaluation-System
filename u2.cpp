#include<conio.h>
#include<bits/stdc++.h>
#include<fstream>
#include<string>
#include<chrono>
#include<time.h>
#include<windows.h>

#define MAX_OPT 4
using namespace std;

void clear()
{
    system("cls");
    printf(" Loading...");
    Sleep(1000);
    system("cls");
}
void gotoxy(int x, int y)
{
 COORD coord;
 coord.X = x;
 coord.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
//======================boxes==================================
int i;
void box()
{
   for(i=3+35;i<=79+35;i++)
	{
		gotoxy(i,3);
		printf("%c",219);
    	gotoxy(i,45);
		printf("%c",219);
	}

	for(i=3;i<=45;i++)
	{                       //vertically till the 3th row is reached.
		gotoxy(3+35,i);
		printf("%c",219);
		gotoxy(79+35,i);
		printf("%c",219);
	}

}
void wbox()
{
	for(i=45;i<=115;i++) 	//This 'FOR' loop will print a combination of
	{
		gotoxy(i,5);    //the 75th column is reached.
		printf("%c",219);
        gotoxy(74,40);
		printf("%c",219);
		gotoxy(i,40);
		printf("%c",219);
	}

	for(i=5;i<=40;i++)      //This 'FOR' loop will print asteriks 'I'
	{                       //vertically till the 17th row is reached.
		gotoxy(45,i);
		printf("%c",219);

	}
		for(i=5;i<=40;i++)      //This 'FOR' loop will print asteriks 'I'
	{                       //vertically till the 17th row is reached.
		gotoxy(115,i);
		printf("%c",219);

	}
}



//============================ box for label ==========
void lbox()
{
	gotoxy(25+35,6);
	printf("%c",201);
	for(i=26;i<55;i++)
	{
		gotoxy(i+35,6);
		printf("%c",205);
	}
	gotoxy(55+35,6);
	printf("%c",187);
	gotoxy(25+35,6);
	for(i=6;i<8;i++)
	{
		gotoxy(25+35,i+1);
		printf("%c",186);
	}
	gotoxy(25+35,9);
	printf("%c",200);
	for(i=26;i<55;i++)
	{
		gotoxy(i+35,9);
		printf("%c",205);
	}
	gotoxy(55+35,9);
	printf("%c",188);
	gotoxy(55+35,6);
	for(i=6;i<8;i++)
	{
		gotoxy(55+35,i+1);
		printf("%c",186);
	}

}

void welcome()
{
 int j,k,l,m;
 system("cls");
 box();
	for(i=0;i<16;i++)
	{
		gotoxy(35+35,20);
		printf("WELCOME");
		k=i+2;
		gotoxy(38+35,22);
		printf("TO");
		l=i+3;
		gotoxy(28+35,24);
		printf("AUTO");
		gotoxy(36+35,24);
		printf("EVALUATION ");
		gotoxy(42+35+8,24);
		printf("SYSTEM");
		gotoxy(52+35,45);
		j=i+1;

		Sleep(200);
	}
}
void login()
{
    string name;
	//string pass;
	int count=0,i;

	system("cls");

	start:
	wbox();
	lbox();
	gotoxy(35+35,7);
	printf(" LOGIN ");

	gotoxy(32+35,18);
	printf("ENTER ADMIN NAME :");
	gotoxy(32+35,22);
	printf("ENTER PASSWORD  :");

	gotoxy(51+35,18);
    cin>>name;
    gotoxy(51+35,22);
    //cin>>pass;
    string pass ="";
   char ch;
  // cout << "Enter pass\n";
   ch = _getch();
   int cou=0;
   while(cou != 3){
        cou++;      //character 13 is enter
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
	if(name.compare("TSM")!=0 || pass.compare("123")!=0)
	{
    clear();
	 system("cls");
	 gotoxy(20+35,20);
	 printf("Please Enter vailid Username & Passward!!!!!");
	 count++;
	 gotoxy(20+35,23);
	 printf("%d chance left!!!!",3-count);
	 getch();
	 system("cls");
	 if(count==3)
	 exit(0);
	 else
	 goto start;
	}
	else
	{
	    clear();
        welcome();
         clear();
	}
}


//=========================welcome screen ==============

void team()
{
   // cout<<"hey team"<<endl;
   cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
   cout<<"                           TEAM T.S.M HAS SANSKRITI MAHESHWARI, ASHISH SHARMA ,HARSH SINGHAL AS IT'S MEMBERS..."<<endl;
   cout<<"                           THE PROJECT IS AIMING TOWARDS SOLVING MODERN DAY PROBLEM OF EVALUATION."<<endl;
   cout<<"                           BASCIC STL,LINKED LIST,STRUCTURES,HASHING,FILE HANDLING,KNUTH MORRIS PRATH ALGORITHM HAVE BEEN MOSTLY USED TO EVALUATE THE ANSWERS BY STUDENT"<<endl;
   using namespace std::chrono_literals;
   std::this_thread::sleep_for(6s);
   system("cls");
   cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
   cout<<"                                           TEAM T.S.M THANKS YOU FOR USING OUR SMALL ATTEMPT TO MODERN DAY PROBLEM!!!!!!!";
   using namespace std::chrono_literals;
   std::this_thread::sleep_for(5s);


}

struct node
{

    string info;
    struct node* next;
};

int ascii(string s)
{
    int sum=0;
    for(int i=0;i<s.length();i++)
        sum+=(int)s[i];
    return sum;
}

int hash1(int n,string a[])
{
    int iop=n%6;
     string j;
     j='0';
    while(a[iop].compare(j))
        iop=(iop+1)%6;


    return iop;

}



void search(string a[],string x,int &loi)
{
    int ondex=0;
    for(int jj=0;jj<x.length();jj++)
        ondex+=(int)x[jj];
    ondex=ondex%6;
    //cout<<"ondex"<<ondex<<" ";
    int h=0;
      string k;
      k='0';
      //cout<<a[ondex]<<" ";
    while(h<6 && a[ondex].compare(k) && x.compare(a[ondex]))
    {
        h++;
        ondex=(ondex+1)%6;

    }

    if(!a[ondex].compare(x))
       {

        loi++;
       }
}



void compute(string a,int p,int lps[])
{
    lps[0]=0;
    int len=0;
    int i=1;
    while(i<p)
    {
        if(a[i]==a[len])
        {
            len++;
            lps[i]=len;
            i++;
        }
        else
        {
            if(len!=0)
            {
                len=lps[len-1];
            }
            else{
                lps[i]=0;
                i++;
            }
        }
    }
}
int match(string s,string a,vector<string>& w)
{

    int p=a.length();

    int q=s.length();

    int lps[p],i=0,j=0,k=0;

    compute(a,p,lps);


    cout<<endl;
    while(i<q)
    {
      if(s[i]==a[j])
      {
          i++;
          j++;

      }

     if(j==p)
      {
          k++;
          w.push_back(a);
          i=q;
          j=lps[j-1];
      }
      else if(s[i]!=a[j])
      {
          if(j!=0)
          {
              j=lps[j-1];
          }
          else
          i++;
      }

    }
    return k;
}


void FACULTY()
{
    //cout<<"i am FACULTY"<<endl;

    x:
        cout<<"YOU ARE IN FACULTY SECTION!!!!!"<<endl<<endl<<endl;
    cout<<"ENTER FACULTY NAME::"<<endl;
    string s;
    cin.get();
    cin>>s;
    cout<<"ENTER FACULTY PASSWORD::"<<endl;
    string pass ="";
   char ch;
  // cout << "Enter pass\n";
   ch = _getch();
   int cou=0;
   while(cou != 4){
        cou++;      //character 13 is enter
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }

    system("cls");
    cout<<"YOU ARE IN FACULTY SECTION!!!!!"<<endl<<endl<<endl;
    if(s=="potterheads" && pass=="1234")
    {
        cout<<"YOU HAVE LOGGED IN SUCCESSFULLY!!"<<endl;
        cout<<endl<<endl;
        using namespace std::chrono_literals;
   std::this_thread::sleep_for(2s);
        y:
        system("cls");
        cout<<"YOU ARE IN FACULTY SECTION!!!!!!"<<endl<<endl<<endl;
        cout<<"--------------------**********-------------------"<<endl;
        cout<<"ENTER 1 TO SET SUBJECTIVE QUESTION"<<endl;
        cout<<"ENTER 2 TO SET MULTIPLE CORRECT OBJECTIVE QUESTIONS"<<endl;
        cout<<"ENTER 3 FOR EXIT"<<endl;
        int k,j=0,u;
        cin>>k;
        system("cls");

        if(k==3)
        {
          team();
         exit(1);}
        switch(k)
        {
        case 1:
         {
             cout<<"YOU ARE IN FACULTY SECTION!!!!!"<<endl<<endl<<endl;
            int n;
            string s;
            cout<<"ENTER HOW MANY QUESTIONS TO ADD::"<<endl;
            cin>>n;
            cin.ignore(256,'\n');
            fstream file;
            fstream file1;
                file.open("q1.txt",ios::app);
                file1.open("ans.txt",ios::app);

            while(j<n)
            {
                system("cls");
                cout<<"YOU ARE IN FACULTY SECTION!!!!!"<<endl<<endl<<endl;
                cout<<"ENTER QUESTION:: "<<(j+1)<<endl;
                getline(cin,s);
                file <<s<<endl ;
                cout<<"ENTER HOW MANY KEYWORDS YOU WANT FOR THIS QUESTION:: "<<endl;
                int key,key1;
                cin>>key;

                for(u=1;u<=key;u++)
                {
                    cout<<"ENTER HOW MANY SYNONMYS FOR "<<u<<" KEYWORD:"<<endl;
                    cin>>key1;
                    cin.ignore(256,'\n');
                    string c;
                    //cin>>c;
                    //file1<<c;
                    //c='-';
                    //file1<<c;
                    for(int y=1;y<=key1;y++)
                    {
                        cout<<"ENTER "<<y<<" SYNONYM:"<<endl;
                       char d='-';
                        cin>>c;
                        file1<<c<<d;


                    }
                    char e='/';
                    file1<<e;

                }
                file1<<endl;
                cin.ignore(256,'\n');


                j++;
            }
            system("cls");
             cout<<"YOU ARE IN FACULTY SECTION!!!!!!"<<endl<<endl<<endl;
            cout<<"PLEASE WAIT WHILE WE ADD THE QUESTIONS TO OUR FILE........."<<endl;
            using namespace std::chrono_literals;
   std::this_thread::sleep_for(2s);
   cout<<"CONGRATULATIONS QUESTIONS HAVE BEEN SUCCESSFULLY RETURNED!!!!!!"<<endl;

            break;
         }

        case 2:
            cout<<"YOU ARE IN FACULTY SECTION!!!!!!"<<endl<<endl<<endl;
            cout<<"ENTER HOW MANY QUESTION YOU WANT TO ADD::"<<endl;
            int mcq,jj=0;
            cin>>mcq;
            //cin.ignore(256,'/');
            fstream f;
            fstream f1;
            fstream f2;
                f.open("q2.txt",ios::app);
                f1.open("ans2.txt",ios::app);
                f2.open("opt.txt",ios::app);
            while(jj<mcq)
            {
                jj++;
                system("cls");
                cout<<"YOU ARE IN FACULTY SECTION!!!!!!"<<endl<<endl<<endl;
                string qq,qqq,opp;
                cin.get();
                cout<<"ENTER QUESTION "<<(jj)<<":"<<endl;
               getline(cin,qq);
                cout<<"ENTER  6 OPTIONS YOU WANT TO DISPLAY::"<<endl;
                for(int lk=0;lk<6;lk++)
                {
                    cout<<"ENTER "<<lk+1<<" OPTION::"<<endl;
                    cin>>opp;
                    char ddd='-';
                    f2<<opp<<ddd;

                }
                f2<<endl;
                f<<qq<<endl;
                int qqqq,jjj=0;
                cout<<"ENTER THE NUMBER OF CORRECT OPTIONS FOR THIS QUESTION::"<<endl;
                cin>>qqqq;
                while(jjj<qqqq)
                {
                    cout<<"ENTER "<<jjj+1<<" OPTION::"<<endl;
                   cin>>qqq;
                 char fg='-';
                f1<<qqq<<fg;
                jjj++;
                }
                f1<<endl;

            }
            f.close();
            f1.close();
            system("cls");
            cout<<"YOU ARE IN FACULTY SECTION!!!!!!"<<endl<<endl<<endl;
            cout<<"PLEASE WAIT WHILE WE ADD THE QUESTIONS TO OUR FILE..........."<<endl;
            using namespace std::chrono_literals;
   std::this_thread::sleep_for(2s);
   cout<<"CONGRATULATIONS QUESTIONS HAVE BEEN SUCCESSFULLY RETURNED!!!!!!"<<endl;
   using namespace std::chrono_literals;
   std::this_thread::sleep_for(2s);


    }
    goto y;
    }
    else{
            cout<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"                                                                                         FACULTY NAME OR PASSWORD DO NOT MATCH!!"<<endl<<endl<<endl;

        cout<<"                                                                                         RE-ENTER FACULTY NAME AND PASSWORD"<<endl;
         using namespace std::chrono_literals;
   std::this_thread::sleep_for(2s);
   system("cls");
        goto x;
    }
     using namespace std::chrono_literals;
   std::this_thread::sleep_for(2s);
    system("cls");




}
void student()
{

cout<<"YOU ARE IN STUDENT SECTION!!!!!"<<endl;
    //cout<<"i am student"<<endl;
cout<<endl<<endl;

    string answer;

  string s,s1;
    //cout<<"checking "<<endl;
    sanskriti:
        fstream file;
        fstream file1;
    vector<string>v;
    vector<string>w;
    file.open("q1.txt",ios::in);
    file1.open("ans.txt",ios::in);
    cout<<"PRESS 1 FOR ANSWERING SUBJECTIVE QUESTIONS"<<endl;
    cout<<"PRESS 2 FOR ANSWERING MORE THAN ONE OPTION CORRECT"<<endl;
    cout<<"PRESS 3 FOR EXIT"<<endl;
    int ry,lop=0;
    float score=0;
    cin>>ry;
    if(ry==3)
    {
        system("cls");
       team();
        exit(1);

    }
    system("cls");
    cin.get();
    switch(ry)
    {
    case 1:

//int total=0;
    while(getline(file1,s1) && getline(file,s))
    {
        cout<<"YOU ARE IN STUDENT SECTION!!!!!"<<endl;
    //cout<<"i am student"<<endl;
cout<<endl<<endl;
        lop++;
        //node*a[MAX_OPT]; //array of pointers
float jkl=0;
        cout<<lop<<")"<<s<<endl<<endl;
         cout<<"ENTER ANSWER::"<<endl;
        //cin.get();

    getline(cin,answer);
   // cout<<answer<<endl;

       // cout<<s1<<endl;
        string fg;
        fg=s1[0];
        for(int z=1;z<s1.length();z++)
        {
            if(s1[z]=='/')
            {
                	int jj=0;
                	jkl=jkl+1.0;
                    //mtotal++;
	for(int ii=0;ii<v.size();ii++)
	{
	    if(jj==0)

    {

	    jj= match(answer,v[ii],w);

    }
	    else
	    break;

	}
     v.clear();
            }
           else if(s1[z]!='-')
            {

                fg=fg+""+s1[z];

            }
            else if(s1[z]=='-')
                {
                     v.push_back(fg);
                     //insert(&a[hash1(ascii(fg))],fg);


                      fg="";
                }


        }
    /*stringstream iss(answer);

    int co=0;
    vector<string>s1;
	while(iss >> word)
	{

	    if(search(a[hash1(ascii(word))],word,&co,s1))
        {


        }

	}*/




      cout<<"THE NUMBER OF MATCH KEYWORDS ARE FOR THIS QUESTION ARE == "<<w.size()<<endl;
      cout<<"THE NUMBER OF KEYWORDS THAT WERE REQUIRED FOR THIS QUESTION ARE == "<<int(jkl)<<endl<<endl<<endl;
      score=score+w.size()/int(jkl);





	    w.clear();
	    using namespace std::chrono_literals;
   std::this_thread::sleep_for(2s);
	    system("cls");
    }
    cout<<"YOU ARE IN STUDENT SECTION!!!!!"<<endl;
    //cout<<"i am student"<<endl;
cout<<endl<<endl<<endl<<endl;
    cout<<"CONGRATULATIONS YOU HAVE SUBMITTED ALL THE ANSWERS!!!!"<<endl;
    cout<<"WAIT YOUR SCORE IS BEING CALCULATED......"<<endl<<endl<<endl<<endl<<endl<<endl;
    using namespace std::chrono_literals;
   std::this_thread::sleep_for(2s);
   if(score/lop>=0.33)
    cout<<"CONGRATULATIONS YOUR TOTAL SCORE IS == "<<(score/lop)*100<<endl;
    else
         cout<<"OOPS YOUR TOTAL SCORE IS == "<<(score/lop)*100<<endl;
    using namespace std::chrono_literals;
   std::this_thread::sleep_for(2s);
    system("cls");
    goto sanskriti;

    case 2:
       // cout<<"i am in case 2";
        string mc,mc1,mc2,answer2;
        fstream f5;
        fstream f6;
        fstream f7;
        vector<string> q;
        f5.open("q2.txt",ios::in);
        f6.open("ans2.txt",ios::in);
        f7.open("opt.txt",ios::in);
int total=0;
        while(getline(f5,mc) && getline(f6,mc1) && getline(f7,mc2))
        {
            total++;
            int cpoo=0,lopo=0;
            cpoo++;
            cout<<"YOU ARE IN STUDENT SECTION!!!!!"<<endl;
    //cout<<"i am student"<<endl;
cout<<endl<<endl;
            float poi=0;
            cout<<cpoo<<")"<<mc<<endl;
          //  cout<<mc2<<endl;
            string fg;
        fg=mc2[0];
        for(int z=1;z<mc2.length();z++)
        {
           /* if(mc2[z]=='/')
            {
                	int jj=0;

	for(int ii=0;ii<v.size();ii++)
	{
	    if(jj==0)

    {

	    jj= match(answer,v[ii],w);

    }
	    else
	    break;

	}
     v.clear();
            }*/
           if(mc2[z]!='-')
            {

                fg=fg+""+mc2[z];

            }
            else if(mc2[z]=='-')
                {
                    q.push_back(fg);


                      fg="";
                }



        }
        fg="";
        for(int yup=0;yup<q.size();yup++)
            cout<<yup+1<<")"<<q[yup]<<" ";
        cout<<endl<<endl<<endl;
         q.clear();
        string a[6];
        for(int po=0;po<6;po++)
            a[po]='0';


        fg=mc1[0];

        for(int z=1;z<mc1.length();z++)
        {
           /* if(mc2[z]=='/')
            {
                	int jj=0;

	for(int ii=0;ii<v.size();ii++)
	{
	    if(jj==0)

    {

	    jj= match(answer,v[ii],w);

    }
	    else
	    break;

	}
     v.clear();
            }*/
           if(mc1[z]!='-')
            {

                fg=fg+""+mc1[z];

            }
            else if(mc1[z]=='-')
                {
                    int ind;
                    ind=hash1(ascii(fg),a);
                 //    cout<<fg<<" " ;
                    a[ind]=fg;
                    poi=poi+1.0;
                    lopo++;

                      fg="";
                }



        }
        cout<<"ENTER THE NUMBER OF OPTIONS YOU WOULD LIKE TO GIVE::"<<endl;
        int iii,loi=0;
        cin>>iii;
        string jkl;
        cin.get();
         int ii=0;
        while(iii)
        {

            ii++;
            cout<<"ENTER OPTION "<<(ii)<<":"<<endl;
            cin>>jkl;
            search(a,jkl,loi);
            iii--;
        }
        cout<<"THE NUMBERS OF CORRECT ANSWERS ARE == "<<loi<<endl;
        cout<<"THE NUMBERS OF ANSWERS ACCEPTED ARE == "<<int(poi)<<endl;
//total=total+int(poi);
          score=score+(loi)/poi;
using namespace std::chrono_literals;
   std::this_thread::sleep_for(2s);
          system("cls");

    }
    cout<<"YOU ARE IN STUDENT SECTION!!!!!"<<endl;
    //cout<<"i am student"<<endl;
cout<<endl<<endl<<endl;
  cout<<"CONGRATULATIONS YOU HAVE SUBMITTED ALL THE ANSWERS!!!!"<<endl;
    cout<<"WAIT YOUR SCORE IS BEING CALCULATED......"<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    using namespace std::chrono_literals;
   std::this_thread::sleep_for(2s);
  // cout<<lop;
   if(score/total>=0.33)
    cout<<"CONGRATULATIONS YOUR TOTAL SCORE IS == "<<((score/total)*100)<<endl;
    else
         cout<<"OOPS YOUR TOTAL SCORE IS == "<<((score/total)*100)<<endl;
    score=0;
    using namespace std::chrono_literals;
   std::this_thread::sleep_for(2s);
    system("cls");
    goto sanskriti;


	}

}

int main()
{


    int k;
    hello:
          login();
         cout<<"PRESS 1 FOR FACULTY SECTION"<<endl;
    cout<<"PRESS 2 FOR STUDENT SECTION"<<endl;
    cin>>k;

    system("cls");
    switch(k)
    {
    case 1:
        clear();
        FACULTY();
        break;
    case 2:
        clear();
        student();
        break;
    default:
        cout<<"ENTER FROM THE TWO MENTIONED!!!!!"<<endl;
        goto hello;


    }

}

