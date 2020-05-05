#include <stdio.h>
#include <stdlib.h>

struct tfield{
  char name[20];
  char tel[20];
  struct tfield *pointer;//次のデータへのポインタ
};

struct tfield *talloc(void);

int main(void){
  struct tfield *head,*p,*old;
  head=talloc();
  scanf("%s %s",p->name,p->tel);
  old=head;
  while(p=talloc(),scanf("%s %s",p->name,p->tel)!=EOF){
    old->pointer=p;//今までheadがしていたpointerを新たに追加するpのpointerとする
    p=old;//headのpointer（行き先）をpにする
  }
  old->pointer=NULL;

  p=head;
  while(p!=NULL){
    printf("%15s%15s\n",p->name,p->tel);
    p=p->pointer;
  }
  return 0;
}


struct tfield *talloc(void){
  return(struct tfield *)malloc(sizeof(struct tfield));
}