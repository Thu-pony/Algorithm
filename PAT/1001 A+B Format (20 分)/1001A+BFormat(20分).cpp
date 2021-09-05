#include<bits/stdc++.h>
using namespace std;


int main(){
	int a, b;
	int c;
	cin>>a>>b;
	c = a + b;
	if (c < 0){
		cout<<"-";
		c = abs(c);
	}
	string ans = to_string(c);
	int n = ans.size();
	for (int i = 0; i < n; i++){
		cout<<ans[i];
		if ((n - i - 1) % 3 == 0 && (n - i - 1) != 0)
		cout<<",";
	}
	return 0;
	
}
