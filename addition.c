void addition(int a,int b)
{
    int c,*ptr1,*ptr2;
    ptr1=&a;
    ptr2=&b;
    c=(*ptr1)+(*ptr2); //adding two pointers
printf("%d",c);
    
}
