#include <stdio.h>

typedef struct node{
  int a, b, c;
} node;

int max(int a, int b) {
  if (a >= b) return a;
  else return b;
}

int main() {
  int n, q;
  scanf("%d %d", &n, &q);
  node ar[q];
  for (int i = 0; i < q; ++i) {
    scanf("%d %d %d", &ar[i].a, &ar[i].b, &ar[i].c);
  }
  int ans = 0;
  for (int i = 1; i <= n; ++i) {
    int cur = i, score = 0;
    for (int j = 0; j < q; ++j) {
      if (cur == ar[j].a || cur == ar[j].b) {
        if (ar[j].a == cur) cur = ar[j].b;
        else cur = ar[j].a;
      }
      if (ar[j].c == cur) score++;
    }
    ans = max(score, ans);
  }
  printf("%d\n", ans);
  return;
}

/*
Optimized Solution (UTA version):

#include <stdio.h>

#define mxN 100005

int arr[mxN];
int score[mxN];

int max(int a, int b) {
  return (a >= b) ? a : b;
}

void swap(int arr[], int i, int j) {
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp; 
}

int main() {
  int n, q; 
  scanf("%d %d", &n, &q);
  
  for (int i = 1; i <= n; ++i) arr[i] = i;
  for (int i = 1; i <= n; ++i) score[i] = 0;

  for (int i = 1; i <= q; ++i) {
    int a, b, c; 
    scanf("%d %d %d", &a, &b, &c);
    swap(arr, a, b);
    score[arr[c]]++;
  }

  int ans = 0;
  for (int i = 1; i <= n; ++i) {
    ans = max(ans, score[i]);
  }

  printf("%d\n", ans);
  return 0;
}

*/
