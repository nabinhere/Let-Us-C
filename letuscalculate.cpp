
/*"LET US CALCULATE 1.0", A mini calculator developed by :1.Adarsha Bohara
                                                          2.Nabindra Raj Shrestha and,
                                                          3.Anup Nepal
                                                          (ELECTRICAL DEPARTMENT, IOE, PULCHOWK CAMPUS.) */
 

#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#define PI 3.141592654




FILE *fb;
float answer()

{
	float z;
	fb=fopen("ABC.txt","r");
	fscanf(fb,"%f",&z);
	fclose(fb);
	return z;
}


float factorial(float n,float y)
{
   float fact=1;
   int i;
   for(i=1;i<=n;i++)
   {
   	   fact=fact*i;
   }
   	return fact;
}
float root(float x,float y)
{
	float z;
	z=pow(x,y);
	return z;
}
float logarith(int x,float y)
{
	float z;
	if(x==10)
	{
		z=log10(y);
	}
	else if(x==2)
	{
		z=log(y);
	}
	return z;
}
float power(float x,float y)
{
	float z;
	z=pow(x,y);
	return z;
}
float fact(float n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}

float permutation(float n,float r)
{
	if(n<r)
	{
		printf("Error!");
		exit(1);
 	
	}
	int i;
	int a=1,b=1;
	float c;
	for(i=1;i<=n;i++)
	{
		a=a*i;
	}
	
	for(i=1;i<=(n-r);i++)
	{
		b=b*i;
	}
	c=(float)a/b;
	return c;
	
}

float combination(float n,float r)
{
	if(n<r)
	{
		printf("Error!");
		exit(1);
	 
	}
	
	int i;
	int a=1,b=1,d=1,e;
	float c;
	for(i=1;i<=n;i++)
	{
		a=a*i;
	}
	
	for(i=1;i<=(n-r);i++)
	{
		b=b*i;
	}
	for(i=1;i<=r;i++)
	{
		d=d*i;
	}

	c=(float)a/(b*d);
	return c;
	
	
}

void two(); void exitt();
void normal();void linear();void calc();float fact(int);
void equation();void quad();void inst();void welcome();void x();
void trigono();
void exponent();
void logarithm();
void tenlog();
void natlog();
void sinn();
void coss();
void cosec();
void tann();
void sec();
void cot();
void matrix();
void Za();
int row,col,k; int a[30][30],b[30][30],c[30][30],m,n,p,q;
void addMatrix();
void subMatrix();
void multMatrix();
void transposeMatrix();
void Z();
void inverse();
float determinant(float [][25], float);
void cofactor(float [][25], float);
void transpose(float [][25], float [][25], float);
int main()

{
	
	
 system("cls");
welcome();
system("pause");
return 0;}
void x(){
system("cls");
    char s1[]="mode norm",s2[]="mode eqn",s3[]="mode mat",s4[]="mode trig",s5[]="mode exp",s6[]="mode log",s[10];
  D:  system("cls");gets(s);
  if(strcmp(s1,s)==0)
  normal();
  else if(strcmp(s2,s)==0)
    equation();
  else if(strcmp(s3,s)==0)
    matrix();
  else if(strcmp(s4,s)==0)
    trigono();
  else if(strcmp(s5,s)==0)
    exponent();
  else if(strcmp(s6,s)==0)
    logarithm();
  else
  {

    system("cls");
      printf("syntax error!\n");
      goto D;

  }
  }


void equation()
{
    char type;
    system("cls");
     printf("                                                                    --EQUATION MODE--\n");
     printf("1.aX+bY+c=0\n2.aX^2+bX+c=0\n3.Back\n");
     type=getch();
     switch(type)
     {
     case '1':
        linear();
        break;
     case '2':
        quad();
        break;
        case '3':
        	Z();
        	break;

     }
}
void linear()    //function to solve linear equation
{
    char s1[]="AC",s[10];
    float a1,a2,b1,b2,c1,c2,x,y;
    system("cls");
    printf("                                                             --LINEAR EQUATION MODE--\n");
    printf("a1=");
    scanf("%f",&a1);
    printf("b1=");
    scanf("%f",&b1);
    printf("c1=");
    scanf("%f",&c1);
    printf("a2=");
    scanf("%f",&a2);
    printf("b2=");
    scanf("%f",&b2);
    printf("c2=");
    scanf("%f",&c2);
    if(a1==a2&&b1==b2&&c1!=c2)
        printf("math error!");
        else if((a1==0||b2==0)&&(a2==0||b1==0))
            printf("math error!");
        else if(a1==a2&&b1==b2&&c1==c2)
            printf("too many solutions!");
    else
    {
         x=((b1*c2)-(b2*c1))/((a1*b2)-(a2*b1));
    y=((a1*c2)-(a2*c1))/((a2*b1)-(a1*b2));
    printf("X=%f\tY=%f\n",x,y);

    }
    scanf("%s",s);
    if(strcmp(s1,s)==0)
    {
      system("cls");
      equation();
    }
    else
    {
        printf("syntax error!");

    }
}
void quad()           //function to solve quadratic equation
{
     char s1[]="AC",s[10];
    float a,b,c,d,r1,r2,x;
    system("cls");
     printf("                                                                   --QUADRATIC EQUATION MODE--\n");
    printf("a=");
    scanf("%f",&a);
    printf("b=");
    scanf("%f",&b);
    printf("c=");
    scanf("%f",&c);
    d=sqrt((b*b)-(4*a*c));
    if((b*b-4*a*c)<0)
        printf("math error!");
    else
    {
        r1=(-b+d)/(2*a);
        r2=(-b-d)/(2*a);
        printf("\nX=%f\n =%f",r1,r2);
    }
     scanf("%s",s);
    if(strcmp(s1,s)==0)
    {
      system("cls");
      equation();
    }
    else
    {
        printf("syntax error!");

    }
}


    
    
    
    void trigono()
{
	
    char ch[40],s[10],s1[]="AC";
  int i,rem,j=5,m,ascisum=0; float sum=0.0,k=10.0;
  system("cls");
  printf("                                                                    mode:trig\n");
  gets(ch);
  for(i=0;ch[i]!='\0';i++)
  {
      if(ch[i]>=97&&ch[i]<=122)
      ascisum=ascisum+ch[i];
  }
  m=ascisum;
  switch(m)
  {
  case 330:
      for(i=0;ch[i]!='\0';i++)
  {
      if(ch[i]==46)
        j+=5;
      if(ch[i]>=48&&ch[i]<=57)
      {
          if(j==10)
        {
        sum=sum+((ch[i]-48)/k); k*=10.0;

      }
        else
         sum=sum*10+ch[i]-48;
  }

}
system("cls");
printf("%s=%f\n",ch,sin(PI*sum/180));
scanf("%s",s);
    if(strcmp(s1,s)==0)
    {
      system("cls");
      main();
    }
    else
    {
        printf("syntax error!");

    }
break;
  case 325://cos
          for(i=0;ch[i]!='\0';i++)
  {
      if(ch[i]==46)
        j+=5;
      if(ch[i]>=48&&ch[i]<=57)
      {
          if(j==10)
        {
        sum=sum+((ch[i]-48)/k); k*=10.0;

      }
        else
         sum=sum*10+ch[i]-48;
  }

}
system("cls");
printf("%s=%f\n",ch,cos(PI*sum/180));
scanf("%s",s);
    if(strcmp(s,s1)==0)
    {
      system("cls");
      main();
    }
    else
    {
        printf("syntax error!");

    }
break;

  case 323://tan
          for(i=0;ch[i]!='\0';i++)
  {
      if(ch[i]==46)
        j+=5;
      if(ch[i]>=48&&ch[i]<=57)
      {
          if(j==10)
        {
        sum=sum+((ch[i]-48)/k); k*=10.0;

      }
        else
         sum=sum*10+ch[i]-48;
  }

}
system("cls");
if((int)sum%90==0)
{
rem=(int)sum/90;
if(rem%2!=0)
    printf("math error!\n");
else
printf("%s=%f",ch,tan(PI*sum/180));
}
else
  printf("%s=%f",ch,tan(PI*sum/180));
scanf("%s",s);
    if(strcmp(s1,s)==0)
    {
      system("cls");
      main();
    }
    else
    {
        printf("syntax error!");

    }
break;

  case 315://sec
          for(i=0;ch[i]!='\0';i++)
  {
      if(ch[i]==46)
        j+=5;
      if(ch[i]>=48&&ch[i]<=57)
      {
          if(j==10)
        {
        sum=sum+((ch[i]-48)/k); k*=10.0;

      }
        else
         sum=sum*10+ch[i]-48;
  }

}
system("cls");
if((int)sum%90==0)
{
    if(((int)sum%90)%2==0)
        printf("%s=%f",ch,1/cos(PI*sum/180));
    else
        printf("math error!\n");
}
else
   printf("%s=%f",ch,1/cos(PI*sum/180));
scanf("%s",s);
    if(strcmp(s1,s)==0)
    {
      system("cls");
      main();
    }
    else
    {
        printf("syntax error!");

    }
break;
  case 525://cosec
          for(i=0;ch[i]!='\0';i++)
  {
      if(ch[i]==46)
        j+=5;
      if(ch[i]>=48&&ch[i]<=57)
      {
          if(j==10)
        {
        sum=sum+((ch[i]-48)/k); k*=10.0;

      }
        else
         sum=sum*10+ch[i]-48;
  }

}
system("cls");
if((int)sum%180==0)
    printf("math error!\n");
else
printf("%s=%f",ch,1/sin(PI*sum/180));
scanf("%s",s);
    if(strcmp(s1,s)==0)
    {
      system("cls");
      main();
    }
    else
    {
        printf("syntax error!");

    }
break;
  case 326://cot
          for(i=0;ch[i]!='\0';i++)
  {
      if(ch[i]==46)
        j+=5;
      if(ch[i]>=48&&ch[i]<=57)
      {
          if(j==10)
        {
        sum=sum+((ch[i]-48)/k); k*=10.0;

      }
        else
         sum=sum*10+ch[i]-48;
  }

}
system("cls");
if((int)sum%180==0)
    printf("math error!\n");
else
printf("%s=%f",ch,1/tan(PI*sum/180));
scanf("%s",s);
    if(strcmp(s1,s)==0)
    {
      system("cls");
      main();
    }
    else
    {
        printf("syntax error!");

    }
break;
  case 427://asin
             for(i=0;ch[i]!='\0';i++)
  {
      if(ch[i]==46)
        j+=5;
      if(ch[i]>=48&&ch[i]<=57)
      {
          if(j==10)
        {
        sum=sum+((ch[i]-48)/k); k*=10.0;

      }
        else
         sum=sum*10+ch[i]-48;
  }

}
system("cls");
if(sum<-1||sum>1)
    printf("math error!\n");
else
printf("%s=%f",ch,asin(sum)*180/PI);
scanf("%s",s);
    if(strcmp(s1,s)==0)
    {
      system("cls");
      main();
    }
    else
    {
        printf("syntax error!");

    }
      break;
  case 422://acos
            for(i=0;ch[i]!='\0';i++)
  {
      if(ch[i]==46)
        j+=5;
      if(ch[i]>=48&&ch[i]<=57)
      {
          if(j==10)
        {
        sum=sum+((ch[i]-48)/k); k*=10.0;

      }
        else
         sum=sum*10+ch[i]-48;
  }

}
system("cls");
if(sum<-1||sum>1)
    printf("math error!\n");
else
printf("%s=%f",ch,acos(sum)*180/PI);
scanf("%s",s);
    if(strcmp(s1,s)==0)
    {
      system("cls");
      main();
    }
    else
    {
        printf("syntax error!");

    }
      break;
  case 420://atan
            for(i=0;ch[i]!='\0';i++)
  {
      if(ch[i]==46)
        j+=5;
      if(ch[i]>=48&&ch[i]<=57)
      {
          if(j==10)
        {
        sum=sum+((ch[i]-48)/k); k*=10.0;

      }
        else
         sum=sum*10+ch[i]-48;
  }

}
system("cls");
printf("%s=%f",ch,atan(sum)*180/PI);
scanf("%s",s);
    if(strcmp(s1,s)==0)
    {
      system("cls");
      main();
    }
    else
    {
        printf("syntax error!");

    }
      break;
  case 412://asec
            for(i=0;ch[i]!='\0';i++)
  {
      if(ch[i]==46)
        j+=5;
      if(ch[i]>=48&&ch[i]<=57)
      {
          if(j==10)
        {
        sum=sum+((ch[i]-48)/k); k*=10.0;

      }
        else
         sum=sum*10+ch[i]-48;
  }

}
system("cls");
if(sum>=-1&&sum<=1)
    printf("math error!\n");
else
printf("%s=%f",ch,acos(1/sum)*180/PI);
scanf("%s",s);
    if(strcmp(s1,s)==0)
    {
      system("cls");
      main();
    }
    else
    {
        printf("syntax error!");

    }
      break;
  case 622://acosec
            for(i=0;ch[i]!='\0';i++)
  {
      if(ch[i]==46)
        j+=5;
      if(ch[i]>=48&&ch[i]<=57)
      {
          if(j==10)
        {
        sum=sum+((ch[i]-48)/k); k*=10.0;

      }
        else
         sum=sum*10+ch[i]-48;
  }

}
system("cls");
if(sum>=-1&&sum<=1)
    printf("math error!\n");
else
printf("%s=%f",ch,asin(1/sum)*180/PI);
scanf("%s",s);
    if(strcmp(s1,s)==0)
    {
      system("cls");
      main();
    }
    else
    {
        printf("syntax error!");

    }
      break;
  case 423://acot
            for(i=0;ch[i]!='\0';i++)
  {
      if(ch[i]==46)
        j+=5;
      if(ch[i]>=48&&ch[i]<=57)
      {
          if(j==10)
        {
        sum=sum+((ch[i]-48)/k); k*=10.0;

      }
        else
         sum=sum*10+ch[i]-48;
  }

}
system("cls");
printf("%s=%f",ch,atan(1/sum)*180/PI);
scanf("%s",s);
    if(strcmp(s1,s)==0)
    {
      system("cls");
      main();
    }
    else
    {
        printf("Error!!!");
    }
    default:
        break;
  }
}



    
    
    
    

void exponent()
{
    char s1[]="AC",s[10];
    double x,result;
    system("cls");
    printf("                                                                    --EXPONENTIAL MODE--\n");
    printf("e^");
    scanf("%lf",&x);
    result=exp(x);
    system("cls");
    printf("e^%lf=%lf\n",x,result);
      scanf("%s",s);
    if(strcmp(s1,s)==0)
    {
      system("cls");
      exponent();
    }
    else
    {
        printf("syntax error!");

    }

}
void logarithm()
{
   char choose;
    float x,result;

    printf("                                                                     --LOGARITHMIC MODE--\n");
    printf("1.log\n2.ln\n3.Exit\n");
    choose=getch();
    if(choose=='1')
    tenlog();
     else if(choose=='2')
        natlog();
        else if(choose=='3')
        welcome();
}

void tenlog()
{
     char s1[]="AC",s[10];
    float x;
    system("cls");
    printf("log");
    scanf("%f",&x);
    if(x==0||x<0)
        printf("\nmath error!");
    else
        {
            system("cls");
    printf("log%f==%f\n",x,log10(x));
        }
          scanf("%s",s);
    if(strcmp(s1,s)==0)
    {
      system("cls");
      logarithm();
    }
    else
    {
        printf("syntax error!");

    }
}
void natlog()
{
       char s1[]="AC",s[10];
    float x;
    system("cls");
    printf("ln");
    scanf("%f",&x);
    if(x==0||x<0)
        printf("\nmath error!");
    else
        {
            system("cls");
    printf("ln%f==%f\n",x,log(x));
        }
          scanf("%s",s);
    if(strcmp(s1,s)==0)
    {
      system("cls");
      logarithm();
    }
    else
    {
        printf("syntax error!");

    }
}
void sinn()
{
    char s1[]="AC",s[10];
    float x;
    system("cls");
    printf("sin");
    scanf("%f",&x);
    system("cls");
        printf("\nsin%f=%f\n",x,sin((PI*x)/180));
               scanf("%s",s);
    if(strcmp(s1,s)==0)
    {
      system("cls");
      trigono();
    }
    else
    {
        printf("syntax error!");

    }
}
void coss()
{
     char s1[]="AC",s[10];
    float x;
    system("cls");
    printf("cos");
    scanf("%f",&x);
    system("cls");
        printf("\ncos%f=%f\n",x,cos((PI*x)/180));
               scanf("%s",s);
    if(strcmp(s1,s)==0)
    {
      system("cls");
      trigono();
    }
    else
    {
        printf("syntax error!");

    }

}
void tann()
{
     char s1[]="AC",s[10];
    float x; int rem;
    system("cls");
    printf("tan");
    scanf("%f",&x);
    system("cls");
    rem=(int)x/90;
    if(rem%2!=0)
        printf("math error!\n");
    else
        {
        printf("\ntan%f=%f\n",x,tan((PI*x)/180));
        }
               scanf("%s",s);
    if(strcmp(s1,s)==0)
    {
      system("cls");
      trigono();
    }
    else
    {
        printf("syntax error!");

    }

}
void sec()
{
     char s1[]="AC",s[10];
    float x; int rem;
    system("cls");
    printf("sec");
    scanf("%f",&x);
    system("cls");
    rem=(int)x/90;
    if(rem%2==0)
        printf("\nsec%f=%f\n",x,1/cos((PI*x)/180));
        else
            printf("math error!\n");
               scanf("%s",s);
    if(strcmp(s1,s)==0)
    {
      system("cls");
      trigono();
    }
    else
    {
        printf("syntax error!");

    }

}
void cot()
{
     char s1[]="AC",s[10];
    float x;  int rem;
    system("cls");
    printf("cot");
    scanf("%f",&x);
    system("cls");
    rem=(int)x/90;
    if(rem%2==0)
        printf("math error!\n");
    else
        {
        printf("\ncot%f=%f\n",x,1/tan((PI*x)/180));
        }
               scanf("%s",s);
    if(strcmp(s1,s)==0)
    {
      system("cls");
      trigono();
    }
    else
    {
        printf("syntax error!");

    }

}
void cosec()
{
     char s1[]="AC",s[10];
    float x;
    system("cls");
    printf("cosec");
    scanf("%f",&x);
    system("cls");
    if(x==0||((int)x%180)==0)
    {
        printf("math error!\n");
    }
    else
    {
        printf("\ncosec%f=%f\n",x,1/sin((PI*x)/180));
    }
               scanf("%s",s);
    if(strcmp(s1,s)==0)
    {
      system("cls");
      trigono();
    }
    else
    {
        printf("syntax error!");

    }

}
void matrix()
{system("cls");
	{char r;
printf("                                            \t\t--MATRIX MODE--\n");
 printf("1.ADDITION\n2.SUBTRACTION\n3.MULTIPLICATION\n4.TRANSPOSE\n5.INVERSE\n6.Exit\n");
r=getch();
switch(r)
{
case '1':
addMatrix();
break;
case '2':
subMatrix();
break;
case '3':
multMatrix();
break;
case '4':
transposeMatrix();
break;
case '5':
 inverse();
 break;
 case '6':
 	Z();
 	break;
}
}}
void addMatrix()
{ system("cls");
printf("Enter the order of matrix A:\n");
scanf("%d%d",&m,&n);system("cls");
printf("Enter the order of matrix B:\n");
scanf("%d%d",&p,&q);system("cls");
while(m==p&&n==q){

	for(row=0;row<m;++row)
	{
		for(col=0;col<n;++col)
		{
			printf("\nEnter [%d][%d] element of matrix A: ",row+1,col+1);
			scanf("%d",&a[row][col]);
		}

	}
	for(row=0;row<p;++row)
	{
		for(col=0;col<q;++col)
		{
			printf("\nEnter [%d][%d] element of matrix B: ",row+1,col+1);
			scanf("%d",&b[row][col]);
		}


	}


          for(row=0;row<m;++row)
	{
		for(col=0;col<n;++col)
		{
			c[row][col]=a[row][col]+b[row][col];

		}
	}

 printf("\nSum of The Given Matrices:\n");
	for(row=0;row<m;++row)
	{
	   for(col=0;col<n;++col)
	{
	  printf("%d\t",c[row][col]);
	   }printf("\n\n");}break;}if(m!=p||n!=q){printf("\nINVALID CONDITION!!! Check ORDERS of the matrices\n");
	   }
Z();

}

void subMatrix()
{ system("cls");
int a[30][30],b[30][30],c[30][30],m,n,p,q;
printf("Enter the order of matrix A:\n");
scanf("%d%d",&m,&n);
printf("Enter the order of matrix B:\n");
scanf("%d%d",&p,&q);
while(m==p&&n==q){

	for(row=0;row<m;++row)
	{
		for(col=0;col<n;++col)
		{
			printf("\nEnter [%d][%d] element of matrix A: ",row+1,col+1);
			scanf("%d",&a[row][col]);
		}

	}
	for(row=0;row<p;++row)
	{
		for(col=0;col<q;++col)
		{
			printf("\nEnter [%d][%d] element of matrix B: ",row+1,col+1);
			scanf("%d",&b[row][col]);
		}


	}

          for(row=0;row<m;++row)
	{
		for(col=0;col<n;++col)
		{
			c[row][col]=a[row][col]-b[row][col];

		}
	}

 printf("\nDifference of The Given Matrices:\n");
	for(row=0;row<m;++row)
	{
	   for(col=0;col<n;++col)
	{
	  printf("%d\t",c[row][col]);
	   }printf("\n\n");}
	   break;
}
	   if(m!=p||n!=q)
	   {
	    printf("\nINVALID CONDITION!!!Check ORDERS of the matrices\n");
       }
       Z();
}

void multMatrix(){ system("cls");
int a[30][30],b[30][30],c[30][30],m,n,p,q;
printf("Enter the order of matrix A:\n");
scanf("%d%d",&m,&n);
printf("Enter the order of matrix B:\n");
scanf("%d%d",&p,&q);
while(n==p){

for(row=0;row<m;++row)
	{
		for(col=0;col<n;++col)
		{
			printf("\nEnter [%d][%d] element of matrix A: ",row+1,col+1);
			scanf("%d",&a[row][col]);
		}

	}
		for(row=0;row<p;++row)
	{
		for(col=0;col<q;++col)
		{
			printf("\nEnter [%d][%d] element of matrix B: ",row+1,col+1);
			scanf("%d",&b[row][col]);
		}


	}
	for(row=0;row<m;++row)
	{
		for(col=0;col<q;++col)
		{c[row][col]=0;
		for(k=0;k<n;++k)
		{
			c[row][col]+=a[row][k]*b[k][col];
		}
     	}
	}
	printf("\nThe product of the given matrices is:\n");
	for(row=0;row<m;++row)
	{
		for(col=0;col<q;++col)
		{
			printf("%d\t",c[row][col]);
		}
		printf("\n\n");
	}break;}if(n!=p)
{printf("INVALID CONDITION!!!Check ORDERS of the matrices\n");
	}
	Z();



}
void transposeMatrix()
{ system("cls");
  int m,n,a[30][30];
   printf("\nEnter the order of matrix to be transposed: ");
   scanf("%d%d",&m,&n);

	for(row=0;row<m;++row)
	{
		for(col=0;col<n;++col)
		{
			printf("\nEnter [%d][%d] element of the matrix: ",row+1,col+1);
			scanf("%d",&a[row][col]);
		}

	}

	printf("\nThe Matrix you entered is:\n\n");
	 for(row=0;row<m;++row)
	{
     	for(col=0;col<n;++col)
     	{

     		printf("%d\t",a[row][col]);
		 }
		 printf("\n\n");

	}
	printf("\nThe transpose of the above matrix is :\n\n");
		for(col=0;col<n;++col)
	{
           for(row=0;row<m;++row)
		{
			printf("%d\t",a[row][col]);
		}
		printf("\n\n");
	}Z();
}void inverse(){
	system("cls");

float a[25][25], k, d;
  int i, j;
 A : printf("Enter the order of the Matrix:");
  scanf("%f",&k);

  for (i = 0;i < k; i++)
    {
     for (j = 0;j < k; j++)
       { printf("Enter the element [%d][%d] of the matrix:",i+1,j+1);
        scanf("%f", &a[i][j]);
        }
    }
  d = determinant(a,k);
  if (d == 0)
   printf("\nInverse of Entered Matrix is not possible as its Determinant is 0\n");
  else
   cofactor(a, k);
}

float determinant(float a[25][25], float k)
{
  float s = 1, det = 0, b[25][25];
  int i, j, m, n, c;
  if (k == 1)
    {
     return (a[0][0]);
    }
  else
    {
     det = 0;
     for (c = 0; c < k; c++)
       {
        m = 0;
        n = 0;
        for (i = 0;i < k; i++)
          {
            for (j = 0 ;j < k; j++)
              {
                b[i][j] = 0;
                if (i != 0 && j != c)
                 {
                   b[m][n] = a[i][j];
                   if (n < (k - 2))
                    n++;
                   else
                    {
                     n = 0;
                     m++;
                     }
                   }
               }
             }
          det = det + s * (a[0][c] * determinant(b, k - 1));
          s = -1 * s;
          }
    }

    return (det);
}

void cofactor(float num[25][25], float f)
{
 float b[25][25], fac[25][25];
 int p, q, m, n, i, j;
 for (q = 0;q < f; q++)
 {
   for (p = 0;p < f; p++)
    {
     m = 0;
     n = 0;
     for (i = 0;i < f; i++)
     {
       for (j = 0;j < f; j++)
        {
          if (i != q && j != p)
          {
            b[m][n] = num[i][j];
            if (n < (f - 2))
             n++;
            else
             {
               n = 0;
               m++;
               }
            }
        }
      }
      fac[q][p] = pow(-1, q + p) * determinant(b, f - 1);
    }
  }
  transpose(num, fac, f);
}

void transpose(float num[25][25], float fac[25][25], float r)
{
  int i, j;
  float b[25][25], inverse[25][25], d;

  for (i = 0;i < r; i++)
    {
     for (j = 0;j < r; j++)
       {
         b[i][j] = fac[j][i];
        }
    }
  d = determinant(num, r);
  for (i = 0;i < r; i++)
    {
     for (j = 0;j < r; j++)
       {
        inverse[i][j] = b[i][j] / d;
        }
    }
   printf("\n\n\nThe inverse of matrix is : \n");

   for (i = 0;i < r; i++)
    {
     for (j = 0;j < r; j++)
       {
         printf("%.3f\t", inverse[i][j]);
        }
    printf("\n\n");
     } Z();}


 void normal()
		{
			



system("cls");
	FILE *fb;		
	 float a[20],z,d,F[20];
	 int i,j,m,n,r,l,c[20],k,G[20];
	 long int f=1;
	 char b[20];
	for(i=0,j=0;;i++,j++)
	 {
        
	 	scanf("%f",&a[i]);
	 	scanf(" %c",&b[j]);
	 	
	    if(b[j]=='!')
	    {
	    	
	    	a[i+1]=0;
	    	i++;

		}
		
		
	 	if(b[j]=='=')
	 	{
	 		break;
		}
	 }
	 m=i+1;
	 n=j;
	 
	 if(n==0)
	 {
	 	z=a[0];
	 	goto ans;
	 }
	 
	 for(i=0;i<n;i++)
	 {
	 	if(b[i]=='-')
	 	{
	 		b[i]='+';
	 		a[i+1]=0-a[i+1];
		 }
	 }
	 
	 
	 
	 
	 
	  
	 for(i=0;i<n;i++)
	 {
	 	c[i]=b[i];
	 }
	 


	if(b[0]=='A'&&j==1)
	{
		z=answer();
		printf("%f",z);
		main();
	}


	
	UVW:
	
	 	
	 for(i=0;i<n;i++)
	 {
	 	if(c[i]==108)
	 	{
	 		{
	 				z=logarith(a[i],a[i+1]);
	 			if(n<=1)
	 			{
	 				goto ans;
				 }
			 }
			 
	 		for(j=0;j<(m);j++)
	 		{
	 			F[j]=a[j];
			 }
			 for(j=0;j<n;j++)
			 {
			 	G[j]=c[j];
			 }
			 for(l=0,k=0;l<(m);)
			 {
			 	if(l<i)
			 	{
			 		a[k]=F[l];
			 		k++;
			 		l++;
				 }
				 if(l==i)
				 {
				 	a[k]=z;
				 	z=0;
				 	k++;
				 	l=l+2;
				 }
				 if(l>i)
				 {
				 	a[k]=F[l];
				 	k++;
				 	l++;
				 }
			 }
			 
			 for(l=0,k=0;l<(n);)
			 {
			 	if(l<i)
			 	{
			 		c[k]=G[l];
			 		k++;
			 		l++;
			     }
				 if(l==i)
				 {
				 	l++;
				 }
				 if(l>i)
				 {
				 	c[k]=G[l];
				 	k++;
				 	l++;
				 }
				 
			 }
			 n--;
			 m--;
			 goto UVW;
		 }
		 
	 }
	  



	uvw:
	
	 	
	 for(i=0;i<n;i++)
	 {
	 	if(c[i]==114)
	 	{
	 		{
	 				z=root(a[i],a[i+1]);
	 			if(n<=1)
	 			{
	 				goto ans;
				 }
			 }
			 
	 		for(j=0;j<(m);j++)
	 		{
	 			F[j]=a[j];
			 }
			 for(j=0;j<n;j++)
			 {
			 	G[j]=c[j];
			 }
			 for(l=0,k=0;l<(m);)
			 {
			 	if(l<i)
			 	{
			 		a[k]=F[l];
			 		k++;
			 		l++;
				 }
				 if(l==i)
				 {
				 	a[k]=z;
				 	z=0;
				 	k++;
				 	l=l+2;
				 }
				 if(l>i)
				 {
				 	a[k]=F[l];
				 	k++;
				 	l++;
				 }
			 }
			 
			 for(l=0,k=0;l<(n);)
			 {
			 	if(l<i)
			 	{
			 		c[k]=G[l];
			 		k++;
			 		l++;
				 }
				 if(l==i)
				 {
				 	l++;
				 }
				 if(l>i)
				 {
				 	c[k]=G[l];
				 	k++;
				 	l++;
				 }
				 
			 }
			 n--;
			 m--;
			 goto uvw;
		 }
		 
	 }
	  





	
	stu:
	
	 	
	 for(i=0;i<n;i++)
	 {
	 	if(c[i]==94)
	 	{
	 		{
	 				z=power(a[i],a[i+1]);
	 			if(n<=1)
	 			{
	 				goto ans;
				 }
			 }
			 
	 		for(j=0;j<(m);j++)
	 		{
	 			F[j]=a[j];
			 }
			 for(j=0;j<n;j++)
			 {
			 	G[j]=c[j];
			 }
			 for(l=0,k=0;l<(m);)
			 {
			 	if(l<i)
			 	{
			 		a[k]=F[l];
			 		k++;
			 		l++;
				 }
				 if(l==i)
				 {
				 	a[k]=z;
				 	z=0;
				 	k++;
				 	l=l+2;
				 }
				 if(l>i)
				 {
				 	a[k]=F[l];
				 	k++;
				 	l++;
				 }
			 }
			 
			 for(l=0,k=0;l<(n);)
			 {
			 	if(l<i)
			 	{
			 		c[k]=G[l];
			 		k++;
			 		l++;
				 }
				 if(l==i)
				 {
				 	l++;
				 }
				 if(l>i)
				 {
				 	c[k]=G[l];
				 	k++;
				 	l++;
				 }
				 
			 }
			 n--;
			 m--;
			 goto stu;
		 }
		 
	 }
	  






	str:
	
	 	
	 for(i=0;i<n;i++)
	 {
	 	if(c[i]==33)
	 	{
	 		{
	 				z=factorial(a[i],a[i+1]);
	 			if(n<=1)
	 			{
	 				goto ans;
				 }
			 }
			 
	 		for(j=0;j<(m);j++)
	 		{
	 			F[j]=a[j];
			 }
			 for(j=0;j<n;j++)
			 {
			 	G[j]=c[j];
			 }
			 for(l=0,k=0;l<(m);)
			 {
			 	if(l<i)
			 	{
			 		a[k]=F[l];
			 		k++;
			 		l++;
				 }
				 if(l==i)
				 {
				 	a[k]=z;
				 	z=0;
				 	k++;
				 	l=l+2;
				 }
				 if(l>i)
				 {
				 	a[k]=F[l];
				 	k++;
				 	l++;
				 }
			 }
			 
			 for(l=0,k=0;l<(n);)
			 {
			 	if(l<i)
			 	{
			 		c[k]=G[l];
			 		k++;
			 		l++;
			     }
				 if(l==i)
				 {
				 	l++;
				 }
				 if(l>i)
				 {
				 	c[k]=G[l];
				 	k++;
				 	l++;
				 }
				 
			 }
			 n--;
			 m--;
			 goto str;
		 }
		 
	 }
	  




	
	
	MNo:
	
	 	
	 for(i=0;i<n;i++)
	 {
	 	if(c[i]==112)
	 	{
	 		{
	 				z=permutation(a[i],a[i+1]);
	 			if(n<=1)
	 			{
	 				goto ans;
				 }
			 }
			 
	 		for(j=0;j<(m);j++)
	 		{
	 			F[j]=a[j];
			 }
			 for(j=0;j<n;j++)
			 {
			 	G[j]=c[j];
			 }
			 for(l=0,k=0;l<(m);)
			 {
			 	if(l<i)
			 	{
			 		a[k]=F[l];
			 		k++;
			 		l++;
				 }
				 if(l==i)
				 {
				 	a[k]=z;
				 	z=0;
				 	k++;
				 	l=l+2;
				 }
				 if(l>i)
				 {
				 	a[k]=F[l];
				 	k++;
				 	l++;
				 }
			 }
			 
			 for(l=0,k=0;l<(n);)
			 {
			 	if(l<i)
			 	{
			 		c[k]=G[l];
			 		k++;
			 		l++;
				 }
				 if(l==i)
				 {
				 	l++;
				 }
				 if(l>i)
				 {
				 	c[k]=G[l];
				 	k++;
				 	l++;
				 }
				 
			 }
			 n--;
			 m--;
			 goto MNo;
		 }
		 
	 }
	  
	
	mnO:
	
	 	
	 for(i=0;i<n;i++)
	 {
	 	if(c[i]==99)
	 	{
	 		{
	 				z=combination(a[i],a[i+1]);
	 			if(n<=1)
	 			{
	 				goto ans;
				 }
			 }
			 
	 		for(j=0;j<(m);j++)
	 		{
	 			F[j]=a[j];
			 }
			 for(j=0;j<n;j++)
			 {
			 	G[j]=c[j];
			 }
			 for(l=0,k=0;l<(m);)
			 {
			 	if(l<i)
			 	{
			 		a[k]=F[l];
			 		k++;
			 		l++;
				 }
				 if(l==i)
				 {
				 	a[k]=z;
				 	z=0;
				 	k++;
				 	l=l+2;
				 }
				 if(l>i)
				 {
				 	a[k]=F[l];
				 	k++;
				 	l++;
				 }
			 }
			 
			 for(l=0,k=0;l<(n);)
			 {
			 	if(l<i)
			 	{
			 		c[k]=G[l];
			 		k++;
			 		l++;
			     }
				 if(l==i)
				 {
				 	l++;
				 }
				 if(l>i)
				 {
				 	c[k]=G[l];
				 	k++;
				 	l++;
				 }
				 
			 }
			 n--;
			 m--;
			 goto mnO;
		 }
		 
	 }
	  
	
	
	XYZ:
	
	 	
	 for(i=0;i<n;i++)
	 {
	 	if(c[i]==47)
	 	{
	 		{
	 			if(a[i+1]==0)
	 			{
	 				printf("math error!");
	 				Za();
				 }
	 				z=a[i]/a[i+1];
	 			if(n<=1)
	 			{
	 				goto ans;
				 }
			 }
			 
	 		for(j=0;j<(m);j++)
	 		{
	 			F[j]=a[j];
			 }
			 for(j=0;j<n;j++)
			 {
			 	G[j]=c[j];
			 }
			 for(l=0,k=0;l<(m);)
			 {
			 	if(l<i)
			 	{
			 		a[k]=F[l];
			 		k++;
			 		l++;
				 }
				 if(l==i)
				 {
				 	a[k]=z;
				 	z=0;
				 	k++;
				 	l=l+2;
				 }
				 if(l>i)
				 {
				 	a[k]=F[l];
				 	k++;
				 	l++;
				 }
			 }
			 
			 for(l=0,k=0;l<(n);)
			 {
			 	if(l<i)
			 	{
			 		c[k]=G[l];
			 		k++;
			 		l++;
				 }
				 if(l==i)
				 {
				 	l++;
				 }
				 if(l>i)
				 {
				 	c[k]=G[l];
				 	k++;
				 	l++;
				 }
				 
			 }
			 n--;
			 m--;
			 goto XYZ;
		 }
		 
	 }
	  
	 
	 ABC:
	 
	 	
	 for(i=0;i<n;i++)
	 {
	 	if(c[i]==42)
	 	{
	 		{
	 				z=a[i]*a[i+1];
	 			if(n<=1)
	 			{
	 				goto ans;
				 }
			 }
			 
	 		for(j=0;j<(m);j++)
	 		{
	 			F[j]=a[j];
			 }
			 for(j=0;j<n;j++)
			 {
			 	G[j]=c[j];
			 }
			 for(l=0,k=0;l<(m);)
			 {
			 	if(l<i)
			 	{
			 		a[k]=F[l];
			 		k++;
			 		l++;
				 }
				 if(l==i)
				 {
				 	a[k]=z;
				 	z=0;
				 	k++;
				 	l=l+2;
				 }
				 if(l>i)
				 {
				 	a[k]=F[l];
				 	k++;
				 	l++;
				 }
			 }
			 
			 for(l=0,k=0;l<(n);)
			 {
			 	if(l<i)
			 	{
			 		c[k]=G[l];
			 		k++;
			 		l++;
				 }
				 if(l==i)
				 {
				 	l++;
				 }
				 if(l>i)
				 {
				 	c[k]=G[l];
				 	k++;
				 	l++;
				 }
				 
			 }
			 n--;
			 m--;
			 goto ABC;
		 }
		 
	 }
	  
	 DEF:
	 

	 
	 	
	 for(i=0;i<n;i++)
	 {
	 	if(c[i]==43)
	 	{
	 		{
	 				z=a[i]+a[i+1];
	 			if(n<=1)
	 			{
	 				goto ans;
				 }
			 }
			 
	 		for(j=0;j<(m);j++)
	 		{
	 			F[j]=a[j];
			 }
			 for(j=0;j<n;j++)
			 {
			 	G[j]=c[j];
			 }
			 for(l=0,k=0;l<(m);)
			 {
			 	if(l<i)
			 	{
			 		a[k]=F[l];
			 		k++;
			 		l++;
				 }
				 if(l==i)
				 {
				 	a[k]=z;
				 	z=0;
				 	k++;
				 	l=l+2;
				 }
				 if(l>i)
				 {
				 	a[k]=F[l];
				 	k++;
				 	l++;
				 }
			 }
			 
			 for(l=0,k=0;l<(n);)
			 {
			 	if(l<i)
			 	{
			 		c[k]=G[l];
			 		k++;
			 		l++;
				 }
				 if(l==i)
				 {
				 	l++;
				 }
				 if(l>i)
				 {
				 	c[k]=G[l];
				 	k++;
				 	l++;
				 }
				 
			 }
			 n--;
			 m--;
			 goto DEF;
		 }
		 
	 }
	  
	 /**
	 IJK:
	 
	 	
	 for(i=0;i<n;i++)
	 {
	 	if(c[i]==45)
	 	{
	 		{
	 				z=a[i]-a[i+1];
	 			if(n<=1)
	 			{
	 				goto ans;
				 }
			 }
			 
	 		for(j=0;j<(m);j++)
	 		{
	 			F[j]=a[j];
			 }
			 for(j=0;j<n;j++)
			 {
			 	G[j]=c[j];
			 }
			 for(l=0,k=0;l<(m);)
			 {
			 	if(l<i)
			 	{
			 		a[k]=F[l];
			 		k++;
			 		l++;
				 }
				 if(l==i)
				 {
				 	a[k]=z;
				 	z=0;
				 	k++;
				 	l=l+2;
				 }
				 if(l>i)
				 {
				 	a[k]=F[l];
				 	k++;
				 	l++;
				 }
			 }
			 
			 for(l=0,k=0;l<(n);)
			 {
			 	if(l<i)
			 	{
			 		c[k]=G[l];
			 		k++;
			 		l++;
				 }
				 if(l==i)
				 {
				 	l++;
				 }
				 if(l>i)
				 {
				 	c[k]=G[l];
				 	k++;
				 	l++;
				 }
				 
			 }
			 n--;
			 m--;
			 goto IJK;
		 }
		 
	 }
	  
	 */
	 
	 
	 
	 
	 ans:
	 {
	 	printf("\n%f",z); 
	 }
	
	{
		fb=fopen("ABC.txt","w");
	 	fprintf(fb,"%f",z);
	 	fclose(fb);
	}
	
	 Za();
	 
	
	 			
			
			
}


    void Z()
{
 char x;
	printf("\nPress B to go back:\nPress Q to Exit\n");
	S:
x=getch();
if(x=='B'||x=='b')
main();
else if(x=='Q'||x=='q')
{
	exit(0);
}
else
{
	printf("\nMake a valid Entry!!\n");goto S;
}

}


 void Za()
{
 char x;
	printf("\nPress R to type expression:\nPress B to go back:\nPress Q to Exit\n");
	S:
x=getch();
if(x=='B'||x=='b')
main();
else if(x=='Q'||x=='q')
{
	exit(0);
}
else if(x=='R'||x=='r')
{
	normal();
}
else
{
	printf("\nMake a valid Entry!!\n");goto S;
}

}
void inst()
{
system("cls");
 printf("                                                  \n\t\t\t\t		       LET US CALCULATE 1.0\n");

	printf("\nINSTRUCTIONS:\n");
	printf("\nType the following commands to enter the respective mode\n");
	printf("\n___________________________________\n");
	printf("| COMMANDS   |   CALCULATOR MODES  |\n");
	printf("|____________|_____________________|\n");
	printf("| mode norm  |   NORMAL MODE       |\n");
	printf("| mode trig  |   TRIGONOMETRY MODE |\n");
	printf("| mode exp   |   EXPONENTIAL MODE  |\n");
	printf("| mode eqn   |   EQUATION MODE     |\n");
	printf("| mode log   |   LOGARITHMIC MODE  |\n");
	printf("| mode mat   |   MATRIX MODE       |\n");
	printf("------------------------------------\n");
	printf("\n->In the normal mode, simply type the expression and press = followed by hitting ENTER.\n->Same for the other modes also.\n");
	
	
	Z();

	}

	void welcome()
	{system("cls");
	int f;

		printf("\n>> GOTO CALCULATOR\n   READ INSTRUCTIONS\n   Exit\n");
		f=getch();
		if(f==50){
			two();
		} else if(f==53){
			x();
		}else if(f==56)
		{
			exitt();
		}else {
			exit(1);
		}


	}
	void two(){
		int x;
	system("cls");	
	printf("\n   GOTO CALCULATOR\n>> READ INSTRUCTIONS\n   Exit\n");
		x=getch();
		if(x==50){
			exitt();
		} else if(x==56)
		{
			welcome();
		}else if(x==53)
		{
			inst();
		}
	}
void exitt()
{  int x;
	system("cls");
	printf("\n   GOTO CALCULATOR\n   READ INSTRUCTIONS\n>> Exit\n");
	x=getch();
	if(x==50)
{
	welcome();
}else if(x==56)
{
	two();
}else if(x==53)
{
	exit(1);
}
}


