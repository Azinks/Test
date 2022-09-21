#include <stdio.h>
int mul()
{
    int z,x,y;
    printf("Enter Numbers\n");
    scanf("%d %d",&x,&y);
   return z=x*y;
}    
int sum(int t);
int sub();
int swap();
int prime();
int sum(int t)
{
    if(t>0)
    {
        return t + sum(t-1);
    }
        else
        {
            return 0;
        }
}

int prime()
{
    int i1,n1,t1,flag=0;
    printf("Enter The Number To Check Whether The Number Is Prime Or Not\n");
    scanf("%d",&n1);
    for(i1=2;i1<=n1;i1++)
    {
        if (n1%i1==0)
        {
            flag++;
        }
    }    
    if (flag==1)
    {
        printf("Number Is Prime\n");
    }  
    else
    {
        printf("Number Is Not Prime\n");
    }  
        return 0;
    
}
    
int main() 
{
    int z,v,k,r,tr,pr;
    printf("Enter Number To Sum\n");
    scanf("%d",&r);
   tr=swap();
   pr=prime();
   k=sum(r);
   z=mul();
   v=sub();
   printf("Sum Is %d\n",k);
   printf("Mul Is %d\n",z);
   printf("Sub Is %d\n",v);
   return 0;
}


int sub()
{
    int q,w,e;
    printf("Enter Numbers For Sub\n");
    scanf("%d %d",&w,&e);
    return q=w-e;
}

int swap()
{
    int m,l,f;
    printf("Enter The Value Of M\n");
    scanf("%d",&m);
    printf("Enter The Value Of L\n");
    scanf("%d",&l);
    f=m;
    m=l;
    l=f;
    printf("The Value Of M%d\n", m);
    printf("The Value Of L%d\n", l);
    return 0;

}
