#include<stdio.h>
using namespace std;


  int  top_indek=-1;

class stack
{

    public:
    int TOP();
    int s[1000], s1[1000],s2[1000];

    int SIZE();
   void PUSH(int x);
   void POP();


   void RESET();
};

    int stack::SIZE()
{
    return top_indek;

}
void stack::PUSH(int x)
{
    if(SIZE()==1000)
    {
        printf("stack overflowed!!");
        return;
    }

      s[++top_indek]=x ;
}

void stack::POP()
{
    if (SIZE()==0)
    {
        printf("stack underflowed!!");
        return ;
    }
    top_indek--;
}
int stack::TOP()
{
    if(SIZE()==0)
    {
        printf("stack is empty!!");
        return -1;


    }
    return s[top_indek];
}
void stack::RESET()
{
    top_indek=-1;
}
int main()
{
    class stack s,s1,s2;

        s.PUSH(3);
    s.PUSH(4);
    s.PUSH(3);
    s.POP();
    printf("%d %d",s.TOP(),s.SIZE());

        s1.PUSH(5);
        s1.PUSH(6);

    s1.POP();
    printf("\n%d %d",s1.TOP(),s1.SIZE());


    s2.PUSH(9);
    s2.PUSH(7);
    s2.PUSH(8);
    s2.POP();
    printf("\n%d %d",s2.TOP(),s2.SIZE());



    return 0;
}
