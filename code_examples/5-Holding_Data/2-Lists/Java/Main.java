/*
 * This program uses a list 
 *
 * @author  Mr Coxall
 * @version 1.0
 * @since   2020-09-01
 */

import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;

public class Main {
  public static void main(String[] args) {
    // this function uses a list 
    List<String> words = new ArrayList<>();
    String tempWord = "Go";

    System.out.println("Please enter 1 word at a time. Enter STOP to end.");

    Scanner scanner = new Scanner(System.in);
    while (!tempWord.equalsIgnoreCase("STOP")) {
      System.out.print("Enter a word: ");
      tempWord = scanner.nextLine();
      words.add(tempWord);
    }

    words.remove(words.size() - 1); // remove the "STOP" that was added
    System.out.println();

    System.out.println("Here are the words reversed:");
    for (int loopCounter = words.size() - 1; loopCounter >= 0; loopCounter--) {
        System.out.println(words.get(loopCounter));
    }
    
    System.out.println("\nDone.");
  }
}
