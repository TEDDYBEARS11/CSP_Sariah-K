#sariah kamore time of day python
import time
current = time.time()
now = time.ctime(current)
local_time = time.localtime(current)
hour = local_time.tm_hour

if hour >=12 and hour <=16:
    print("good happy afternoon")
elif hour > 16 and hour <= 19:
    print("good great evening")
elif hour >19:
    print("good night")
else:
    print("happy sunny morning")