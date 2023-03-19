int pad[3][3];
int tracer[10][2];
int ABS(int a){return a<0?-a:a;}
int MAX(int a, int b){return a>b?a:b;}
int d(int r1,int c1,int r2, int c2){return MAX(ABS(c1-c2),ABS(r1-r2));}
int entryTime(char* s, char* p){
     for(int i=0,c=0;i<3;i++)
         for(int j=0;j<3;j++)
            pad[i][j] = p[c]-'0',
            tracer[pad[i][j]][0]=i,tracer[pad[i][j]][1]=j,c++;
            
    int ris =0;
    int b4 = s[0]-'0';
    for(int i = 0; s[i]!='\0';i++){
        int r1 = tracer[b4][0],c1 = tracer[b4][1];
        int r2 = tracer[s[i]-'0'][0],c2 = tracer[s[i]-'0'][1];
        ris += d(r1,c1,r2,c2);
        b4 = s[i]-'0';
    }
     return ris;
}
