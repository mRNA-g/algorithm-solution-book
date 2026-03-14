二分答案本质就是用logn的时间去把答案找出来

核心代码：

bool check(int m,vector<int>\& nums,int threshold){

&#x20;       int sum=0;

&#x20;       for(int x:nums){

&#x20;           sum+=(x+m-1)/m;

&#x20;           if(sum>threshold){

&#x20;               return false;

&#x20;           }

&#x20;       }

&#x20;       return true;

&#x20;   }

向上取整公式

向上取整a/b 

a/b = （a+b-1）/b 



