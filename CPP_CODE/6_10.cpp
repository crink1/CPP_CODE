//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//
//// 函数：比较两个字符串的大小
//int compare(const char* str1, const char* str2) {
//    return strcmp(str1, str2);
//}
//
//// 函数：交换两个字符串
//void swap(char** str1, char** str2) {
//    char* temp = *str1;
//    *str1 = *str2;
//    *str2 = temp;
//}
//
//int main() {
//    char str1[100], str2[100], str3[100];
//    char* ptr1 = str1, * ptr2 = str2, * ptr3 = str3;
//
//    printf("Enter first string: ");
//    scanf("%99s", str1);
//
//    printf("Enter second string: ");
//    scanf("%99s", str2);
//
//    printf("Enter third string: ");
//    scanf("%99s", str3);
//
//    // 冒泡排序三字符串
//    if (compare(ptr1, ptr2) > 0) {
//        swap(&ptr1, &ptr2);
//    }
//    if (compare(ptr2, ptr3) > 0) {
//        swap(&ptr2, &ptr3);
//    }
//    if (compare(ptr1, ptr2) > 0) {
//        swap(&ptr1, &ptr2);
//    }
//
//    printf("Sorted strings:\n");
//    printf("%s\n", ptr1);
//    printf("%s\n", ptr2);
//    printf("%s\n", ptr3);
//
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//// 函数：使用冒泡排序对字符串进行排序
//void sortString(char* str) {
//    int len = strlen(str);
//    for (int i = 0; i < len - 1; i++) {
//        for (char* p = str; p < str + len - 1 - i; p++) {
//            if (*p > *(p + 1)) {
//                char temp = *p;
//                *p = *(p + 1);
//                *(p + 1) = temp;
//            }
//        }
//    }
//}
//
//// 函数：删除排序后的字符串中的重复字符
//void removeDuplicates(char* str) {
//    int len = strlen(str);
//    if (len == 0) return;
//
//    char* p = str;
//    char* q = str + 1;
//
//    while (*q != '\0') {
//        if (*p != *q) {
//            *(++p) = *q;
//        }
//        q++;
//    }
//    *(++p) = '\0';
//}
//
//int main() {
//    char str[100];
//
//    printf("Enter a string: ");
//    scanf("%99s", str);
//
//    sortString(str);
//    removeDuplicates(str);
//
//    printf("Sorted string without duplicates: %s\n", str);
//
//    return 0;
//}
