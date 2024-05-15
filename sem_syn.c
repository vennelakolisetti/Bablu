#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>
sem_t s;
void* T1();
void* T2();
int main() {
  sem_init(&s, 0, 1);
  pthread_t o1, o2;
  printf("In a 1st Thread now...\n");
  pthread_create(&o1,NULL,T1,NULL);
  sleep(4);
  printf("In a 2nd Thread now...\n");
  //sleep(4);
  pthread_create(&o2,NULL,T2,NULL);
  pthread_join(o1,NULL);
  pthread_join(o2,NULL);
  sem_destroy(&s);
  return 0;
 }

void* T1() {
  sem_wait(&s);
  printf("Welcome! \n");
  //sleep(4);
  //printf("Bye!\n");
  sem_post(&s);
 }
 void* T2() {
  sem_wait(&s);
  //printf("Welcome! \n");
  //sleep(4);
  printf("Bye!\n");
  sem_post(&s);
 }