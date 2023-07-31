# CTF

This is a collection of Capture The Flag (CTF) exercises divided into five different categories: Binary, Linux, Network, Web, and SQL Injection. These exercises are designed to provide a practical approach to learn and hone cybersecurity skills.

## Binary 

In the Binary section, you will explore the fascinating world of binary exploits. You will understand how a machine understands the instructions given to it, how to find vulnerabilities in these instructions, and how to leverage them to your advantage.  Here, we have four exciting exercises for you. These exercises come with varying levels of difficulty and corresponding points that can be earned upon successful completion. The exercises are as follows:

### Exercises

#### 1. Welcome to the Binary World!

**Points:** 40

**Resoures:** 
- [welcome-to-binaries](welcome-to-binaries)

**_Hint:_** _strings are important_

#### 2. Code in the Shell

The goal is to get a shell running locally via sending a special payload to the binary.

**Points:** 125

**Resoures:** 
- [vuln.c](vuln.c)
- [vuln-shellcode](vuln-shellcode)

#### 3. One Print Statement Away...

**Points:** 150

**Resoures:** 
- [a.out](a.out)

**_Hint:_** _use gdb-pwndbg to go through the main function step-by-step_

#### 4. Chains of Love

The goal of the challenge is to open a shell

**Points:** 300

**Resoures:** 
- [hackme](hackme)
- [hackme.c](hackme.c)

**_Hint:_**

- use the python pwntools, it will help you with this
- google ROP chains

## Linux

Linux section is all about understanding and exploiting vulnerabilities in Linux-based systems. Here, you'll learn about various Linux exploits, privilege escalation techniques, kernel vulnerabilities, and much more. You will also learn about securing Linux systems to prevent these attacks. This section contains three interesting exercises. These exercises have varying difficulty levels and corresponding points that can be earned upon successful completion. 

### Exercises

#### 1. So you got in?

To get here, complete **_So you're good at maps, huh?_**

**Points:** 75

**Resoures:** 4.180.25.69

#### 2. Read more books

To get here, complete **_So you got in?_**

**Points:** 125

**Resoures:** 4.180.25.69

#### 3. Shadows of the past

To get here, complete **_Read more books_**

**Points:** 200

**Resoures:** 4.180.25.69


## Network 

### Exercise

In the Network section, you will learn about different network vulnerabilities and how to exploit them. This section contains one comprehensive exercise designed to give you a thorough understanding of various aspects of network security.

#### So you got in?

**Points:** 75

**Resoures:** 4.180.25.69

## Web 

Welcome to the Web section, where you will delve into the realm of web vulnerabilities and exploits. This section features four stimulating exercises, each with different levels of complexity and corresponding points that can be earned upon successful completion. Each exercise comes with a resource to assist you in your journey.

### Exercises

#### 1. Where would the flag be?

**Points:** 15

**Resource:** [http://20.13.121.68:8081/](http://20.13.121.68:8081/)

#### 2. Natural selection

**Points:** 25

**Resource:** [http://20.13.121.68:8083/](http://20.13.121.68:8083/)

#### 3. Insecurity through obscurity

**Points:** 25

**Resource:** [http://20.13.121.68:8080/](http://20.13.121.68:8080/)

#### 4. Who’s in charge here?

**Points:** 35

**Resource:** [http://20.13.121.68:8082](http://20.13.121.68:8082)

## SQL Injection

SQL Injection is one of the most common and dangerous web vulnerabilities. In this section, you will understand how to exploit SQL Injection vulnerabilities to gain unauthorized access to data. Additionally, you will also learn about various techniques to prevent SQL Injection attacks.

### Exercise

#### LogInjection

This exercise will challenge you to exploit a SQL Injection vulnerability in a logging system. This vulnerability can potentially allow an attacker to execute arbitrary SQL commands in the underlying database.

**Points:** 25

**Resource:** [http://20.13.121.68:1433](http://20.13.121.68:1433)

**_Hint:_** _Use SqlMap_

---

Remember, the knowledge you gain here is to defend systems and applications, not to exploit them maliciously. Always have explicit, legal consent before testing any system or application for vulnerabilities.

_Happy learning and happy hacking (ethically, of course)!_
