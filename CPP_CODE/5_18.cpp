//#include<cstdio>
//#include<vector>
//#include<cstring>
//#include<string>
//#include<map>
//using namespace std;
//int ans, m;
//char pre[27], post[27];
//map<char, int> postidx;
////��Ӧ��ĸ��post�е��±�,��Ϊÿ���ڵ㶼��Ψһ�ģ����Կ��Խ���һ������
//void Count(int preS, int preE, int postS, int postE);
//int mCk(int m, int k);
//
//int main()
//{
//    while (scanf("%d %s %s", &m, pre, post) != EOF)
//    {
//        ans = 1;
//        for (int i = 0; i < strlen(post); i++)
//            postidx[post[i]] = i;
//        Count(0, strlen(pre) - 1, 0, strlen(post) - 1);
//        printf("%d\n", ans);
//    }//while
//    return 0;
//}//main
//
//void Count(int preS, int preE, int postS, int postE)//ָʾ����ͺ���ĳ������
//{
//    if (preS >= preE)
//        return;
//    int i = preS + 1, cnt = 0;//cntͳ�������ĸ���,i�Ǳ�ʶ��ǰ���ĸ��ڵ�������ĸ��ڵ㣬��pre�е��±�
//    int idx = postidx[pre[i]];
//    while (i <= preE)
//    {
//        Count(i, i + idx - postS, postS, idx);
//        cnt++;
//        if (idx != postE - 1)//������ֹһ��,��Ҫ�ݹ��������������������ƶ�
//        {
//            i += idx - postS + 1;   //idx-postS�Ǹոյݹ���������Ĵ�С
//            //iҪ���������䣬�ҵ���һ��Ҫ�����ĸ��ڵ�
//            postS = idx + 1;    //post��������ʼλ��ҲҪǰ��1λ
//            idx = postidx[pre[i]];//idx���¶�λ��һ��Ҫ�������������ڵ���post�е��±�
//        }
//        else
//            break;//��ɶԵ�ǰ�����������������ڵ��ȫ������
//    }
//    ans *= mCk(m, cnt);//����������ϣ�cnt��ʾ��ǰ���м�������
//}
//
//int mCk(int m, int k)
//{
//    int numerator = 1, denominator = 1;
//    for (int i = 0; i < k; i++, m--)
//        numerator *= m;
//    for (int i = 1; i <= k; i++)
//        denominator *= i;
//    return numerator / denominator;
//}