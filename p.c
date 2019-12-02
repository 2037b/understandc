#include<stdio.h>
enum {Jan=1, Feb, Mar};
/*void dog(void) {puts("汪汪");}
void cat(void) {puts("喵");}
void monkey(void) {puts("唧唧");}
enum animal select(void){
	int tmp;
	do{
		printf("0...狗  1...猫  2..猴  3...结束\n");
		scanf("%d",&tmp);
	}while(tmp<Dog||tmp>Invalid);
	return tmp;
}*/
int main(int argc, char const *argv[]) {
    int month;
    scanf("%d", &month);

    switch (month) {
    case Jan: printf("%s\n", "1yue");break;

    case Feb: printf("%s\n", "2yue");break;

    case Mar: printf("%s\n", "3yue");break;

    }

    // do{
    // 	switch(select()){
    // 		case Dog:dog();break;
    // 		case Cat:cat();break;
    // 		case Monkey:monkey();break;
    // 	}
    // }while(select()!=Invalid);
    return 0;
}