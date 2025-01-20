std::vector<int> vec = {1, 2, 3, 4, 5};

for (int i = 0; i <= vec.size(); ++i) { // <= is the bug, it should be < 
  std::cout << vec[i] << std::endl;
}
