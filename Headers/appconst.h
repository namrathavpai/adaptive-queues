#ifndef  APPCONST_H_INCLUDED
#define  APPCONST_H_INCLUDED

#if MAX_DEPTH < 32
#undef MAX_DEPTH
#define MAX_DEPTH 32
#endif

//#define Q_LEN 32
#define QUEUE_OK 1
#define QUEUE_EMPTY 2
#define QUEUE_FULL 3

// typedef enum {
//     QUEUE_OK = 1,
//     QUEUE_FULL = 2, 
//     QUEUE_EMPTY = 3
// }QueueStatus;


#endif // APPCONST_H_INCLUDED