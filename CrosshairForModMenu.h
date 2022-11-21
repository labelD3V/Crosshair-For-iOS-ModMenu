//by label
...

@implementation Menu

UIView *horizontal;
UIView *vertical;

UIWindow *mainWindow = [UIApplication sharedApplication].keyWindow;

//by label
...



  horizontal = [[UIView alloc]initWithFrame:CGRectMake(0.0, 0.0, 13, 1)];
  horizontal.backgroundColor = [UIColor colorWithRed:0 green:1 blue:1 alpha:1];
  horizontal.center = mainWindow.center;
  horizontal.layer.cornerRadius = 2.0;
  horizontal.alpha = 1;
  [mainWindow addSubview:horizontal];

   vertical = [[UIView alloc]initWithFrame:CGRectMake(0.0, 0.0, 1, 13)];
   vertical.backgroundColor = [UIColor colorWithRed:0 green:1 blue:0 alpha:1];
   vertical.center = mainWindow.center;
   vertical.layer.cornerRadius = 2.0;
   vertical.alpha = 1;
   [mainWindow addSubview:vertical];
//by label
...