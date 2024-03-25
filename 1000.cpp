// https://www.codingninjas.com/studio/problems/reverse-bits_2181102?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

long reverseBits(long n) {

    long temp = n;
    int rem=0;
    long f=0;

    for(int i=0;i<32;i++){
        rem= temp%2;
        f=f*2+rem;
        temp=temp/2;
    }
        return f;
}