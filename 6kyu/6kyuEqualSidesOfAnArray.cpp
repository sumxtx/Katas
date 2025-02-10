#include <iostream>
#include <vector>
using namespace std;

int checkMid(int mid, std::vector<int> numbers, int len, int &left, int &right){
  for(int i = (mid -1); i >= 0; i--){
    left += numbers[i];
  }
  for(int i = (mid+1); i <= len; i++){
    right += numbers[i];
  } 
  if (left == right) 
    return 1;

  return 0;
}

int checkFull(std::vector<int>numbers, int len, int &left, int &right){
  
  for(int i = 0; i <= len; i++)
    for(int j = 0; j < i; j++ )
      left += numbers[j];
 j = i;
 j+=2;
 ...right += numbers[j->end];
 if(left == right)
   i+=1 is the middle;
 else
   i++;
left += numbers[0] hasta new mid
  repeat;
if mid found return mid
if is the end of the array, and theres no mid, return -1;
}

int find_even_index (const std::vector<int> numbers) {
  int mid = 0;
  int left = 0;
  int right = 0;
  int len = numbers.size();
  
  //Find the mid of the vector;
  if(len % 2 == 0)
    mid = ((len / 2)-1) ;
  else
    mid = len / 2;
  
  //Brute case the mid is the point
  if(checkMid(mid, numbers, len, left, right))
    return mid;
  mid = checkFull(numbers, len, left, right);
  return mid;
}

int main(int argc, char **av)
{
  std::vector<int> numbers{1,2,3,4,3,2,1};
  std::cout << find_even_index(numbers) << std::endl;

}
