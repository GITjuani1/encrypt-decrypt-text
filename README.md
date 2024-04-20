# encrypt-decrypt-text
I developed my first C++ project. This is about encrypt/decrypt text


How it works? 
 Well, I decided in order to encrypt a text convert all the chars in the following third char. For example char 'A' = 'D'. That's because 'A' has the position [0] in the alphabet array of char's so the following third it will be alphabet[3] which it's equal to 'D'. 
 Now we have understand how encryption works, let's go to the decryption method.

 For decrypting a text, we are going to do the inverse method, for this I add in the algorithm a %52, you will see why. 
 Now, we are going to substract 3 positions of the new text, so for example if I decrpy the char 'D' it will be print the char 'A', but... what happens if I decrypt the char 'A'?
 As we already know, the minimum position of array it's [0] so 0 - 3 = -3. And that's impossible. For that, I decided by the %52 to add + 52 to the equation for giving a result. In this case 'A' will turn into 'Z'.

 
