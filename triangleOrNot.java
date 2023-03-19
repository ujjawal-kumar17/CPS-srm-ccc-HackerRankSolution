static String[] triangleOrNot(int[] a, int[] b, int[] c) {
        String[] result = new String[a.length];

    for (int i = 0; i < a.length; i++) {
        if (a[i] + b[i] > c[i] && a[i] + c[i] > b[i] && b[i] + c[i] > a[i]) {
            result[i] = "Yes";
        } else {
            result[i] = "No";
        }
    }

    return result;
 }
