#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
int i,j;

int g()
{
         for(i=0;i<1;i++)
   {

    for(j=0;j<2;j++)
    {

    printf("@",j);
    }
   }

for(i=0;i<3;i++)
   {
       for(j=0;j<1;j++)
       {

        printf("0",i);
       }
  printf("\n");
   }
for(i=0;i<1;i++)
{
    for(j=0;j<1;j=j+2)
    {
        printf("        #");
    }
    printf("\n");
}

       for(i=0;i<3;i++)
   {
       for(j=0;j<1;j++)
       {

        printf("*     &    *",i);
       }
  printf("\n");
   }
     for(i=0;i<1;i++)
   {

    for(j=0;j<6;j++)
    {

    printf("=",j);
    }
   }

}

int a()
{
        for(i=0;i<1;i++)
   {

    for(j=0;j<7;j++)
    {

    printf("7",j);
    }
   }
printf("\n");
for(i=0;i<2;i++)
   {
       for(j=0;j<1;j++)
       {

        printf("5",i);
        printf("     3");
       }
  printf("\n");
   }


for(i=0;i<7;i++)
   {
       for(j=3;j<4;j++)
       {

        printf("u",i);

       }
       }
       printf("\n");
       for(i=0;i<2;i++)
   {
       for(j=0;j<1;j++)
       {

        printf("k",i);
        printf("     k");
       }
  printf("\n");
   }

}
int b()
{
   for(i=0;i<1;i++)
   {

    for(j=0;j<5;j++)
    {

    printf("b",j);
    }
   }
printf("\n");
 for(i=0;i<2;i++)
   {
       for(j=0;j<1;j++)
       {

        printf("b",i);
        printf("    b",i);
       }
  printf("\n");
   }
      for(i=0;i<1;i++)
   {

    for(j=0;j<5;j++)
    {

    printf("b",j);
    }
   }
printf("\n");
 for(i=0;i<2;i++)
   {
       for(j=0;j<1;j++)
       {

        printf("b",i);
        printf("    b",i);
       }
  printf("\n");
   }
   for(i=0;i<5;i++)
   {
       for(j=4;j<5;j++)
       {

        printf("b",i);
       }

}
}
int cc()
{
       for(i=0;i<1;i++)
   {

    for(j=0;j<5;j++)
    {

    printf("C",j);
    }
   }

 for(i=0;i<6;i++)
   {
       for(j=0;j<1;j++)
       {

        printf("C",i);
       }
  printf("\n");
   }
   for(i=0;i<6;i++)
   {
       for(j=4;j<5;j++)
       {

        printf("C",i);
       }

}
}
int d()
{
        for(i=0;i<1;i++)
   {

    for(j=0;j<6;j++)
    {

    printf("D",j);
    }
   }
printf("\n");
 for(i=0;i<6;i++)
   {
       for(j=0;j<1;j++)
       {

        printf("  D",i);
        printf("  D",i);
       }
  printf("\n");
   }
   for(i=0;i<6;i++)
   {
       for(j=4;j<5;j++)
       {

        printf("D",i);
       }

}
}
int e()
{
    for(i=0;i<1;i++)
   {

    for(j=0;j<5;j++)
    {

    printf("E",j);
    }
   }

for(i=0;i<3;i++)
   {
       for(j=0;j<1;j++)
       {

        printf("E",i);
       }
  printf("\n");
   }


for(i=0;i<4;i++)
   {
       for(j=3;j<4;j++)
       {

        printf("E",i);
       }}
       for(i=0;i<3;i++)
   {
       for(j=0;j<1;j++)
       {

        printf("E",i);
       }
  printf("\n");
   }
     for(i=0;i<1;i++)
   {

    for(j=0;j<6;j++)
    {

    printf("E",j);
    }
   }
}
int f()
{
     for(i=0;i<1;i++)
   {

    for(j=0;j<5;j++)
    {

    printf("F",j);
    }
   }

for(i=0;i<3;i++)
   {
       for(j=0;j<1;j++)
       {

        printf("F",i);
       }
  printf("\n");
   }


for(i=0;i<4;i++)
   {
       for(j=3;j<4;j++)
       {

        printf("F",i);
       }}
       for(i=0;i<3;i++)
   {
       for(j=0;j<1;j++)
       {

        printf("F",i);
       }
  printf("\n");
   }

}
int h()
{
    int i,j,k;

     for(i=0;i<1;i++)
   {

    for(j=0;j<2;j++)
    {

    printf("H",j);
    printf("    H",j);printf("\n");
    }
   }
   for(i=0;i<1;i++)
   {
       for(j=0;j<6;j++)
       {

        printf("H",j);
       }
  printf("\n");
   }
     for(i=0;i<1;i++)
   {

    for(j=0;j<2;j++)
    {

    printf("H",j);
    printf("    H",j);printf("\n");
    }
   }
}


int ii()
{

  for(i=0;i<6;i++)
   {
       for(j=0;j<1;j++)
       {

        printf("I",i);
       }
  printf("\n");
}
}
int jj()
{
       for(i=0;i<1;i++)
{

    for(j=0;j<5;j++)
    {

    printf("  J",j);
    printf("\n");

    if(j==4)
    {


        printf("JJ");

    }}
}
}
int kk()
{
   for(i=3;i>=0;i--)
   {
        printf("K");
       for(j=0;j<i;j++)
       {

           printf(" ");
       }
       printf("K");
       printf("\n");
   }
      for(i=0;i<=3;i++)
   {
        printf("K");
       for(j=0;j<i;j++)
       {

           printf(" ");
       }
       printf("K");
       printf("\n");
   }
}
int ll()
{
    for(i=0;i<6;i++)
   {
       for(j=0;j<1;j++)
       {

        printf("L",i);
       }
  printf("\n");
   }
   for(i=0;i<1;i++)
   {

    for(j=0;j<5;j++)
    {

    printf("L",j);
    }
   }

}
int main()
{
    int k,l,m,n,w,q;
  char c[12],y[100]={' '};
  puts("enter a character form A-L");
  scanf("%s",c);
  system("cls");
  printf("enter how much time u want to run loop");
  scanf("%d",&q);
  system("cls");
  printf("welcome to looping ");
  printf(".");
  Sleep(1000);
  printf(".");
   Sleep(1000);
printf(".");
     Sleep(1000);
  printf(".");
     Sleep(1000);
  system("cls");
  for(w=0;w<q;w++){
  for(m=0;m<50;m++){
         for(n=0;n<m;n++){

             printf("\n%c%c",y[n],y[n]);}
             printf("\n");
for(k=0;k<strlen(c);k++)
  {
      if(c[k]=='a'|| c[k]=='A')

        {
          a();
printf("\n");
        continue;

     }
        if(c[k]=='b' ||c[k]== 'B')
        {
         b();
printf("\n");

         continue;
        }

         if(c[k]=='c'||c[k]== 'C')

        {
            cc();
printf("\n");
             continue;
        }

        if(c[k]=='d' ||c[k]== 'D')
        {
         d();
printf("\n");
          continue;
        }
         if(c[k]=='e' || c[k]=='E')

        {
         e();
printf("\n");
           continue;
        }

        if(c[k]=='f' || c[k]=='F')
        {
          f();
printf("\n");
          continue;

        }
        if(c[k]=='g' || c[k]=='G')
        {
            g();
            printf("\n");
            continue;
        }
        if(c[k]=='h' || c[k]=='H')
        {
            h();
            printf("\n");
            continue;
        }
          if(c[k]=='i' || c[k]=='I')

        {
          ii();
printf("\n");
           continue;
        }
        if(c[k]=='j' || c[k]=='J')
        {
            jj();
            printf("\n");
            continue;
        }
        if(c[k]=='k' || c[k]=='K')
        {
            kk();
            printf("\n");
            continue;
        }
        if(c[k]=='l' || c[k]=='L')
        {
            ll();
            printf("\n");
            continue;
        }

  }
  system("cls");

}}


{

}
system("cls");
printf("                                                                                    THANK YOU!!!");
Sleep(500);
system("cls");
printf("                                                                                   ...........HAVE A NICE DAY.............");
}
