import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class EventHandlingExample {
    public static void main(String[] args) {
        JFrame frame = new JFrame("Event Handling Example");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(300, 200);
        frame.setLayout(new FlowLayout());

        // JButton with ActionListener
        JButton button = new JButton("nigg");
        button.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e){
                System.out.println("asiodnoas");
            }
        });

        // JPanel with MouseListener
        JPanel panel = new JPanel();
        panel.addMouseListener(new MouseListener() {
            public void mouseClicked(MouseEvent e) {
                System.out.println("Mouse clicked on panel");
            }
            public void mousePressed(MouseEvent e) {
                System.out.println("Mouse pressed on panel");
            }
            public void mouseReleased(MouseEvent e) {
                System.out.println("Mouse released on panel");
            }
            public void mouseEntered(MouseEvent e) {
                System.out.println("Mouse entered panel");
            }
            public void mouseExited(MouseEvent e) {
                System.out.println("Mouse exited panel");
            }
        });
        panel.setPreferredSize(new Dimension(200, 100));

        // JTextField with KeyListener
        JTextField textField = new JTextField(20);
        textField.addKeyListener(new KeyListener() {
            public void keyPressed(KeyEvent e) {
                System.out.println("Key pressed: " + e.getKeyChar());
            }
            public void keyReleased(KeyEvent e) {
                System.out.println("Key released: " + e.getKeyChar());
            }
            public void keyTyped(KeyEvent e) {
                System.out.println("Key typed: " + e.getKeyChar());
            }
        });

        // JFrame with WindowListener
        frame.addWindowListener(new WindowListener() {
            public void windowOpened(WindowEvent e) {
                System.out.println("Window opened");
            }
            public void windowClosing(WindowEvent e) {
                System.out.println("Window is closing");
            }
            public void windowClosed(WindowEvent e) {
                System.out.println("Window closed");
            }
            public void windowIconified(WindowEvent e) {
                System.out.println("Window iconified");
            }
            public void windowDeiconified(WindowEvent e) {
                System.out.println("Window deiconified");
            }
            public void windowActivated(WindowEvent e) {
                System.out.println("Window activated");
            }
            public void windowDeactivated(WindowEvent e) {
                System.out.println("Window deactivated");
            }
        });

        // JCheckBox with ItemListener
        JCheckBox checkBox = new JCheckBox("Check Me");
        checkBox.addItemListener(new ItemListener() {
            public void itemStateChanged(ItemEvent e) {
                if (e.getStateChange() == ItemEvent.SELECTED) {
                    System.out.println("Checkbox is checked");
                } else {
                    System.out.println("Checkbox is unchecked");
                }
            }
        });

        // Add components to frame
        frame.setLayout(new FlowLayout());
        frame.add(button);
        frame.add(panel);
        frame.add(textField);
        frame.add(checkBox);

        frame.setVisible(true);
    }
}
