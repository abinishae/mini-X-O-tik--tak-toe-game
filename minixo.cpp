#include<iostream>
#include<conio.h>
#include <stdlib.h>
#include<time.h>

using namespace std;

int main()
{
    int a[3][3],g, flag = 0,flr=0,ftp=0,i=0,j,fb=0,fc=0;
     int b[3][3],z=1,d;
    char  X, o;
     for(int x=0;x<3; x++) 
      for(int y=0;y<3; y++) {
         a[x][y]= -1;
        b[x][y] = ++i;}
     for(int e=0;e<3;e++) {
     for(int f=0;f<3;f++) {
         cout<<b[e][f]<<" ";
        }
        cout<<endl;}
       int x=0, y=0;
        
    for(int k=0;k<9; k=k+2) {
    if(z)
    {cout<<" Enter O-0 or X-1"<<endl; 
       z--;
       cin>>d;
     if(d) 
      {  X = 'X';
        o = 'O';}
        else 
        {X = 'O';
        o = 'X';
             }
     
     }
      
     tik:  cout<<"Enter the value a"<< endl;
        cin>>g;
          for(int e=0;e<3;e++) {
     for(int f=0;f<3;f++) {
         if(g==b[e][f]){ 
        i= e;
       j =f ;}}
        }
        if( a[i][j]!= -1) 
        { cout<<"wrong move"<<endl;
           k--;
           goto  tik;
        }
        a[i][j] = 1;
        
        
        
        
        
        
        
        for( x=0;x<3; x++) 
        {  
        i=0;j=0;
        flr=ftp=fb=1;
         for( y=0;y<3; y++) {
         if(y==2) 
             g= 2;
          else g = 1-y;
         if((a[x][y] != -1 )&& (a[x][y] != 0 )){ i++;
          if(a[(x)%3][(y+1)%3] != a[x][y])
            flr =0;
            else ;}
         else flr=0;
         if((a[(y+1)%3][(x)%3] != -1)&& a[(y+1)%3][(x)%3] != 0)
        {i++;
          if(a[(y+1)%3][(x)]!=a[y][x]){
            ftp =0;
            
               } else;}
         else ftp=0;
         if( (a[y][y] != -1 ) && ( a[y][y] != 0 )) 
        {i++;
          if(a[(y+1)%3][(y+1)%3] != a[y][y])
            fb =0;
                else;}
         else fb=0;
           
            if ((a[2][(0)] != -1) && (a[0][2] != -1)&& (a[1][1] != -1))
             if ((a[2][(0)] != 0) && (a[0][2] != 0)&& (a[1][1] != 0))
             {   i++;
              if(a[0][2] == a[2][0]){
                if(a[2][0] == a[1][1]) {
            fc=1;
                     break;}
                 else fc = 0;}
              else
                 fc=0;}
              else fc=0;
            else 
            fc = 0;
            
              
          
    }
 
   
     if((flr || ftp || fb||fc) && i) 
       flag = 1;
    if(flag) {
    cout<<endl<<"a win!!!";
    return 0;}
  
    }
    
  
    
        if(k+1==8) break;
    // b user
 

 for( x=0;x<3; x++) 
        {  
        i=0;j=0;
        flr=ftp=fb=0;
         for( y=0;y<3; y++) {
         if(y==2) 
             g= 2;
          else g = 1-y;
         if((a[x][y] != -1 )&& (a[x][y] == 0 ) && (a[x][(y+2)%3] == -1)){ i++;
          if(a[(x)%3][(y+1)%3] == a[x][y]){
        
           
            j++;
            a[x][(y+2)%3] = 0;
            break;}
            else ;}
         else flr=0;
         if((a[(y+1)%3][x] != -1)&& a[(y+1)%3][x] == 0 &&  a[(y+2)%3][x] == -1)
           {i++;
          if(a[(y+1)%3][(x)]==a[y][x]){
          
            j++;
            a[(y+2)%3][x] = 0;
            break;
               } else int h=0;}
         else ftp=0;
         if( (a[y][y] != -1 ) && ( a[y][y] == 0 )&& (a[(y+2)%3][(y+2)%3] == -1)) 
        {i++;
          if(a[(y+1)%3][(y+1)%3] == a[y][y] ){
          //  fb =0;
            a[(y+2)%3][(y+2)%3] = 0;
            j++;
            break;
            }
                else int h=0;}
         else fb=0;
           
            if ((a[2][(0)] != -1) && (a[0][2] != -1) && (a[1][1] == -1))
             if ((a[2][(0)] == 0) && (a[0][2] == 0))//&& (a[1][1] != 0))
             {   i++;
           /*   if(a[0][2] == a[2][0]){
                if(a[2][0] == a[1][1]) {
            fc=1;*/
                a[1][1] = 0;
                j++;
                     break;}
            if ((a[2][(0)] != -1) && (a[1][1] != -1)&& (a[0][2] == -1))
             if ((a[2][(0)] == 0) && (a[1][1] == 0))//&& (a[1][1] != 0))
             {   i++;
         
                a[0][2] = 0;
                j++;
                     break;}
            if ((a[0][(2)] != -1) && (a[1][1] != -1) && (a[2][0] == -1))
             if ((a[0][(2)] == 0) && (a[1][1] == 0))//&& (a[1][1] != 0))
             {   i++;
         
                a[2][0] = 0;
                j++;
                     break;}
               
            
            
              
          
    

        if(j) break;}
        if(j) break;
        }








//now
if(! j){

   for( x=0;x<3; x++) 
        {  
        i=0;j=0;
        flr=ftp=fb=0;
         for( y=0;y<3; y++) {
         if(y==2) 
             g= 2;
          else g = 1-y;
         if((a[x][y] != -1 )&& (a[x][y] != 0 ) && (a[x][(y+2)%3] != 0)){ i++;
          if(a[(x)%3][(y+1)%3] == a[x][y]){
        
          
            j++;
            a[x][(y+2)%3] = 0;
            break;}
            else ;}
         else flr=0;
         if((a[(y+1)%3][x] != -1)&& a[(y+1)%3][x] != 0 &&  a[(y+2)%3][x] != 0)
           {
          if(a[(y+1)%3][(x)]==a[y][x]){
          
            j++;
            a[(y+2)%3][x] = 0;
            break;
               } else ;}
         else ;
         if( (a[y][y] != -1 ) && ( a[y][y] != 0 )&& (a[(y+2)%3][(y+2)%3] != 0)) 
        {i++;
          if(a[(y+1)%3][(y+1)%3] == a[y][y] ){
          
            a[(y+2)%3][(y+2)%3] = 0;
            j++;
            break;
            }
                else ;}
         else ;
           
            if ((a[2][(0)] != -1) && (a[0][2] != -1) && (a[1][1] != 0))
             if ((a[2][(0)] != 0) && (a[0][2] != 0))//&& (a[1][1] != 0))
             {   
                a[1][1] = 0;
                j++;
                     break;}
            if ((a[2][(0)] != -1) && (a[1][1] != -1)&& (a[0][2] != 0))
             if ((a[2][(0)] != 0) && (a[1][1] != 0))//&& (a[1][1] != 0))
             {   
         
                a[0][2] = 0;
                j++;
                     break;}
            if ((a[0][(2)] != -1) && (a[1][1] != -1) && (a[2][0] != 0))
             if ((a[0][(2)] != 0) && (a[1][1] != 0))//&& (a[1][1] != 0))
             {   
         
                a[2][0] = 0;
                j++;
                     break;}
               
            
            
              
          
    

        if(j) break;}
        if(j) break;
        }}
               tok : if(1)
      if(! j){
        int p=0;
        srand(time(0)) ;
        int h=rand();
        int f=rand();
        
      
      for( x=0;x<3; x++) {
         
         for( y=0;y<3; y++)
           h = (h) %3;
           f=(f+5)%3;
            if(a[h][f] == -1) 
            {  a[h][f] = 0;
               p++;
                 break;
             }
            
              if(p) break;}
          //  if(p) break;#
        }
          

      //over
      
        
        for( x=0;x<3; x++) 
        {  
        i=0;j=0;
        flr=ftp=fb=1;
         for( y=0;y<3; y++) {
         if(y==2) 
             g= 2;
          else g = 1-y;
         if((a[x][y] != -1 )&& (a[x][y] != 1 )){ i++;
          if(a[(x)%3][(y+1)%3] != a[x][y])
            flr =0;
            else int h=0;}
         else flr=0;
         if((a[(y+1)%3][(x)%3] != -1)&& a[(y+1)%3][(x)%3] != 1)
        {i++;
          if(a[(y+1)%3][(x)]!=a[y][x]){
            ftp =0;
            
               } else int h=0;}
         else ftp=0;
         if( (a[y][y] != -1 ) && ( a[y][y] != 1 )) 
        {i++;
          if(a[(y+1)%3][(y+1)%3] != a[y][y])
            fb =0;
                else int h=0;}
         else fb=0;
            if (a[(y)%3][(2-y)] != -1){i++;
            
          if(a[y][(2-y)] != a[(y+1)%3][(g)%3]) 
            fc=0;
                else int h=0;}
             else 
            fc=0;
            if ((a[2][(0)] != -1) && (a[0][2] != -1)&& (a[1][1] != -1))
             if ((a[2][(0)] != 1) && (a[0][2] != 1)&& (a[1][1] != 1))
             {   i++;
              if(a[0][2] == a[2][0]){
                if(a[2][0] == a[1][1]) {
            fc=1;
                     break;}
                 else fc = 0;}
              else
                 fc=0;}
              else fc=0;
            else 
            fc = 0;
            
              
          
    }
  
   
     if((flr || ftp || fb||fc) && i) 
       flag = 1;
    if(flag) {
    cout<<endl<<"b win!!!";
    return 0;}
 
    }
    
    for(int e=0;e<3;e++) {
     for(int f=0;f<3;f++) {
       if(a[e][f] == -1) 
        cout<<"_"<<" ";
        if(a[e][f] == 0) 
        cout<<o<<" ";
        if(a[e][f] == 1) 
        cout<<X<<" ";
        }
        cout<<endl;}
        
     
        
    
    
    
 
    
    
       
    }
    cout<<"draw"; return 0;
    
}
