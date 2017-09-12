## Online Debate Portal:  An overview
<br />

ODP is a web based debate portal where registered users from around the world can come to debate online and read the opinions of others. They can even research on numerous topics and cast their votes in order to support or disagree with an idea.

When an end-user navigates to the portal, there'll be a prompt for Sign-up/Log-in/Continue-as-guest. Access Credentials List will be updated after someone logs in and is assigned a role of Moderator/Debater by the Administrator. If the user isn't logged in, he will be granted Guest access.

The landing page will be divided into three frames - Debates, Opinions and Polls. 

- Debates: Start a Debate, Participate in a Debate, View all Debates. Debates are searchable and are classified based on topics. Also, they can be sorted based on popularity, number of participants etc. After a user decides to participate in a debate or start a new one, he will be matched with another participant. Each participant will be allowed to post their arguments and claim arguments made by their opponent as false. All of this will happen in a set time. After the session expires, the community, which also includes Guests will vote for a winner. Scores will be awarded to the participants and the Leaderboard will be updated accordingly after the results of the debate are out.

- Opinions: This section includes only the debates that have a clear conclusion and the conclusion results in a boolean value. That is, either the argument proposed is valid or is completely wrong. Users can vote with either a Yes or a No. Again, this is classified into topics.

- Polls: This section, along with sharing views on a topic, allows a user to choose from a defined number of opinions.

Our main concern here, is to decide on the architecture of the Debates section.

Other important details to take care of:

- Types of roles: Administrator, Moderator, Debater and Guest
- Only registered or logged-in users will be allowed to participate in a debate. All others will be granted Guest access.
- Debates will be one on one; if the participants change, the same debate topic will host a new debate automatically.
- User profile will be visible to all, and it will carry information regarding debates participated in, debates won, debates lost, points earned etc.
- A user with good number of points will be chosen as moderator by the site administrator.

<br />

<b>Solutions:</b>

### 1. Application Architecture

This will showcase an overall behavior of applications used in an Online Debate Portal. This will mainly focus on the data consumed and produced by applications rather than their internal structure. Each application is mapped to business functions and will show how they interact with each other and end-users.

![](https://github.com/manankalra/upes-assignments/blob/master/MananKalra/Round2/images/ApplicationArchitecture.png)

### 2. Class Diagram

Classes describe the type of objects we are going to use and class diagrams will descibe the same classes and how they relate. A class is going to contain one or more attributes/fields and behaviors/methods/functions which will describe what an object can
do or what can be done to that object.

Class item visibility:

- (+) - Public: Accessible to all
- (-) - Private: Class methods only, not even subclasses
- (~) - Default: Can be called by any class within its package
- (#) - Protected: Can be called by classes and subclasses

Most of the attributes will be made private or protected. 

***In this diagram, only the important entities are considered - Administrator, Moderator, Debater, Debate and Guest. Entities like topic list, voting system, arguments etc. can also be added, if required.***

Classes included:

#### Administrator: 

- [x] Post a new debate topic
- [x] Close an old topic
- [x] Add a user
- [x] Delete a user
- [x] Assign a particular role to a user
- [x] Choose the winners of a debate
- [x] Close a running debate
- [x] Open a closed debate

#### Moderator: 

- [x] Check and maintain debate content
- [x] Manage a noisy argument
- [x] Keep track of user infractions 
- [x] Ban a volatile user

#### Debater:

- [x] Post arguments/views over a debate
- [x] Challenge another debater over a topic
- [x] Choose debate side (for the motion or against the motion)

#### Guest: 

- [x] View/read debates list
- [x] View/read debaters public profile

Note: ***Guest doesn't interact with the internal workflow of the system. So has no association with Administrator, Debater, Moderator etc.***

#### Debate:

- [x] Add info; info may contain details like topic, number of participants, number of ongoing sessions etc.
- [x] Delete info
- [x] Update info

![](https://github.com/manankalra/upes-assignments/blob/master/MananKalra/Round2/images/ClassDiagram.png)

### 3. Database Schema

This is a blueprint of how the data is organised.

![](https://github.com/manankalra/upes-assignments/blob/master/MananKalra/Round2/images/DatabaseSchema.png)

### 4. Entity-Relationship Diagram

This will show the relationships of entity sets stored in the database.

![](https://github.com/manankalra/upes-assignments/blob/master/MananKalra/Round2/images/Entity-RelationshipDiagram.png)

### 5. Use-Case Diagram

This descirbes the behavior/actions performed by the actors in an Online Debate Portal.

Note: ***Assuming, Administrator and Moderator are also allowed to take part in debates as Debaters.***

![](https://github.com/manankalra/upes-assignments/blob/master/MananKalra/Round2/images/Use-CaseDiagram.png)

