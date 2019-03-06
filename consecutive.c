public static int count_v(char[][]a,int r,int c,int p,int q){
    int count1=0,count2=0,count3=0,count4=0;;
    int x=p,y=q;
    while(y<c&&a[x][y]=='V'){
        count1++;
        y++;}y=q;
    while(y>=0&&a[x][y]=='V'){
        count1++;
        y--;}y=q;
    while(x>=0&&a[x][y]=='V'){
        count2++;x--;}x=p;
    while(x<r&&a[x][y]=='V'){
        count2++;x++;}x=p;
    while(x>=0&&y>=0&&a[x][y]=='V'){
        count3++;x--;y--;}x=p;
        y=q;
    while(x<r&&y<c&&a[x][y]=='V'){
        count3++;x++;y++;}x=p;y=q;
    while(x>=0&&y<c&&a[x][y]=='V'){
        count4++;x--;y++;}x=p;y=q;
    while(x<r&&y>=0&&a[x][y]=='V'){
        count4++;x++;y--;}x=p;y=q;
    int max=count1;
    if(count2>max)max=count2;
    if(count3>max)max=count3;
    if(count4>max)max=count4;
    return max;}
            
public static void Met(char[][]a){
   int r=a.length;
   int c=a[0].length;
   int max=0,count;
   for(int i=0;i<r;i++)
       for(int j=0;j<c;j++)
           if(a[i][j]=='V'){
              count=count_v(a,r,c,i,j);
              if(count>max)max=count;
                      }
   
   System.out.println(max-1);
   }