typedef enum { UNDISCOVERED, DISCOVERED, VISITED } VStatus;
template <typename Tv> struct Vertex { // 顶点对象，并未完全封装
  Tv data; int inDegree, outDegree; // 数据，出入度数
  VStatus status; // (如上三种状态)
  int dTime, fTime; // 时间标签
  int parent; // 在遍历树中的父节点
  int priority; // 在遍历树中的优先级(最短通路、极短跨边等)
  Vertex(Tv const & d) : // 构造新顶点
    data(d), inDegree(0), outDegree(0), status(UNDISCOVERED),
    dTime(-1), fTime(-1), parent(-1),
    priority(INT_MAX) {}
};


typedef enum { UNDETERMINED, TREE, CROSS, FORWARD, BACKWARD } EStatus;
template <typename Te> struct Edge { // 边对象(并未完全封装)
  Te data; // 数据
  int weight; // 权重
  EStatus status; // 类型
  Edge( Te const & d, int w ) : // 构造新边
    data(d), weight(w), status(UNDETERMINED) {}
};
