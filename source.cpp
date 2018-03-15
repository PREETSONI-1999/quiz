#include<iostream>

using namespace std;
int counter =0;
int check (int a,int ca)
{
	  
	if (a==ca)
	counter++;
	else
	{
	counter=counter;}
	cout<<" \n YOUR SCORE IS " <<counter << "\n";
}
 int main ()
 {  int sr_no,ans,correct_ans;
 	cout<<"enter sr no \n1.phy \n2.chem \n3.GK";
 	cin>>sr_no;
 	switch(sr_no)
 	{
 		case 1:
 			cout<<"if wavelength of light is 100 A  ,pd for cons interference";
 			cout<<"\n1.200	2.210\n3.490	4.459";
 			cin>>ans;
 			correct_ans=1;
 		    check(ans,correct_ans);
 		 
 		    cout <<" \n "  <<"light is of form \n1.magnetic	2.electromagnetic\n3.triotic	4.biotic";
 		    cin>>ans;
 		    correct_ans=2;
 		    check(ans,correct_ans);  		
 		    break;
 		    
 		case 2:
 			cout<<"PVC stands for\n1.polyvax chloride	2.polyvolatile chloride\n3.polyvinyl chloride	4.polychloride \n";
 			cin>>ans;
 			correct_ans=3;
 			check(ans,correct_ans);
 			
 			cout<<"ideal gas equation is \n1.PR=Vn	2.TR=PnV\n3.PV=nRT	4.Pn=VRT";
 			cin>>ans;
 			correct_ans=3;
 			 check(ans,correct_ans);
 			
	}
	return 0;
 }
