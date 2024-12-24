int main(){
int i, m[100];
int* ptr;
ptr = m + 15;
for (i = 10; i < 20; i++) ptr++;
printf("%d\n", (char *)ptr - (char *)m);
return 0;
}