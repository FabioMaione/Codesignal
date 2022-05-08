/*
Check if all digits of the given integer are even.
*/
bool evenDigitsOnly(int n) {
    int c = 0;
    while(n)
    {
        c = n%10;
        if(c%2 != 0)
            return false;
        n /= 10; 
    }
    return true;
}