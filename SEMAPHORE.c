// C program to demonstrate working of Semaphores 
#include <stdio.h> 
#include <pthread.h> 
#include <semaphore.h> 
#include <unistd.h> 

sem_t mutex; // use to create semaphore

void* thread(void* arg) 
{ 
	//wait 
	sem_wait(&mutex); 
	printf("\nEntered.. in critical section \n"); 

	//critical section 
	sleep(4); //wait for 4 sec
	
	//signal 
	printf("\nJust Exiting...\n"); 
	sem_post(&mutex); 
} 


int main() 
{ 
	sem_init(&mutex, 0, 1); 
	pthread_t t1,t2; 
	// thread will share the same memory location so at a time we can access one thread in critical section
	pthread_create(&t1,NULL,thread,NULL); //  function use to create thread
	//sleep(2); // wait for 2 sec if you want
	pthread_create(&t2,NULL,thread,NULL); //  function use to create thread
	pthread_join(t1,NULL); // wait for thread termination(main thread wait until second thread join) its mandatory to write.
	pthread_join(t2,NULL);  // wait for thread termination
	sem_destroy(&mutex); 
	return 0; 
} 

