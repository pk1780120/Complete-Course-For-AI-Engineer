# # HEALTHCARE DISEASE ANALYSIS PROJECT

# # Libraries Used:
# #   1. NumPy
# #   2. Pandas
# #   3. Matplotlib
# #   4. Seaborn

# # Dataset: healthcare_disease_prediction.csv


# # This project performs:
# #   1. Import Libraries
# #   2. Load Dataset
# #   3. Understand Dataset
# #   4. Data Cleaning
# #   5. Numerical Analysis
# #   6. Categorical Analysis
# #   7. Disease Analysis
# #   8. Data Visualization
# #   9. Conclusion

# # ============================================================
# # 1. IMPORT LIBRARIES
# # ============================================================

import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns

# # Set a clean Seaborn theme for all graphs
# sns.set_theme(style="whitegrid")


# # ============================================================
# # 2. LOAD DATASET
# # ============================================================

# # # Keep the CSV file in the same folder as this Python file.
# df = pd.read_csv("healthcare_disease_prediction.csv")
# print(df)


# print("Number of rows:", df.shape[0])
# print("Number of columns:", df.shape[1])


# # ============================================================
# # 3. UNDERSTAND DATASET
# # ============================================================


# # 3.1 First 5 rows
# print("First 5 Rows (head) ")
# print(df.head())

# # 3.2 Last 5 rows
# print("Last 5 Rows (tail) ")
# print(df.tail())

# # 3.3 Shape
# print(" Dataset Shape ")
# print(df.shape)

# # 3.4 Column names
# print(" Column Names ")
# for i, column in enumerate(df.columns, start=1):
#     print(i, ".", column)

# # 3.5 Data types and non-null information
# print(" Dataset Information ")
# df.info()

# # 3.6 Statistical summary
# print("Statistical Summary ")
# print(df.describe())

# # # 3.7 Data types separately
# print(" Data Types")
# print(df.dtypes)

# # 3.8 Number of unique values
# print(" Unique Values in Each Column")
# print(df.nunique())



# # ============================================================
# # 4. DATA CLEANING
# # ============================================================


# # 4.1 Missing values
# print(" Missing Values in Each Column:")
# missing_values = df.isnull().sum()
# print(missing_values)

# total_missing = df.isnull().sum().sum()
# print("Total missing values:", total_missing)

# # This dataset has no missing values.
# # If missing values exist in another version of the file,
# # the following code can remove rows containing missing values.
# if total_missing > 0:
#     df = df.dropna()
#     print("Rows containing missing values were removed.")
# else:
#     print("No missing values found. No missing-value treatment required.")

# # 4.2 Duplicate values
# duplicate_count = df.duplicated().sum()

# print(" Duplicate Rows ")
# print("Duplicate rows:", duplicate_count)

# if duplicate_count > 0:
#     df = df.drop_duplicates()
#     print("Duplicate rows were removed.")
# else:
#     print("No duplicate rows found.")

# print("Dataset shape after cleaning:", df.shape)


# # ============================================================
# # 5. NUMERICAL ANALYSIS
# # ============================================================


# # Numerical columns
# numerical_columns = ["Age", "BMI"]

# print("--- Numerical Columns ---")
# print(numerical_columns)

# # 5.1 AGE ANALYSIS

# age = df["Age"].to_numpy()

# print("Mean Age:", np.mean(age))
# print("Median Age:", np.median(age))
# print("Minimum Age:", np.min(age))
# print("Maximum Age:", np.max(age))
# print("Age Standard Deviation:", np.std(age))

# # Age groups
# df["Age Group"] = pd.cut(
#     df["Age"],
#     bins=[0, 18, 30, 45, 60, 75, np.inf],
#     labels=["0-18", "19-30", "31-45", "46-60", "61-75", "76+"],
#     include_lowest=True
# )

# print("Age Group Distribution:")
# print(df["Age Group"].value_counts().sort_index())

# # 5.2 BMI ANALYSIS


# bmi = df["BMI"].to_numpy()

# print("Mean BMI:", np.mean(bmi))
# print("Median BMI:", np.median(bmi))
# print("Minimum BMI:", np.min(bmi))
# print("Maximum BMI:", np.max(bmi))
# print("BMI Standard Deviation:", np.std(bmi))

# # BMI categories
# df["BMI Category"] = pd.cut(
#     df["BMI"],
#     bins=[0, 18.5, 25, 30, np.inf],
#     labels=["Underweight", "Normal", "Overweight", "Obese"],
#     include_lowest=True
# )

# print("BMI Category Distribution:")
# print(df["BMI Category"].value_counts())


# # ============================================================
# # 6. CATEGORICAL ANALYSIS
# # ============================================================


# categorical_columns = [
#     "Gender",
#     "Blood Pressure",
#     "Cholesterol",
#     "Glucose",
#     "Smoking",
#     "Alcohol Consumption",
#     "Exercise",
#     "Family History"
# ]

# for column in categorical_columns:
#     print("---", column, "---")
#     print(df[column].value_counts())
#     print("Percentage:")
#     print((df[column].value_counts(normalize=True) * 100).round(2))


# # ============================================================
# # 7. DISEASE ANALYSIS
# # ============================================================

# diseases = [
#     "Heart Disease",
#     "Diabetes",
#     "Stroke",
#     "Kidney Disease",
#     "Cancer",
#     "Alzheimer's Disease",
#     "COPD",
#     "Liver Disease",
#     "Parkinson's Disease",
#     "Tuberculosis"
# ]

# # Disease columns are coded as:
# # 0 = No
# # 1 = Yes

# print(" Disease Patient Counts ")

# disease_counts = df[diseases].sum().sort_values(ascending=False)

# for disease, count in disease_counts.items():
#     print(f"{disease}: {int(count)} patients")

# # Disease percentages
# disease_percentages = (df[diseases].mean() * 100).sort_values(ascending=False)

# print(" Disease Percentages ")

# for disease, percentage in disease_percentages.items():
#     print(f"{disease}: {percentage:.2f}%")

# # Most common disease
# most_common_disease = disease_counts.idxmax()
# most_common_count = int(disease_counts.max())

# # Least common disease
# least_common_disease = disease_counts.idxmin()
# least_common_count = int(disease_counts.min())

# print("Most common disease:")
# print(most_common_disease, "-", most_common_count, "patients")

# print("Least common disease:")
# print(least_common_disease, "-", least_common_count, "patients")

# # Total positive disease records
# total_positive_disease_records = int(df[diseases].sum().sum())

# print("Total positive disease records across all disease columns:",
#       total_positive_disease_records)


# # ============================================================
# # 7.1 DISEASE PREVALENCE TABLE
# # ============================================================

# disease_summary = pd.DataFrame({
#     "Disease": disease_counts.index,
#     "Patients": disease_counts.values,
#     "Percentage": disease_percentages.reindex(disease_counts.index).values
# })

# # Disease Summary Table 
# print(disease_summary.to_string(index=False))


# # ============================================================
# # 7.2 DISEASE BY GENDER
# # ============================================================

# # # Disease Analysis by Gender 

# gender_disease = df.groupby("Gender")[diseases].mean() * 100
# print(gender_disease.round(2))


# # ============================================================
# # 7.3 DISEASE BY AGE GROUP
# # ============================================================

# # # Disease Analysis by Age Group 

# age_group_disease = df.groupby("Age Group", observed=False)[diseases].mean() * 100
# print(age_group_disease.round(2))


# # ============================================================
# # 7.4 DISEASE BY SMOKING
# # ============================================================

# # Disease Analysis by Smoking 

# smoking_disease = df.groupby("Smoking")[diseases].mean() * 100
# print(smoking_disease.round(2))


# # ============================================================
# # 7.5 DISEASE BY EXERCISE
# # ============================================================

# # Disease Analysis by Exercise

# exercise_disease = df.groupby("Exercise")[diseases].mean() * 100
# print(exercise_disease.round(2))


# # ============================================================
# # 7.6 DISEASE BY FAMILY HISTORY
# # ============================================================

# #  Disease Analysis by Family History

# family_history_disease = df.groupby("Family History")[diseases].mean() * 100
# print(family_history_disease.round(2))


# # ============================================================
# # 8. DATA VISUALIZATION
# # ============================================================


# # ------------------------------------------------------------
# # GRAPH 1: Age Distribution - Histogram
# # ------------------------------------------------------------

# plt.figure(figsize=(9, 5))
# plt.hist(df["Age"], bins=10, edgecolor="black")
# plt.title("Age Distribution")
# plt.xlabel("Age")
# plt.ylabel("Number of Patients")
# plt.tight_layout()
# plt.show()


# # ------------------------------------------------------------
# # GRAPH 2: BMI Distribution - Histogram
# # ------------------------------------------------------------

# plt.figure(figsize=(9, 5))
# plt.hist(df["BMI"], bins=10, edgecolor="black")
# plt.title("BMI Distribution")
# plt.xlabel("BMI")
# plt.ylabel("Number of Patients")
# plt.tight_layout()
# plt.show()


# # ------------------------------------------------------------
# # GRAPH 3: Gender Distribution - Count Plot
# # ------------------------------------------------------------

# plt.figure(figsize=(7, 5))
# sns.countplot(data=df, x="Gender")
# plt.title("Gender Distribution")
# plt.xlabel("Gender")
# plt.ylabel("Number of Patients")
# plt.tight_layout()
# plt.show()


# # ------------------------------------------------------------
# # GRAPH 4: Blood Pressure - Count Plot
# # ------------------------------------------------------------

# plt.figure(figsize=(7, 5))
# sns.countplot(data=df, x="Blood Pressure")
# plt.title("Blood Pressure Distribution")
# plt.xlabel("Blood Pressure")
# plt.ylabel("Number of Patients")
# plt.tight_layout()
# plt.show()


# # ------------------------------------------------------------
# # GRAPH 5: Cholesterol - Count Plot
# # ------------------------------------------------------------

# plt.figure(figsize=(7, 5))
# sns.countplot(data=df, x="Cholesterol")
# plt.title("Cholesterol Distribution")
# plt.xlabel("Cholesterol")
# plt.ylabel("Number of Patients")
# plt.tight_layout()
# plt.show()


# # ------------------------------------------------------------
# # GRAPH 6: Glucose - Count Plot
# # ------------------------------------------------------------

# plt.figure(figsize=(7, 5))
# sns.countplot(data=df, x="Glucose")
# plt.title("Glucose Distribution")
# plt.xlabel("Glucose Level")
# plt.ylabel("Number of Patients")
# plt.tight_layout()
# plt.show()


# # ------------------------------------------------------------
# # GRAPH 7: Smoking - Count Plot
# # ------------------------------------------------------------

# plt.figure(figsize=(7, 5))
# sns.countplot(data=df, x="Smoking")
# plt.title("Smoking Status")
# plt.xlabel("Smoking")
# plt.ylabel("Number of Patients")
# plt.tight_layout()
# plt.show()


# # ------------------------------------------------------------
# # GRAPH 8: Alcohol Consumption - Count Plot
# # ------------------------------------------------------------

# plt.figure(figsize=(7, 5))
# sns.countplot(data=df, x="Alcohol Consumption")
# plt.title("Alcohol Consumption")
# plt.xlabel("Alcohol Consumption")
# plt.ylabel("Number of Patients")
# plt.tight_layout()
# plt.show()


# # ------------------------------------------------------------
# # GRAPH 9: Exercise - Count Plot
# # ------------------------------------------------------------

# plt.figure(figsize=(7, 5))
# sns.countplot(data=df, x="Exercise")
# plt.title("Exercise Status")
# plt.xlabel("Exercise")
# plt.ylabel("Number of Patients")
# plt.tight_layout()
# plt.show()


# # ------------------------------------------------------------
# # GRAPH 10: Family History - Count Plot
# # ------------------------------------------------------------

# plt.figure(figsize=(7, 5))
# sns.countplot(data=df, x="Family History")
# plt.title("Family History Distribution")
# plt.xlabel("Family History")
# plt.ylabel("Number of Patients")
# plt.tight_layout()
# plt.show()


# # ------------------------------------------------------------
# # GRAPH 11: Disease Distribution - Bar Chart
# # ------------------------------------------------------------

# plt.figure(figsize=(12, 6))
# sns.barplot(
#     x=disease_counts.index,
#     y=disease_counts.values
# )
# plt.title("Disease Distribution")
# plt.xlabel("Disease")
# plt.ylabel("Number of Patients")
# plt.xticks(rotation=45, ha="right")
# plt.tight_layout()
# plt.show()


# # ------------------------------------------------------------
# # GRAPH 12: Disease Percentage - Bar Chart
# # ------------------------------------------------------------

# plt.figure(figsize=(12, 6))
# sns.barplot(
#     x=disease_percentages.index,
#     y=disease_percentages.values
# )
# plt.title("Disease Prevalence Percentage")
# plt.xlabel("Disease")
# plt.ylabel("Percentage (%)")
# plt.xticks(rotation=45, ha="right")
# plt.tight_layout()
# plt.show()


# # ------------------------------------------------------------
# # GRAPH 13: Age Group Distribution - Bar Chart
# # ------------------------------------------------------------

# age_group_counts = df["Age Group"].value_counts().sort_index()

# plt.figure(figsize=(9, 5))
# sns.barplot(
#     x=age_group_counts.index,
#     y=age_group_counts.values
# )
# plt.title("Patients by Age Group")
# plt.xlabel("Age Group")
# plt.ylabel("Number of Patients")
# plt.tight_layout()
# plt.show()


# # ------------------------------------------------------------
# # GRAPH 14: BMI Category Distribution - Bar Chart
# # ------------------------------------------------------------

# bmi_counts = df["BMI Category"].value_counts()

# plt.figure(figsize=(9, 5))
# sns.barplot(
#     x=bmi_counts.index,
#     y=bmi_counts.values
# )
# plt.title("BMI Category Distribution")
# plt.xlabel("BMI Category")
# plt.ylabel("Number of Patients")
# plt.tight_layout()
# plt.show()


# # ------------------------------------------------------------
# # GRAPH 15: Age vs Heart Disease - Box Plot
# # ------------------------------------------------------------

# plt.figure(figsize=(7, 5))
# sns.boxplot(data=df, x="Heart Disease", y="Age")
# plt.title("Age vs Heart Disease")
# plt.xlabel("Heart Disease (0 = No, 1 = Yes)")
# plt.ylabel("Age")
# plt.tight_layout()
# plt.show()


# # ------------------------------------------------------------
# # GRAPH 16: Age vs Diabetes - Box Plot
# # ------------------------------------------------------------

# plt.figure(figsize=(7, 5))
# sns.boxplot(data=df, x="Diabetes", y="Age")
# plt.title("Age vs Diabetes")
# plt.xlabel("Diabetes (0 = No, 1 = Yes)")
# plt.ylabel("Age")
# plt.tight_layout()
# plt.show()


# # ------------------------------------------------------------
# # GRAPH 17: BMI vs Diabetes - Box Plot
# # ------------------------------------------------------------

# plt.figure(figsize=(7, 5))
# sns.boxplot(data=df, x="Diabetes", y="BMI")
# plt.title("BMI vs Diabetes")
# plt.xlabel("Diabetes (0 = No, 1 = Yes)")
# plt.ylabel("BMI")
# plt.tight_layout()
# plt.show()


# # ------------------------------------------------------------
# # GRAPH 18: Smoking vs Heart Disease - Count Plot
# # ------------------------------------------------------------

# plt.figure(figsize=(8, 5))
# sns.countplot(data=df, x="Smoking", hue="Heart Disease")
# plt.title("Smoking vs Heart Disease")
# plt.xlabel("Smoking")
# plt.ylabel("Number of Patients")
# plt.legend(title="Heart Disease")
# plt.tight_layout()
# plt.show()


# # ------------------------------------------------------------
# # GRAPH 19: Exercise vs Heart Disease - Count Plot
# # ------------------------------------------------------------

# plt.figure(figsize=(8, 5))
# sns.countplot(data=df, x="Exercise", hue="Heart Disease")
# plt.title("Exercise vs Heart Disease")
# plt.xlabel("Exercise")
# plt.ylabel("Number of Patients")
# plt.legend(title="Heart Disease")
# plt.tight_layout()
# plt.show()


# # ------------------------------------------------------------
# # GRAPH 20: Blood Pressure vs Heart Disease
# # ------------------------------------------------------------

# plt.figure(figsize=(8, 5))
# sns.countplot(data=df, x="Blood Pressure", hue="Heart Disease")
# plt.title("Blood Pressure vs Heart Disease")
# plt.xlabel("Blood Pressure")
# plt.ylabel("Number of Patients")
# plt.legend(title="Heart Disease")
# plt.tight_layout()
# plt.show()


# # ------------------------------------------------------------
# # GRAPH 21: Cholesterol vs Heart Disease
# # ------------------------------------------------------------

# plt.figure(figsize=(8, 5))
# sns.countplot(data=df, x="Cholesterol", hue="Heart Disease")
# plt.title("Cholesterol vs Heart Disease")
# plt.xlabel("Cholesterol")
# plt.ylabel("Number of Patients")
# plt.legend(title="Heart Disease")
# plt.tight_layout()
# plt.show()


# # ------------------------------------------------------------
# # GRAPH 22: Glucose vs Diabetes
# # ------------------------------------------------------------

# plt.figure(figsize=(8, 5))
# sns.countplot(data=df, x="Glucose", hue="Diabetes")
# plt.title("Glucose vs Diabetes")
# plt.xlabel("Glucose")
# plt.ylabel("Number of Patients")
# plt.legend(title="Diabetes")
# plt.tight_layout()
# plt.show()


# # ------------------------------------------------------------
# # GRAPH 23: Family History vs Diabetes
# # ------------------------------------------------------------

# plt.figure(figsize=(8, 5))
# sns.countplot(data=df, x="Family History", hue="Diabetes")
# plt.title("Family History vs Diabetes")
# plt.xlabel("Family History")
# plt.ylabel("Number of Patients")
# plt.legend(title="Diabetes")
# plt.tight_layout()
# plt.show()


# # ------------------------------------------------------------
# # GRAPH 24: Disease Correlation Heatmap
# # ------------------------------------------------------------

# plt.figure(figsize=(14, 10))

# correlation_matrix = df[diseases + ["Age", "BMI"]].corr()

# sns.heatmap(
#     correlation_matrix,
#     annot=True,
#     fmt=".2f",
#     cmap="coolwarm",
#     linewidths=0.5
# )

# plt.title("Correlation Heatmap: Age, BMI and Diseases")
# plt.tight_layout()
# plt.show()


# # ------------------------------------------------------------
# # GRAPH 25: Disease Correlation Heatmap Only
# # ------------------------------------------------------------

# plt.figure(figsize=(12, 9))

# disease_correlation = df[diseases].corr()

# sns.heatmap(
#     disease_correlation,
#     annot=True,
#     fmt=".2f",
#     cmap="coolwarm",
#     linewidths=0.5
# )

# plt.title("Disease-to-Disease Correlation Heatmap")
# plt.tight_layout()
# plt.show()


# # ------------------------------------------------------------
# # GRAPH 26: Disease Percentage by Gender
# # ------------------------------------------------------------

# gender_disease_plot = gender_disease.T

# gender_disease_plot.plot(
#     kind="bar",
#     figsize=(13, 7)
# )

# plt.title("Disease Percentage by Gender")
# plt.xlabel("Disease")
# plt.ylabel("Percentage (%)")
# plt.xticks(rotation=45, ha="right")
# plt.legend(title="Gender")
# plt.tight_layout()
# plt.show()


# ------------------------------------------------------------
# GRAPH 27: Disease Percentage by Smoking
# ------------------------------------------------------------

# smoking_disease_plot = smoking_disease.T

# smoking_disease_plot.plot(
#     kind="bar",
#     figsize=(13, 7)
# )

# plt.title("Disease Percentage by Smoking Status")
# plt.xlabel("Disease")
# plt.ylabel("Percentage (%)")
# plt.xticks(rotation=45, ha="right")
# plt.legend(title="Smoking")
# plt.tight_layout()
# plt.show()


# # ------------------------------------------------------------
# # GRAPH 28: Disease Percentage by Exercise
# # ------------------------------------------------------------

# exercise_disease_plot = exercise_disease.T

# exercise_disease_plot.plot(
#     kind="bar",
#     figsize=(13, 7)
# )

# plt.title("Disease Percentage by Exercise Status")
# plt.xlabel("Disease")
# plt.ylabel("Percentage (%)")
# plt.xticks(rotation=45, ha="right")
# plt.legend(title="Exercise")
# plt.tight_layout()
# plt.show()


# # ------------------------------------------------------------
# # GRAPH 29: Disease Percentage by Family History
# # ------------------------------------------------------------

# family_history_disease_plot = family_history_disease.T

# family_history_disease_plot.plot(
#     kind="bar",
#     figsize=(13, 7)
# )

# plt.title("Disease Percentage by Family History")
# plt.xlabel("Disease")
# plt.ylabel("Percentage (%)")
# plt.xticks(rotation=45, ha="right")
# plt.legend(title="Family History")
# plt.tight_layout()
# plt.show()


# # ------------------------------------------------------------
# # GRAPH 30: Disease Percentage by Age Group
# # ------------------------------------------------------------

# age_group_disease_plot = age_group_disease.T

# age_group_disease_plot.plot(
#     kind="bar",
#     figsize=(15, 7)
# )

# plt.title("Disease Percentage by Age Group")
# plt.xlabel("Disease")
# plt.ylabel("Percentage (%)")
# plt.xticks(rotation=45, ha="right")
# plt.legend(title="Age Group")
# plt.tight_layout()
# plt.show()


# # ============================================================
# # 9. PROJECT CONCLUSION
# # ============================================================

# # Basic dataset conclusion
# # DATASET
# # The dataset contains {df.shape[0]} patient records and {df.shape[1] - 2} original healthcare variables.


# # Cleaning conclusion
# # 2. DATA QUALITY:
# # if total_missing == 0:
# # No missing values were found in the dataset.
# # Missing values were handled during data cleaning.

# # if duplicate_count == 0:
#     # No duplicate rows were found.
#     # Duplicate rows were removed.

# # Numerical conclusion
# # 3. NUMERICAL FEATURES:"
# # Average patient age: {np.mean(age):.2f} years
# # Average BMI: {np.mean(bmi):.2f}

# # Disease conclusion
# #  DISEASE PREVALENCE:
# # The most frequently recorded disease is {most_common_disease}  with {most_common_count} positive records.
# # The least frequently recorded disease is {least_common_disease}  with {least_common_count} positive records


# # # Categorical conclusion
# #  HEALTH-RELATED FACTORS:
# # The analysis compares diseases with age, BMI, gender, blood pressure,cholesterol, glucose, smoking, alcohol consumption,exercise and family history.

# #  VISUALIZATION:
# #Histograms, bar charts, count plots, box plots and correlation heatmaps were used to understand patterns in the healthcare data.

# #  IMPORTANT Note:
# # This project performs data analysis and visualization.Correlation or group differences do not prove that one factor causes a disease.

# # ============================================================
# # PROJECT BENEFITS
# # ============================================================

# # 1. Helps understand the structure and quality of healthcare data.
# # 2. Identifies the most common and least common diseases.
# # 3. Shows age and BMI distributions.
# # 4. Compares disease prevalence across categories.
# # 5. Helps identify patterns between lifestyle factors and diseases.
# # 6. Makes large healthcare datasets easier to understand visually.
# # 7. Demonstrates practical use of NumPy, Pandas, Matplotlib and Seaborn.
# # 8. Builds a strong foundation for future machine-learning projects.

# # IMPORTANT:
# # This is a DATA ANALYSIS project, not a medical diagnosis system.
# # It should not be used to diagnose or predict an individual patient's medical condition.
