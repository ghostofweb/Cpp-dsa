import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class SimpleFileCopy {
    public static void main(String[] args) {
        // Source and destination file paths
        String sourceFilePath = "abc.txt";
        String destinationFilePath = "sample.txt";

        // Using try-with-resources to automatically close FileReader and FileWriter
        try (FileReader fileReader = new FileReader(sourceFilePath);
             FileWriter fileWriter = new FileWriter(destinationFilePath)) {

            int character;
            // Read each character from the source file and write it to the destination file
            while ((character = fileReader.read()) != -1) {
                fileWriter.write(character);
            }

            System.out.println("File copied successfully.");
        } catch (IOException e) {
            // Handle IOException
            e.printStackTrace();
        }
    }
}
