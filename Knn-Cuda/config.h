#define NTRAIN 135
#define NTEST 15
#define NFEATURES 4						// Number of features (columns) in th each training example
#define NCLASSES 3						// Number of labels/ classes
#define K 11							// Hyperparameter K in KNN
#define TOPN 3							// Get the top N predictions
// Drop THREADS_PER_BLOCK from 2048 to 1024 because Tesla T4 only support 1024
#define THREADS_PER_BLOCK 2048
// Define blockDim.x and blockDim.y
#define BLOCK_X 32
#define BLOCK_Y 32
#define X_TRAIN_PATH "../datasets/small/X_train.csv"
#define Y_TRAIN_PATH "../datasets/small/y_train.csv"
#define X_TEST_PATH "../datasets/small/X_test.csv"
#define Y_TEST_PATH "../datasets/small/y_test.csv"


// Array containing list of labels. Make changes 
char classes[NCLASSES][25] = {"Iris-setosa", "Iris-versicolor", "Iris-virginica"};