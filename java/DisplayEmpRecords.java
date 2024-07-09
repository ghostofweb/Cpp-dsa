import java.sql.*;

public class DisplayEmpRecords {
    public static void main(String[] args) {
        // JDBC connection parameters
        String jdbcUrl = "jdbc:mysql://localhost:3306/mydatabase";
        String username = "root";
        String password = "password";

        // JDBC objects
        Connection conn = null;
        Statement stmt = null;
        ResultSet rs = null;

        try {
            // 1. Load the JDBC driver
            Class.forName("com.mysql.cj.jdbc.Driver");

            // 2. Establish a connection
            conn = DriverManager.getConnection(jdbcUrl, username, password);

            // 3. Create a statement
            stmt = conn.createStatement();

            // 4. Execute a query to retrieve all records from the emp table
            String sql = "SELECT id, name, design FROM emp";
            rs = stmt.executeQuery(sql);

            // 5. Process the result set and display records
            System.out.println("EMP Records:");
            System.out.println("ID\tName\tDesign");

            while (rs.next()) {
                int id = rs.getInt("id");
                String name = rs.getString("name");
                String design = rs.getString("design");

                System.out.println(id + "\t" + name + "\t" + design);
            }
        } catch (ClassNotFoundException e) {
            e.printStackTrace();
        } catch (SQLException e) {
            e.printStackTrace();
        } finally {
            // 6. Close JDBC objects in finally block
            try {
                if (rs != null) rs.close();
                if (stmt != null) stmt.close();
                if (conn != null) conn.close();
            } catch (SQLException e) {
                e.printStackTrace();
            }
        }
    }
}
