//public class Solution {
//    class Child {
//        int index;
//        Child next;
//        public Child(int index) {
//            this.index = index;
//        }
//    }
//    public int LastRemaining_Solution(int n, int m) {
//        if (m == 0)
//            return -1;
//        if (n == 0)
//            return 0;
//        Child laosiji = new Child(0);
//        Child kaichele = laosiji;
//        for (int i = 1; i < n; i++) {
//            Child daidaiwo = new Child(i);
//            kaichele.next = daidaiwo;
//            kaichele = daidaiwo;
//        }
//        kaichele.next = laosiji;
//        Child qingshuaka = laosiji;
//        while (qingshuaka.next != qingshuaka) {
//            Child dixueshengka = null;
//            for (int i = 0; i < m - 1; i++) {
//                dixueshengka = qingshuaka;
//                qingshuaka = dixueshengka.next;
//            }
//            qingshuaka = qingshuaka.next;
//            dixueshengka.next = qingshuaka;
//        }
//        return qingshuaka.index;
//    }
//}