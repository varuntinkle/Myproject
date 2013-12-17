binary_search(lo, hi, p):
   while (lo <= hi):
      mid = lo + (hi-lo)/2
      if p(mid) == true:
         hi = mid
      else:
         lo = mid+1

   if p(lo) == false:
      complain                // p(x) is false for all x in S!

   return lo         // lo is the least x for which p(x) is true
