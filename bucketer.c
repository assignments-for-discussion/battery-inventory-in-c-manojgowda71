#include <stdio.h>
#include <assert.h>

struct CountsByUsage {
  int lowCount;
  int mediumCount;
  int highCount;
};

struct CountsByUsage countBatteriesByUsage(const int* cycles, int nBatteries) {
  struct CountsByUsage counts = {0, 0, 0};
  return counts;
}

void testBucketingByNumberOfCycles() {
  const int chargeCycleCounts[] = {100, 300, 500, 600, 900, 1000};
  const int numberOfBatteries = sizeof(chargeCycleCounts) / sizeof(chargeCycleCounts[0]);
  printf("Counting batteries by usage cycles...\n");
  struct CountsByUsage counts = countBatteriesByUsage(chargeCycleCounts, numberOfBatteries);
  assert(counts.lowCount == 2);
  assert(counts.mediumCount == 3);
  assert(counts.highCount == 1);
  printf("Done counting :)\n");
}

int main() {
  int charged;
  testBucketingByNumberOfCycles();
  printf("\n 1. low");
  printf("\n 2. medium");
  printf("\n 3. high"); 
  printf("enter the charge cycles:");
  scanf("%d",&charged);
  switch(n)
  {
    case 1:if(charged>=0 && charged<400){
      lowCount+=1;
    }
      break;
    case 2:else if(charged>=400 && charged<920){
      mediumCount+=1;
    }
      break;
    case 3: else{
      highCount+=1;
    }
      break;
    default: printf("invalid input);
  return 0;
}
