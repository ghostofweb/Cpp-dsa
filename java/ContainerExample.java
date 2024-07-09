import javax.swing.*;
import java.awt.*;

public class ContainerExample {
    public static void main(String[] args) {
        JFrame frame = new JFrame("Container Example");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(500, 400);
        frame.setLayout(new BorderLayout());

        JPanel panel = new JPanel(new FlowLayout());
        JButton button = new JButton("Click Me!");
        panel.add(button);

        JTextArea textArea = new JTextArea(10, 30);
        JScrollPane scrollPane = new JScrollPane(textArea);

        frame.add(panel, BorderLayout.NORTH);
        frame.add(scrollPane, BorderLayout.CENTER);

        frame.setVisible(true);
    }
}
