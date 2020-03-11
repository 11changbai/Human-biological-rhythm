{
  int mood,n;
  n=d%28;

  if(n==0)            printf("您的情绪处在周期日！");
  else if(n<14)       printf("您的情绪处于高潮期！");
  else if(n==14)      printf("您的情绪处于临界日！");
  else if(n>14)       printf("您的情绪处于低潮期！");



}