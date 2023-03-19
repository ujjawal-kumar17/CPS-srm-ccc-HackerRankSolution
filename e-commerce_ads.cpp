int changeAds(int n) {
    long int bn =0;
    long int i  = 1, remainder = 0;
    while(n!=0){
        remainder = n%2;
        n = n/2;
        bn = bn + remainder*i;
        i = i*10;
    }
    string t = to_string(bn);
    for(int i = 0; i<t.size();i++){
        if(t[i]=='0')
            t[i] = '1';
        else
            t[i]  = '0';
    }
    stringstream geek;
    geek<<t;
    geek>>bn;
    long int num = bn;
    long int dec = 0;
    long int base = 1;

    long int temp = num;
    while(temp){
        long int last_digit = temp%10;
        temp = temp/10;
        dec +=last_digit*base;
        base = base*2;
    }
    return dec;
}
