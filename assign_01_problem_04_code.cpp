//mohamed hamdy
//20216531
int main()
{
    int a,b,c,sum;
sum = a + b + c;
cin>>a>>b>>c;
int largest = max(a,max(b,c));
int smallest = min(a,min(b,c));
int middle = (a + b + c) - smallest - largest;
cout<<smallest<<endl;
cout<<middle<<endl;
cout<<largest<<endl;
cout<<endl;
cout<<a<<endl;
cout<<b<<endl;
cout<<c<<endl;
    return 0;
