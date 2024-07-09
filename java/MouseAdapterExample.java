import javax.swing.*;
import java.awt.event.*;

public class MouseAdapterExample {
    public static void main(String[] args) {
        JFrame frame = new JFrame("Mouse Adapter Example");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(300, 200);
        
        JPanel panel = new JPanel();
        frame.add(panel);

        // Add a MouseAdapter to the panel
        panel.addMouseListener(new MouseAdapter() {
            @Override
            public void mouseClicked(MouseEvent e) {
                System.out.println("Mouse clicked at: " + e.getPoint());
            }
        });
        
        frame.setVisible(true);
    }
}
