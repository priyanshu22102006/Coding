import pandas as pd

data = {'Name': ['Alice', 'Bob', 'Charlie'], 
        'Age': [25, 30, 35], 
        'City': ['New York', 'Paris', 'Tokyo']}
df = pd.DataFrame(data)

print("DataFrame:")
print(df)

# Save as JSON
df.to_json('output.json', orient='records', indent=2)
print("DataFrame saved as 'output.json'")

# Read back to verify
df_from_json = pd.read_json('output.json')
print("\nDataFrame read from JSON:")
print(df_from_json)



import socket
import time
import tracemalloc
# Start memory and time tracking
tracemalloc.start()
start_time = time.time()
# Get the local IP address
hostname = socket.gethostname()
ip_address = socket.gethostbyname(hostname)
# Perform any task (example: printing the IP address)
print(f"IP Address: {ip_address}")
# End time and memory tracking
end_time = time.time()
current_memory, peak_memory = tracemalloc.get_traced_memory()
tracemalloc.stop()
# Calculate time taken and memory used
time_taken = end_time- start_time
memory_used = current_memory / 1024 # Convert to KB
peak_memory_used = peak_memory / 1024 # Convert to KB
# Display results
print(f"Time Taken: {time_taken:.6f} seconds")
print(f"Current Memory Used: {memory_used:.2f} KB")
print(f"Peak Memory Used: {peak_memory_used:.2f} KB")