///week02-1.cpp
///SOIT106_ADVANCE_001
#include <stdio.h>
int main()
{
	int a,ans=0;
	scanf("%d",&a);
	int b = a; ///backup ³Æ¥÷
	while(a>0){ ///­é¥Öªk
		ans = ans*10+a%10;
		a = a/10;
	}
	printf("%d+%d=%d\n",b,ans,b+ans);
}
