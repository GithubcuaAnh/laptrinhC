
#include <stdio.h>
#include<math.h> 
int tinhgiaithua(int n){
if (n == 0 || n == 1) {
		return 1;
	} else {
		return n * tinhgiaithua(n-1);
	}
}
 
int main(){
	int n ,giaithua ;
	printf("nhap gia tri n : ");
	scanf("%d",&n);
	giaithua = tinhgiaithua(n); 
	 printf("giai thua cua %d là %d",n,giaithua); 
	 return 0;
	  
} 


 

