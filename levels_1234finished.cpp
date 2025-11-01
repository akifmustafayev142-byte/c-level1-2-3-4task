declared by AKIF MUSTAFAYEV142
#level1 task1
// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;
string ad;
int main() {
    cout<<"ad daxil edin: "<<endl;
    cin>>ad;
    cout<<"Salam,[";
    cout<<ad<<']'<<'!';

    return 0;
}

#level1 task2
// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;
int x;
int y;
int main() {
    cout<<"birinci eded daxil edin"<<endl;
    cin>>x;
    cout<<"ikinci eded daxil edin"<<endl;
    cin>>y;
    cout<<x+y<<endl;
    cout<<x-y<<endl;
    cout<<x*y<<endl;
    cout<<x/y<<endl;
 

    return 0;
}

#level1 task3
// Online C++ compiler to run C++ program online
#include <iostream>
#include<cmath>
using namespace std;
int x;
int main() {
  cout<<"eded daxil edin: "<<endl;
  cin>>x;
  cout<<pow(x,2)<<endl;
  cout<<pow(x,3)<<endl;

    return 0;
}

level1 task4
// Online C++ compiler to run C++ program online
#include <iostream>
#include<cmath>
using namespace std;
int r;
int main() {
  cout<<"dairenin radisunu daxil edin: "<<endl;
  cin>>r;
  //dairenin sahesi
  cout<<M_PI*pow(r,2)<<endl;
  //dairenin cevresi
  cout<<2*M_PI*r<<endl;
  

    return 0;
}
#level1 task5
 // Online C++ compiler to run C++ program online
#include <iostream>
#include<cmath>
using namespace std;
double tc;
double tf;
int main() {
  cout<<"selsi daxil edin: "<<endl;
  cin>>tc;
  //franyetden selsiye kecid
  tf=((9.0/5.0)*tc+32.0);
  cout<<"franyet qiymeti: "<<tf<<endl;
  //selsiden frsnyete kecid
  cout<<"franyet daxil edin: "<<endl;
  cin>>tf;
  tc=((5.0/9.0)*(tf-32.0));
  cout<<"selsi qiymeti: "<<tc<<endl;
  

    return 0;
}
#level1 task 6
// Online C++ compiler to run C++ program online
#include <iostream>
#include<cmath>
using namespace std;
int x;
int y;
int z;
int main() {
  cout<<"3 eded daxil edin"<<endl;
  cin>>x;
  cin>>y;
  cin>>z;
  cout<<((x+y+z)/3)<<endl;
  

    return 0;
}
#level1 task7
// Online C++ compiler to run C++ program online
#include <iostream>
#include<cmath>
using namespace std;
int x;
int y;
int main() {
    cout<<"2 eded daxil edin: "<<endl;
    cin>>x>>y;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<x<<endl;
    cout<<y<<endl;
  
  

    return 0;
}
#level1 task8
// Online C++ compiler to run C++ program online
#include <iostream>
#include<cmath>
using namespace std;
int x;
int main() {
 cout<<"eded daxil edin: "<<endl;
 cin>>x;
 //kvadratin sahesi
 cout<<pow(x,2)<<endl;
 //kvadratin perimetri
 cout<<4*x<<endl;
  

    return 0;
}
level1 task 9
// Online C++ compiler to run C++ program online
#include <iostream>
#include<cmath>
using namespace std;
int x;
int main() {
 cout<<"saniye daxil edin: "<<endl;
 cin>>x;
 //saniyeni deqiqeye cevirme
 cout<<x/60<<" deqiqe"<<endl;
 cout<<x%60<<"saniye"<<endl;
 //saniyeni saata cevirmek
 cout<<x/3600<<"saat"<<endl;
 cout<<(x%3600)/60<<"deqiqe"<<endl;
 cout<<((x%3600)/60)%60<<"saniye"<<endl;
 
 
 
  

    return 0;
}
#level2 task1
// Online C++ compiler to run C++ program online
#include <iostream>
#include<cmath>
using namespace std;
int x;
int y;
int main() {
    cout<<"eded daxil edin: "<<endl;
    cin>>x>>y;
    if(x>=y){
        cout<<x<<endl;
        
    }else{
        cout<<y<<endl;
    }
    

    return 0;
}
#level2 task2
// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
    int x;
    cout << "eded daxil edin: " << endl;
    cin >> x;

    if (x > 0) {
        cout << "eded musbetdir" << endl;
    } else if (x < 0) {
        cout << "eded menfidir" << endl;
    } else {
        cout << "eded sifirdir" << endl;
    }

    return 0;
}
#level2 task3
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cout << "eded_daxil_edin: " << endl; // "Enter a number: "
    cin >> x;
    cin >> y;
    cin >> z;

    if (x >= y && x >= z) {
        cout << "en boyuk eded: " << x << endl; 
    } else if (y >= x && y >= z) {
        cout << "en boyuk eded: " << y << endl; 
    } else {
        cout << "en boyuk eded: " << z << endl; 
        
    }

    return 0;
}
#level2 task4
#include <iostream>

using namespace std;

int main() {
    int x;
    cout << "Bir tam eded daxil edin: ";
    cin >> x;

    // Modulo (%) operatoru ile qaliq sifirdirsa, cutdur
    if (x % 2 == 0) {
        cout << "Daxil edilen eded cutdur." << endl;
    } else {
        cout << "Daxil edilen eded tekdir." << endl;
    }

    return 0;
}
#level2 task5
#include <iostream>

using namespace std;

int main() {
    int bal;
    cout << "Telebenin imtahan balini daxil edin (0-100): ";
    cin >> bal;

    if (bal < 0 || bal > 100) {
        cout << "Bal yanlis daxil edilib. (0-100 araligi teleb olunur)" << endl;
    } else if (bal >= 91) { // bal 91 ve 100 araligindadir
        cout << "Qiymet: A" << endl;
    } else if (bal >= 81) { // bal 81 ve 90 araligindadir
        cout << "Qiymet: B" << endl;
    } else if (bal >= 71) { // bal 71 ve 80 araligindadir
        cout << "Qiymet: C" << endl;
    } else if (bal >= 61) { // bal 61 ve 70 araligindadir
        cout << "Qiymet: D" << endl;
    } else if (bal >= 51) { // bal 51 ve 60 araligindadir
        cout << "Qiymet: E" << endl;
    } else { // bal 0 ve 50 araligindadir
        cout << "Qiymet: F" << endl;
    }

    return 0;
}
#level2 task6
#include <iostream>

using namespace std;

int main() {
    int ayNomresi;
    cout << "Ay nomresini daxil edin (1-12): ";
    cin >> ayNomresi;

    if (ayNomresi < 1 || ayNomresi > 12) {
        cout << "Yanlis ay nomresi daxil etdiniz. (1-12 araligi teleb olunur)" << endl;
    } else if (ayNomresi == 12 || ayNomresi == 1 || ayNomresi == 2) {
        cout << "Qis fesli" << endl;
    } else if (ayNomresi >= 3 && ayNomresi <= 5) {
        cout << "Yaz fesli" << endl;
    } else if (ayNomresi >= 6 && ayNomresi <= 8) {
        cout << "Yay fesli" << endl;
    } else { // ayNomresi 9, 10, 11
        cout << "Payiz fesli" << endl;
    }
    
    // Alternativ olaraq 'switch' istifade etmek olar:
    /*
    switch (ayNomresi) {
        case 12:
        case 1:
        case 2:
            cout << "Qis fesli" << endl;
            break;
        case 3:
        case 4:
        case 5:
            cout << "Yaz fesli" << endl;
            break;
        case 6:
        case 7:
        case 8:
            cout << "Yay fesli" << endl;
            break;
        case 9:
        case 10:
        case 11:
            cout << "Payiz fesli" << endl;
            break;
        default:
            cout << "Yanlis ay nomresi daxil etdiniz. (1-12 araligi teleb olunur)" << endl;
    }
    */

    return 0;
}
#level2 task7
#include <iostream>

using namespace std;

int main() {
    char emeliyyat;
    double eded1, eded2, netice;

    cout << "Birinci ededi daxil edin: ";
    cin >> eded1;
    cout << "Emeliyyati daxil edin (+, -, *, /): ";
    cin >> emeliyyat;
    cout << "Ikinci ededi daxil edin: ";
    cin >> eded2;

    switch (emeliyyat) {
        case '+':
            netice = eded1 + eded2;
            cout << eded1 << " + " << eded2 << " = " << netice << endl;
            break;
        case '-':
            netice = eded1 - eded2;
            cout << eded1 << " - " << eded2 << " = " << netice << endl;
            break;
        case '*':
            netice = eded1 * eded2;
            cout << eded1 << " * " << eded2 << " = " << netice << endl;
            break;
        case '/':
            if (eded2 != 0) {
                netice = eded1 / eded2;
                cout << eded1 << " / " << eded2 << " = " << netice << endl;
            } else {
                cout << "Sifira bolmek mumkun deyil!" << endl;
            }
            break;
        default:
            cout << "Yanlis emeliyyat daxil etdiniz!" << endl;
            break;
    }

    return 0;
}
#level2 task8
#include <iostream>

using namespace std;

int main() {
    int il;
    cout << "Bir il daxil edin: ";
    cin >> il;

    bool artiqIldir = false;
    if ((il % 4 == 0 && il % 100 != 0) || (il % 400 == 0)) {
        artiqIldir = true;
    }

    if (artiqIldir) {
        cout << il << " artiq ildir (uzun ildir)." << endl;
    } else {
        cout << il << " artiq il deyil (adi ildir)." << endl;
    }

    return 0;
}
#level3 task1
// Online C++ compiler to run C++ program online
#include <iostream>
#include<cmath>
using namespace std;
int x;
int main() {
    for(int x=1;x<=10;x++){
        cout<<x<<endl;
        
    }
   
    

    return 0;
}
#level3 task2
// Online C++ compiler to run C++ program online
#include <iostream>
#include<cmath>
using namespace std;
int x;
int main() {
    for(int x=1;x<=100;x++){
       if(x%2==0){
         cout<<x<<endl; 
    }
        
        
    }
   
    

    return 0;
}
#level3 task3
// Online C++ compiler to run C++ program online
#include <iostream>
#include<cmath>
using namespace std;
int x;
int s=0;
int main() {
    for(int x=1;x<=100;x++){
       s+=x;
       
         
    }
      cout<<s<<endl;  
        
    
   
    

    return 0;
}
#level3 task4
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int x;
int s=1;
int z;
int main() {
    cout<<"eded daxil edin: "<<endl;
    cin>>z;
    for(int x=z;x>=1;x--){
        s*=x;
    }
    cout<<s<<endl;

    return 0;
}
#level3 task5
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int x;
int s=0;
int y;
int main() {
    cout<<"eded daxil edin: "<<endl;
    cin>>x;
    while(x>0){
        y=x%10;
        x=x/10;
        s+=y;
        
    }
    cout<<s<<endl;

    return 0;
}
#level3 task6
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int x;
int y;
int s=0;
int main() {
    cout<<"eded daxil edin: "<<endl;
    cin>>x;
    for(int y=1;y<=x;y++){
        s+=y;
    }
      cout<<s<<endl;  
    
    

    return 0;
}
#level3 task7
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int x;
int s=0;
int main() {
    do{
        cout<<"eded daxil edin :"<<endl;
        cin>>x;
        s+=x;
    }while(x>0);
    
    cout<<s<<endl;
        
       
    
      
    
    

    return 0;
}
#level3 task8
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int n;
int s=0;
int y;
int main() {
    cout<<"eded daxil edin: "<<endl;
    cin>>n;
    while(n!=0){
        int y=n%10;
        s=s*10+y;
        n=n/10;
    }
    cout<<"ters eded: "<<s<<endl;
    
    
        

    return 0;
}
#level3 task9
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ededi daxil et: ";
    cin >> n;

    bool sade = true;

    if (n <= 1)
        sade = false;
    else {
        for (int i = 2; i <n; i++) {
            if (n % i == 0) {
                sade = false;
                break;
            }
        }
    }

    if (n<2)
        cout << n << " sade ededdir." << endl;
    else
        cout << n << " sade deyil." << endl;

    return 0;
}
#level3 task10
#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Neçe Fibonacci elementi isteyirsiniz: ";
    cin >> N;

    int a = 0, b = 1, c;

    cout << "Fibonacci ardiciligi: ";

    for (int i = 0; i < N; i++) {
        cout << a << " ";
        c = a + b; 
        a = b;
        b = c;
    }
      return 0;
}
#level3 task11
// Online C++ compiler to run C++ program online
#include <iostream>
#include<cmath>
using namespace std;
int a=1;
int main() {
    do{
        cout<<a<<'*'<<1<<'='<<a*1<<endl;
        cout<<a<<'*'<<2<<'='<<a*2<<endl;
        cout<<a<<'*'<<3<<'='<<3<<endl;
        cout<<a<<'*'<<4<<'='<<a*4<<endl;
        cout<<a<<'*'<<5<<'='<<a*5<<endl;
        cout<<a<<'*'<<6<<'='<<a*6<<endl;
        cout<<a<<'*'<<7<<'='<<a*7<<endl;
        cout<<a<<'*'<<8<<'='<<a*8<<endl;
        cout<<a<<'*'<<9<<'='<<a*9<<endl;
        cout<<a<<'*'<<10<<'='<<a*10<<"\n\n";
        a++;
        
    }while(a<=10);
    
   
    return 0;
}
#level3 task12
// Online C++ compiler to run C++ program online
#include <iostream>
#include<cmath>
using namespace std;
int a;
int main() {
    cout<<"eded daxil edin: "<<endl;
    cin>>a;
    for(int x=1;x<=a;x++){
        if(a%x==0){
            cout<<x<<"\n";
        }
    }
        
    
    
   
    return 0;
}
#level3 task13
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int x;
int y;
int s=0;
int z;
int main() {
    cout<<"eded daxil edin: "<<endl;
    cin>>x;
    z=x;
    while(x>0){
        y=x%10;
        x=x/10;
        s=s*10+y;
    }
    if(s==z){
        cout<<"eded palindromdur!"<<flush;
        
    }else{
        cout<<"eded palindrom deyil!"<<flush;
    }
        
        
    
        
    
    
   
    return 0;
}
#level3 task14
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int x;
int main() {
    for(int x=1;x<=100;x++){
        if(x%3==0 && x%7==0){
            cout<<x<<"\n";
        }
    }
    
        
        
    
        
    
    
   
    return 0;
}
#level3 task15
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int n;
int y;
int s=0;
int z;
int main() {
    cout<<"nece eded daxil etmek isteyirsiniz?: "<<endl;
    cin>>n;
    for(int y=1;y<=n;y++){
        cin>>z;
        s+=z;
        
    }
    cout<<s<<endl;
   
    return 0;
}
#level4 task1
// Online C++ compiler to run C++ program online
#include <iostream>
#include<cmath>
using namespace std;
int n;
int s=0;
int y;
int main() {
   cout<<"eded daxil edin: "<<endl;
   cin>>n;
   for(int x=1;x<=n;x++){
     if(x%2==0) {
       y=pow(x,2);
        s+=y;
     }
       
        
    }
    cout<<s<<endl;


    return 0;
}
#level4 task2
// Online C++ compiler to run C++ program online
#include <iostream>
#include<cmath>
using namespace std;
int n;
int s=0;
int main() {
   cout<<"eded daxil edin: "<<endl;
   cin>>n;
   while(n>0){
       n=n/10;
       s+=1;
       
   }
   cout<<s<<endl;
    return 0;
}
#level4 task3
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ededi daxil edin: ";
    cin >> n;

    for (int s = 2; s <= n; s++) {
        int z = 0; // Hər dəfə sıfırla
        for (int x = 1; x <= s; x++) {
            if (s % x == 0) {
                z++;
            }
        }
        if (z == 2) {
            cout << s << endl;
        }
    }

    return 0;
}
#level4 task4
/// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int z;
int main() {
    for(int n=100;n<=999;n++){
        int s=0;
         z=n;
        while(n>0){
          int  y=z%10;
           n=int (z/10);
           s+=y;
        }
        if(s==10){
         cout<<z<<endl;
        }
    }
    return 0;
}
#level4 task5
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int n;
int s=0;
int main() {
    cout<<"eded daxil edin: "<<endl;
    cin>>n;
    for(int x=1;x<=n;x++){
        if(n%x==0){
            s++;
        }
    }
    cout<<s<<endl;
    

    return 0;
}
#level4 task6
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nece eded daxil edeceksiniz? ";
    cin >> n;

    if (n <= 0) {
        cout << "Eded sayi 0 ve ya menfi ola bilmez!";
        return 0;
    }

    double cem = 0;
    int eded, enBoyuk, enKicik;

    cout << "Ededleri daxil edin:" << endl;


    cin >> eded;
    enBoyuk = eded;
    enKicik = eded;
    cem = eded
    for (int i = 1; i < n; i++) {
        cin >> eded;
        cem += eded;

        if (eded > enBoyuk)
            enBoyuk = eded;

        if (eded < enKicik)
            enKicik = eded;
    }

    double orta = cem / n;

    cout << "\nNeticeler:" << endl;
    cout << "En boyuk eded: " << enBoyuk << endl;
    cout << "En kicik eded: " << enKicik << endl;
    cout << "Orta qiymet: " << orta << endl;

    return 0;
}
#level4 task7
#include <iostream>
#include<cmath>
using namespace std;
int n;
int z;
int s=0;
int a;
int main() {
    int x=0;
    cout << "eded daxil edin: ";
    cin >> n;
    z=n;
    a=n;
    while(a>0){
        a=a/10;
        x++;
    }
       while(n>0){
         s+=pow(n%10,x);
        n=n/10;
        }if(z==s){
        cout<<"eded palindromdur; "<<endl;
        }else{
        cout<<"eded palindrom deyil: "<<endl;
    }

    return 0;
}
#level4 task8
#include <iostream>
#include<cmath>
using namespace std;
int n;
int z;
int s=0;
int a;
int main() {
    int x=0;
    cout << "eded daxil edin: ";
    cin >> n;
    z=n;
    a=n;
    while(a>0){
        a=a/10;
        x++;
    }
       while(n>0){
         s+=pow(n%10,x);
        n=n/10;
        }if(z==s){
        cout<<"eded palindromdur; "<<endl;
        }else{
        cout<<"eded palindrom deyil: "<<endl;
    }

    return 0;
}
#level4 task9
#include <iostream>
using namespace std;

int main() {
    int n, s, x;

    cout << "1-den 1000-e qeder olan palindrom ededler:" << endl;

    for (n = 1; n <= 1000; n++) {
        int m = n;      
        s = 0;

        while (m > 0) {
            x = m % 10;          
            s = s * 10 + x; 
            m = m / 10;              
        }

        if (n == s) {
            cout << n << endl;       
        }
    }

    return 0;
}

#level4 task10......
#level4 task11
#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 1, c;

    cout << "1000-den kicik olan Fibonacci ededleri:" << endl;

    while (b < 1000) {
        cout << b << " ";
        c = a + b;
        a = b;
        b = c;
    }

    cout << endl;
    return 0;
}
#level4 task12
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int n;
int s=0;
int z;
int x;
int main() {
    cout<<"eded daxil edin: "<<endl;
    cin>>n;
    z=n;
    for(int x=1;x<n;x++){
        if(n%x==0){
            s+=x;
        }
    }if(s==z){
        cout<<"mukemel eded"<<endl;
    }else{
        cout<<"mukemmel eded deyil"<<endl;
    }
        
    

    return 0;
}
#level4 task13
#level14 task14
// Online C++ compiler to run C++ program online
#include <iostream>

#include <iostream>
using namespace std;

int x;
int z;
int s;

int main() {
    cout << "eded daxil edin: " << endl;
    cin >> x;
    z = x;
    s = 0;
    while (z > 0) {
        s = s * 10 + z % 10;
        z = z / 10;
    }
    if (s == x) {
        cout << "ededin tersi ededin ozune beraberdir!" << endl;
    } else {
        cout << "ededin tersi ededin ozune beraber deyil!" << endl;
    }


    return 0;
}
#level4 task15
#include<iostream>
using namespace std;
int eded,enBoyuk;
int main() {
        int n;
    cout << "Nece eded daxil edeceksiniz? ";
    cin >> n;

    int enBoyuk, eded;
    cout << "1-ci ededi daxil et: ";
    cin >> enBoyuk;

    for (int i = 2; i <= n; i++) {
        cout << i << "-ci ededi daxil et: ";
        cin >> eded;
        if (eded > enBoyuk){
            enBoyuk = eded;
        }   
        if(eded==0)
        break;
         
    }cout<<enBoyuk<<endl;
       
   return 0; 
}
finished
