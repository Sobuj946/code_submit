# import pandas
# import matplotlib.pyplot as plt
# from sklearn.linear_model import LinearRegression
# data = pandas.read_csv('iphone_price.csv')
# # plt.bar(data['version'], data['price'])
# # plt.show()
# model = LinearRegression()
# model.fit(data[['version']], data[['price']])
# version=20
# print(f'i phone price {version}')
# print(model.predict([[version]]))
# import pandas as pd
# import matplotlib.pyplot as plt
# from sklearn.linear_model import LinearRegression

# # Read the CSV file
# data = pd.read_csv('iphone_price.csv')

# # Prepare data for model
# # Ensure version is numeric (if not, convert it)
# data['version'] = pd.to_numeric(data['version'], errors='coerce')

# # Drop any rows with NaN after conversion
# data = data.dropna()

# # Train Linear Regression Model
# model = LinearRegression()
# model.fit(data[['version']], data[['price']])

# # Predict future version price
# future_version = 20
# predicted_price = model.predict([[future_version]])[0][0]

# # Add predicted data to copy of original DataFrame for plotting
# plot_data = data.copy()
# plot_data = plot_data.append({'version': future_version, 'price': predicted_price}, ignore_index=True)

# # Plot bar chart including prediction
# plt.figure(figsize=(10, 6))
# plt.bar(plot_data['version'].astype(str), plot_data['price'], color='skyblue', edgecolor='black')

# # Highlight the predicted bar in a different color
# plt.bar(str(future_version), predicted_price, color='orange', edgecolor='black', label='Predicted')

# plt.title('iPhone Version vs Price (with Prediction)')
# plt.xlabel('iPhone Version')
# plt.ylabel('Price (USD)')
# plt.legend()
# plt.grid(axis='y', linestyle='--', alpha=0.6)
# plt.tight_layout()
# plt.show()

# # Print prediction
# print(f'iPhone Version: {future_version}')
# print(f'Predicted Price: ${predicted_price:.2f}')
import pandas as pd
import matplotlib.pyplot as plt
from sklearn.linear_model import LinearRegression

# Read the CSV file
data = pd.read_csv('iphone_price.csv')

# Prepare data for model
# Ensure version is numeric (if not, convert it)
data['version'] = pd.to_numeric(data['version'], errors='coerce')

# Drop any rows with NaN after conversion
data = data.dropna()

# Train Linear Regression Model
model = LinearRegression()
model.fit(data[['version']], data[['price']])

# Predict future version price
future_version =int(input('input your future predict version'))
predicted_price = model.predict([[future_version]])[0][0]

# Create a new DataFrame for the prediction and concatenate
prediction_data = pd.DataFrame({'version': [future_version], 'price': [predicted_price]})
plot_data = pd.concat([data, prediction_data], ignore_index=True)

# Plot bar chart including prediction
plt.figure(figsize=(10, 6))
plt.bar(plot_data['version'].astype(str), plot_data['price'], color='skyblue', edgecolor='black')

# Highlight the predicted bar in a different color
plt.bar(str(future_version), predicted_price, color='orange', edgecolor='black', label='Predicted')

plt.title('iPhone Version vs Price (with Prediction)')
plt.xlabel('iPhone Version')
plt.ylabel('Price (USD)')
plt.legend()
plt.grid(axis='y', linestyle='--', alpha=0.6)
plt.tight_layout()
plt.show()

# Print prediction
print(f'iPhone Version: {future_version}')
print(f'Predicted Price: ${predicted_price:.2f}')
