#sariah Kamore python

import time
first_time = time.gmtime()

current = time.time
#print(current)
now = time.ctime(current)
#print(now)
local_time = time.localtime(current)
day =  local_time.tm_wday
hour = local_time.tm_hour
print(day)
print(hour)