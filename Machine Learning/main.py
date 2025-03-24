import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
from sklearn import datasets, linear_model
from sklearn.metrics import mean_squared_error


diabetes = datasets.load_diabetes()

# dict_keys(['data', 'target', 'frame', 'DESCR', 'feature_names', 'data_filename', 'target_filename', 'data_module'])
# print(diabetes.keys())
# print(diabetes.data)
# print(diabetes.DESCR)

# diabetes_X = diabetes.data[:, np.newaxis, 2]
diabetes_X = diabetes.data
# print(diabetes_X)

diabetes_X_train = diabetes_X[:-30]
diabetes_X_test = diabetes_X[-30:]
# print(diabetes_X_train)
# print(diabetes_X_test)

diabetes_Y_train = diabetes.target[:-30]
diabetes_Y_test = diabetes.target[-30:]
# print(diabetes_Y_train)
# print(diabetes_Y_test)

model = linear_model.LinearRegression()

model.fit(diabetes_X_train, diabetes_Y_train)
diabetes_Y_predict = model.predict(diabetes_X_test)

print("Mean Squre: ", mean_squared_error(diabetes_Y_test, diabetes_Y_predict))

print("Weight: ", model.coef_)
print("Intercepts: ", model.intercept_)

# plt.scatter(diabetes_X_test, diabetes_Y_test)
# plt.scatter(diabetes_X_test, diabetes_Y_predict)
# plt.show()

# Mean Squre:  3035.060115291269
# Weight:  [941.43097333]
# Intercepts:  153.39713623331644