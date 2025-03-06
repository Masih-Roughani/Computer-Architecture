import random

servers = [0, 0, 0, 0, 0]
for i in range(100):
    response_time = random.uniform(0.2, 1.5)
    server = i % 5
    servers[server] += response_time

print("Server " + str(servers.index(max(servers))) + " with response time, " + str(max(servers)) + " seconds.")
for i in range(5):
    print(str(i) + " -> " + str(servers[i] / 20) + " seconds.")
