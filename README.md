# 2022cce
資傳一乙 程式設計 的程式倉庫

# week01
放假(中秋節)

# week06
## step01-0
考試九九乘法表 考前複習、考後檢討
```cpp
#include <stdio.h>
int main()
{
    for(int i=1;i<10;i++){
        for (int j=1;j<10;j++){
            printf("%d*%d=%d\t",i,j,i*j);
        }
        printf("\n");
    }
}
```
## step01-1_畫星星-金字塔
使用的技巧，是先用左手i來建立鷹架
```cpp
#include <stdio.h>
int main()
{
    int i,j;
    for (i=5;i>0;i--){
        for (j=0;j<i;j++) printf("*");
        printf ("\n");
    }
}
```

## step01-2_金字塔
有了鷹架樓層，接下來便是決定第i樓有幾個space空格、有幾個star星星，找到規律，便能寫出公式，並利用迴圈基礎型，輕鬆把星星畫出來
```cpp
#include <stdio.h>
int main()
{
    int i,j,z,y;
    for (i=0;i<5;i++){
        z=i*2-1;
        y=5-i;
        for (j=0;j<y;j++) printf (" ");
        for (j=0;j<z;j++) printf ("*");
        printf ("\n");
    }
}
```

## step02-1_想要分數約分，可以使用暴力法，去找到都整除的數字，就都能約分了
```cpp
#include <stdio.h>
int main()
{
    int i,a,b,ans;
    printf("請輸入2個數:\n");
    scanf("%d %d",&a,&b);
    for (i=1;i<=a;i++){
        if (a%i==0 && b%i==0) ans=i;
    }
    printf("找到ans:%d",ans);
}
```

## step02-2_介紹輾轉相除法
```cpp
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("請輸入2個數:\n");
    scanf("%d %d",&a,&b);
    while (1){
        c = a%b;
        printf ("a:%d b:%d c:%d",a,b,c);
        if (c==0) break;
        a = b;
        b = c;
        }
    }
    printf("中的是:%d",b);
}
```

# week07
## step01_寫很長很長的整數
```cpp
#include <stdio.h>
int main()
{
    int n=9876543210;
    long long int a=9876543210;
    printf("%d\n%lld",n,a);
}
```

## step02_最大公因數
```cpp
#include <stdio.h>
int main()
{
    long long int a,b,i,z;
    scanf("%lld %lld",&a,&b);
    for (i=1;i<=a;i++){
        if (a%i==0 && b%i==0) z=i;
    }
    printf("最大公因數:%lld",z);
}
```

## step03_輾轉相除法
```cpp
#include <stdio.h>
int main()
{
    long long int a,b,c;
    scanf("%lld %lld",&a,&b);
    while (1){
        c=a%b;
        printf ("a:%lld b:%lld c:%lld\n",a,b,c);
        if (c==0) break;
        a = b;
        b = c;
    }
    printf ("最大公因數:%lld\n",b);
}
```

## step04_重複做求除以10的餘數後再除10，就可以輸出1234567890的個位數=0~1
```cpp
