# Introduction of Product Management
Product Management is a simple application system designed to maintain or determine details of all products. Products are used in day-to-day life. Products like Phone, Cars rather than being Electromechanically devices. The project focuses on adding new Product, Search Product, deleting, Reading, Selling and editing the list.

# Features

-	The information entered is more accurate and clearer.
-	Better data management facilities in terms of maintaining files which are entered in registers manually and stored in data sheet.
-	Major activities of the manual system is automated, which increases its throughput of the system.
-	The system is fast, user friendly and interactive Cost effective.


# 4W'S and 1H

**When**:
This Product Management System is very useful when there is large no of Products to be listing, Edit, read, search and deleted the item in data management system. It is very helpfully entering the records manually so here this project come in user friendly and cost effective.
**What**:
Product Management Systems is a way that helps us to maintain a database of the products like Cars, Mobile Phones, gadgets etc.
**Where**:
The Product management system essential for malls, medical stores, Super markets, private companies and other organizations. 


**How**
This project is implemented to do the Adding, search, read, edit and deleting of the product by using Functions, structures,Array,  pointers and other functionalities of C.

This project is implemented to do the Adding, search, read, edit and deleteing of the product by using structures, files, pointers and other functionalities of C.

# SWOT Analysis:-

**Strength**

- Easy User Interraction System..
- Increased Product Management.
- Efficient Cloud Data Management.
- Highly Secure, Scalable & Reliable.
- System Access.

**Weakness**

- The data stored is system to cyber hacks.
- Costly and Expensive.
- Complicated to operate.
- Online Systems require high-speed internet connectivity.
- Risk of computer virus.

**Opportunities**

- DUI.
- Add More Funcationalities.

**Threats**

- Other Applications have better Features.
- Other Applications are Secured.
- Better Management system.

# HIGH LEVEL REQUIREMENTS:-

|RID |DESCRIPTION |STATUS |
|---- |---- |---- |
|HLR1 |C LANGUAGE  |COMPLETED |
|HLR2 |OS WINDOWS |COMPLETED |
|HLR3 |OS LINUX |COMPLETED |
|HLR4 |HARDDISK |COMPLETED |
|HLR5 |RAM 4GB |COMPLETED |

# LOW LEVEL REQUIREMENTS:-

|RID |DESCRIPTION |STATUS |
|---- |---- |---- |
|LLR1 |ADD Product |COMPLETED |
|LLR2 |DELETE product |COMPLETED |
|LLR3 |SEARCH product |COMPLETED |
|LLR4 |Read product |COMPLETED |
|LLR5 |Edit product |COMPLETED |

## Data Flow Diagram

![DataFlowDia](https://user-images.githubusercontent.com/98537406/155879989-44aa15ff-1bba-4a41-8116-4fc0eb83afbf.png)


# Structure Diagram

## Flow chart

![ProductM](https://user-images.githubusercontent.com/98537406/155879847-d5564020-78dc-430a-9cb7-e4a31ad85ee4.png)


# Test Plan & Output

## HLT Plan

|TEST ID   |DESCRIPTION                 |EXPECTED I/P |Exp. O/p |Actual O/p |Pass or Fail |
|---- |---- |---- |---- |---- |---- |
|HLT_01 |Loging in after the code run. |Enter Username and Password. |Login Successful |Login Successful |Pass |
|HLT_02 |To Add Product. |Choice 1 |Enter the product detail |Enter the product detail |pass |
|HLT_03  |To Search Products |Choice 3, Enter Product name |Record Found |Record found |Pass |
|HLT_04  |To Read Products |Choice 4 |Display of all the Product details |Display of all the Product details |Pass |
|HLT_05  |To Edit Products |Choice 5, Enter Details asked |Successfully Edited |Successfully Edited |Pass |
|HLT_06 |To Delete Products |Choice 2, Enter Product Name |Record Deleted |Record Deleted |Pass |

## LLT Plan

|TEST ID      |DESCRIPTION                             |EXPECTED I/P |Exp. O/p |Actual O/p |Pass or Fail |
|---- |---- |---- |---- |---- |----|
|LLT_01 |Enter Product Code in Add |Eg. 111 |Move to Next |Move |Pass |
|LTT_02 |Enter Product Code in Add |Eg. abc |Move to Next |Code contain invalid character. Please 'Enter' again |Fail |
|LLT_03 |Enter the Product Name in Add |Eg. Shoes |Move to Next Company name |Move to Next Company name |Pass |
|LLT_04 |Enter the Product name in Add |Eg. 1234 |Move |Name contain invalid character. Please 'Enter' again |Fail |
|LLT_05 |Enter the Product Compny Name in Add |Eg. Bata |Move to Next |Move to Next |Pass |
|LLT_06 |Enter the Product Company Name in Add |Eg. 123 |Move to Next | ontain invalid character. Please 'Enter' again |Fail |

# Program Output

- Login Page
<img width="638" alt="Login_Page" src="https://user-images.githubusercontent.com/98537406/153622868-d0364f1e-28db-4bc9-a3f3-2a40a345ed0b.PNG">

- Add Product
<img width="460" alt="Add_Product" src="https://user-images.githubusercontent.com/98537406/153623197-4066f66a-3fa8-4933-908e-a0dd0318673d.PNG">

- Read Product
<img width="670" alt="Read_Product" src="https://user-images.githubusercontent.com/98537406/153623288-97b66e03-f840-4f98-8609-dbf01be5f8c1.PNG">

- Search Product
<img width="371" alt="Search_Product" src="https://user-images.githubusercontent.com/98537406/153626982-9eabe3f5-3db6-4adb-a70f-26ebf353e2c1.PNG">

- Edit Product
<img width="577" alt="Edit_Product" src="https://user-images.githubusercontent.com/98537406/153623576-3ec35d50-7502-46ed-8b02-015077e6f464.PNG">

- Delete Product
<img width="640" alt="Delete_Product" src="https://user-images.githubusercontent.com/98537406/153623892-d5ea1698-a885-4d43-882b-fdf69f0846f0.PNG">

