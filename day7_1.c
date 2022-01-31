
void test(); // fucntion declaration

int main(void)
{
    test(); //function call
    test();
    test();
    return 0;
}

void test()
{
    int num=40; //local variable
    static int s_var=60; //static variable initialization
    // s_var=num; // NOT ALLOWED
    printf("\n Num : %d s_var : %d",num,s_var);
    num+=5;
    s_var+=5;
    printf("\n After Modification Num : %d s_var : %d",num,s_var);
}
