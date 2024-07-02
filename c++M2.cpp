#include<bits/stdc++.h>
#include<iostream>
using namespace std;


/// Cho mang A[i] gom n phan tu,
/// hay sap xep lai cac pt cua mang
/// sao cho A[i]=i. Neu pt la gia tri khac dua -1 vao
// int main(){
//     int tc;
//     cin >>tc; 
//     while(tc--){
//         int n;
//         cin>>n;
//         map<long long,bool> mp;
//         for(int i =0 ;i<n;i++){
//             int x; cin >> x;
//             mp[x] = true;
//         }
//         for(int i =0;i<n;i++)
//         {
//             if(mp[i]){
//                 cout << i << " ";
//             }
//             else{ 
//                 cout << "-1 ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }


/// cho mang A[] gom n so nguyen  bao gom so 0
/// tim so nguyen duong nho nhat khong co mat trong mang
/// VD: a[]={5,8,3,7,9,1} => 2
// int cnt[1000002];
// int main(){
//     int tc;
//     cin >> tc;
//     while(tc--)
//     {
//         int n;
//         cin >> n;
//         memset(cnt,0,sizeof(cnt));
//         for(int i =0 ;i<n;i++){
//             int x;
//             cin >> x;
//             if(x>0)cnt[x]=1;
//         }
//         for(int i = 1;i<=1000001 ;i++){
//             if(cnt[i]==0){
//                 cout << i << " ";
//                 break;
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }


/// cho mang a[n] co n phan tu, 
/// tim min(a[i]-a[j]) (khong am)
/// 2 4 5 7 9 => 5 - 4 = 1 => 1 la min(a[i] - a[j])
// int main(){
//     int tc;
//     cin >> tc;
//     while(tc--)
//     {
//         int n;
//         cin >> n;
//         int a[n];
//         for(int i = 0 ;i<n;i++)
//         {
//             cin >> a[i];
//         }
//         int res = INT_MAX;
//         for(int i = 0;i<n;i++)
//         {
//             for(int j = i+1;j<n;j++)
//             {
//                 res = min(res, max(a[i],a[j])-min(a[i],a[j]));
//             }
//         }
//         cout << res;
//     }
//     return 0;
// }

// int main (){
//     int tc;
//     cin >> tc;
//     while(tc--){
//         int n;
//         cin >> n;
//         int a[n];
//         for(int i =0;i<n;i++)
//         {
//             cin >> a[i];
//         }
//         sort(a,a + n);
//         int res = INT_MAX;
//         for(int i =1 ;i<n;i++)
//         {
//             res = min(res , a[i]-a[i-1]);
//         }
//         cout << res << endl;
//     }
//     return 0;
// }

// Cho mang a[n] n phan tu 
// tim k lon nhat cua mang cac phan tu dua theo thu tu giam dan
// ex: 10 7 9 12 6 => n = 3  => 12 10 7 
// int main(){
//     int tc;
//     cin >> tc;
//     while(tc--){
//         int n,k;
//         cin >> n >> k;
//         int a[n];
//         for(int i = 0 ;i<n;i++){
//             cin >> a[i];
//         }
//         sort(a,a+n,greater<int>());
//         for(int i =0;i<k;i++){
//             cout << a[i] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Cho mang A[n] n phan tu 
// Dem so phan tu lap lai it nhat 1 lan 
// EX: 4 5 1 2 1 => cout << 2;

// int cnt[1000001];
// int main()
// {
//     int tc;
//     cin >> tc;
//     while(tc--){
//         int n;
//         cin >> n;
//         int a[n];
//         // map<int,int> mp;
//         memset(cnt ,0,sizeof(cnt));
//         for(int i = 0;i<n;i++){
//             cin >> a[i];
//             cnt[a[i]]++;
//             // mp[a[i]]++;
//         }
//         int ans = 0;
//         for(int i = 0;i<n;i++)
//         {
//             if(cnt[a[i]]==2){
//                 ans++;
//             }
//         }
//         cout << ans;
//         cout << endl;
//     }
//     return 0;
// }


// tinh toan gia tri da thuc p(n,x) = An-1*x^n-1+An-2*x^n-2+...+Ao
// Ket qua co the rat lon nen hay chia du cho 7

// const int MOD = 1000000007;
// int main(){
//     int tc;
//     cin >> tc;
//     while(tc--){
//         int n,x;
//         cin >> n >> x;
//         int a[n];
//         for(int i = 0;i<n;i++){
//             cin >> a[i];
//         }
//         int res = 0,lt = 1;
//         for(int i = 1;i<=n;i++){
//             res += a[n-i] * lt;
//             res %=MOD;
//             lt *= x;
//             lt %=MOD;
//         }
//         cout << res << endl;
//     }
//     return 0;
// }

//cho mang A[n phan tu] 
// tim day con lon nhat chi toan so fibonacci

// int f[100001];

// void check(){
//     int fibo[20];
//     fibo[0]= 0;fibo[1]=1;
//     for (int i = 2; i <= 19 ; i++){
//         fibo[i] = fibo[i-1] + fibo[i-2];
//     }
//     for(int i = 0 ;fibo[i] <= 1000;i++){
//         f[fibo[i]]=1;
//     }
// }

// int main(){
//     check();
//     int tc;
//     cin >> tc;
//     while(tc--){
//         int n;
//         cin >> n;
//         int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             /* Nhap gia tri cho mang */
//             cin >> a[i];
//         }
//         for(int i = 0 ;i<n;i++){
//             if(f[a[i]]==1){
//                 cout << a[i] << " ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }


//cho mang A[n] 
// Hieu lon nhat cua cap phan tu dung thu tu
// So lon hon xuat hien sau so nho hon va hieu cua chung nho nhat

// int main(){
//     int tc;
//     cin >> tc;
//     while(tc--){
//         int n;
//         cin >> n;
//         int a[n];
//         for(int i= 0;i<n;i++){
//             cin >> a[i];
//         }
//         int min_val = a[0], res = -1e9;
//         for (int i= 1;i<n;i++){
//             if(a[i]>min_val){
//                 res = max(res, a[i] - min_val);
//             }
//             min_val = min(a[i],min_val);
//         }
//         if(res == -1e9) cout << "-1\n";
//         else cout << res << " ";
//     }
//     return 0;
// }


// cho mang A[] n phan tu va so nguyen duong k
// tim day con lien tuc do dai k co gia tri trung binh cac phan tu lon nhat
// VD: [1 12 -5 -6 50 3] k=4 => {12 -5 -6 50} / 4 = 7.75

// int main(){
//     int tc;
//     cin >> tc;
//     while(tc--){
//         int n,k;
//         cin >> n >> k;
//         int a[n];
//         for(int i = 0;i<n;i++){
//             cin >> a[i];
//         }
//         int sum = 0;
//         for(int i =0;i<k;i++){
//             sum += a[i];
//         }
//         int res = sum,idx =0;
//         for (int i = k; i < n; i++)
//         {
//             /* code */
//             sum  = sum - a[i-k]+a[i];
//             if(sum > res){
//                 res = sum;
//                 idx = i-k+1;
//             }
//         }
//         for (int i = 0; i < k; i++)
//         {
//             /* code */
//             cout << a[idx + i] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// so nho nhat lon hon a[i] 
// A[] n phan tu 
// VD: 13 6 7 12 => _ 7 12 13

// int main(){
//     int tc;
//     cin >> tc;
//     while(tc--){
//         int n;
//         cin >> n;
//         int a[n];
//         for(int i =0;i<n;i++){
//             cin >> a[i];
//         }
//         vector<int> v(a,a+n);
//         sort(v.begin(),v.end());
//         for(int i = 0;i<n;i++){
//             auto it = upper_bound(v.begin(),v.end(),a[i]);
//             if(it == v.end()){
//                 cout << "_";
//             }else cout << (*it) << " " ;
//         }
//         cout << endl;
//     }
//     return 0;
// }

///////ucln
///not use map
///d hieu sao chay ra sai
// int gcd(int a,int b){
//     if(b==0)return a;
//     return gcd(b,a % b);
// }
// const int maxn = 1000;

// int a[maxn];

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         for(int i = 0;i<n;i++){
//             cin >> a[n];
//         }
//         int ans = 1;
//         for(int i = 0 ;i < n;i++){
//             for(int j = i+1;j < n;j++){
//                 ans = max(ans,gcd(a[i],a[j]));
//             }
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }

///// use map
// const int maxn = 1000;
// int a[maxn];

// map<int,int> mp;

// void solve(int n){
//     for(int i = 1;i<sqrt(n);i++){
//         if(n%i==0){
//             mp[i]++;
//             if(i != n/i)mp[n/i]++;
//         }
//     }
// }

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         for(int i =0;i<n;i++){
//             cin >> a[i];
//             solve(a[i]);
//         }
//         int res = 1;
//         for(auto it : mp){
//             if(it.second >= 2){
//                 res= it.first;
//             }
//         }
//         cout << res << endl;
//     }
//     return 0;
// }

// int gcd(int a,int b){
//     if(b==0)return a;
//     return gcd(b,a%b);
// }
// const int maxn=100001;
// int a[maxn];
// int main(){
//     int t;
//     cin >>t;
//     while(t--){
//         int n;
//         cin >> n;
//         for(int i =0;i<n;i++){
//             cin >> a[i];
//         }
//         int res = 0;
//         for(int i = 0;i<n;i++){
//             res = gcd(res,a[i]);
//         }
//         // if(res == 1) cout << 0 <<endl; continue;
//         int ans = 1;//bang chinh no
//         for(int i =2;i<sqrt(res);i++){
//             if(res % i == 0)
//             {
//                 ++ans;
//                 if(i != res / i) ++ans;
//             }
            
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }


// diem can bang
// gt: vi tri phan tu thoa man dieu kien:
// tong cac phan tu truoc vi tri I bang tong cac phan tu sau vi tri I

// for trau
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         int a[n];
//         for(int i=0;i<n;i++){
//             cin >> a[i];
//         }
//         int sum = 0;
//         for(int i =0;i<n/2;i++){
//             sum +=a[i];
//         }
//         int sum2 =0;
//         for(int i =n/2+1;i<n;i++){
//             sum2 += a[i];
//         }
//         if(sum == sum2){
//                 cout << n/2;
//         }
//         else{
//             cout << -1;
//         }
//     }
//     return 0;
// }

// // for trau nhung hieu qua hon
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         int a[n];
//         for(int i=0;i<n;i++){
//             cin >> a[i];
//         }
//         long long sum = 0;
//         for(int i =0;i<n;i++){
//             sum +=a[i];
//         }
//         bool ok = true;
//         long long left = 0;
//         for(int i =0;i<n;i++){
//             sum -=a[i];
//             if(sum==left){
//                 cout << i << endl;
//                 ok = false;
//             }
//             left+=a[i];
//         }
//         if(ok){
//             cout << "-1";
//         }
//     }
//     return 0;
// }


//so co so lan xuat hien la le

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         int a[n];
//         for(int i=0;i<n;i++){
//             cin >> a[i];
//         }
//         int ans = a[0];
//         for(int i=1;i<n;i++){
//             ans^=a[i];
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }

// // loai bo it nhat n meo khac mau, giu meo cung mau va in so meo do
// int max(int a,int b){
//     return a > b ? a : b;
// }

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         int a[n];
//         for(int i=0;i<n;i++){
//             cin >> a[i];
//         }
//         int res = 1,dem = 1;
//         for(int i=1;i<n;i++){
//             if(a[i]==a[i-1]){
//                 dem++;
//             }
//             res = max(res,dem);
//         }
//         cout << n-res << endl; 
//     }
// }


// // sap xep mang 
// // cung cap tap hop vi tri rieng biet 
// // co the hoan doi cac pt a[pi] va a[pi+1]
// // vd: [ 3 2 1 ] ; p[1,2] =>(1,2) [2 3 1] =>(2,3) [2 1 3] =>(1,2) [1 2 3]
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n,m;
//         cin >> n >> m;
//         int a[n];
//         for(int i=0;i<n;i++){
//             cin >> a[i];
//         }
//         int pos[101] ={0};
//         for(int i=0;i<m;i++){
//             int x;
//             cin>>x;
//             pos[x-1]=1;
//         }
//         for(int i =0;i<n;i++){
//             if(pos[i]==0)continue;
//             int index = i;
//             while(index <n&& pos[index]){
//                 ++index;
//             }
//             sort(a+i,a+index+1);
//             i=index;
//         }
//         bool ok = true;
//         for(int i =0;i<n;i++){
//             if(a[i]>a[i+1]){
//                 ok = false; break;
//             }
//         }
//         ok ? cout << "yes" : cout << "no";
//     }
// }


// // cu c giay se cap nhat tu 1 lan
// // go tu giay thu a xong lai go giay thu b neu b-a<=c thi tu moi duoc them con khong thi bien mat
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n,c;
//         cin >> n >> c;
//         int a[n];
//         for(int i =0;i<n;i++){
//             cin >> a[i];
//         }
//         int cnt = 1,res = 0;
//         for(int i =1;i<n;i++){
//             if(a[i]-a[i-1] <= c){
//                 ++cnt;
//                 res = max(res,cnt);
//             }
//             else{
//                 cnt=1;
//             }
//         }
//         cout << res;
//     }
// }


// // tong cac phan tu trong mang lon hon phan tu x va co so luong phan tu nho nhat

// int main(){
//     int t;
//     cin >>t;
//     while(t--){
//         int n,x;
//         cin >> n >> x;
//         int a[n];
//         for(int &c : a){
//             cin >> c;
//         }
//         int left = 0, res = 1e9;
//         long long sum =0;
//         for(int r =0;r<n;r++){
//             sum += a[r];
//             while(sum > x){
//                 res = min (res, r-left+1);
//                 sum -= a[left];
//                 ++left;
//             }
//         }
//         if( res == 1e9 )cout << "-1";
//         else{
//             cout << res << endl;
//         }
//     }
// }


// // phan tu trung vi cua mang da duoc sap xep
// // phan tu trung vi la phan tu dung giua 
// // neu so phan tu la le thi lay phan tu be hon 

// int main(){
//     int t;
//     cin >>t;
//     while(t--){
//         int n;
//         cin >> n;
//         int a[n];
//         for(int &c : a){
//             cin >> c;
//         }
//         sort(a,a+n);
//         if(n%2==1){
//             cout << a[n / 2];
//         }else{
//             cout << a[n/2-1];
//         }
//     }
// }

// // tang mang
// // [3 2 5 1 7] => 3-2=1 + 5-1=4 => 5 lan di chuyen
// // tang gia tri cua bat ky phan tu nao len 1, in ra so lan di chuyen toi thieu
// int main(){
//     int t;
//     cin >>t;
//     while(t--){
//         int n;
//         cin >> n;
//         int a[n];
//         for(int &c : a){
//             cin >> c;
//         }
//         long long ans = 0;
//         for(int i =1;i<n;i++){
//             if(a[i]<a[i-1]){
//                 ans+=a[i-1]-a[i];
//                 a[i]=a[i-1];
//             }
//         }
//         cout << ans;
//     }
// }


// mang 2 chieu 
// int main(){
//     int n,m;
//     cin >> n >> m;
//     char a[n][m];
//     for(int i = 0;i<n;i++){
//         for(int j =0;j<m;j++){
//             cin >> a[i][j];
//         }
//     }
//     for(int i = 0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout << a[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }



// // vector
// // nhap mang 2 chieu voi moi dong co so luong phan tu khac nhau

// int main(){
//     int n;
//     cin >> n;
//     vector<int> a[n];
//     for(int i =0;i<n;i++){
//         int m;
//         cin >> m;
//         for(int j =0;j<m;j++){
//             int x;
//             cin >> x;
//             a[i].push_back(x);
//         }
//     }
//     cout << endl; 
//     for (int i =0;i<n;i++){
//         for(int j = 0;j<a[i].size();j++){
//             cout << a[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// // string 
// // nhap mot chuoi voi so luong phan tu moi dong khac nhau

// int main(){
//     int n;
//     cin >> n;
//     string s[n];
//     cin.ignore();
//     for(int i =0;i<n;i++){
//         getline(cin,s[i]);
//     }
//     for(int i=0;i<n;i++){
//         cout << s[i]  << " ";
//         cout << endl;
//     }
    
//     cout << s[2];
// }



// // bai tap coding 

// int main(){
//     int n,m;
//     cin >> n >> m;
//     int a[n][m];
//     for(int i =0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin >> a[i][j];
//         }
//     }

//     for(int i=0;i<m;i++){ //chi so hang
//         for(int j=0;j<n;j++){ // chi so cot
//             cout << a[j][i] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }



// tong mang tu l den r
// prefix aglorithm

// mang 1 chieu
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int &c : a){
        cin >> c;
    }
    int q;
    cin >> q;
    while(q--){
        int l,r,sum = 0;
        cin >> l >> r;
        for(int i=l;i<r;i++){
            sum += a[i];
        }
        cout << sum;
    }
    return 0;
}

int main(){
    int n;
    cin >> n;
    int a[n+1];
    for(int i =0;i<n;i++ ) cin >> a[i];
    int prefix[n+1] = {0};
    for(int i=1;i<=n;i++){
        prefix[i] = prefix[i-1] + a[i]; 
    }
    int q;
    cin >> q;
    while(q--){
        int l,r; 
        cin >> l >> r;
        cout << prefix[r] - prefix[l-1] << endl;
    }
}


// mang 2 chieu
int main(){
    int n,m;
    cin >> n >> m;
    int a[n][m];
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    int q;
    cin >> q;
    while(q--){
        int hn,hm,cn,cm;
        cin >> hn >> hm >> cn >> cm;
        int sum =0;
        for(int i=hn;i<=hm;i++){
            for(int j = cn;j<=cm;j++){
                sum += a[i][j];
            }
            cout << sum << endl;
        }
    }
    return 0;
} 


int main(){
    int n,m;
    cin >> n >> m;
    int a[n+1][m+1];
    for(int i =1;i<=n;i++){
        for(int j =1;j<=m;j++){
            cin >> a[i][j];
        }
    }
    int pre[n+1][m+1] = {0};
    for(int i =1;i<=n;i++){
        for(int j =1;j<=m;j++){
            pre[i][j] = pre[i-1][j] + pre[i][j-1] - pre[i-1][j-1]+a[i][j];
        }
    }
    int q;
    cin >> q;
    while(q--){
        int h1,h2,c1,c2;
        cin >> h1 >> h2 >>c1>>c2;
        cout << pre[h2][c2] - pre[h1-1][c2] - pre[h2][c1-1] + pre[h1-1][c1-1] << endl;
    }
    return 0;
}
