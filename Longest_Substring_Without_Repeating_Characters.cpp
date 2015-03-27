class Solution{
public:
    int lengthOfLongestSubstring(string s) {
       int a[256];
       for (int loop=0; loop<256; loop++){
           a[loop]=0;
       }
       int i=0, start=0;
       int dis = 0, temp = 0;
	   if(s.length()==0) return 0;
       else{
		   while(i<s.length()){
               if (a[(int)s[i]]<=start){
                   a[(int)s[i]]=i+1;
                   i++;
                   temp++;
               }
               else{
                   start = a[(int)s[i]];
				   //cout << start<<endl;
                   if (temp>dis) dis = temp;
                   temp = i+1 - a[(int)s[i]];
				   a[(int)s[i]]=i+1;
				   i++;
               }
			   if (temp>dis) dis = temp;
           }
       return dis;
       }
    }
};
