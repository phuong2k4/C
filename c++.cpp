#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#include<cstring>
using namespace std;

#define ll long long

//#include<stdio.h>
//
//int main()
//{
//	FILE * ft = NULL;
//	char c;
//	
//	ft = fopen("file.txt","r");
//	
//	while ((c=fgetc(ft)) != EOF)
//	{
//		printf("%c",c);
//	}
//	fclose(ft);
//}





////////////////////////////////////////////////////////////////////////////////
//sang so nguyen to
//int prime[1000000];
//
//void checkPrime()
//{
//	
//	for(int i =0;i<=1000000;i++)
//	{
//		prime[i]=1;
//	}
//	prime[0]=prime[1]=0;
//	for(int i =2;i<=1000;i++)
//	{
//		if(prime[i]==1)
//		{
//			for(int j =i*i ;j<=1000000;j+=i)
//			{
//				prime[j]=0;
//			}
//		}
//	}
//}
//int main()
//{
//	int n;
//	cin>>n;
//	checkPrime();
//	for(int i =2 ;i<=n;i++)
//	{
//		if(prime[i])
//		{
//			cout << i;
//		}
//	}
//	return 0;
//}


////////////////////////////////////////////////////////////////////////////////
//kiem tra so nguyen to

//int checkPrime(int n)
//{
//	int cnt=0;
//	for(int i = 1;i<=n;i++)
//	{
//		if(n%i==0)
//		{
//			++cnt;
//		}
//		if(cnt==2)
//		{
//			return 0; 
//		}else{
//			return 1;
//		}
//	}
//	
//}
//
//int main()
//{
//	int n;
//	cin>>n;
//	checkPrime(n)?printf("yes"):printf("no");
//	return 0;
//}


////////////////////////////////////////////////////////////////////////////////
//sang so nguyen to tren doan

//int max(int a,int b)
//{
//	if(a>b)
//	{
//		return a;
//	}else{
//		return b;
//	}
//}
//void prime(int l, int r)
//{
//	int element[r-l+1];
//	
//	for(int i = 0;i<=r-l+1;i++)
//	{
//		element[i]=1;
//	}
//	
//	for(int i =2;i<=r/2;i++)
//	{
//		for(int j = max(i*i,(l+i-1)/i*i);j<=r;j+=i)
//		{
//			element[j-l]=0;
//		}
//	}
//	for(int i = max(l,2);i<=r;i++)
//	{
//		if(element[i-l])
//		{
//			cout<< i << " ";
//		}
//	}
//}
//
//int main()
//{
//	int l,r;
//	cin>>l>>r;
//	prime(l,r);
//}


//////////////////////////////////////////////////////////////////////////////
//sang so nguyen to
//int numprime[1000001];
//void prime()
//{
//	for(int i=0;i<=1000000;i++)
//	{
//		numprime[i]=1;
//	}
//	numprime[0] = numprime[1]=0;
//	
//	for(int i =2;i<= 1000;i++)
//	{
//		if(numprime[i]==1)
//		{
//			for(int j=i*i;j<=1000000;j+=i)
//			{
//				numprime[j]=0;
//			}
//		}
//		
//	}
//}
//
//int main()
//{
//	prime();
//	int element;
//	cin>>element;
//	for(int i = element ;i>=0;i--)
//	{
//		int num;
//		cin>>num;
//
//		if(numprime[num])
//		{
//			cout<<"YES" << " ";
//		}
//		else{
//			cout<<"NO" << " ";
//		}
//	}
//	return 0;
//}


//////////////////////////////////////////////////////////////////////////////

//int prime(int n)
//{
//	for(int i=2;i<=n/2;i++)
//	{
//		if(n%i==0)
//		{
//			return 0;
//		}
//	}
//	return n>1;
//}

/////////////////////
//so nguyen to va chu so nguyen to
//int prime[1000000];
//void sieveprime()
//{
//	for(int i =0;i<=1000000;i++)
//	{
//		prime[i]=1;
//	}
//	prime[0]=prime[1]=0;
//	for(int i =2;i<=1000;i++)
//	{
//		if(prime[i])
//		{
//			for(int j =i*i;j<=1000000;j+=i)
//			{
//				prime[j]=0;
//			}
//		}
//	}
//}
//int digit(int n)
//{
//	while(n)
//	{
//		int r = n%10;
//		if(r!=2 && r!=3 && r!=5 && r!=7)
//		{
//			return 0;
//			
//		}
//		n/=10;
//	}
//	return 1;
//}
//
//int main()
//{
//	int numofdigt;
//	sieveprime();
//	cin>>numofdigt;
//	while(numofdigt--)
//	{
//		int num1,num2;
//		cin>>num1>>num2;
//		int cnt =0;
//		for(int j=num1;j<=num2;j++)
//		{
//			if(prime[j] && digit(j))
//			{
//				cnt++;
//			}	
//		}
//		cout<< cnt <<endl;
//	}
//	
//	return 0;
//}

////////////////////////////////////////////////////////////////////////////////
//cac so nguyen to theo thu tu

//int prime(int n)
//{
//	for(int i =2;i<=n/2;i++)
//	{
//		if(n%i==0)
//		{
//			return 0;
//		}
//	}
//	return n>1;
//}
//
//int main()
//{
//	int digit;
//	cin>> digit;
//	int n=0;
//	for(int i =0;i<digit;n++)
//	{
//		if(prime(n))
//		{
//			cout << n << endl; 
//			i++;
//		}
//		
//		
//	}
////////////////////////////////
////	int cnt =0;
////	while(cnt<digit)
////	{
////		if(prime(n))
////		{
////			cout<<n <<endl;
////			cnt++;
////		}
////		n++;
////	}
//	return 0;
//}



/////////////////////////////////////////////////////////////////////////////////////////
//cặp số nguyên tố có tổng bằng N
	
//int prime[10001];
//void sieve()
//{
//	for(int i=0; i<=10000;i++)
//	{
//		prime[i]=1;
//	}
//	prime[0]=prime[1]=0;
//	
//	for(int i =2;i<=100;i++)
//	{
//		if(prime[i])
//		{
//			for(int j=i*i;j<=10000;j+=i)
//			{
//				prime[j]=0;
//			}
//		}
//	}
//}
//int main ()
//{
//	int num;
//	cin>>num;
//	sieve();
//	while (num--)
//	{
//		int n;
//		cin>>n;
//		for(int i=2;i<n/2;i++)
//		{
//			if(prime[i] && prime[n-i])
//			{
//				cout<<i<<" "<<n-i<<endl;
//			}
//		}
//	}
//	return 0;
//}


//////////////////////////////////////////////////////////////////////////////////////////
//so thuan nguyen to 
//int prime(int n)
//{
//	for(int i =2;i<=n/2;i++)
//	{
//		if(n%i==0)return 0;
//	}
//	return n>1;
//}
//
//int csnt(int n)
//{
//	while(n)
//	{
//		int r = n %10;
//		if(r!=2&&r!=3&&r!=5&&r!=7)
//		{
//			return 0;
//			
//		}
//		n/=10;	
//	}
//	return 1;
//}
//
//int tongnt(int n)
//{
//	int sum=0;
//	while (n)
//	{
//		sum+=n%10;
//		n/=10;
//	}
//	return prime(sum);
//}
//
//int main()
//{
//	int n;
//	cin>> n;
//
//	while(n--)
//	{
//		int a,b;
//		cin>>a>>b;
//		int cnt=0;
//		for(int i =a;i<=b;i++)
//		{
//			if(csnt(i)&&prime(i)&&tongnt(i))
//			{
//				cnt++;
//			}
//		}
//		cout<< cnt<<endl;
//	}
//	
//	return 0;	
//}


////////////////////////////////////////////////////////////////////////////////////////////
//cap so nguyen to cung nhau

//int uc(int a,int b)
//{
//	if(b==0)return a;
//	return uc(b,a%b);
//}

//int main()
//{
//	int m,n;
//	cin>> n>>m;
//	
//	for(int i =n;i<=m;i++)
//	{
//		for(int j =i+1;j<=m;j++)
//		{
//			if(uc(i,j)==1)
//			{
//				cout<<"(" << i<< ")" <<" "<< "("<<j << ")" << endl;
//			}
//		}
//	}
//}


/////////////////////////////////////////////////////////////////////////////////////////////
//so co 3 uoc so la so nguyen to

//int tprime(int n)
//{
//	int cnt =0;
//	
//	for(int i = 1;i<=n;i++)
//	{
//		if(n%i==0)
//		{
//			cnt++;
//		}
//	}	
//	if(cnt==3)
//	{
//		return 1;
//	}
//	return 0;
//}

//int prime[1001];
//void sieve()
//{
//	for (int i =0 ;i<=1000;i++)
//	{
//		prime[i]=1;
//	}
//	prime[0]=prime[1]=0;
//	for(int i=2;i<=sqrt(1000);i++)
//	{
//		if(prime[i])
//		{
//			for(int j =i*i;j<=1000;j+=i)
//			{
//				prime[j]=0;
//			}
//		}
//	}
//}
//int main()
//{
//	sieve();
//	int num;
//	cin>>num;
//	while (num--)
//	{
//		int n;
//		cin>>n;
//		for(int i =1;i<=sqrt(n);i++)
//		{
//			if(prime[i])
//			{
//				cout << i*i<< endl;
//			}
//		}
//	}
//}


////////////////////////////////////////////////////////////////////////////////////
//uoc so nguyen to nho hon n

//int find(int n)
//{
//	for(int i = 2; i<= sqrt(n);i++)
//	{
//		if(n%i==0)
//		{
//			return i;
//		}
//	}
//	return n;
//}
//
//int find2(int n)
//{
//	if(n==1)return 1;
//	if(n%2==0)return 2;
//	for(int i =3 ;i<=n;i+=2)
//	{
//		if(n%i==0)
//		return i;
//	}
//}
//
//int prime[100001];
//void sieve()
//{
//	for(int i =1;i<=100000;i++)
//	{
//		prime[i]=i;
//	}
//	for(int i =2;i<=sqrt(100000);i++)
//	{
//		if(prime[i]==i)
//		{
//			for(int j=i*i;j<=100000;j+=i)
//			{
//				if(prime[j]==j)
//				{
//					prime[j]=i;
//				}
//			}
//		}
//	}
//}
//
//int main ()
//{
//	sieve();
//	int tc;
//	cin>>tc;
//	while(tc--)
//	{
//		int num;
//		cin>>num;
//		for(int i =1;i<=num;i++)
//		{
//				cout<< prime[i]<<" "<< find(i) << " " << find2(i)<<endl;
//		}
//	}
//}


//////////////////////////////////////////////////////////////////////////////////////////////////
//dem thua so nguyen to
//void tsnt(int n)
//{
//	for(int i = 2; i<=sqrt(n);i++)
//	{
//		while(n%i==0)
//		{
//			cout<< i << " ";
//			n/=i;
//		}
//	}
//	if(n!=1)
//	{
//		cout << n << " ";
//	}
//}
//
//void tsnt1(int n){
//
//	for(int i =2 ;i<=sqrt(n);i++)
//	{
//		if(n%i==0)
//		{
//			cout<< i << " ";
//			while(n%i==0)
//			{
//				n/=i;
//			}
//		}
//	}
//	if(n!=1)
//	{
//		cout<< n;
//	}
//}
//void tsnt2(int n)
//{
//	for(int i =2;i<=sqrt(n);i++)
//	{
//		if(n%i==0)
//		{
//			int cnt=0;
//			while(n%i==0)
//			{
//				cnt++;
//				n/=i;
//			}
//			cout << i << " " << "("<< cnt << ")" << endl;
//		}
//	}
//	if(n!=1)
//	{
//		cout << n <<" (1)";
//	}
//}
//
//void tsnt3(int n)
//{
//	for(int i = 2;i<=sqrt(n);i++)
//	{
//		while(n%i==0)
//		{
//			cout<< i << "x";
//			n/=i;
//		}
//	}
//	if(n!=1)
//	{
//		cout<< n;
//	}
//}
//void tsnt4(int n)
//{
//	for(int i =2;i<=sqrt(n);i++)
//	{
//		if(n%i==0)
//		{
//			int cnt=0;
//			while(n%i==0)
//			{
//				cnt++;
//				n/=i;
//			}
//			cout << i<< "^"<< cnt << "*";
//		}
//	}
//	if(n!=1)
//	{
//		cout << n << "^1";
//	}
//}
//
//int main()
//{	
//	
//	int num;
//	cin>> num;
//	tsnt3(num);
//	return 0;
//}


//int prime[10000];
//
//void sieve()
//{
//	for(int i = 0 ; i < = 10000;i++)
//	{
//		prime[i]=i;
//	}
//	for(int i =2; i<=sqrt(10000);i++)
//	{
//		if(prime[i]==i)
//		{
//			for(int j = i* i ;j<=10000;j+=i)
//			{
//				if(prime[j]=j)
//				{
//					prime[j]=i;
//				}
//			}
//		}
//	}
//}

/////////////////////////////////////////////////////////////////////////////////////////////////////
//bậc mũ của số nguyên tố n trong giai thừa p
// EX: n =100 p = 3 => n : p^48 (3^48) là bậc mũ cao nhất khi số nguyên tố n chia hết cho p
//int count(int n, int p)
//{
//	int ans =0;
//	for(int i = p ; i<=n ;i+=p)
//	{
//		int tmp = i;
//		while(tmp%p==0)
//		{
//			++ans;
//			tmp/=p;
//		}
//	}
//	return ans;
//}
//
//int count2(int n,int p)
//{
//	int ans =0;
//	for(int i = p ;i<=n;i*=p)
//	{
//		ans += n/i;
//	}
//	return ans;
//}
//
//int main()
//{
//	int n;
//	cin>>n;
//	for (int i = 1;i<=n;i++)
//	{
//		int gt, p;
//		cin>> gt>>p;
//		cout<< count2(gt,p);
//	}
//	return 0;
//}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//count digit number zero in final number

//int count(int n)
//{
//	int res =0;
//	for(int i=5;i<=n;i+=5)
//	{
//		int temp =i;
//		while(temp%5==0)
//		{
//			++res;
//			temp/=5;
//		}
//	}
//	return res;
//}
//
//int count2(int n)
//{
//	int res =0;
//	for(int i=5;i<=n;i*=5)
//	{
//		res+=n/i;
//	}
//	return res;
//}
//
//int main ()
//{
//	int n;
//	cin>>n;
//	for (int i = 1;i<=n;i++)
//	{
//		int num;
//		cin >> num;
//		cout<< count2(num) << endl;
//	}
//	return 0;
//}
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//if spenic number when a positive integer that is the product of three distinct prime numbers
//int spenic(int n)
//{
//	int res =0;
//	for(int i=2;i<=sqrt(n);i++)
//	{
//		int cnt =0;
//		while(n%i==0)
//		{
//			cnt++;
//			n/=i;
//		}
//		if(cnt>=2)
//		{
//			return 0;
//		}
//		if(cnt==1) ++res;
//	}
//	if(n!=1)++res;
//	
//	return res==3;//prime equal to three because n have a three prime number different
//}
//int main()
//{
//	int n;
//	cin>>n;
//	for(int i =1;i<=n;i++)
//	{
//		int num;
//		cin>>num;
//		cout << spenic(num);
//	}
//}


////////////////////////////////////////////////////////////////////////////////////////////////////////
//số SMITH 

//int sum(int n)
//{
//	int s = 0;
//	while(n)
//	{
//		s += n%10;
//		n/=10;
//	}
//	return s;
//}
//
//
//int smith(int n)
//{
//	int sum1=sum(n);
//	int sum2=0;
//	int tmp = n;
//	for(int i =2;i<=sqrt(n);i++)
//	{
//		sum2+=sum(n);
//		n/=i;
//	}
//	if(n!=1)return sum2+=sum(n);
//	if(tmp==n)return 0;
//	return sum1==sum2;
//}
//
//int main()
//{
//	int tc;
//	cin>>tc;
//	for (int i =1;i<=tc;i++)
//	{
//		int num;
//		cin>>num;
//		if(smith(num)){
//			cout<<"yes";
//		}
//		else{
//			cout<<"no";
//		}
//	}
//	return 0;
//}

/////////////////////////////////////////////////////////////////////////////////////////////////////
//uoc so nguyen to lon nhat cua mot so

//int prime(int n)
//{
//	for(int i =2 ;i<=sqrt(n);i++)
//	{
//		if(n%i==0)
//		{
//			return 0;
//		}
//	}
//	return n>1;
//}
//
//int find(int n)
//{
//	int s =0;
//	for(int i =1;i<=n;i++)
//	{
//		if(n%i==0&&prime(i))
//		s = max(s,i);
//	}
//	return s;
//}
//
//int main()
//{
//	int n;
//	cin>>n;
//	for(int i =1;i<=n;i++)
//	{
//		int num;
//		cin>>num;
//		cout<<find(num);
//	}
//	return 0;
//}

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//so chia het cho 1 so va binh phuong cua so do goi la so dep

//int sodep(int n)
//{
//	for(int i =2;i<=sqrt(n);i++)
//	{
//		int cnt =0;
//		while(n%i==0)
//		{
//			++cnt;
//			n/=i;
//		}
//		if(cnt>=2)return 1;
//	
//	}
//	return 0;
//}
//
//
//int sodep2(int n)
//{
//	int check=0;
//	for(int i =2;i<=sqrt(n);i++)
//	{
//		int cnt=0;
//		while(n%i==0)
//		{
//			++cnt;
//			n/=i;
//		}
//		if(cnt==1)return 0;
//	}
//	if(n!=1)return 0;
//	return 1;
//}
//int main()
//{
//	int a,b;
//	cin>>a>>b;
//	for(int i=a;i<=b;i++)
//	{
//		if(sodep2(i))
//		{
//			cout<< i << " ";
//		}
//
//}
//
//return 0;
//}


/////////////////////////////////////////////////////////////////////////////////////////////////////
//so thuan nghich

//int thuanNghich(long long n)
//{
//	int long long rev = 0, m=n;
//	while(n!=0)
//	{
//		rev = rev*10+n%10;
//		n/=10;
//	}
//	if(rev==m)return 1;
//	return 0;
//}
//
//int thuanNghich2(char c[])
//{
//	int l =0,r=strlen(c)-1;
//	while(l<r)
//	{
//		if(c[l]!=c[r])return 0;
//		l++;r--;
//	}
//	return 1;
//}
//int main()
//
//{
//	int num;
//	cin>>num;
//	while(num)
//	{
//		int n;
//		cin>> n;
//		if(thuanNghich(n))
//	{
//		cout<< "yes";
//	}
//		else{
//		cout<< "no";
//	}
//	}
//	int n;
//	cin>>n;
//	while(n--)	
//	{
//		char c[100];
//		cin>>c;
//		if(thuanNghich2(c))
//		{
//			cout<< "yes";
//		}
//		else{
//			cout << "no";
//		}
//	}
//	return 0;
//}

////////////////////////////////////////////////////////////////////////////////////////////////
//so chinh phuong

////c1

//long long cp(long long n)
//{
//	int can = sqrt(n);
//	if(1ll*can*can==n)return 1;
//	return 0;
//}
//
//int main()
//{
//		int t;
//		cin>>t;
//		while(t--)
//		{
//		int num1,num2;
//		cin >> num1 >> num2;
//		for(int i =num1 ;i<=num2; i++)
//		{
//			if(cp(i)){
//			cout<< i;
//		}
//	}
//}
//	return 0;
//}

////c2

//int main()
//{
//	int n;
//	cin>>n;
//	while(n--)
//	{
//		int a,b;
//		cin>>a>>b;
//		int c = sqrt(a),d=sqrt(b);
//		if(c*c!=a)
//		c++;
//		for(int i = c;i <= d;i++)
//		{
//			cout<< i*i << " ";
//		}
//		cout<< endl;
//	}
//	return 0;
//}

////dem so chinh phuong


//int cp (long long n)
//{
//	int a = sqrt(n);
//	if(1ll*a*a==n)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int n;
//	cin>>n;
//	while(n--)
//	{
//		int a,b;
//		cin>> a>>b;
//		int cnt=0;
//		for(int i=a;i<=b;i++)
//		{
//			if(cp(i))
//			{
//				cnt++;
//			}
//		}
//		cout<< cnt;
//	}
//	return 0;
//}

//int main()
//{
//	int n;
//	cin>>n;
//	while (n--)
//	{
//		int a,b;
//		int cnt =0;
//		cin>>a>>b;
//		int c=sqrt(a),d=sqrt(b);
//		if(c*c!=a)c++;
//		for(int i=c;i<=d;i++)
//		{
//			cnt++;
//			//cout<< d - c + 1;
//		}
//		cout<< cnt;
//	}
//}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///so uoc so cua mot so nguyen

//int count(int n)
//{
//	int cnt= 0;
//	for(int i =1;i<=n;i++)
//	{
//		if(n%i==0)cnt++;
//	}
//	return cnt;
//}
//
//int count2(int n)
//{
//	int cnt=0;
//	for(int i =1;i<=sqrt(n);i++)
//	{
//		if(n%i==0)cnt+=2;
//	}
//	int c = sqrt(n);
//	if(c*c==n)cnt--;
//	return cnt;
//}
//
//int sum(int n)
//{
//	int sum=0;
//	for(int i =1;i<=n;i++)
//	{
//		if(n%i==0)
//		{
//			sum+=i;
//		}
//	}
//	return sum;
//}
//int sum2(int n)
//{
//	int sum =0;
//	for (int i =1;i<=sqrt(n);i++)
//	{
//		if(n%i==0){
//			if(i!=n/i){
//				sum+=i+n/i;
//			}
//			else{
//				sum+=i;
//			}
//		}
//	}
//	return sum;
//}
//
//int main(){
//	int n;
//	cin>>n;
//	while(n--)
//	{
//		int tc;
//		cin>>tc;
//		cout<< sum2(tc);
//	}
//	return 0;
//}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////so co uoc le
//
//int count(int n)
//{
//	int cnt=0;
//	for(int i=1;i<=n;i++)
//	{
//		if(n%i==0)
//		{
//			cnt++;
//		}
//	}
//	return cnt;
//}
//
//int count2(int n)
//{
//	int cnt=0;
//	for(int i=1;i<=sqrt(n);i++)
//	{
//		if(n%i==0)
//		{
//			if(i!=n/i)
//			{
//				cnt+=2;
//			}
//			else{
//				cnt++;
//			}
//		}
//	}
//	if(cnt%2==1)return 1;
//	return 0;
//
//}
//
//int count3(int n)
//{
//	int can = sqrt(n);
//	if(1ll*can*can==n)return 1;
//	else return 0;
//}
//int main()
//{
//	int t;
//	cin>>t;
//	while (t--)
//	{
//		int n;
//		cin>>n;
//		if(count3(n)){
//			cout<< "yes";
//		}
//		else{
//			cout<< "no";
//		}
//	}
//	return 0;
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////so hoan hao 

//int perfectNum(int n)
//{
//	int sum1=n,sum2=0;
//	for(int i=1;i<n;i++)
//	{
//		if(n%i==0)
//		{
//			sum2+=i;
//		}
//	}
//	if(sum1==sum2)return 1;
//	else return 0;
//}
//
//int perfectNum2(long long n)
//{
//	long long  sum=1;
//	for(int i=2;i<=sqrt(n);i++)
//	{
//		if(n%i==0)
//		{
//			if(i!=n/i)
//			{
//				sum+=i+n/i;
//			}else{
//				sum+=i;
//			}
//		}
//	}
//	if(sum == n)return 1;
//	else return 0;
//}
//
//int prime(int n)
//{
//	for(int i=2;i<=sqrt(n);i++)
//	{
//		if(n%i==0)return 0;
//	}
//	return n>1;
//}
//
//int perfectNum3(long long n)
//{
//	for(int i=1;i<=32;i++)
//	{
//		if(prime(i))
//		{
//			int tmp = (int)pow(2,i)-1;
//			if(prime(tmp))
//			{
//				int perfect = tmp * (int)pow(2,i-1);
//				if(perfect == n)return 1;
//			}
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int t;
//	cin>>t;
//	while(t--)
//	{
//		int n;
//		cin>>n;
//		if(perfectNum3(n))cout<< "yes";
//		else cout<< "no";
//	}
//	return 0;
//}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//tong chu so cua mot so nguyen

//int sum(long long n)
//{
//	long long sum=0;
//	while(n)
//	{
//		sum += n%10;
//		n/=10;
//	}
//	return sum;
//}
//int main()
//{
//	int t;
//	cin>>t;
//	while (t--)
//	{
//		long long  num;
//		cin>>num;
//		cout<< sum(num);
//	}
//	return 0;
//}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///fibonaci

//void fibonacci(int n)
//{
//	int fn1=0,fn2=1;
//	for(int i = 0; i<=n;i++)
//	{
//		long long fn = fn1+fn2;
//		cout<< fn << " ";
//		fn1=fn2;
//		fn2=fn;
//		
//	}
//}
//
//void fibonacciArr(int n)
//{
//	int f[n];
//	f[0]=0;
//	f[1]=1;
//	for(int i =2; i <=n;i++)
//	{
//		f[i]=f[i-1]+f[i-2];
//	}
//	for(int i =0;i<=n;i++)
//	{
//		cout << f[i] << " ";
//	}
//}
//
//int checkFibo(int n)
//{
//	if(n==0 || n==1)return 1;
//	int fn0=0,fn1=1;
//	for(int i=2;i<=n;i++)
//	{
//		int fn = fn0+fn1;
//		if(fn == n)return 1;
//		fn0=fn1;
//		fn1=fn;
//	}
//	return 0;
//}
//
//long long fibo[100];
//void init()
//{
//
//	fibo[0]=0,fibo[1]=1;
//	for(int i = 2;i<=92;i++){
//		fibo[i]=fibo[i-1]+fibo[i-2];
//	}
//}
//int main()
//{
//	init();
//	int n;
//	cin>>n;
//	while(n--)
//	{
//		int num;
//		cin>>num;
////		fibonacciArr(num);
//
//
////	if(checkFibo(num))
////	{
////		cout<< "yes";
////	}
////	else{
////		cout<< "no";
////	}
//
//	int ok = 0;
//	for(int i =0;i<=92;i++)
//	{
//		if(fibo[i]==num)
//		{
//			ok=1;
//			break;
//		}
//	}
//		if(ok)
//		{
//			cout<< "yes";
//		}
//		else{
//			cout<< "no";
//		}
//}
//	return 0;
//}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//so dep

//int prime(int n)
//{
//	for(int i=2;i<=sqrt(n);i++)
//	{
//		if(n%i==0)
//		{
//			return 0;
//		}
//	}
//	return n>1;
//}
//
//int fibonacci(int n)
//{
//	if(n==0||n==1)return 1;
//	int fn0=0,fn1=1;
//	for(int i =2;i<=n;i++)
//	{
//		int fn = fn0+fn1;
//		if(fn == n)return 1;
//		fn0=fn1;
//		fn1=fn;
//	}
//	return 0;
//}
//
//int sum(int n)
//{
//	int sum=0;
//	while(n)
//	{
//		sum += n%10;
//		n/=10;
//	}
//	return fibonacci(sum);
//}
//int main()
//{
//
//	int n;
//	cin>> n;
//	while(n--)
//	{
//		int a,b;
//		cin>> a>> b;
//		for(int i = a;i<=b;i++)
//		{
//			if(prime(i)&&sum(i))
//			{
//				cout << i;
//			}
//		}
//	}
//}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//thuan nghich va co 3 uoc so nguyen to 


//int reversible(int n)
//{
//	int res = 0, m=n;
//	while(n)
//	{
//		res = res*10 + n%10;
//		n/=10;
//	}
//	return res == m;
//}
//
//int prime(int n)
//{
//	for (int i =2;i<=sqrt(n);i++)
//	{
//		if(n%i==0)
//		{
//			return 0;
//		}
//	}
//	return n>1;
//}
//int check(int n)	
//{
//	int cnt=0;
//	for (int i =1;i<=n;i++)
//	{
//		if(n%i==0&&prime(i)) cnt++;
//	}
//	return cnt >=3;
//}
//
//int check2(int n)
//{
//	int ans =0;//tinh cac uoc khac nhau cua so do
//	for(int i =2;i<=sqrt(n);i++)
//	{
//		int cnt =0;
//		while (n%i==0)
//		{
//			++cnt;
//			n/=i;
//		}
//		if(cnt!=0)++ans;
//		
//	}
//	if(n!=0)++ans;
//	return ans>=3;
//}
//
//
//int main()
//{
//	int n;
//	cin>> n;
//	while (n--)
//	{
//		int a,b;
//		cin>> a>>b;
//		for(int i=a;i<=b;i++)
//		{
//			if(reversible(i) && check(i))
//			{
//				cout<< i << " ";
//			}
//		}
//	}
//	return 0;
//}
//

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// dem chu so chan le cua mot so nguyen

//
//void count(int n)
//{
//	int l =0 ,c=0;
//	while(n)
//	{
//		int r = n %10;
//		if(r%2==1)l++;
//		else c++;
//		n/=10;
//	}
//	cout<< l <<" "<<c;
//}
//
//int main()
//{
//	
//	int n;
//	cin>>n;
//	count(n);
//	return 0;
//	
//}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//so strong

//int gt(int n)
//{
//	int res =1;
//	for(int i =1;i<=n;i++)
//	{
//		res *=i;
//	}
//	return res;
//}
//
//int digit(int n)
//{
//	int sum =0,m=n;
//	while(n)
//	{
//		sum += gt(n%10);
//		n/=10;
//	}
//	return sum == m;
//}
//
//int main()
//{
//	int a,b;
//	cin>> a>>b;
//	for(int i=a;i<=b;i++)
//	{
//		if(digit(i))
//		{
//			cout<< i << " ";
//		}
//	}
//	return 0;
//	
//}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///so loc phat

//int luckNum(int n)
//{
//	while(n)
//	{
//		int r = n %10;
//		if(r!=0&&r!=6&&r!=8)
//		{
//			return 0;
//		}
//		else{
//			n/=10;
//		}
//		return 1;
//	}
//	
//}
//
//int main()
//{
//	int num;
//	cin >> num;
//	if(luckNum(num))
//	{
//		cout<< "1";
//	}
//	else{
//		cout<< "0";
//	}
//	return 0;
//}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///thuan nghich va loc phat

//int reversible(int n)
//{
//	int res=0,m=n;
//	while(n)
//	{
//		res = res * 10 + n%10;
//		n/=10;
//	}
//	return res==m;
//}
//
//int six(int n)
//{
//
//	while(n)
//	{
//		if (n%10==6)return 1;
//		n/=10;
//	}
//	return 0;
//}
//
//int eight(int n)
//{
//	int sum =0;
//	while(n)
//	{
//		sum += n%10;
//		n/=10;
//	}
//	if(sum % 10 == 8)return 1;
//	return 0;
//}
//
//
//int check(int n)
//{
//	int ok =0,s =0 ;
//	while(n)
//	{
//		int tmp = n %10;
//		s += tmp;
//		if(tmp == 6)ok =1;
//		n/=10;
//	}
//	if( ok && s%10==8)return 1;
//	
//	return 0;
//}
//
//int main()
//{
//	int a,b;
//	cin >>a>>b;
//	for (int i =a ;i<=b;i++)
//	{
//		if( /* eight(i) && six(i) */ check(i) && reversible(i) )
//		{
//			cout<< i;
//		}
//	}
//	return 0;
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//giai thua cua n
//
//int gt(int n)
//{
//	int factorial = 1;
//	for(int i = 1; i<=n;i++)
//	{
//		factorial *= i;
//	}
//	return factorial;
//}
//
//int main()
//{
//	int n;
//	cin>> n;
//	cout<< gt(n);
//	return 0;
//}

//so Armstrong

//int count (int n)
//{
//	int cnt =0;
//	while(n)
//	{
//		cnt++;
//		n/=10;
//	}
//	return cnt;
//}
//
//int sum(int n)
//{
//	int s =0,tmp=n, d = count(n);
//	while(n)
//	{
//		s += pow(n%10,d);
//		n/=10;
//	}
//	return s == tmp;
//}
//
//int main()
//{
//	int n;
//	cin>> n;
//	if(sum(n))
//	{
//		cout<< "1";
//	}
//	else{
//		cout<< "0";
//	}
//	return 0;
//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//thuan nghich khong chua chu so 9

//int reversible(int n)
//{
//	int res =0, tmp =n;
//	while (n)
//	{
//		res = res *10 + n%10;
//		n/=10;
//	}
//	return res == tmp;
//}
//int check(int n)
//{
//	while(n)
//	{
//		if(n%10==9)
//		{
//			return 0;
//		}
//		n/=10;
//
//	}
//return 1;
//}
//
//int main ()
//{
//	int n;
//	cin >> n;
//	int cnt =0;
//	for (int i =2;i<=n;i++)
//	{
//		if( reversible(i)&&check(i) )
//		{
//			cout << i << " ";
//			cnt++;
//		}
//	}
//	cout<< cnt;
//	return 0;
//}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////so nuyen to co chu so cuoi cung la lon nhat

//int prime(int n)
//{
//	for(int i=2;i<=sqrt(n);i++)
//	{
//		if(n%i==0)
//		{
//			return 0;
//		}
//	}
//	return n>1;
//}
//
//int check(int n)
//{
//	int res = n %10;
//	while(n)
//	{
//		if(n%10>res)
//		{
//			return 0;
//		}
//		n/=10;
//	}
//	return 1;
//}
//
//int main()
//{
//	int n;
//	cin>>n;
//	int cnt=0;
//	for(int i=1;i<=n;i++)
//	{
//		if(prime(i) && check(i))
//		{
//			cout<< i << " ";
//			cnt++;
//		}
//	}
//	cout<< cnt;
//	return 0;
//}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///kiem tra 2 so nguyen to cung nhau

//
//int twoPrime(int a,int b)
//{
//	if(b==0)return a;
//	return twoPrime(b,a%b);
//}
//
//int check(int n)
//{
//	int res =0;
//	for(int i =1;i<=n;i++)
//	{
//		if(twoPrime(i,n)==1)
//		{
//			res++;
//		}
//	}
//	return res;
//}
//
//#define ll long long
//
//ll Euler(ll n)
//{
//	ll res =n;
//	for(int i =2;i<= sqrt(n);i++)
//	{
//		if(n%i==0)
//		{
//			while(n%i==0) n/=i;
//			res -=res/i;
//		}
//	}
//	if(n!=1)
//	{
//		res -= res/n;
//	}
//	return res;
//}
//int main()
//{
////	int n,m;
////	cin>>n>>m;
////	if(twoPrime(n,m)==1)
////	{
////		cout<< "yes";
////	}
////	else{
////		cout<< "no";
////	}
//
//int n;
//cin>>n;
//cout<< Euler(n);
//
//	return 0;
//}

////////////////////////////////////////////////////////////////////////////////////////////////////
///thua so nguyen to dung thu k trong so nguyen duong n


//int solve(int n,int k)
//{
//	int cnt =0;
//	for(int i=2;i<=sqrt(n);i++)
//	{
//		if(n%i==0)
//		{
//			while(n%i==0)
//			{
//				n/=i;
//				cnt++;
//				if(cnt==k)return i;
//			}
//		}
//	}
//	if(n!=1)++cnt;
//	if(cnt==k)return n;
//}
//int main()
//{
//	int n,k;
//	cin>>n>>k;
//	cout<< solve(n,k);
//	return 0;
//}

///////////////////////////////////////////////////////////////////////////////////////////////////////
//so lan xuat hien cua 1 so nguyen to trong 1 so nguyen duong

//#define ll long long

//void solve(ll n)
//{
//	int nt2=0,nt3=0,nt5=0,nt7=0;
//
//	while(n)
//	{
//		int r =n%10;
//		if(r==2)nt2++;
//		else if(r==3) nt3++;
//		else if(r==5)nt5++;
//		else if(r==7)nt7++;
//		n/=10;
//	}
//	if(nt2!=0) cout<< "2: "<<nt2 << endl;
//	if(nt3!=0) cout<< "3: "<<nt3 << endl;
//	if(nt5!=0) cout<< "5: "<<nt5 << endl;
//	if(nt7!=0) cout<< "7: "<<nt7 << endl;
//}
//int main()
//{
//	ll n;
//	cin>>n;
//	solve(n);
//	return 0;
//}

//ll rev(ll n)
//{
//	ll rev =0;
//	while(n)
//	{
//		rev = rev*10+n%10;
//		n/=10;
//	}
//	return rev;
//}
//
//void solve(int n)
//{
//	int m = rev(n);
//	int nt2=0,nt3=0,nt5=0,nt7=0;
//	while(n)
//	{
//		int r = n%10;
//		if(r==2)++nt2;
//		else if(r==3)++nt3;
//		else if(r==5)++nt5;
//		else if(r==7)++nt7;
//		n/=10;
//	}
//	while(m)
//	{
//		int r = m%10;
//		if(r==2&&nt2!=0)
//		{
//			cout<<"2: "<<nt2<<endl;
//			nt2=0;
//		}
//		if(r==3&&nt3!=0)
//		{
//			cout<<"3: "<<nt3<<endl;
//			nt3=0;
//		}
//		if(r==5&&nt5!=0)
//		{
//			cout<<"5: "<<nt5<<endl;
//			nt5=0;
//		}
//		if(r==7&&nt7!=0)
//		{
//			cout<<"7: "<<nt7<<endl;
//			nt7=0;
//		}
//		m/=10;
//	}
//	
//}
//
//void solve(char c[])
//{
//	int c2=0,c3=0,c5=0,c7=0;
//	for(int i=0;i<=strlen(c);i++)
//	{
//		if(c[i]=='2')++c2;
//		else if(c[i]=='3')++c3;
//		else if(c[i]=='5')++c5;
//		else if(c[i]=='7')++c7;
//	}
//	for(int i =0;i<=strlen(c);i++)
//	{
//		if(c[i]=='2' && c2!=0)
//		{
//			cout<< "2: "<< c2<<endl;
//			c2=0;
//		}
//		else if(c[i]=='3'&&c3!=0)
//		{
//			cout<< "3: " <<c3<<endl;
//			c3=0;
//		}
//		else if(c[i]=='5'&&c5!=0)
//		{
//			cout<< "5: " <<c5<<endl;
//			c5=0;
//		}
//		else if(c[i]=='7'&&c7!=0)
//		{
//			cout<< "7: " <<c7<<endl;
//			c7=0;
//		}
//	}
//}
//
//int main()
//{
////	int n;
////	cin>>n;
////	solve(n);
//	char c[100];
//	cin>>c;
//	solve(c);
//	return 0;
//}

///////////////////////////////////////////////////////////////////////////////////////////////////////
//so nguyen duong nho nhat co n chu so chia het cho ca x,y,z

//#define ll long long
////int solve(int n,int x,int y,int z)
////{
////	for(int i =pow(10,n-1);i<=pow(10,n);i++)
////	{
////		if(i%x==0&&i%y==0&&i%z==0)
////		{
////			return i;
////		}
////	}
////	return -1;
////}
//
//ll gcd(ll a,ll b)
//{
//	if(b==0)return a;
//	return gcd(b,a%b);
//}
//
//ll lcm(ll a,ll b)
//{
//	return a/gcd(a,b)*b;
//}
//
//ll solve(int n,int x,int y,int z)
//{
//	ll tmp =lcm(lcm(x,y),z);
//	ll m = (ll)pow(10,n-1);
//	ll res = (m + tmp-1)/tmp*tmp;
//	if(res<(ll)pow(10,n))
//	{
//		return res;
//	}else{
//		return -1;
//	}
//}
//
//int main()
//{
//	int n,x,y,z;
//	cin>>x>>y>>z>>n;
//	cout<< solve(n,x,y,z);
//	return 0;
//}

/////////////////////////////////////////////////////////////////////////
///UCLN & BCNN
// ll gcd(ll a,ll b)
// {
// 	if(b==0)return a;
// 	return gcd(b,a%b);
// }

// ll gcd2(ll a,ll b)
// {
// 	if(a==0||b==0)return a+b;
// 	for(int i = min(a,b);i>=1;i--)
// 	{
// 		if(a%i==0&&b%i==0)
// 		{
// 			return i;
// 		}
// 	}
// }

// ll gcd3(ll a,ll b)
// {
// 	if(a==0||b==0)return a+b;
// 	while(a!=b)
// 	{
// 		if(a>b)
// 		{
// 			a-=b;
// 		}else{
// 			b-=a;
// 		}
// 	}
// 	return a;
// }

// ll lcm(ll a, ll b)
// {
// 	return a*b/gcd(a,b);
// }
// int main()
// {
// 	int a,b;
// 	cin>>a>>b;
// 	cout<< gcd3(a,b) << endl;
// 	cout<< lcm(a,b);
// }


/////////////////////////////////////////////////////////////////////////////////
//PHI HAM EULER

// int p[1000001];

// void sieve(){
// 	for (int i = 1; i<=1000000;i++)
// 	{
// 		p[i]=i;
// 	}
// 	for(int i= 2;i<=1000000;i++)
// 	{
// 		if(p[i]==i)
// 		{
// 			p[i] = i -1;
// 			for(int j = 2*i ; j<=1000000;j+=i)
// 			{
// 				p[j] -= p[j] / i;
// 			}
// 		}
// 	}
// }

// int main()
// {
// 	sieve();
// 	int t;
// 	cin>> t;
// 	while(t--)
// 	{
// 		int a;
// 		cin>>a;
// 		for(int i =1;i<=a;i++)
// 		{
// 			cout << p[i] << " ";
// 		}
// 	}
// 	return 0;
// }


//////////////////////////////////////////////////////////////////////////////////////////
//luy thua nhi phan

// ll luyThua(int a,int b)
// {
// 	ll res =1;
// 	for(int i = 1;i<=b;i++)
// 	{
// 		res *= a;
// 	}
// 	return res;
// }

// ll luyThua2(int a, int b)
// {
// 	int res =1;
// 	while(b)
// 	{
// 		if(b%2==1)
// 		{
// 			res *= a;
// 		}
// 		b/=2;
// 		a*=2;
// 	}
// 	return res;
// }
// ll luyThua3(int n,int b)
// {
// 	if(b==0)return 1;
// 	ll x = pow(n,b/2);
// 	if(b%2==1)return x * x * n;
// 	else return x * x;
// }

// int main(){	
// 	int t;
// 	cin>> t;
// 	while(t--){
// 		int n,k;
// 		cin >> n >> k;
// 		cout<< luyThua3(n,k);
// 	}
// 	return 0;
// }

///////////////////////////////////////////////////////////////////////////////////////
//dem uoc cua n giao thua

// int count(int n,int p)
// {
// 	int cnt =0;
// 	for(int i=p;i<=n;i+=p)
// 	{
// 		int tmp = i;
// 		while(tmp%p==0)
// 		{
// 			cnt++;
// 			tmp /= p;
// 		}
// 	}
// 	return cnt;
// }

// int count2(int n,int p)
// {
// 	int cnt =0;
// 	for(int i=p;i<=n;i*=p)
// 	{
// 		cnt += n/i;
// 	}
// 	return cnt;
// }
// int prime(int n)
// {
// 	for(int i =2;i<=sqrt(n);i++){
// 		if(n%i==0)
// 		{
// 			return 0;
// 		}
// 	}
// 	return n>1;
// }

// ll countDivisor(int n)
// {
// 	int res =1;
// 	for(int i=1;i<=n;i++)
// 	{
// 		if(prime(i))
// 		{
// 			res *= (count2(n,i)+1);
// 		}
// 	}
// 	return res;
// }

// int main()
// {
// 	int t;
// 	cin>> t;
// 	while (t--)
// 	{
// 		int n;
// 		cin>>n;
// 		cout<<countDivisor(n)<<endl;
// 	}
// 	return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////

// ll gcd(ll a,ll b)
// {
// 	if(b==0||a==0)return a+b;
// 	for(int i = max(a,b);i>=1;i--)
// 	{
// 		while(a!=b)
// 		{
// 			if(a>b)
// 			{
// 				a-=b;
// 			}else{
// 				b-=a;
// 			}
// 		}
// 	}
// 	return a;
// }

// int lcm(int a, int b)
// {
// 	return a*b/gcd(a,b);
// }

// int lcmSum(int n)
// {
// 	int sum = 0;
// 	for(int i = 1;i<=n;i++)
// 	{
// 		sum += lcm(i,n);
// 	}
// 	return sum;
// }


// ll p[1000000];
// ll res[1000000];
// void Euler()
// {
// 	for(int i=1;i<=1000000;i++)
// 	{
// 		p[i]=i;
// 	}
// 	for(int i =2;i<=1000;i++)
// 	{
// 		if(p[i]==i)
// 		{
// 			p[i]= i-1;
// 			for(int j =i*2;j<=1000000;j+=i)
// 			{
// 				p[j]-=p[j]/i;
// 			}
// 		}
// 	}
// }

// void sieve(){
// 	for(int i =1;i<=1000000;i++)
// 	{
// 		for(int j= i;j<=1000000;j+=i)
// 		{
// 			res[j] += i*p[i];
// 		}
// 	}
// }

// int main()
// {
// 	Euler();
// 	sieve();
// 	int t;
// 	cin>> t;
// 	while (t--)
// 	{
// 		int n;
// 		cin>>n;
// 		// cout<< lcmSum(n);

// 		cout<< 1ll*((res[n]+1)*n/2);
// 	}
// 	return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////
//tru uoc nguyen to

// int find(int n)
// {
// 	for(int i =3;i<=n;i+=2)
// 	{
// 		if(n%i==0)
// 		{
// 			return i;
// 		}
// 	}
// }

// int main()
// {
/////////////
/// tinh f(n) cho mot so nguyen da cho:
/// 486A f(n) = -1+2-3+4.....(-1)^n*n;
// int n;
// cin>>n;
// if(n%2==0){
// 	cout<< n/2;
// }else{
// 	cout<< (-n-1)/2;
// }
//////////////
///1350A tong cua n voi uoc duong nho nhat cua n theo k lan tong
//n + f(n) voi k > 0
// int t;
// cin>> t;
// 	while(t--){
// 		int n,k;
// 	cin >> n >> k;
// 		if(n%2==0)
// 		{
// 			cout << n + k  * 2;
// 	}
// 	else{
// 		cout<< n + find(n) + (k -1);
// 	}
/////////////////
/// chon so nguyen to p tu x de bang y
//neu x va y chan => yes 
//neu x va y le or x-y=1 => no
// 	if(n-k!=1)
// 	{
// 		cout<< "Yes";
// 	}
// 	else{
// 		cout<<"No";
// 	}
// }
// 	return 0;
// }
///////////////////////////////////////////////////////////////////////
//cat doi chu so

// void find(char c[])
// {
// 	int ok =0;
// 	for(int i =0;i<=strlen(c);i++){
// 		if(c[i]=='1'){
// 			ok=1;
// 		}
// 		if(!(c[i]==0 || c[i]==8 || c[i] ==9)){
// 			ok=0;
// 			return ;
// 		}
// 	}
// 	if(!ok){
// 		cout<< "INVALUE";
// 	}
// 	ok=1;
// 	for(int i =0 ; i <= strlen(c);i++)
// 	{
// 		if(c[i]=='1')
// 		{
// 			cout<< "1";ok=1;
// 		}
// 		else if(ok!=0)
// 		{
// 			cout<< "0";
// 		}
// 	}
// }

// int main(){
// 	int t;
// 	cin>>t;
// 	while(t)
// 	{
// 		char c[20];
// 		cin>> c;
// 		find(c);
// 	}
// 	return 0;
// }


//////////////////////////////////////////////////////////////////
//Xóa cụm số 084 khỏi số nguyên

// void find(char c[])
// {
// 	for(int i =0;i<strlen(c);i++)
// 	{
// 		if(c[i]=='0' && c[i+1]=='8' && c[i+2] == '4')
// 		{
// 			c[i] = c[i+1] = c[i+2] = 'x';
// 		}
// 	}
// 	for(int i = 0; i < strlen(c);i++)
// 	{
// 		if(c[i]!= 'x')
// 		{
// 			cout << c[i];
// 		}
// 	}
// }
// int main()
// {
// 	int t;
// 	cin>> t;
// 	while(t--){
// 		char c[100];
// 		cin >> c;
// 		find(c);
// 		cout << endl;
// 	}
// return 0;
// }

///////////////////////////////////////////////////////////////////////
// So gan thuan nghich (dau = 2 * cuoi hoac nguoc lai)

// int solve(char c[]){
// 	int first = c[0] - '0', last = c[strlen(c)-1] - '0';
// 	if(!(first==2*last || last == 2*first)) return 0;
// 	int l = 1, r = strlen(c)-2;
// 	while(l<r)
// 	{
// 		if(c[l]!=c[r])return 0;
// 		++l;--r;
// 	}
// 	return 1;
// }

// int reversible(ll n)
// {
// 	int res =0, tmp = n;
// 	while(n){
// 		res = res * 10 + n%10;
// 		n /= 10;
// 	}
// 	return tmp == res;
// }

// int solve1(ll n)
// {
// 	int c = n%10;n/=10;
// 	ll res = 0;
// 	while(n>= 10){
// 		res = res *10 + n %10;
// 		n/=10;
// 	}
// 	if(!(n==2*c) || c== 2*n) return 0;
// 	return reversible(res);
// }

																						

// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		char c[100];
// 		cin >> c;
// 		ll n;
// 		cin >> n;
// 		if(solve1(n))
// 		{
// 			cout << "YES";
// 		}else{
// 			cout<< "NO";
// 		}

// 	}
// 	return 0;
// }


//////////////////////////////////////////////////////////////////////
/// A ^ B % MOD

// int Mod1(int x,int y, int m)
// {
// 	int res = 1;
// 	for(int i =1 ;i<= y;i++)
// 	{
// 		res *= x;
// 		res %=m;
// 	}
// 	return res;
// }

// int Mod2(int x,int y,int z)
// {
// 	int res =1;
// 	while(y){
// 		if(y%2==1){
// 			res *= x;
// 			res%=z;
// 		}
// 		x *= x;
// 		x%=z;
// 		y/=2;
// 	}
// 	return res;
// }

// int Mod3(int x, int y,int z){
// 	if (y == 0) return 1;
// 	int tmp = Mod3(x,y/2,z);
// 	if(y%2==1){
// 		return (x%z*((tmp % z)*(tmp % z)%z))%z;
// 	}else{
// 		return ((tmp % z) * (tmp %z))%z;
// 	}
// }

// int main(){
// 	int n;
// 	cin >> n;
// 	while(n--)
// 	{
// 		int x,y,z;
// 		cin >> x>>y>>z;
// 		cout << Mod3(x,y,z);
// 	}
// 	return 0;
// }

////////////////////////////////////////////////////////////////////////////
/// Tinh n % k

// int modSum(int n, int k)
// {
//     int res = 0;
//     for(int i = 1;i<= n;i++){
//         res += i % k;
//     }
//     return res;
// }

// int modSum1(int n, ll k)
// {
//     int x = n / k; // so lan trung lap 0
//     int r = n % k; // so du thua cuoi cung 
//     int t1 = (k*(k-1)/2); // tong cua 1 lan 
//     int t2 = (r*(r+1)/2); // so du cuoi cung
//     return t1 * x + t2; // n % k
// }

// int main(){
//     int t,res = 0;
//     cin >>t;    
//     while(t--){
//         int n,k;
//         cin >> n>>k;
//         // for(int i = 1;i<=n;i++)
//         // {
//         //     res += i % k;
//         // }
//         // cout << res;
//         cout << modSum1(n,k);
//     }
//     return 0;
// }

/////////////////////////////////////////////////////////
/// so fibonacci khi chia du cho 10^9 +7

// int fibo(int n)
// {
//     if(n==0||n==1)return 1;
//     int f0=0,f1=1,fn;
//     for(int i =2;i<=n;i++)
//     {
//         fn = f0 + f1;
//         fn %= (int)(1e9+7);
//         f0 = f1;
//         f1 = fn;
//     }
//     return fn;
// }

// int fib[1000];

// void fibo1(){
//     fib[0] = 0;
//     fib[1] = 1;
//     for(int i =2 ;i<=1000;i++)
//     {
//         fib[i] = fib[i-2] + fib[i-1];
//         fib[i] %= (int)(1e9+7);
//     }
// }

// int main(){
//         fibo1();
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         cout << fibo(n) << endl;
//         cout << fib[n] << endl;
//     }
//     return 0;
// }

////////////////////////////////////////////////////////////////////////////
///so nguyen duong thu k khong chia het cho n
///////////////////////////
// int solve(int a,int b){
//     int cnt = 0;
//     while(a%b!=0){
//         ++cnt;
//         ++a;
//     }
//     return cnt;
// }

// int solve1(int a,int b){
//     int r = a % b;
//     if(r==0)return 0;
//     return b-r;
// }


// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int a,b;
//         cin >> a >> b;
//         cout << solve1(a,b);
//     }
//     return 0;
// }
//////////////////////////

// int solve(int n ,int k){
//     int cnt = 0;
//     int i = 1;
//     while(1){
//         if(i%n!=0){
//             ++cnt;
//             if(cnt == k)return i;
//         }
//         ++i;
//     }
// }

// int solve1(int n, int k){
//     int x = k / (n-1);//so luong nhom 
//     int r = k % (n-1);//so du cuoi cung
//     if(r == 0)
//     {
//         return 1ll * n * x + 1;
//     }else{
//         return 1ll * n * x + r;
//     }
// }

// int main(){
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         int n,k;
//         cin >> n >>k;
//         cout << solve1(n,k);
//     }
//     return 0;
// }

///////////////////////////////////////////////////////////////////////////////////////
//chu so cuoi cung cua 1378^n

// int powMod(int n,int m)
// {
//     int res = 1;
//     while(m){
//         if(m%2==1)
//         {
//             res *= n;
//             res %= 10;
//         }
//         n *= n;
//         n%=10;
//         m/=2;
//     }
//     return res;
// }


// int main()
// {
    // int n;
    // cin >>n;
    // cout << powMod(1378,n);
    // if(n%4==0)cout << "6";
    // else if(n%4==1)cout << "8";
    // else if(n%4==2)cout << "4";
    // else if(n%4==3)cout << "2";
    // return 0;
// char c[100000];
// cin >> c;
// int r;
// if(strlen(c)==1)
// {
//     r = (c[strlen(c)-1]-'0')%4;
// }
// else{
//     r = (c[strlen(c)-1]-'0')*10 + c[strlen(c)-1];
//     r =r % 4;
// }
//  r==0? cout << "4" : cout<< "0";
// return 0;
// }


//////////////////////////////////////////////////////////////////////////////////////
///chu so cuoi cung cua a^b

// int powMod(int a,int b){
//     a%=10;
//     int res = 1;
//     while(b){
//         if(b&1){
//             res*=a;
//             res%=10;
//         }
//         a*=a;
//         a%=10;
//         b>>=1;
//     }
//     return res;
// }

// int main(){
//     int a,b;
//     cin >> a>>b;
//     cout << powMod(a,b);
//     return 0;
// }
////////////////////////////
//chu so tan cung cua a mu n

// char a[1000001],n[1000001];
// int main()
// {
//     cin >> a >> n;
//     int tmp = a[strlen(a)-1]-'0';
//     if(tmp == 0 || tmp ==1 || tmp == 5 || tmp == 6){
//         cout << tmp;
//         return 0;
//     }
//     int r;
//     if(strlen(n)==1){
//         r = n[0]-'0';
//     }else {
//         r = (n[strlen(n)-2]-'0')*10+n[strlen(n)-1]-'0';
//     }
//     int r2[4] = {6,2,4,8};
//     int r3[4] = {1,3,9,7};
//     int r4[4] = {6,4,6,4};
//     int r7[4] = {1,7,9,3};
//     int r8[4] = {6,8,4,2};
//     int r9[4] = {1,9,1,9};
//     r%=4;
//     if(tmp == 2)cout << r2[r];
//     else if(tmp == 3)cout << r3[r];
//     else if(tmp ==4)cout << r4[r];
//     else if(tmp ==7)cout << r7[r];
//     else if(tmp ==8)cout << r8[r];
//     else if(tmp ==9)cout << r9[r];
// }

/////////////////////////////////////
// so chuoi cua so nhi phan
// int powMod(int a,int b){
//     int res = 1;
//     while(b){
//         if(b&1){
//             res *= a;
//             res %= (int)(1e9+7);
//         }
//         a *= a;
//         a %= (int)(1e9+7);
//         b >>= 1;
//     }
//     return res;
// }

// int main(){
//     int b;
//     cin >> b;
//     cout << powMod(2,b);
//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////
//in hinh chu nhat theo yeu cau

// int main(){
//     int n,m;
//     cin >> n >> m;

    /*
        ****
        ****
        ****
        ****
    */

    // for (int i =1 ;i<=n;i++){
    //     for (int j = 1 ;j<=n;j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    /*  
        *****
        *   *
        *   *
        *   *
        *****
    */

    // for(int i = 1 ;i<=n;i++){
    //     for (int  j = 1 ; j <= n ; j++){
    //         if(i==1||i==n ||j==1||j==n){
    //             cout << "*";
    //         }
    //         else{
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    /*
        *****
        *   *
        *   *
        *****
    */

//     for (int i = 1 ;i<=n;i++){
//         for(int j = 1;j<=m;j++){
//             if(i==1||i==n||j==1||j==m){
//                 cout<< "*";
//             }else{
//                 cout<< " ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//ve hinh tam giac theo yeu cau

// int main (){
//     int n;
//     cin >> n;

    /*
        *
        **
        ***
        ****
    */

    // for(int i = 1;i<=n;i++){
    //     for(int j= 1;j<=i;j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    /*
        ****
        ***
        **
        *
    */

//    for(int i = 1;i<=n;i++){
//         for(int j = 1;j<=n+1-i;j++){
//                 cout<< "*";
//             }
//         cout << endl;
//     }

    /*
           *
          **
         ***
        ****
    */

//    for(int i =1 ;i<=n;i++){
//         for(int j= 1;j<=n;j++){
//             if(j<=n-i){
//                 cout << " ";
//             }else{
//                 cout << "*";
//             }
//         }
//         cout << endl;
//    }

    /*
        ****
         ***
          **
           *
    */

//    for(int i =1 ;i<=n;i++){
//     for(int j = 1;j<=n;j++){
//         if(j<i){
//             cout<< " ";
//         }else{
//             cout << "*";
//         }
//     }
//     cout << endl;
//    }
//     return 0;
// }

    

//    int main(){
//     int n;
//     cin >> n;

    /*
        *
        **
        * *
        ****
    */

    // for (int i = 1 ;i<=n;i++)
    // {
    //     for(int j = 1 ;j<=i;j++)
    //     {
    //         if(i ==1 || i==n || j==1 || i==j)
    //         {
    //             cout << "*";
    //         }else{
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    /*
          *
         ***
        *****
    */
   //c1
//     for (int i =1 ;i<=n;i++)
//    {

//         for(int j = 1;j<=n-i;j++)
//         {
//             cout << " ";
//         }

//         for(int j =1 ;j<=2*i-1;j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//    }
    //c2
    // for(int i = 1;i<=n ;i++)
    // {
    //     for(int  j =1 ;j<= n+i-1;j++)
    //     {
    //         if(j<=n-i){
    //             cout << " ";
    //         }else{
    //             cout << "*";
    //         }
    //     }
    //     cout << endl;
    // }

    /*
          *
         * *
        * * *
    */
//    for(int i =1 ;i<=n;i++)
//    {
//         for(int j = 1;j<=n-i;j++)
//         {
//             cout << " ";
//         }
//         for(int j =1 ; j<= 2*i-1;j++ ){
//             if(i==1||i==n||j==1||j==2*i-1)
//             {
//                 cout << "*";
//             }else{
//                 cout << " ";
//             }
//         }
//         cout << endl;
//    }
    
    /*
        *****
         ***
          *
    */

//    for(int i = n;i>=1;i--)
//    {
//         for(int j = 1 ; j<=n-i ;j++){
//             cout << " ";
//         }
//         for(int j =1 ;j<= 2*i-1;j++){
//             cout << "*";
//         }
//         cout << endl;
//    }


    /*
        *~~~
        **~~
        ***~
        ****
    */

//    for(int i =1 ;i<=n;i++)
//    {
//         for (int j =1 ;j<= n;j++)
//         {
//             if(j<=i){
//                 cout << "*";
//             }else{
//                 cout << "~";
//             }
//         }
//         cout<< endl;
//    }

    /*
        ****
        ***~
        **~~
        *~~~
    */

//    for (int i =1 ;i<= n;i++){
//         for(int j = 1 ;j<=n;j++)
//         {
//             if(j<=n-i+1)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout <<"~";
//             }
//         }
//         cout << endl;
//    }

    /*
        ****
        ~****
        ~~****
        ~~~****
    */

//    for(int i =1 ;i<=n;i++)
//    {
//         for(int j =1 ;j<=i-1;j++)
//         {
//             cout << "~";
//         }
//         for(int j = 1 ;j<=n;j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//    }
   
   /*
        ~~~*
        ~~**
        ~* *
        ****
   */

//   for(int i =1 ;i<= n;i++)
//   {
//     for(int j =1 ;j<= n;j++)
//     {
//         if(j<=n-i){
//             cout << "~";
//         }
//         else{
//             if(i==1||i==n||j==n-i+1||j==n)
//             {
//                 cout << "*";
//             }else{
//                 cout << " ";
//             }
//         }
//     }
//     cout << endl;
//     }
//     return 0;
// }




// int main(){
//     int n;
//     cin >> n;

    /*
        *
        **
        ***
        ****
        ***
        **
        *
    */

    // for(int i = 1;i<=n ;i++){
    //     for(int j =1 ;j <= i ;j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for(int i = 1 ;i<=n-1 ;i++){
    //     for(int j = 1 ; j <= n-i;j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // return 0;

    /*
        ~~~~*
        ~~~***
        ~~*****
        ~*******
        *********
        ~*******
        ~~*****
        ~~~***
        ~~~~*
    */

//    for(int i = 1 ; i<= n ;i++){
//         for(int j = 1 ;j <= n-i;j++)
//         {
//             cout << "~";
//         }
//         for(int j =1 ;j<=2*i-1;j++)
//         {
//             cout << "*";
//         }
//         cout<< endl;
//    }
//     for (int i = n-1 ;i>=1;--i){
//         for (int j = 1 ;j<= n-i;j++){
//             cout << "~";
//         }
//         for(int j = 1 ;j<=2*i-1;j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

    /*
        ********
        ***~~***
        **~~~~**
        *~~~~~~*
        **~~~~**
        ***~~***
        ********
    */

//    for (int i = 1;i<=n ;i++)
//    {
//         for(int j = 1 ;j<=2*n;j++)
//         {
//             if(j<=n-i+1|| j>=n+i){
//                 cout << "*";
//             }else{
//                 cout << "~";
//             }
//         }
//         cout << endl;
//    }
//    for(int i = n -1 ;i>=1;--i){
//         for(int j = 1;j<= 2*n;j++)
//         {
//             if(j<=n-i+1||j>=n+i){
//                 cout << "*";
//             }else{
//                 cout << "~";
//             }
//         }
//         cout <<endl;
//    }


    /*
        *****
        ~~****
        ~~~~***
        ~~~~~~**
        ~~~~~~~~*
        ~~~~~~**
        ~~~~***
        ~~****
        *****
    */

//    for(int i =1 ;i<=n;i++)
//    {
//         for(int j = 1 ;j<=2*(i-1);j++)
//         {
//             cout << "~";
//         }
//         for(int j = 1 ;j<= n-i+1;j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//    }
//    for(int i = n-1 ;i>=1;--i)
//    {
//         for(int j = 1 ;j<=2*(i-1);j++)
//         {
//             cout << "~";
//         }
//         for(int j = 1 ;j<= n-i+1;j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//    }

    /*
        ~~~~*****
        ~~~****
        ~~***
        ~**
        *
        ~**
        ~~***
        ~~~****
        ~~~~*****
    */

//    for(int i =1 ;i<=n ;i++)
//    {
//         for (int j = 1 ;j<= n-i;j++)
//         {
//             cout << "~";
//         }
//         for(int j =1 ;j<= n-i+1;j++)
//         {
//             cout << "*";
//         }
//         cout <<endl;
//    }
//    for(int i = n-1;i>=1;--i)
//    {
//         for (int j = 1 ;j<= n-i;j++)
//         {
//             cout << "~";
//         }
//         for(int j =1 ;j<= n-i+1;j++)
//         {
//             cout << "*";
//         }
//         cout <<endl; 
//    }

    /*
        10101
        01010
        10101
        01010
        10101
    */
    
    // for (int i = 1 ;i<=n ;i++)
    // {
    //     for(int j =1 ;j<=n;j++)
    //     {
    //         if((i+j)%2==0){
    //             cout << "1";
    //         }else{
    //             cout << "0";
    //         }
    //     }
    //     cout << endl;
    // }

    /*
        12345
        23456
        34567
        45678
        56789
    */

//    for(int i =1 ;i<=n;i++)
//    {
//     int cnt = 1;
//         for(int j =1 ;j<=n;j++)
//         {
//             cout << cnt ;
//             cnt++;
//         }
//         cout << endl;
//    }

    /*
        12345
        678910
        1112131415
        1617181920
        2122232425
    */

//    int cnt=1;
//    for(int i =1 ;i<=n ;i++)
//    {
//         for(int j= 1 ;j<=n;j++)
//         {
//             cout << cnt;
//             cnt++;
//         }
//         cout << endl;
//    }

    /*
        ~~~~1
        ~~~22
        ~~333
        ~4444
        55555
    */

//    for (int i =1 ;i<= n;i++){
//         for (int j = 1;j<= n-i;j++)
//         {
//             cout << "~";
//         }
//         for(int j =1;j<= i;j++)
//         {
//             cout << i;
//         }
//         cout << endl;
//    }
   
   /*
        1
        2 6
        3 7 10
        4 8 11 13
        5 9 12 14 15
   */

//   for (int i =1 ;i<=n ;i++)
//   {
//         int init = i;
//         int cnt = n-1;
//         for(int j =1 ;j<=i;j++)
//         {
//             cout << init << " ";
//             init +=cnt;
//             // init += n-j;
//             cnt--;
//         }
//         cout << endl;
//   }

    /*
        4444444
        4333334
        4322234
        4321234
        4322234
        4333334
        4444444
    */
// int min(int a,int b){
//     if(a<b)return a;
//     return b;
// }
// int main(){
//     int n;
//     cin >> n;
//     for(int i =1 ;i<=2*n-1;i++)
//     {
//         for(int j =1 ;j<= 2*n-1;j++)
//         {
//             int check = min(min(i-1,2*n-1-i),min(j-1,2*n-1-j));
//             cout << n-check;
//         }
//     cout <<endl;
//     }
// }



/*
    5 5 5 5 5
    5 4 4 4 4
    5 4 3 3 3
    5 4 3 2 2 
    5 4 3 2 1
*/

// int main(){
//     int n;
//     cin >> n;
//     for(int i =1 ;i<=n;i++)
//     {
//         int init = n;
//         for(int j=1;j<=n;j++)
//         {
//             if(j<i){
//                 cout << init--;
//             }else{
//                 cout << init;
//             }
//         }
//         cout << endl;
//     }
// }


/*
    1 2 3 4 5
    2 1 2 3 4
    3 2 1 2 3 
    4 3 2 1 2
    5 4 3 2 1
*/

// int main(){
//     int n;
//     cin >> n;
//     for(int i =1 ;i<= n;i++)
//     {
//         int cnt = i;
//         for(int j = 1 ;j<=n;j++)
//         {
//             if(j<i)
//             {
//                 cout<< cnt--;
//             }else{
//                 cout << cnt++;
//             }
//         }
//         cout <<endl;
//     }
// }

/*
    12345
    22345
    33345
    44445
    55555
*/

// int main(){
//     int n;
//     cin >> n;
//     for(int i =1 ;i<=n;i++)
//     {
//         int cnt = i;
//         for(int j =1 ;j<=n;j++)
//         {
//             if(j>i){
//                 cout << ++cnt;
//             }else{
//                 cout << cnt;
//             }
//         }
//         cout <<endl;
//     }
// }

/*
    12345
    23455
    34555
    45555
    55555
*/

// int main(){
//     int n;
//     cin >> n;
//     for(int i =1 ;i<=n ;i++)
//     {
//         int cnt = i;
//         for(int j = 1;j<=n;j++)
//         {
//             if(j<=n-i){
//                 cout << cnt++;
//             }else{
//                 cout<< cnt;
//             }
//         }
//         cout << endl;
//     }
// }


/*
    1
    12
    123
    1234
    12345
*/

// int main()
// {
//     int n;
//     cin >> n;
//     for(int i =1 ;i<=n ;i++)
//     {
//         for(int j =1 ;j<=i;j++){
//             cout << j;
//         }
//         cout << endl;
//     }
// }


/*
    ~~~~2
    ~~~242
    ~~24642
    ~2468642
    2468108642
*/

// int main(){
//     int n;
//     cin >> n;
//     for (int i =1 ;i<=n ;i++)
//     {
//         int cnt = 2;
//         for (int j =1 ;j<=n-i;j++){
//             cout << "~";
//         }
//         for(int j = 1 ;j<=2*i-1;j++){
//             if(j<i){
//                 cout << cnt;
//                 cnt+=2;
//             }else{
//                 cout << cnt;
//                 cnt-=2;
//             }
//         }
//         cout << endl;
//     }
// }

/*
    1
    3 2
    4 5 6
    10 9 8 7

    chan: i*(i+1)/2
    le: i*(i+1)/2-i+1
*/

// int main (){
//     int n;
//     cin >> n;
//     for(int i =1 ;i<= n;i++)
//     {
//         int cnt; 
//         if(i%2==0) cnt = i*(i+1)/2;
//         else cnt = i*(i+1)/2-i+1;
//         for(int j = 1 ;j<=i;j++)
//         {
//             if(i%2==0)cout << cnt--;
//             else cout << cnt++;
//         }
//         cout << endl;
//     }
// }

/*
    1
    2 4
    7 11 16
    22 29 37 46
    56 67 79 92 106
*/

// int main()
// {
//     int n;
//     cin >> n;
//     int cnt =1,kc = 1;
//     for(int i =1;i<=n;i++)
//     {
//         for(int j = 1;j<=i;j++)
//         {
//             cout << cnt << " ";
//             cnt +=kc;
//             ++kc;
//         }
//         cout << endl;
//     }
// }

/*
    1234
    2341
    3421
    4321
*/

// int min(int a ,int b){
//     return a<b ? a:b;
// }

// int main()
// {
//     int n,m;
//     cin >> n >> m;
//     for(int i =1;i<=n;i++)
//     {
//         cout << i;
//         for(int j = 1 ;j<=m;j++)
//         {
//             if (j<=m-i)
//             {
//                 /* code */
//                 cout << i+j;
//             }else{
//                 int init = min(i-1,m-1);
//                 while(j<m){
//                     cout << init--;
//                     j++;
//                 }
//             }
            
//         }
//         cout << endl;
//     }
//     return 0;
// }

/*
    123
    232
    321
    432
    543
*/

// int max(int a,int b){
//     if(a>b){
//         return a;
//     }return b;
// }
// int main(){
//     int n,m;
//     cin >> n >>m;
//     for(int i =1 ;i<=n ;i++)
//     {
//         cout << i;
//         for(int j =1 ;j<=m;j++){
//             if(j<=m-i){
//                 cout << i+j;
//             }else{
//                 int init = max(i-1,m-1);
//                 while(j<m){
//                     cout << init--;
//                     j++;
//                 }
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

/*
    1234      123456
    2123      212345
    3212      321234
    4321      432123
*/

    // int main (){
    //     int n,m;
    //     cin >> n >> m;
    //     for(int i =1 ;i<=n;i++){
    //         int init = i;
    //         for(int j = 1;j<=m;j++)
    //         {
    //             if(j<i)cout << init--;
    //             else cout << init++;
    //         }
    //         cout << endl;
    //     }
    //     return 0;
    // }

/*
    4321    654321
    3212    543212
    2123    432123
    1234    321234
*/
// int main(int argc,string argv){
//     int tc;
//     cin >> tc;
//     while(tc--){
//         int n,m;
//         cin >> n >>m;
//         if(n>=m){
//         for(int i = n;i>=1;i--){
//             int init = i;
//             for(int j =1 ;j<=m;j++){
//                 if(j<i){
//                     cout << init--;
//                 }else{
//                     cout << init++;
//                 }
//             }
//             cout <<endl;
//         }
//         }else{
//             for(int i =1 ;i<=n;i++){
//                 int init = m - i + 1;
//                 for(int j =1 ;j<=m;j++)
//                 {
//                     if(j<=m-i){
//                         cout << init--;
//                     }else{
//                         cout << init++;
//                     }
//                 }
//                 cout << endl;
//             }
//         }

//     }
//     return 0;
// }

/*
    DDDD        CDEEE
    CDDD        BCDEE
    BCDD        ABCDE
    ABCD
*/

// int main(){
//     int n,m;
//     cin >> n>>m;
//     if(n<=m){
//     for(int i = n ;i>=1;--i)
//     {
//         int init = min(i,m);
//         for(int j =1 ;j<=m;j++)
//         {
//             if(j<=m-i){
//                 cout << (char)(64+init++);
//             }else{
//                 cout << (char)(64+init);
//             }
//         }
//         cout << endl;
//     }
//     }
//     return 0;
// }

/*
    @ABC
    ABCC
    BCCC
    CCCC
*/

// int main()
// {
//     int n,m;
//     cin >> n >> m;
//     for (int i = 1; i <= n; i++)
//     {
//         /* code */
//         int init = min(i,m);
//         for (int j = 1; j <= m; j++)
//         {
//             /* code */
//             if(j<=m-i){
//                 cout << (char)(63 + init++);
//             }else{
//                 cout << (char)(63 + init);
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }


/*
    ABCD
    BCDA
    CDBA
    DCBA
*/

// int min(int a,int b)
// {
//     return a < b ? a : b;
// }
// int main()
// {
//     int n,m;
//     cin >> n >> m;
//     for(int i =1 ;i<=n ;i++)
//     {
//         int init = min(i,m);
//         for(int j =1 ;j<=m;j++){
//             if(j<=m-i+1){
//                 cout << (char)(64+(i+j-1));
//             }else{
//                     if(m<i){
//                         cout << (char)(64+init--);
//                     }else{
//                         cout << (char)(64 + --init);
//                     }
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }



/*
    dddd
    dccc
    dcbb
    dcba
*/
// int main()
// {
//     int n,m;
//     cin >> n >> m;
//     for(int i =1;i<=n;i++)
//     {
//         int init = min(n,m);
//         for(int j  =1 ;j<=m;j++)
//         {
//             if (j<i){
//                 cout << (char)(96+init--);
//             }
//             else{
//                 cout << (char)(96+ init);
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }



/*
    a
    c b
    d e f
    j i h g
*/
// int main(){
//     int n;
//     cin >> n;
//     for(int i =1;i<=n;i++)
//     {
//         int cnt;
//         if(i%2==0){
//             cnt = i*(i+1)/2;
//         }else{
//             cnt = i*(i+1)/2-i+1;
//         }
        
//         for(int j =1 ;j<=i;j++){
//             if(i%2==0){
//                 cout << (char)(96 + cnt--);
//             }else{
//                 cout << (char)(96 + cnt++);
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }


/*
    @
    @B@
    @BDB@
    @BDFDB@
    @BDFHFDB@
*/

// int main(){
//     int n;
//     cin >> n;
//     for(int i = 1 ;i<=n ;i++)
//     {
//         int cnt = 0;
//         for(int j = 1 ;j<= 2*i-1;j++)
//         {
//             if(j<i){
//                 cout << (char)(64 + cnt);
//                 cnt+=2;
//             }else{
//                 cout << (char)(64+ cnt);
//                 cnt-=2;
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

/*
    ACEG
    CEG
    EG
    G
*/

// int main(){
//     int n;
//     cin >> n;
//     for(int i = 1;i<=n;i++)
//     {
//         int cnt = 2*i-1;
//         for(int j =n-i+1;j>=1;j--)
//         {
//             if(j<=n-i+1){
//                 cout << (char)(64 + cnt);
//                 cnt+=2;
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

/*
    CDEF
    BCD
    AB
    @
*/

// int main()
// {
//     int n;
//     cin >> n;
//     for(int i = n;i>=1;i--){
//         cout << (char)(63 + i);
//         for(int j = 1;j<=i-1;j++){
//             cout << (char)(63 + i+j);
//         }
//         cout << endl;
//     }
//     return 0;
// }

/*
        A
      B A B
    C B A B C
*/

// int main()
// {
//     int n;
//     cin >> n;
//     for(int i =1 ;i<=n ;i++){
//         for(int j = 1;j<= n-i;j++){
//             cout << " ";
//         }
//         int cnt = i;
//         for(int j = 1 ;j<=2*i-1;j++){
//             if(j<i){
//                 cout << (char)(64 + cnt--);
//             }else{
//                 cout << (char)(64+ cnt++);
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

/*
    a
    B c
    D e F
    g H i J
    k L m N o
*/

// int main(){
//     int n;
//     cin >> n;
//     int cnt = 0;
//     for(int i =1 ;i<=n;i++){

//         for(int j = 1 ;j<=i;j++){
//             if(cnt%2==0){
//                 cout << (char)(97 + cnt);
//             }else{
//                 cout << (char)(97 + cnt-32);
//             }
//             ++cnt;
//         }
//         cout << endl;
//     }
//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////
// ham tao, mo rong prototype

// bool is_lower(char c)
// {
//     return c >= 'a' && c <= 'z';
// }

// bool is_upper(char c)
// {
//     return c >= 'A' && c <= 'Z';
// }

// bool is_alpha(char c){
//     return is_lower(c) || is_upper(c);
// }

// bool is_digit(char c){
//     return c >= '0' && c <= '9';
// }

// char to_lower(char c){
//     return is_upper(c) ? c + 32 : c;
// }

// char to_upper(char c){
//     return is_lower(c) ? c - 32 : c;
// }

// int strlen(char c[]){
//     int cnt = 0;
//     while(c[cnt] != '\0'){
//         ++cnt;
//     }
//     return cnt;
// }

// char* strlwr(char c[]){
//     for(int i = 0 ;i<strlen(c);i++){
//         if(c[i] >= 'A' && c[i] <='Z'){
//             c[i] += 32;
//         }
//     }
//     return c;
// }

// char* strupr(char c[]){
//     for(int i = 0 ;i<strlen(c);i++){
//         if(c[i] >= 'a' && c[i] <='z'){
//             c[i] -= 32;
//         }
//     }
//     return c;
// }

// int strcmp(char a[],char b[]){
//     for(int i = 0;i<min(strlen(a),strlen(b));i++){
//         if(a[i] != b[i]){
//             if(a[i] > b[i]){
//                 return 1;
//             }else{
//                 return -1;
//             }
//     }
//     }
//     if(strlen(a) == strlen(b)){
//         return 0;
//     }else if(strlen(a) > strlen(b)){
//         return 1;
//     }else return -1;
// }

// int strcmpi(char a[],char b[]){
//     for(int i = 0;i<min(strlen(strlwr(a)),strlen(strlwr(b)));i++){
//         if(a[i] != b[i]){
//             if(a[i] > b[i]){
//                 return 1;
//             }else return -1;
//         }
//     }
//     if(strlen(a) == strlen(b)) return 0;
//     else if(strlen(a) > strlen(b)) return 1;
//     else return -1;
// }

// long long atoll(char a[]){
//     int result=0;
//     for(int i=0;i<strlen(a);i++){
//         result = result * 10 + a[i] - '0';
//     }
//     return result;
// }

// char* strrev(char c[]){
//     int l = 0, r = strlen(c)-1;
//     while(l<r){
//         char temp = c[l];
//         c[l] = c[r];
//         c[r] = temp;
//         l++;r--;
//     }
//     return c;
// }
// int main(){
//     char c[100],s[100];
//     cin >> c >> s;
//     cout << strrev(c);
//     return 0;
// }


// int strcmp (char c[],char d[]){
//     if(strlen(c) < strlen(d)){
//         return -1;
//     }else if(strlen(c) > strlen(d)){
//         return 1;
//     }
//     return 0;
// }
// int main(){
//     char c[100]; char d[100];
//     gets(c);
//     gets(d);
//     cout << strcmp(c,d);
// }

// int main(){
//     char c[5010];
//     gets(c);
//     int cnt[256];
//     memset(cnt,0,sizeof(cnt));
//     for(int i = 0;i<strlen(c);i++){
//         cnt[c[i]]++;
//     }
//     int res = 0;
//     char kt;
//     for(int i = 0 ;i<256;i++){
//         if(cnt[i]>res){
//             res=cnt[i];
//             kt = (char)i;
//         }
//     }
//     cout << kt;
//     return 0;
// }




/////////////////////////////
//nguyen li su dung ham strtok

// int main(){
//     char c[1000];
//     gets(c);
//     char* token  = strtok(c," ");
//     while (token != NULL)
//     {
//         /* code */
//         cout << token << endl;
//         token = strtok(NULL," ");
//     }
//     return 0;
// }

// int check(char c[]){
//     for(int i = 0 ;i < strlen(c);i++){
//         if(islower(c[i])){
//             return 0;
//         }
//     }
//     return 1;
// }

// int main(){
//     int t;
//     cin>> t;
//     cin.ignore();
//     while(t--){
//         char c[1000];
//         cin.getline(c,1000);
//         char* token = strtok(c, " ");
//         while(token != NULL){
//             if(check(token)){
//                 printf("%s" , token);
//             }
//             token = strtok(NULL," ");
//         }
//         cout << endl;
//     }
//     return 0;
// }


// void sapxep(char s[][50],int n){
//     for(int i = 0;i<n;i++){
//         int min = i;
//         for(int j = i + 1; j<n;j++){
//             if(strcmp(s[j],s[min])<0) min = j;
//         }
//         char tmp[100];
//         strcpy(tmp,s[min]);
//         strcpy(s[min],s[i]);
//         strcpy(s[i],tmp);
//     }
// }

// int main(){
//     int t;
//     cin >> t;
//     getchar();
//     while(t--){
//         char c[1000];
//         gets(c);
//         char *token = strtok(c, " ");
//         char s[20][50];
//         int n = 0;
//         while(token != NULL){
//             strcpy(s[n],token);
//             ++n;
//             token = strtok(NULL, " ");
//         }
//         sapxep(s,n);
//         for(int i = 0;i<n;i++){
//             cout << s[i]<<" ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


//dung thuat toan quick sort co san trong strlib
//sap xep tu theo thu tu tu dien

/*
int cmp(const void *a,const void *b){
    char* x = (char*)a;
    char* y = (char*)b;
    if(strcmp(x,y)<0)return -1;
    return 1;
}

int main(){
    int tc;
    cin >> tc;
    getchar();
    while(tc--){
        char c[1000];
        gets(c);
        char* token = strtok(c, " ");
        char s[20][50];
        int n=0;
        while(token != NULL){
            strcpy(s[n],token);
            ++n;
            token = strtok(NULL," ");
        }
        qsort(s,n,sizeof(s[n]),cmp);
        for (int  i = 0; i < n; i++)
        {
            // in chuoi da xu li
            cout << s[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
*/

/*
int cmp(const void *a,const void *b){
    char* x = (char*)a;
    char* y = (char*)b;
    // so sanh chuoi 
    if(strlen(x) != strlen(y)){
        if(strlen(x)<strlen(y))return -1;
        return 1;
    }
    //so sanh thu tu tu dien 
    else{
        if(strcmp(x,y)<0) return -1;
        return 1;
    }
}

int main(int argc ,char* argv[]){
    int tc;
    cin >> tc;
    getchar();
    while(tc--){
        char c[1000];
        gets(c);
        char s[20][50];
        int n = 0;
        char* token = strtok(c," ");
        while(token != NULL){
            strcpy(s[n],token);
            ++n;
            token = strtok(NULL, " ");
        }
        qsort(s,n,sizeof(s[n]),cmp);
        for(int i = 0 ;i<n;i++){
            cout << s[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
*/

//sap xep ki tu theo thu tu tu dien
/*
int cmp(const void *a,const void *b){
    char *x = (char*)a;
    char *y = (char*)b;
    if(*x<*y)return -1;
    return 1;
}

int main(int argc, char* argv[]){
    int tc;
    cin >> tc;
    getchar();
    while(tc--){
        char c[1000];
        gets(c);
        qsort(c,strlen(c),sizeof(char),cmp);
        cout << c;
    }
    return 0;
}
*/
/*
void standardized(char c[]){
    c[0] = toupper(c[0]);
    for(int i = 1;i<strlen(c);c++){
        c[i] = tolower(c[i]);
    }
}

int main(){
    int tc;
    cin >> tc;
    getchar();
    while(tc--){
        char c[1000];
        gets(c);
        char s[20][50];
        int n = 0;
        char* token = strtok(c," ");
        while(token != NULL){
            strcpy(s[n],token);
            ++n;
            token = strtok(NULL," ");
        }

        for(int i = 0;i<n;i++){
            standardized(s[i]);
            cout << s[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
*/


/*
void standardized(char s[]){
    s[0] = toupper(s[0]);
    for(int i = 1;i<strlen(s);i++){
        s[i] = tolower(s[i]);
    }
}

int main(){
    int tc;
    cin >> tc;
    getchar();//remover enter when you press
    while(tc--){
        char c[1000];
        gets(c);
        char s[20][50];
        int n = 0;
        char *token = strtok(c," ");
        while(token != NULL){
            strcpy(s[n],token);
            ++n;
            token = strtok(NULL," ");
        }
        strupr(s[n-1]);
        cout << (s[n-1]) << ", ";
        for(int i = 0;i<n-1;i++){
            standardized(s[i]);
            cout << s[i] << " ";
        }
        cout << endl;
    }
return 0;
}
*/


/*
int main(){
    int tc;
    cin >> tc;
    getchar();
    while(tc--){
        char c[1000];
        gets(c);
        strlwr(c);
        char s[20][50];
        int n = 0;
        char* token = strtok(c, " ");
        while(token != NULL){
            strcpy(s[n],token);
            ++n;
            token = strtok(NULL, " ");
        }
        
        for(int i = 0 ;i<n-1;i++){
            cout << s[i][0];
        }
        cout << s[n-1]<< "@gmail.com";
        cout <<endl;

    }
}
*/


////tach va dem so luong chuoi giong nhau ve mat ki tu
/*
int main(){
    int tc;
    cin >> tc;  
    getchar();
    while(tc--){
        char c[1000];
        gets(c);
        strlwr(c);
        char s[20][50];
        int n = 0;
        char* token = strtok(c," ");
        while(token != NULL){
            strcpy(s[n],token);
            ++n;
            token = strtok(NULL, " ");
        }
        int b[n] = {0};
        for (int i = 0;i<n;i++){
            if(b[i]==0){
                int cnt = 1;
                for(int j = i + 1;j<n;j++){
                    if(strcmp(s[i],s[j])==0){
                        cnt++;
                        b[j] = 1;
                    }
                }
                cout << s[i] << " " << cnt << endl; 
                
            }
        }
        cout << endl;
    }
    return 0;
}
*/

//tu xuat hien nhieu nhat trong sau
/*
int main(){
    char c[1000];
    gets(c);
    strlwr(c);
    char s[20][50];
    int n = 0;
    char *token = strtok(c, " ");
    while(token != NULL){
        strcpy(s[n],token);
        ++n;
        token = strtok(NULL," ");
    }
    int max = 0,ind;
    for(int i = 0;i<n;i++){
        int cnt = 1;
        for(int j = i + 1;j<n;j++ ){
            if(strcmp(s[j],s[i])==0){
                ++cnt;
            }
        }
        if(cnt > max){
            max = cnt;
            ind = i;
        }else if (cnt == max )
        {
            if(strcmp(s[ind],s[i])>0){
                ind = i;
            }
        }
        
    }
    cout << s[ind] << " " << max;
}
*/

//in theo thu tu xuat hien & chi in 1 lan
/*
int main(){
    char c[1000];
    gets(c);
    // strlwr(c);
    char s[20][50];
    int n = 0;
    char *token = strtok(c," ");
    while(token != NULL){
        strcpy(s[n],token);
        ++n;
        token = strtok(NULL, " ");
    }
    for(int i= 0;i<n;i++){
        int ok = 1;
        for(int j = 0 ; j<i ; j++){
            if(strcmp(s[i],s[j])==0){
                ok = 0; 
                break;
            }
        }
        if(ok) cout << s[i];
    }
    return 0;
    
}
*/

/*
int main(int argc, char* argv[]){
    char c[1000];
    gets(c);
    char w[10];
    cin >> w;
    char s[20][50];
    int n = 0;
    char *token = strtok(c, " ");
    while(token != NULL){
        if(strcmp(token,w)!=0){
            strcpy(s[n],token);
            ++n;
            //cout <<  token << " ";
        }
        token = strtok (NULL," ");
        for(int i =0;i<n;i++){
            cout << s[i] << " ";
        }
    }
    return 0;
}
*/


/*
int cmp(const void *a,const void *b){
    char* m = (char*)a;
    char* n = (char*)b;
    return strcmp(m,n);
}

int main(){
    char c1[1000],c2[1000],a[20][50],b[20][50];
    gets(c1);
    gets(c2);
    int n = 0, m=0; 
    char *token= strtok(c1, " ");
    while(token != NULL){
        strcpy(a[n++],token);
        token = strtok(NULL, " ");
    }
    token= strtok(c2, " ");
    while(token != NULL){
        strcpy(b[m++],token);
        token = strtok(NULL, " ");
    }
    qsort(a,n,sizeof(a[0]),cmp);
    for(int i = 0;i<n;i++){
        while(strcmp(a[i],a[i+1])==0)++i;
        int ok = 0;
        for(int j = 0;j<m;j++){
            if (strcmp(a[i],b[j])==0)
            {
                ok = 1; 
                break;
            }
            
        }
        if(!ok){
            cout << a[i] << " ";
        }
    }
    return 0;
}

*/


/*
xoa mot tu khoi xau ki tu
int check(char a[],char b[]){
    int n1 = strlen(a);
    int n2 = strlen(b);

    if(n1!=n2)return 0;

    for(int i = 0;i<n1;i++){
        if(tolower(a[i])!=tolower(b[i])){
            return 0;
        }
    }
    return 1;
}


int main(){
    int tc;
    cin >> tc;
    getchar();
    while(tc--){
        char c[1000],w[100];
        gets(c);
        char* token = strtok(c , " ");
        cin >> w;
        while(token != NULL){
            if(check(token,w)==0)cout << token << " ";
            token = strtok(NULL, " ");
        }
        cout << endl;
    }
    return 0;
}
*/
//last version of the program

//tu bi lap lai dau tien
/*
int main(int argc, char *argv[]){
    int tc;
    cin >> tc;
    getchar();
    while (tc--){
        char c[1000];
        gets(c);
        char s[100][100];
        int n = 0;
        char *token = strtok(c, " ");
        while(token != NULL){
            strcpy(s[n++],token);
            token = strtok(NULL, " ");
        }
    int res = 0;
    cout << "Test#: ";
    for(int i = 0 ;i<n;i++){
        int ok = 0;
        for(int j = 0 ;j<i;j++){
            if(strcmp(s[i],s[j])==0){
                ok = 1;
                break;
            }
        }
        if(ok){
            cout << s[i] << endl;
            res = 1;
            break;
            }
    }
    if(!res){
        cout << "None" << endl;
    }
    
    }
}

*/

//chuoi con chuoi cha
/*
int main(int argc, char *argv[]){
    char a[100], b[100];
    cin >> a >> b;
    if(strstr(b,a)!=NULL){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}
*/

//kiem tra hoan doi ki tu neu co the
/*
int main(){
    int tc;
    cin >> tc;
    getchar();
    while(tc--){
        char c[1000];
        gets(c);
        int a[256] = {0};
        for(int i = 0;i<strlen(c);i++){
            a[c[i]]++;
        }
        int res = 0;
        for(int i = 0;i<256;i++){
            if(a[i]%2==1){
                ++res;
            }
        }
        if(res<=1)cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}
*/
//last update
////In ra ki tu khong bi lap lai
// int main(){
//     int t;
//     cin >> t;
//     getchar();
//     while(t--){
//         char c[100001];
//         gets(c);
//         int cnt[26] = {0};
//         for(int i = 0;i<strlen(c);i++){
//             cnt[c[i]-'A']++;
//         }
//         for(int i = 0;i<26;i++){
//             if(cnt[i]==1){
//                 printf("%c",i+'A');
//             }
//         }
//     }
//     return 0;
// }

///Tong cua so trong mot chuoi
// int main(){
//     int t;
//     cin >> t;
//     getchar();
//     while(t--){
//         char s[100001];
//         gets(s);
//         int sum = 0;
//         int res = 0;
//         for(int i = 0 ;i < strlen(s);i++){
//             if(isdigit(s[i])){
//                 res = res * 10 + s[i] - '0';
//             }
//             else{
//                 sum += res;
//                 res = 0;
//             }
//         }
//         if(isdigit(s[strlen(s)-1])){
//             sum += res;
//         }
//         cout << sum <<endl;
//     }
//     return 0;
// }

/// tong hai da thuc
// int dt[10000],cnt=0;

// void solution(char c[]){
//     for (int i = 0;i<strlen(c);i++){
//         if(isdigit(c[i])){
//             int tmp = 0;
//             while(c[i]!='*'){
//                 tmp = tmp * 10 + c[i] - '0';
//                 i++;
//             }
//             i+=3;
//             int mu = 0;
//             while(isdigit(c[i])){
//                 mu = mu * 10 + c[i]-'0';
//                 i++;
//             }
//             dt[mu] +=tmp;
//         }
//     }
// }

// int main(){
//     int t;
//     cin >> t;
//     getchar();
//     for(int i = 0;i<t;i++){
//         char c1[10000],c2[10000];
//         gets(c1);gets(c2);
//         memset(dt,0,sizeof(dt));
//         cnt = 0;
//         solution(c1);
//         solution(c2);
//         for (int i = 10000;i>=0;i--){
//             if(dt[i]) ++cnt;    
//         }
//         cout << "#Test: " << i;
//         for(int i =10000;i>=0;i--){
//             if(dt[i]!=0){
//                 cout << dt[i] << i  <<  endl;
//                 --cnt;
//                 if(cnt!=0)cout << '+' ;
//             }
//         }
//         cout << endl;
//     }

/////xau ki tu day du

// int lis(char c[]){
//     int lis[strlen(c)];

//     for(int i = 0; i < strlen(c);i++){
//         lis[i]=1;
//         for(int j=0;j<i;j++){
//             if(c[i]>c[j] && lis[i] < lis[j]+1){
//                 lis[i] = lis[j]+1;
//             }
//         }
//     }
//     int res = 0;
//     for(int i = 0; i<strlen(c);i++){
//         if(lis[i]>res){
//             res = lis[i];
//         }
//     }
//     return 26-res;
// }

// int main(){
//     char c[1000];
//     gets(c);
//     cout << lis(c);
//     return 0;
// }


/////nhat so da con thieu
/*
int main(){
    int n;
    cin >> n;
    char c[1000];
    cin >> c;
    int cnt = 0;
    for(int i = 0;i<n-1;i++){
        if(c[i]==c[i+1]){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}

*/

/////create the word "hello" by deleting character in the string

// int solution(char str[]){
//     char form[5] = {'h','e','l','l','o'};
//     int count = 0;
//     for(int element = 0;element<strlen(str);element++){
//         if(str[element] == form[count]){
//             ++count;
//         }
//         if(count==5){
//             return 1;
//         }
//     }
//     return 0;
// }

// int main(){
//     char str[1000];
//     cin >> str;
//     if(solution(str)){
//         cout << "Yes" << endl;
//     }else{
//         cout << "No" << endl;
//     }
//     return 0;
// }

///////tat ca cac so 1 trong chuoi tao thanh mot doan lien ke
/// 
// int main(){
//     int t;
//     cin >> t;
//     getchar();
//     while(t--){
//         char s[100];
//         cin >> s;
//         int index = -1;
//         int res = 0;
//         for(int i =0 ;i<strlen(s);i++){
//             if(s[i]=='1'){
//                 if(index == -1){
//                     index = i;
//                 }else{
//                     res += i - index - 1;
//                     index = i;
//                 }
//             }
//         }
//         cout << res << endl;
//     }
//     return 0;
// }

////// chuoi so dien thoai
// int solution(char c[],int n){
//     int index = -1;
//     for(int i = 0 ;i<n;i++){
//         if(c[i]=='8'){
//             index = i;
//             break;
//         }
//     }
//     if(index == -1) return 0;
//     if(n-1-index >=10)return 1;
//     return 0;
// }

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         char c[1000];
//         if(solution(c,n)){
//             cout << "Yes" << endl;
//         }else{
//             cout << "No" << endl;
//         }
//     }
//     return 0;
// }


///dem so xau con la xau chan

// int main(){
//     int n;
//     cin >> n;
//     char s[100000];
//     cin >> s;
//     int res = 0;
//     for(int i = 0;i<n;i++){
//         if((s[i]-'0')%2==0){
//             res += i+1;
//         }
//     }
//     cout << res << endl;
//     return 0;
// }

//////chuyen doi so la ma sang dang thap phan

// int value[] = {1,5,10,50,100,500,1000};

// char s[]= "IVXLCDM";

// int findPos(char c){
//     for(int i = 0;i<7;i++){
//         if(s[i]==c) return i;
//     }
// }

// int solution(char c[]){
//     int n = strlen(c);
//     int res = value[findPos(c[n-1])];
//     for(int i = n-1;i>0;i--){
//         int pos1 = findPos(c[i]);
//         int pos2 = findPos(c[i-1]);
//         if(value[pos1]<=value[pos2]){
//             res += value[pos2];
//         }else{
//             res -= value[pos2];
//         }
//     }
//     return res;
// }

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         char c[1000];
//         cin >> c;
//         cout << solution(c) << endl;
//     }
//     return 0;
// }


/*
int solution(char c[]){
    int res = 1;
    int cnt = 1;
    for(int i=0;i<strlen(c)-1;i++){
        if(c[i]!=c[i+1]){
            ++cnt;
        }else{
            cnt = 1;
        }
        res = max(res,cnt);
    }
    return res;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        char c[1000];
        cin >> c;
        cout << solution(c) << endl;
    }
}
*/

/*
int solution(char c[]){
    int res = 1;
    int cnt = 1;
    for(int i=0;i<strlen(c)-1;i++){
        if(c[i]!=c[i+1]){
            ++cnt;
        }else{
            res = max(res,cnt);
            cnt = 1;
        }
    }
    res = max(res,cnt);
    return res;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        char c[1000];
        cin >> c;
        cout << solution(c) << endl;
    }
}
*/

///Tong cua hai so nguyen lon

// void reverse(int arrNum[],int totalNum){
//     int left = 0, right = totalNum - 1;
//     while(left < right){
//         int temp = arrNum[left];
//         arrNum[left] = arrNum[right];
//         arrNum[right] = temp;
//         left++;
//         right--;
//     }
// }

// void SumOfTint(char num1[],char num2[]){
//     int totalN1 = strlen(num1),totalN2 = strlen(num2),n=0;
//     int strToNumB[totalN1],strToNumS[totalN2],sumOf2Arr[totalN1+1];
//     for(int index = 0;index <totalN1;index++)
//     {
//         strToNumB[index] = num1[index] - '0';
//     } 
//     for(int index = 0;index <totalN2;index++){
//         strToNumS[index] = num2[index] - '0';
//     }
//     reverse(strToNumB,totalN1);reverse(strToNumS,totalN2);
//     for(int index = totalN2;index<totalN1;index++){
//         strToNumS[index]=0;
//     }
//     int miss = 0;
//     for(int index = 0;index <totalN1;index++){
//         int temp = num1[index] + num2[index] + miss;
//         sumOf2Arr[n++] = temp%10;
//         miss = temp/10;
//     }
//     if(miss) sumOf2Arr[n++] = miss;
//     for(int index = n-1;index>=0;index--){
//         cout << sumOf2Arr[index];
//     }
// }

// int main(int argv, char* argc[]){
//     int testcase;
//     cin >> testcase;
//     while(testcase--){
//         char strB[1001],strS[1001];
//         cin >> strB >> strS;
//         if(strlen(strB)>=strlen(strS)){
//             SumOfTint(strB,strS);
//         }else{
//             SumOfTint(strS,strB);
//         }
//         cout << endl;
//     }
//     return 0;
// }


////// Difference of two large integers

// void reverse(int arr[],int total){
//     int left = 0, right = total-1;
//     while(left<right){
//         int temp = arr[left];
//         arr[left]=arr[right];
//         arr[right] = temp;
//         left++;right--;
//     }
// }


// void MinusOfBInt(char strB[],char strS[]){
//     int totalOfBInt = strlen(strB), totalOfSInt = strlen(strS) , n = 0;
//     int strRepos1[totalOfBInt] , strRepos2[totalOfSInt] , strReposTotal[totalOfBInt+1];
//     for(int index = 0 ; index <= totalOfBInt ; index++){
//         strRepos1[index] = strB[index] - '0';
//     }
//     for(int index = 0 ; index <= totalOfSInt ; index++){
//         strRepos2[index] = strS[index] - '0';
//     }

//     reverse(strRepos1,totalOfBInt);reverse(strRepos2,totalOfSInt);

//     for(int index = totalOfSInt;index <totalOfBInt;index++){
//         strRepos2[index]=0;
//     }
//     int miss = 0;
//     for(int index = 0;index <totalOfBInt;index++){
//         int temp = strRepos1[index] - strRepos2[index] - miss;
//         if(temp < 0){
//             miss = 1;
//             strReposTotal[n++] = 10 + temp;
//         }
//         else{
//             strReposTotal[n++] = temp;
//             miss = 0;
//         }
//     }
//     int check = 0;
//     for(int index = n-1;index >=0;index--){
//         if(check == 0 && strReposTotal[index]){
//             check = 1;
//         }
//         if(check) cout << strReposTotal[index];
//     }
//     if(check==0) cout << "0";
// }


// int main(int argc, char* argv[]){
//     int testcase;
//     cin >> testcase;
//     while(testcase--){
//         char strB[1001],strS[1001];
//         cin >> strB >> strS;
//         if(strlen(strB) > strlen(strS) || (strlen(strB) == strlen(strS) && strcmp(strB,strS)>0)){
//             MinusOfBInt(strB,strS);
//         }else{
//             MinusOfBInt(strS,strB);
//         }
//         cout << endl;
//     }
// }

///tong chu so cua so nguyen lon

// int solution(char c[]);

// int main(int argc, char* argv[]){
//     int testcase;
//     cin >> testcase;
//     while(testcase--){
//         char str[1000];
//         cin >> str;
//         cout << solution(str) << endl;
//     }
//     return 0;
// }

// int solution(char c[]){
//     int res = 0;
//     int total = strlen(c);
//     for(int index = 0 ;index < total ;index++){
//         res += c[index] - '0';
//     }
//     return res;
// }


///ktra so co phai so thuan nghich va la so chan
// int reversible(char c[]);
// int solution(char c[]);

// int main(int argc, char* argv[]){
//     int testcase;
//     cin >> testcase;
//     while(testcase--){
//         char c[1000];
//         cin >> c;
//         if(reversible(c)&&solution(c)){
//             cout << "Yes" << endl;
//         }else cout << "No" << endl;
//     }
//     return 0;
// }

// int reversible(char c[]){
//     int left = 0, right = strlen(c)-1;
//     while(left < right){
//         for(int index = left;index < right;index++){
//             if(c[left] != c[right]){
//                 return 0;
//             }
//             left++;right--;
//         }   
//     }
//     return 1;
// }

// int solution(char c[]){
//     for(int index = 0;index < strlen(c);index++){
//         if(c[index] %2==1){
//             return 0;
//         }
//     }
//     return 1;
// }

//so co phai so nguyen to va tong cua chung co chu so cuoi cung la 0

// int solution(char c[]);

// int main(int argc,char* argv[]){
//     int testcase;
//     cin >> testcase;
//     while(testcase--){
//         char c[1000];
//         cin >> c;
//         solution(c) ? cout << "Yes" << endl : cout << "No" << endl;
//     }
//     return 0;
// }

// int solution(char c[]){
//     int sum = 0;
//     for(int index = 0;index < strlen(c); index++){
//         int split = c[index] - '0';
//         if(split != 2 && split != 3 && split != 5 && split != 7){
//             return 0;
//         }
//         sum += split;
//     }
//     if(sum %10==0){
//         return 1;
//     }
//     return 0;
// }