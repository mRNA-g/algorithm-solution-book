这一题卡时间卡的太严，使用三元运算符可以省不少时间

开区间模板：

int left = -1,right=len;

while(left+1<len){

int mid = left+(right-left)/2;

(nums\[mid]>target?right:left)=mid;

}

return right;

